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

#include "OscExprEvaluatorImpl.h"

#include "OscExprLexer.h"
#include "OscExprParser.h"
#include "ParseErrorListener.hpp"


namespace OscExpression
{	
	

	OscExprEvaluatorImpl::OscExprEvaluatorImpl(
		std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters,
		std::shared_ptr<OscExpression::ExprType> expectedDatatype)
	{
		this->evaluatorListener = std::make_shared<EvaluatorListener>(definedParameters, expectedDatatype);
		this->expectedDatatype = expectedDatatype;
	}

	
	std::shared_ptr<ExprValue> OscExprEvaluatorImpl::Evaluate(std::string textToParse)
	{
		antlr4::ANTLRInputStream input(textToParse);
		OscExprLexer lexer(&input);
		OscExprErrorListener lexerErrorListener;
		OscExprErrorListener parserErrorListener;
		lexer.removeErrorListeners();
		lexer.addErrorListener(&lexerErrorListener);
		
		antlr4::CommonTokenStream tokens(&lexer);

		OscExprParser parser(&tokens);
		parser.removeErrorListeners();
		parser.removeParseListeners();
		parser.addErrorListener(&parserErrorListener);
		
		antlr4::tree::ParseTree* tree= parser.prog();

		antlr4::tree::ParseTreeWalker::DEFAULT.walk(&*this->evaluatorListener, tree);
		std::shared_ptr<ExprValue> result = this->evaluatorListener->GetResult();
		if (this->expectedDatatype != nullptr)
		{
			std::shared_ptr<ExprValue> convertedType = result->ConvertToTargetType(this->expectedDatatype);
			if (convertedType == nullptr)
			{
				std::ostringstream stringStream;
				stringStream << "Value '" << result->ToString() << "' cannot be converted to type '" << expectedDatatype->GetLiteral() << "'";
				throw  SemanticException(stringStream.str(), 0);
			}else
			{
				result = convertedType;
			}
		} 
		return result;
	}


}
