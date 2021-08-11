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
#include "TestSpecification.hpp"
#include <vector>
#include <fstream>
#include <json.hpp>
#include <iostream>
#include <sstream>
#include <stdexcept>

#include "ParamDefReader.h"

using namespace nlohmann;
using namespace OscExpression;
/*
 * This class defines a method to read a list of test description from a json object.
 */
class TestSpecificationReader {
	
private:
	/**
	 * @param testObject read expected data type from a JSON object
	 * @return the ExprType
	 */
	static std::shared_ptr<ExprType> getExpectedDatatype(json testObject)
	{
		std::shared_ptr<ExprType> result = nullptr;
		if (testObject.contains("expectedDatatype")) {
			std::string expectedDatatypeString = testObject["expectedDatatype"].get<std::string>();
			result = ExprType::GetFromLiteral(expectedDatatypeString);
			if (result == nullptr) {
				std::ostringstream message;
				message << "Unknown datatype '" << expectedDatatypeString << "' in input file";
				throw std::runtime_error(message.str());
					
			}
		}
		return result;
	}
public:
	/**
	 * Reads a list of test specifications from a JSON string
	 * @param jsonString the testdescriptions in JSON
	 * @return a shared pointer to a list of test specification instances.
	 */
	static std::shared_ptr<std::vector<std::shared_ptr<TestSpecification>>> readFromJson(std::string jsonString){

	  json jsonFile = json::parse(jsonString);
		
		
	  std::shared_ptr<std::vector<std::shared_ptr<TestSpecification>>> result = std::make_shared<std::vector<std::shared_ptr<TestSpecification>>>(std::vector<std::shared_ptr<TestSpecification>>());

	  // loop over items
	  for (json testObject : jsonFile)
	  {
		
		std::shared_ptr<ExprValue> expectedExprValue = nullptr;
		std::string expectedErrorMessage = "";
		int expectedErrorColumn = -1;
		std::string parameterDefinitionString = "";
		// get the object
		
		int id = testObject["id"].get<int>();
	
		// get the Definitions
		if (testObject.contains("parameterDefinitions")) {
			
			json parameterDefinitions = testObject["parameterDefinitions"];
			std::ostringstream stringStream;
			for (const json& parameterDefinition : parameterDefinitions)
			{
				stringStream << parameterDefinition.get<std::string>() << "\n";
			}
			
		  parameterDefinitionString = stringStream.str();
		}
	  	
		std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters = std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>>({});
		if (!parameterDefinitionString.empty()) {
			definedParameters = ParamDefReader::readParamDefs(parameterDefinitionString);
		}
		// get the expr
		std::string expr = testObject["expr"].get<std::string>();
		if (testObject.contains("expectedValue")) {
		  json object = testObject["expectedValue"];
		  expectedExprValue = ExprValue::CreateDoubleValue(testObject["expectedValue"].get<double>());
		  std::shared_ptr<ExprType> exprType = getExpectedDatatype(testObject);
		  result->insert(result->end(),std::shared_ptr<TestSpecification>(new TestSpecification(id, expr, expectedExprValue, definedParameters, exprType)));

		}
	    else 
		{
			// There must be an exception
			json errorObject = testObject["expectedError"];
			expectedErrorMessage = errorObject["message"].get<std::string>();
			expectedErrorColumn = errorObject["column"].get<int>();
			std::shared_ptr<ExprType> exprType = getExpectedDatatype(testObject);
			result->insert(result->end(), std::shared_ptr<TestSpecification>(new TestSpecification(
					id, expr, expectedErrorMessage, expectedErrorColumn,  definedParameters,exprType)));
		  }
		}

		return result;
	}

		
	
};
