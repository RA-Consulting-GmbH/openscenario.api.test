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


namespace OscExpression
{	
	size_t EvaluatorListener::GetColumn(antlr4::ParserRuleContext* ruleContext)
	{
		return ruleContext->getStart()->getCharPositionInLine();
	}

	std::shared_ptr<ExprValue> EvaluatorListener::convert(std::shared_ptr<ExprValue> valueToConvert,
		std::string typeCastString, int column)
	{
		std::shared_ptr<ExprValue> result = nullptr;
		if (typeCastString == "int") {
			result = valueToConvert->ConvertToInt();
		}
		else if (typeCastString == "unsignedInt") {
			result = valueToConvert->ConvertToUnsignedInt();
		}
		else if (typeCastString == "unsignedShort") {
			result = valueToConvert->ConvertToUnsignedShort();
		}
		else if (typeCastString == "double") {
			result = valueToConvert->ConvertToDouble();
		}
		if (result == nullptr) {
			std::ostringstream stringStream;
			stringStream << "Value '" << valueToConvert->ToString() << "' cannot be converted to type '" << typeCastString << "'";
			throw  SemanticException(stringStream.str(), column);
		}
		return result;
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
		return std::unique_ptr<SemanticException>( new SemanticException( "Internal Overflow (limits of internal 64 byte double value exceeded)", column ) );
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



	void EvaluatorListener::exitIdExpr(OscExprParser::IdExprContext *ctx)
	{
		// Put the value on the stack or throw an error
		std::string id = ctx->getText();
		const auto kIt = definedParameters->find(id);
			
		if (kIt == definedParameters->end()) {
			std::ostringstream stringStream;
			stringStream << "Parameter '" << id.c_str() << "' is not defined.";
			throw  SemanticException(stringStream.str(), GetColumn(ctx));
		}else
		{ 
			std::shared_ptr<ExprValue> exprValue = kIt->second;
			if (exprValue->IsOfType({ ExprType::BOOLEAN, ExprType::STRING, ExprType::DATE_TIME })) {

				std::ostringstream stringStream;
				stringStream <<"Expressions are exclusively supported for numeric types. Paramter type '"<< exprValue->ToString() <<"' is not supported";
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
		std::shared_ptr<ExprValue> result = nullptr;
		// If for future use with more functions
		if (ctx->func->getType() == OscExprLexer::SQRT) {
			double firstValue = -1;
			if (firstExprValue->IsFloatingPointNumeric()) {
				firstValue = firstExprValue->getDoubleValue();
			}
			if (firstValue < 0.0) {
				auto list = ctx->getRuleContexts<antlr4::ParserRuleContext>();
				throw  SemanticException("Cannot calculate square root from a negative value.",
					GetColumn(list[0]));
			}
			result = ExprValue::CreateDoubleValue(sqrt(firstValue));
			this->valueStack.push(result);
		}
		else if (ctx->func->getType() == OscExprLexer::CEIL) {
			result = ExprValue::CreateDoubleValue(ceil(firstExprValue->getDoubleValue()));
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
			throw  SemanticException("Internal Overflow (limits of internal 64 byte double value exceeded)",
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
		this->valueStack.push(ExprValue::CreateDoubleValue((-1) * exprValue->getDoubleValue()));
	}



	void EvaluatorListener::exitMultiDivMod(OscExprParser::MultiDivModContext *ctx)
	{
		std::shared_ptr<ExprValue> secondExprValue = this->valueStack.top();
		this->valueStack.pop();
		std::shared_ptr<ExprValue> firstExprValue = this->valueStack.top();
		this->valueStack.pop();
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
				throw  SemanticException("Divison by zero", GetColumn(list[1]));
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
			
			if (powResult == std::numeric_limits<double>::infinity() || isnan(powResult)) {
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