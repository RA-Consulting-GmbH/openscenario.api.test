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
#include <vector>

#include "TestSpecificationRunner.h"
#include "OscExprEvaluatorFactory.h"
#include "TestSpecification.h"
#include <iostream>
#include <sstream>

#include "SemanticException.h"

int TestSpecificationRunner::runTests(std::shared_ptr<std::vector<std::shared_ptr<TestSpecification>>> tests, const TestLogger& logger){
	int result = 0;
	for (std::shared_ptr<TestSpecification> test : *tests) {
		bool isSuccessfull = true;
		std::shared_ptr<OscExpression::OscExprEvaluator>  evaluator = nullptr;
		std::ostringstream testHeading;
		testHeading << "Running test with id '" << test->getId() << "':\n";
		logger.log(testHeading.str());

		try {

			if (!test->IsErrorDef()) {
				std::shared_ptr<OscExpression::ExprType> expectedDatatype = test->GetExpectedDatatype();
				if (expectedDatatype != nullptr) {

					evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(test->getParameterDefinitions(), expectedDatatype);

				}
				else {

					evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(test->getParameterDefinitions(), nullptr);
				}

				try {
					std::shared_ptr<OscExpression::ExprValue> resultExprValue = evaluator->Evaluate(test->GetExpr());

					if (resultExprValue->IsTypeNumeric()) {
						auto double_value = test->GetExpectedValue()->getDoubleValue();
						if (abs(double_value
							- resultExprValue->getDoubleValue()) > 0.001) {

							std::ostringstream stringStream;
							stringStream << "Expected Value: " << test->GetExpectedValue()->getDoubleValue() << "\n";
							stringStream << "Actual value: " << resultExprValue->getDoubleValue() << "\n";

							issueError(test->getId(), stringStream.str(), logger);
							isSuccessfull = false;
						}

					}
					else
					{
						if (test->GetExpectedValue()->ToString() != resultExprValue->ToString())
						{

							std::ostringstream stringStream;
							stringStream << "Expected Value: " << test->GetExpectedValue()->ToString() << "\n";
							stringStream << "Actual value: " << resultExprValue->ToString() << "\n";

							issueError(test->getId(), stringStream.str(), logger);
							isSuccessfull = false;
						}
					}
				}
				catch (OscExpression::SemanticException e) {
					std::ostringstream stringStream;
					stringStream << e.GetErrorMessage() << "(" << e.GetColumn() << ")";
					issueError(test->getId(), stringStream.str(), logger);
					isSuccessfull = false;
				}
			}
			else {
				// testException
				try {

					std::shared_ptr<OscExpression::ExprType> expectedDatatype = test->GetExpectedDatatype();
					if (expectedDatatype != nullptr) {

						evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(test->getParameterDefinitions(), expectedDatatype);

					}
					else {

						evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(test->getParameterDefinitions(), nullptr);
					}
					
					std::shared_ptr<OscExpression::ExprValue> resultExprValue = evaluator->Evaluate(test->GetExpr());

					std::ostringstream stringStream;
					stringStream << "Expected error: " << test->GetExpectedError() << "\n";
					issueError(test->getId(), stringStream.str(), logger);
					isSuccessfull = false;
					result = 1;

				}
				catch (OscExpression::SemanticException error) {
					bool isColumnConsistent = test->GetExpectedErrorColumn() == (int)error.GetColumn();
					bool isMessageConsistent = test->GetExpectedError() == error.GetErrorMessage();
					if (!isMessageConsistent || !isColumnConsistent) {
						isSuccessfull = false;
						std::ostringstream stringStream;
						


						if (!isMessageConsistent) {
							stringStream << "Expected error: " << test->GetExpectedError() << "\n";
							stringStream << "Actual error: " << error.GetErrorMessage() << "\n";
						}
						if (!isColumnConsistent) {
							stringStream << "Expected Column:" << test->GetExpectedErrorColumn() << "\n";
							stringStream << "Actual column: " << error.GetColumn() << "\n";
						}
						issueError(test->getId(), stringStream.str(), logger);
						result = 1;
					}
				}
			}
		}
		catch (std::exception& e) {
			std::ostringstream stringStream;
			stringStream << e.what() << "\n";
			issueError(test->getId(), stringStream.str(), logger);
			isSuccessfull = false;
		}
		
		if (isSuccessfull)
		{
			std::ostringstream stringStream;
			stringStream << "Test with id '" << test->getId() << "' successful." << "\n";
			logger.log(stringStream.str());
		}else
		{
			result = 1;
		}
		logger.log("\n");
	}
	
	return result;
}

void TestSpecificationRunner::issueError(int testId, std::string error, const TestLogger&  logger) {
	std::ostringstream stringStream;
	stringStream << "Error in test " << testId << "\n";
	
	logger.log(stringStream.str() + error);
}

