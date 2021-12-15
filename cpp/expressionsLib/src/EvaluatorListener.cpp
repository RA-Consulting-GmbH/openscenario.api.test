/*
 * Copyright 2021 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "EvaluatorListener.h"

#include "ExprValue.h"
#include "OscExprLexer.h"
#include "SemanticException.h"
#include <iostream>
#include <memory>
#include <string>
#include <cfenv>
#include <math.h>
#include <cmath>


namespace OscExpression
{	
	size_t EvaluatorListener::GetColumn(antlr4::ParserRuleContext* ruleContext)
	{
		return ruleContext->getStart()->getCharPositionInLine();
	}

	
	void EvaluatorListener::PrepareOverflowUnderflowDetection()
	{
		std::feclearexcept(FE_OVERFLOW);
		std::feclearexcept(FE_UNDERFLOW);
	}

	bool EvaluatorListener::IsOverFlowOrUnderflow()
	{
		return (bool)std::fetestexcept(FE_OVERFLOW) || (bool)std::fetestexcept(FE_UNDERFLOW);
	}

	std::unique_ptr <SemanticException> EvaluatorListener::CreateOverFlowUnderFlowException(size_t column)
	{
		std::unique_ptr<SemanticException> blub = std::unique_ptr<SemanticException>();
		return std::unique_ptr<SemanticException>( new SemanticException( "Internal Overflow (limits of internal 64 bit double value exceeded)", column ) );
	}

	std::unique_ptr <SemanticException> EvaluatorListener::CreateNotABooleanException(size_t column)
	{
		std::unique_ptr<SemanticException> blub = std::unique_ptr<SemanticException>();
		return std::unique_ptr<SemanticException>(new SemanticException("Value must be of type 'boolean'", column));
	}

	std::unique_ptr <SemanticException> EvaluatorListener::CreateNotANumericException(size_t column)
	{
		std::unique_ptr<SemanticException> blub = std::unique_ptr<SemanticException>();
		return std::unique_ptr<SemanticException>(new SemanticException("Value must be numeric", column));
	}

	EvaluatorListener::EvaluatorListener(
		std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters,
		std::shared_ptr<OscExpression::ExprType> expectedDatatype)
	{
		this->expectedDatatype = expectedDatatype;
		this->definedParameters = definedParameters;
	}


	void EvaluatorListener::exitPlusMinus(OscExprParser::PlusMinusContext *ctx)
	{
		std::shared_ptr<ExprValue> secondExprValue = this->valueStack.top();
		this->valueStack.pop();
		
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		this->valueStack.pop();
		firstExprValue = CreateNumericExprFromExpr(firstExprValue);
		if (firstExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[0]));
		}
		secondExprValue = CreateNumericExprFromExpr(secondExprValue);
		if (secondExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[1]));
		}

		std::shared_ptr<ExprValue> result = nullptr;

		if (ctx->op->getType() == OscExprParser::PLUS) {
			double firstValue = firstExprValue->getDoubleValue();
			double secondValue = secondExprValue->getDoubleValue();
			PrepareOverflowUnderflowDetection();
			double rawResult = firstValue + secondValue;
			if (IsOverFlowOrUnderflow())
			{
				throw *CreateOverFlowUnderFlowException(ctx->op->getCharPositionInLine());
			}
			result = ExprValue::CreateDoubleValue(rawResult);
		}
		else // MINUS
		{
			double firstValue = firstExprValue->getDoubleValue();
			double secondValue = secondExprValue->getDoubleValue();
			PrepareOverflowUnderflowDetection();
			double rawResult = firstValue - secondValue;
			if (IsOverFlowOrUnderflow())
			{
				throw *CreateOverFlowUnderFlowException(ctx->op->getCharPositionInLine());
			}
			result = ExprValue::CreateDoubleValue(rawResult);
		}

		this->valueStack.push(result);

		
	}
	
	void EvaluatorListener::exitNot(OscExprParser::NotContext *ctx)
	{
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		this->valueStack.pop();

		firstExprValue = CreateBooleanExprFromExpr(firstExprValue);
		if (firstExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotABooleanException(GetColumn(list[0]));
		}
		
		else
		{
			this->valueStack.push(ExprValue::CreateBooleanValue(!firstExprValue->GetBoolValue()));
		}

	}

	std::shared_ptr<ExprValue> EvaluatorListener::CreateBooleanExprFromExpr(std::shared_ptr<ExprValue> sourceType)
	{
		std::shared_ptr<ExprValue> destinationType = nullptr;
		if (sourceType->GetExprType() == ExprType::BOOLEAN)
		{
			destinationType = sourceType;
			
		}else if (sourceType->GetExprType() == ExprType::STRING)
		{
			destinationType = ExprValue::CreateTypedValue(sourceType->ToString(), ExprType::BOOLEAN);
		}
		return destinationType;
	}
	std::shared_ptr<ExprValue> EvaluatorListener::CreateNumericExprFromExpr(std::shared_ptr<ExprValue> sourceType)
	{
		std::shared_ptr<ExprValue> destinationType = nullptr;
		if (sourceType->IsTypeNumeric())
		{
			destinationType = sourceType;
		}
		else if (sourceType->GetExprType() == ExprType::STRING)
		{
			destinationType = ExprValue::CreateTypedValue(sourceType->ToString(), ExprType::DOUBLE);
		}
		return destinationType;
	}
	
	void EvaluatorListener::exitAnd(OscExprParser::AndContext *ctx)
	{
		std::shared_ptr<ExprValue> secondExprValue = this->valueStack.top();
		this->valueStack.pop();
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		this->valueStack.pop();

		firstExprValue = CreateBooleanExprFromExpr(firstExprValue);
		if (firstExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotABooleanException(GetColumn(list[0]));
		}
		secondExprValue = CreateBooleanExprFromExpr(secondExprValue);
		if (secondExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotABooleanException(GetColumn(list[1]));
		}
		
		this->valueStack.push(ExprValue::CreateBooleanValue(firstExprValue->GetBoolValue() && secondExprValue->GetBoolValue()));
		
	}

	void EvaluatorListener::exitOr(OscExprParser::OrContext *ctx)
	{
		std::shared_ptr<ExprValue> secondExprValue = this->valueStack.top();
		this->valueStack.pop();
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		this->valueStack.pop();

		firstExprValue = CreateBooleanExprFromExpr(firstExprValue);
		if (firstExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotABooleanException(GetColumn(list[0]));
		}
		secondExprValue = CreateBooleanExprFromExpr(secondExprValue);
		if (secondExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotABooleanException(GetColumn(list[1]));
		}
		this->valueStack.push(ExprValue::CreateBooleanValue(firstExprValue->GetBoolValue() || secondExprValue->GetBoolValue()));
		
	}

	void EvaluatorListener::exitFalseLiteral(OscExprParser::FalseLiteralContext *ctx)
	{
		std::string text = "false";
		// Push Double to stack
		this->valueStack.push(ExprValue::CreateBooleanValue(text));
	}

	void EvaluatorListener::exitTrueLiteral(OscExprParser::TrueLiteralContext *ctx)
	{
		std::string text = "true";
		// Push Double to stack
		this->valueStack.push(ExprValue::CreateBooleanValue(text));
	}

	
	void EvaluatorListener::exitIdExpr(OscExprParser::IdExprContext *ctx)
	{
		evaluateId(ctx);
	}

	void EvaluatorListener::exitParamExpr(OscExprParser::ParamExprContext* ctx)
	{
		// Put the value on the stack or throw an error
		std::string id = ctx->getText().substr(1);
		const auto kIt = definedParameters->find(id);

		if (kIt == definedParameters->end()) {
			std::ostringstream stringStream;
			stringStream << "Parameter '$" << id.c_str() << "' is not defined.";
			throw  SemanticException(stringStream.str(), GetColumn(ctx));
		}
		else if (kIt->second == nullptr)
		{
			std::ostringstream stringStream;
			stringStream << "Parameter '$" << id.c_str() << "' could not be resolved correctly. See definition of '$" << id.c_str() << "'.";
			throw  SemanticException(stringStream.str(), GetColumn(ctx));
		}
		else
		{
			std::shared_ptr<ExprValue> exprValue = kIt->second;
			this->valueStack.push(exprValue);
		}
	}


	void EvaluatorListener::evaluateId(antlr4::ParserRuleContext* ctx)
	{

		// Put the value on the stack or throw an error
		std::string id = ctx->getText().substr(1);
		const auto kIt = definedParameters->find(id);

		if (kIt == definedParameters->end()) {
			std::ostringstream stringStream;
			stringStream << "Parameter '$" << id.c_str() << "' is not defined.";
			throw  SemanticException(stringStream.str(), GetColumn(ctx));
		}
		else if (kIt->second == nullptr)
		{
			std::ostringstream stringStream;
			stringStream << "Parameter '$" << id.c_str() << "' could not be resolved correctly. See definition of '$" << id.c_str() << "'.";
			throw  SemanticException(stringStream.str(), GetColumn(ctx));
		}
		else
		{
			std::shared_ptr<ExprValue> exprValue = kIt->second;
			if (exprValue->IsOfType({ ExprType::DATE_TIME })) {

				std::ostringstream stringStream;
				stringStream << "Expressions are exclusively supported for numeric types or boolean type or convertible string type. Parameter '$" << id << "' is of not supported type '" << exprValue->GetExprType()->GetLiteral() << "'";
				throw  SemanticException(stringStream.str(), GetColumn(ctx));
			}
			this->valueStack.push(exprValue);
			
		}
	}

	void EvaluatorListener::exitFunctionOneArgument(OscExprParser::FunctionOneArgumentContext *ctx)
	{
		// Get the top of the stack
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		// Remove the top of the stack
		this->valueStack.pop();
		firstExprValue = CreateNumericExprFromExpr(firstExprValue);
		if (firstExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[0]));
		}
		
		
		std::shared_ptr<ExprValue> result = nullptr;
		// If for future use with more functions
		if (ctx->func->getType() == OscExprLexer::SQRT) {
			double firstValue = -1;
			firstValue = firstExprValue->getDoubleValue();
			if (firstValue < 0.0) {
				auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
				throw  SemanticException("Cannot calculate square root from a negative value.",
					GetColumn(list[0]));
			}
			result = ExprValue::CreateDoubleValue(sqrt(firstValue));
			this->valueStack.push(result);
		}
		else if (ctx->func->getType() == OscExprLexer::CEIL) {
			result = ExprValue::CreateDoubleValue(std::ceil(firstExprValue->getDoubleValue()));
			this->valueStack.push(result);
		}
		else if (ctx->func->getType() == OscExprLexer::FLOOR) {
			result = ExprValue::CreateDoubleValue(floor(firstExprValue->getDoubleValue()));
			this->valueStack.push(result);
		}
		else if (ctx->func->getType() == OscExprLexer::ROUND) {
			result = ExprValue::CreateDoubleValue(round(firstExprValue->getDoubleValue()));
			this->valueStack.push(result);
		}
	}
	
	void EvaluatorListener::exitNumLiteral(OscExprParser::NumLiteralContext *ctx)
	{
		// try to parse long value first
		double result = 0;

		std::string text = ctx->num->getText();
		
		std::shared_ptr<double> doubleResult = ExprValue::CreatePrimitiveDouble(text);

		if (doubleResult == nullptr) {
			throw  SemanticException("Internal Overflow (limits of internal 64 bit double value exceeded)",
				ctx->num->getCharPositionInLine());
		}
		// Push Double to stack
		this->valueStack.push(ExprValue::CreateDoubleValue(*doubleResult));
	}



	void EvaluatorListener::exitUnaryMinus(OscExprParser::UnaryMinusContext *ctx)
	{
		// get Value From Stack
		std::shared_ptr<ExprValue> exprValue = this->valueStack.top();
		this->valueStack.pop();
		exprValue = CreateNumericExprFromExpr(exprValue);
		if (exprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[0]));
		}
		this->valueStack.push(ExprValue::CreateDoubleValue((-1) * exprValue->getDoubleValue()));
	}



	void EvaluatorListener::exitMultiDivMod(OscExprParser::MultiDivModContext *ctx)
	{
		std::shared_ptr<ExprValue> secondExprValue = this->valueStack.top();
		this->valueStack.pop();
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		this->valueStack.pop();

		firstExprValue = CreateNumericExprFromExpr(firstExprValue);
		if (firstExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[0]));
		}
		secondExprValue = CreateNumericExprFromExpr(secondExprValue);
		if (secondExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[1]));
		}
		
		std::shared_ptr<ExprValue> result = nullptr;

		if (ctx->op->getType() == OscExprParser::MULTIPLY) {
			double firstValue = firstExprValue->getDoubleValue();
			double secondValue = secondExprValue->getDoubleValue();
			PrepareOverflowUnderflowDetection();
			double rawResult = firstValue * secondValue;
			if (IsOverFlowOrUnderflow())
			{
				throw *CreateOverFlowUnderFlowException(ctx->op->getCharPositionInLine());
			}
			result = ExprValue::CreateDoubleValue(rawResult);
		}
		else if (ctx->op->getType() == OscExprParser::DIVIDE) {
			double firstValue = firstExprValue->getDoubleValue();
			double secondValue = secondExprValue->getDoubleValue();
			if (secondValue == 0.0) {
				auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
				throw  SemanticException("Division by zero", GetColumn(list[1]));
			}
			PrepareOverflowUnderflowDetection();
			double rawResult = firstValue / secondValue;
			if (IsOverFlowOrUnderflow())
			{
				throw *CreateOverFlowUnderFlowException(ctx->op->getCharPositionInLine());
			}
			result = ExprValue::CreateDoubleValue(rawResult);
		}
		else // MODULO
		{
		double firstValue = firstExprValue->getDoubleValue();
		double secondValue = secondExprValue->getDoubleValue();
		if (secondValue == 0.0) {
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  SemanticException("Divison by zero", GetColumn(list[1]));
		}
		PrepareOverflowUnderflowDetection();
		double rawResult = std::fmod(firstValue,secondValue);
		if (IsOverFlowOrUnderflow())
		{
			throw *CreateOverFlowUnderFlowException(ctx->op->getCharPositionInLine());
		}
		result = ExprValue::CreateDoubleValue(rawResult);
		}

		this->valueStack.push(result);

	}



	void EvaluatorListener::exitFunctionTwoArguments(OscExprParser::FunctionTwoArgumentsContext *ctx)
	{
		std::shared_ptr<ExprValue> secondExprValue = this->valueStack.top();
		this->valueStack.pop();
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		this->valueStack.pop();
		
		firstExprValue = CreateNumericExprFromExpr(firstExprValue);
		if (firstExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[0]));
		}
		secondExprValue = CreateNumericExprFromExpr(secondExprValue);
		if (secondExprValue == nullptr)
		{
			auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
			throw  *CreateNotANumericException(GetColumn(list[1]));
		}
		
		std::shared_ptr<ExprValue> result = nullptr;
		// If for future use with more functions
		if (ctx->func->getType() == OscExprLexer::POW) {
			double firstValue = -1;
			double secondValue = -1;
			firstValue = firstExprValue->getDoubleValue();
			secondValue = secondExprValue->getDoubleValue();
			if (firstValue < 0.0 && secondValue != 0.0 && secondValue != 1.0 && secondValue != -1.0) {
				auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
				throw  SemanticException(					
					"Raising a negative basis to an exponent that is not 0 or 1 or -1 is not allowed",
					GetColumn(list[0]));
			}
			if (firstValue == 0.0 && secondValue < 0) {
				auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
				throw  SemanticException("Raising the value 0 to an exponent < 0 is not allowed",
					GetColumn(list[0]));
			}
			PrepareOverflowUnderflowDetection();
			double powResult = pow(firstValue, secondValue);
			if (IsOverFlowOrUnderflow())
			{
				auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
				throw *CreateOverFlowUnderFlowException(GetColumn(list[0]));
			}
			
            if (powResult == std::numeric_limits<double>::infinity() || std::isnan(powResult)) {
				auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
				throw  SemanticException("The result of the pow operation is infinite or NaN",
					GetColumn(list[0]));
			}

			result = ExprValue::CreateDoubleValue(powResult);
			this->valueStack.push(result);
		}
	}

	std::shared_ptr<ExprValue> EvaluatorListener::GetResult()
	{
		return this->valueStack.top();
	}
}
