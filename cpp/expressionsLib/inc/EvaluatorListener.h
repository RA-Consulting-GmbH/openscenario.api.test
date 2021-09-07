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

#pragma once


#include "ExprValue.h"
#include "ExprType.h"
#include "OscExprParserBaseListener.h"
#include "ParserRuleContext.h"
#include "SemanticException.h"
#include "OscExprExportDefs.h"

namespace OscExpression {

	/**
	 * This interface defines an abstract listener for a parse tree produced by OscExprParser.
	 */
	class  EvaluatorListener : public OscExpression::OscExprParserBaseListener {
	private:
		std::shared_ptr < std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters;

		std::stack<std::shared_ptr<OscExpression::ExprValue>> valueStack;

		std::shared_ptr<OscExpression::ExprType> expectedDatatype;
		
		size_t GetColumn(antlr4::ParserRuleContext* ruleContext);

		std::shared_ptr<ExprValue> convert(std::shared_ptr <ExprValue> valueToConvert, std::string typeCastString, int column);

		void PrepareOverflowUnderflowDetection();

		bool IsOverFlowOrUnderflow();

		static std::unique_ptr <SemanticException> CreateOverFlowUnderFlowException(size_t column);
		
	public:
		OSC_EXPR_EXP EvaluatorListener(std::shared_ptr<std::map<std::string,  std::shared_ptr<OscExpression::ExprValue>>> definedParameters, std::shared_ptr<OscExpression::ExprType> expectedDatatype);
	
		
		OSC_EXPR_EXP void exitPlusMinus(OscExprParser::PlusMinusContext *ctx) override;

		OSC_EXPR_EXP void exitIdExpr(OscExprParser::IdExprContext *ctx) override;

		OSC_EXPR_EXP void exitFunctionOneArgument(OscExprParser::FunctionOneArgumentContext *ctx) override;
		
		OSC_EXPR_EXP void exitNumLiteral(OscExprParser::NumLiteralContext *ctx) override;

		OSC_EXPR_EXP void exitUnaryMinus(OscExprParser::UnaryMinusContext *ctx) override;

		OSC_EXPR_EXP void exitMultiDivMod(OscExprParser::MultiDivModContext *ctx) override;

		OSC_EXPR_EXP void exitFunctionTwoArguments(OscExprParser::FunctionTwoArgumentsContext *ctx) override;

		OSC_EXPR_EXP std::shared_ptr<ExprValue> GetResult();


	};

}  // namespace OscExpression