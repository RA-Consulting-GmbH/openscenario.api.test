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

	  	  
	  	  if (paramDef->numericParamDef() != 0)
		  {
			  OscParamDefParser::NumericParamDefContext* numericParamDef = paramDef->numericParamDef();
			  std::string type = numericParamDef->type->getText();
			  std::string literal = numericParamDef->literal->getText();
			  std::string id =  numericParamDef->id->getText();
			  std::shared_ptr<double> doubleResult = ExprValue::CreatePrimitiveDouble(literal);
			  std::shared_ptr <ExprValue> simpleValue = ExprValue::CreateSimpleParameterValue(id, literal, ExprType::GetFromLiteral(type));
	  		
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
				  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));
		      } else if (type == "unsignedInt") {
				  std::shared_ptr<ExprValue> typedValue = doubleValue->ConvertToUnsignedInt();
				  if (typedValue == nullptr)
				  {
					  throw std::runtime_error("Error in Parameter definition: '" + literal + "' cannot be converted to '" + type + "'");
				  }
				  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));
			  } else if (type == "unsignedShort") {
				  std::shared_ptr<ExprValue> typedValue = doubleValue->ConvertToUnsignedShort();
				  if (typedValue == nullptr)
				  {
					  throw std::runtime_error("Error in Parameter definition: '" + literal + "' cannot be converted to '" + type + "'");
				  }
				  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));

		      } else if (type == "double") {
				  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));

		      }
		  }else if (paramDef->stringParamDef() != 0)
		  {
			  // String type;
			  OscParamDefParser::StringParamDefContext* stringParamDef = paramDef->stringParamDef();
			  std::string type = stringParamDef->type->getText();
			  std::string literal = stringParamDef->literal->getText();
			  literal.erase(0, 1); // removes first character;
			  literal.erase(std::prev(literal.end())); // removes last character; 
			  std::string id =  stringParamDef->id->getText();
			  std::shared_ptr <ExprValue> simpleValue = ExprValue::CreateSimpleParameterValue(id, literal, ExprType::GetFromLiteral(type));


			  if (type == "string") {
				  std::shared_ptr<ExprValue> typedValue = ExprValue::CreateStringValue(literal);
				  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));
			  }
			  else if (type == "dateTime") {
				  std::shared_ptr<ExprValue> typedValue = ExprValue::CreateDateTimeValue(literal);
				  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));
			  }
			  else if (type == "boolean") {
				  std::shared_ptr<ExprValue> typedValue = ExprValue::CreateBooleanValue(literal);
				  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));

			  }			
		  }
		  else if (paramDef->booleanParamDef() != 0)
		  {
			  // String type;
			  OscParamDefParser::BooleanParamDefContext* booleanParamDef = paramDef->booleanParamDef();
			  std::string type = booleanParamDef->type->getText();
			  std::string literal = booleanParamDef->literal->getText();
			  std::string id = booleanParamDef->id->getText();
			  std::shared_ptr <ExprValue> simpleValue = ExprValue::CreateSimpleParameterValue(id, literal, ExprType::GetFromLiteral(type));


			  std::shared_ptr<ExprValue> typedValue = ExprValue::CreateBooleanValue(literal);
			  result->insert(std::pair<std::string, std::shared_ptr<ExprValue>>(id, simpleValue));

		  }
    }
	  return result;
  }