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

#include "ExprValue.h"
#include <map>

/*
 * This class represents a test specification.
 */
class TestSpecification {

private:
	std::string expectedError;
	std::string expr;
	int expectedErrorColumn = -1;
	std::shared_ptr<OscExpression::ExprValue> expectedValue;
	std::shared_ptr < std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> parameterDefinitions = {};
	bool isErrorDef = false;
	int id;
	std::shared_ptr <OscExpression::ExprType> expectedDatatype;

	/**
	 * @param id
	 * @param expr
	 * @param expectedError
	 * @param expectedErrorColumn
	 * @param parameterDefinitions
	 * @param expectedDatatype
	 */
public:
	TestSpecification(
		int id,
		std::string expr,
		std::string expectedError,
		int expectedErrorColumn,
		std::shared_ptr <std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> parameterDefinitions,
		std::shared_ptr <OscExpression::ExprType> expectedDatatype);

	/**
	 * @param id
	 * @param expr
	 * @param expectedValue
	 * @param parameterDefinitions
	 * @param expectedDatatype
	 */
	TestSpecification(
		int id,
		std::string expr,
		std::shared_ptr<OscExpression::ExprValue> expectedValue,
		std::shared_ptr <std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> parameterDefinitions,
		std::shared_ptr <OscExpression::ExprType> expectedDatatype);

	/** @return the expectedError */
	std::string GetExpectedError();

	/** @return the expr */
	std::string GetExpr();

	/** @return the expectedErrorColumn */
	int GetExpectedErrorColumn();

	/** @return the expectedValue */
	std::shared_ptr<OscExpression::ExprValue> GetExpectedValue();

	/** @return the parameterDefinitions */
	std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> getParameterDefinitions();

	/** @return the isErrorDef */
	bool IsErrorDef();
	/** @return the id */
	int getId();

	/** @return the expectedDatatype */
	std::shared_ptr <OscExpression::ExprType> GetExpectedDatatype();
};
