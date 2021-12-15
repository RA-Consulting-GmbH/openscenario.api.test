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
#include "antlr4-runtime.h"
#include "SemanticException.h"

using namespace antlr4;
namespace OscExpression
{
	
/*
 * This class represents an error listener that issues an syntax error when lexing or parsing fails.
 */
class OscExprErrorListener : public BaseErrorListener {
public:
	/*
	 * Contructor
	 */
	OscExprErrorListener() {}

	virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line, size_t charPositionInLine,
		const std::string &msg, std::exception_ptr e) override
	{
		if (offendingSymbol != nullptr)
		{
			std::string symbol = offendingSymbol->getText();
			std::ostringstream stringStream;
			stringStream << "Syntax error in expression near '" << symbol.c_str() << "'";
			throw  OscExpression::SemanticException(stringStream.str(), charPositionInLine);
		} else
		{
			throw OscExpression::SemanticException("Syntax error in expression", charPositionInLine); 
		}
		
	}
};


};