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

#include <SemanticException.h>
#include <iostream>
#include <sstream>



namespace OscExpression

{

	

	SemanticException::SemanticException(std::string message, size_t column) {
		this->message = message;
		this->column = column;
	}

	std::string SemanticException::GetErrorMessage()
	{
		return this->message;
	}

	/**
	 *  @return the column attribute.
	 */
	size_t SemanticException::GetColumn()
	{
		return this->column;
	}
	


};