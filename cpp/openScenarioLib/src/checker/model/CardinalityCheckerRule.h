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

#include "ModelCheckerRule.h"
#include "MemLeakDetection.h"


/**
 * Checks the cardinalitiy of all properties that are not (0..1).
 * @author Andreas Hege - RA Consulting
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    class CardinalityCheckerRule : public ModelCheckerRule
    {
    public:
        CardinalityCheckerRule();
        virtual ~CardinalityCheckerRule();

    protected:
        std::string GetTooManyMessage(std::string& property, int expected, int actual);

        std::string GetTooFewMessage(std::string& property, int expected, int actual);

        std::string GetRequiredMessage(std::string& property);

        std::string GetRequiredContentMessage();

        std::string GetRequiredXorMessage(std::vector<std::string> propertiesName);
    };

    enum VIOLATION_TYPE
    {
        TOO_MANY,
        TOO_FEW,
        REQUIRED,
        REQUIRED_SIMPLE_CONTENT,
        REQUIRED_XOR
    };

    class CardinalityViolation
    {
    public:
        std::string propertyName;
        std::vector<std::string> propertiesName;
        int expected;
        int actual;
        VIOLATION_TYPE violationType;

        CardinalityViolation(const std::string propertyName, const int expected, const int actual, const VIOLATION_TYPE violationType);
        CardinalityViolation(const std::vector<std::string> propertiesName, const int expected, const int actual, const VIOLATION_TYPE violationType);
    };
}
