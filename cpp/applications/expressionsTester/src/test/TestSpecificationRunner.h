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

#include <string>
#include <vector>

#include "OscExprEvaluator.h"
#include "OscExprEvaluatorFactory.h"
#include "TestSpecification.h"
#include <iostream>
#include <sstream>

#include "SemanticException.h"
class TestLogger {

public:
	virtual void log(std::string message) const = 0;
};

/*
 * This class provides a static method for executing multiple tests represented through its test representation.
*/
class TestSpecificationRunner {
	public:

	
		/*
		 * Execute multiple tests.
		 * @param tests a list of test descriptions
		 * @param logger a logger that logs errors during the test execution.
		*/
		static int runTests(std::shared_ptr<std::vector<std::shared_ptr<TestSpecification>>> tests, const TestLogger& logger);

	private:
		/*
		 * Issues an error by adding a column number to the given message
		 * @param error original error
		 * @param logger logs the message with its column information.
		 */
		static void issueError(int testId, std::string error, const TestLogger&  logger);
};
