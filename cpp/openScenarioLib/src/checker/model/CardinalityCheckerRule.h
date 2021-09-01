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

#pragma once

#include "IOpenScenarioModelElement.h"
#include "ModelCheckerRule.h"
#include "MemLeakDetection.h"
#include <memory>
#include <sstream>

/**
 * Checks the cardinalitiy of all properties that are not (0..1).
 * @author Andreas Hege - RA Consulting
 * @param <T> the type to check
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    template <class T>
    class CardinalityCheckerRule:  public ModelCheckerRule<T>
    {
    public:
        CardinalityCheckerRule() = default;
        virtual  ~CardinalityCheckerRule() = default;

    protected:
        std::string GetTooManyMessage(std::string& property, int expected, int actual)
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

        std::string GetTooFewMessage(std::string& property, int expected, int actual)
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

        std::string GetRequiredMessage(std::string& property)
        {
            return "This property is required (" + property + ").";
        }

        std::string GetRequiredContentMessage()
        {
            return "Content is required.";
        }

       

    };
	enum VIOLATION_TYPE
	{
		TOO_MANY,
		TOO_FEW,
		REQUIRED,
		REQUIRED_SIMPLE_CONTENT
	};
	
	class CardinalityViolation
	{
	public:
		std::string propertyName;
		int expected;
		int actual;
		VIOLATION_TYPE violationType;

		CardinalityViolation(const std::string propertyName, const int expected, const int actual, const VIOLATION_TYPE violationType) :
			propertyName(propertyName), expected(expected), actual(actual), violationType(violationType) {}
	};


}
