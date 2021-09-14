/*
 * Copyright 2020 RA Consulting
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

#include "CardinalityCheckerRule.h"
#include <sstream>

/**
 * Checks the cardinalitiy of all properties that are not (0..1).
 * @author Andreas Hege - RA Consulting
 * @param <T> the type to check
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
  
	CardinalityCheckerRule::CardinalityCheckerRule() = default;
	CardinalityCheckerRule::~CardinalityCheckerRule() = default;


	std::string CardinalityCheckerRule::GetTooManyMessage(std::string& property, int expected, int actual)
	{
		std::stringstream ss;
		ss << "Too many children children are set (";
		ss << property;
		ss << "). max defined: ";
		ss << expected;
		ss << ". actual size: ";
		ss << actual;
		return ss.str();
	}

	std::string CardinalityCheckerRule::GetTooFewMessage(std::string& property, int expected, int actual)
	{
		std::stringstream ss;
		ss << "Too few children children are set (";
		ss << property;
		ss << "). min defined: ";
		ss << expected;
		ss << ". actual size: ";
		ss << actual;
		return ss.str();
	}

	std::string CardinalityCheckerRule::GetRequiredMessage(std::string& property)
	{
		return "This property is required (" + property + ").";
	}

	std::string CardinalityCheckerRule::GetRequiredContentMessage()
	{
		return "Content is required.";
	}


	
	CardinalityViolation::CardinalityViolation(const std::string propertyName, const int expected, const int actual, const VIOLATION_TYPE violationType) :
			propertyName(propertyName), expected(expected), actual(actual), violationType(violationType) {}


}
