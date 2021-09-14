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

#include <string>

#include "ParamDefReader.h"
#include "ExprValue.h"
#include "antlr4-runtime.h"
#include <map>

#include "OscParamDefLexer.h"
#include "OscParamDefParser.h"

using namespace OscExpression;
using namespace OscParamDef;
using namespace antlr4;

std::shared_ptr<std::map<std::string, std::shared_ptr<ExprValue>>> ParamDefReader::readParamDefs( std::string textToParse) {
	  antlr4::ANTLRInputStream input(textToParse);
	  OscParamDefLexer lexer(&input);
	  antlr4::CommonTokenStream tokens(&lexer);

	  OscParamDefParser parser(&tokens);
	  std::shared_ptr<std::map<std::string, std::shared_ptr<ExprValue>>> result = std::make_shared< std::map<std::string, std::shared_ptr<ExprValue>>>(std::map<std::string, std::shared_ptr<ExprValue>>());

	  auto paramDefContexts = parser.paramDefs()->defs;
	  for (OscParamDefParser::ParamDefContext* paramDef: paramDefContexts) {
		  std::string type = paramDef->type->getText();
		  std::string literal = paramDef->literal->getText();
		  std::string id = "$" + paramDef->id->getText();
		  std::shared_ptr<double> doubleResult = ExprValue::CreatePrimitiveDouble(literal);
	  	
	  	  if (doubleResult == nullptr)
	  	  {
			  throw std::runtime_error("Error in Parameter definition: '" + literal + "' is not a valid double value");
	  	  }
		  std::shared_ptr<ExprValue> doubleValue = ExprValue::CreateDoubleValue(*doubleResult);
	  	
	      if (type == "int") {
			  std::shared_ptr<ExprValue> typedValue = doubleValue->ConvertToInt();
	      	  if (typedValue == nullptr)
	      	  {
				  throw std::runtime_error("Error in Parameter definition: '" + literal + "' cannot be converted to '"+type+"'");
	      	  }
			  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, typedValue));
	      } else if (type == "unsignedInt") {
			  std::shared_ptr<ExprValue> typedValue = doubleValue->ConvertToUnsignedInt();
			  if (typedValue == nullptr)
			  {
				  throw std::runtime_error("Error in Parameter definition: '" + literal + "' cannot be converted to '" + type + "'");
			  }
			  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, typedValue));
		  } else if (type == "unsignedShort") {
			  std::shared_ptr<ExprValue> typedValue = doubleValue->ConvertToUnsignedShort();
			  if (typedValue == nullptr)
			  {
				  throw std::runtime_error("Error in Parameter definition: '" + literal + "' cannot be converted to '" + type + "'");
			  }
			  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, typedValue));

	      } else if (type == "double") {
			  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, doubleValue));

	      }
    }
	  return result;
  }