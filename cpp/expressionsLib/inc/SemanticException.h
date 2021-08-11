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
#include "OscExprExportDefs.h"


namespace OscExpression

{
	/*
	 * This class represents an exception in a expression with an additional column number.
	 */
	class   SemanticException
	{
	private:
		std::string message;
		size_t column;
	public:
		// delete Default Constructor
		OSC_EXPR_EXP SemanticException() = delete;


		/**
		 *  Constructor using the exception message.
		 *  @param message that describes the exception.
		 *  @param column in the original string.
		 */
		OSC_EXPR_EXP SemanticException(std::string message, size_t column);

		/**
		 *  @return the message attribute.
		 */
		OSC_EXPR_EXP std::string GetErrorMessage();

		/**
		 *  @return the column attribute.
		 */
		OSC_EXPR_EXP size_t GetColumn();
	};
};