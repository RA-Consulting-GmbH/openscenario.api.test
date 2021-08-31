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
#include <vector>
#include <string>
#include "MemLeakDetection.h"
#include "ModelCheckerRule.h"
#include <memory>

/**
 * Checks the xor constraints of all children.
 * Violation
 * <ul>
 * <li>if more than one children is not null
 * <li>if all are null and one must be present. (all have minOccur &gt; 0)
 * </ul>
 * @param <T> the type to check
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    template <class T>
    class UnionCheckerRule:  public ModelCheckerRule<T>
    {
    public:
        UnionCheckerRule() = default;
        virtual  ~UnionCheckerRule() = default;

    protected:
        std::string GetTooManyMessage(std::vector<std::string>& properties)
        {
            std::string returnString = "Multiple children are set (";

            for (auto&& property : properties)
            {
                returnString += property + ", ";
            }

            returnString += ")";
            return returnString;
        }

        std::string GetTooFewMessage(std::vector<std::string>& properties)
        {
            std::string returnString = "One of these children must be set (";

            for (auto&& property : properties)
            {
                returnString += property + ", ";
            }

            returnString += ")";
            return returnString;
        }
    };

}
