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
#include "TestSpecification.h"
#include <vector>
#include <json.hpp>

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
	static std::shared_ptr<ExprType> getExpectedDatatype(json testObject);
public:
	/**
	 * Reads a list of test specifications from a JSON string
	 * @param jsonString the testdescriptions in JSON
	 * @return a shared pointer to a list of test specification instances.
	 */
	static std::shared_ptr<std::vector<std::shared_ptr<TestSpecification>>> readFromJson(std::string jsonString);

		
	
};
