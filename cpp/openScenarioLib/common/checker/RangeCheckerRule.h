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
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ICheckerRule.h"
#include "PropertyTreeContext.h"
#include "ITreeMessageLogger.h"
#include "TreeContentMessage.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{

    /**
     * An abstract implementation of ICheckerRule to check ranges of object's properties.
     *
     */
    template <class T>
    class RangeCheckerRule: public IOpenScenarioModelElement, public ICheckerRule<T> 
    {
    public:

        RangeCheckerRule() = default;

        /**
         * Logging a range error violation in file context
         * @param object The object that is tested.
         * @param messageLogger to log the message if violation is detected
         * @param propertyName name of the property that is checked
         * @param propertyValue the actual value of the property that was evaluated
         * @param operatorString operator that was evaluated
         * @param comparedValue the value the actual value is compared to.
         * @param attributeKey the attribute key that is used to locate the violation.
         */
        void LogFileContentMessage(std::shared_ptr<IOpenScenarioModelElement> object, std::shared_ptr<IParserMessageLogger>& messageLogger, std::string propertyName, std::string propertyValue, std::string operatorString, std::string comparedValue, std::string attributeKey) const
        {

            auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

            if (locator)
            {
                auto textmarker = locator->GetStartMarkerOfProperty(attributeKey);

                if (textmarker.GetLine() > -1)
                {
                    auto msg = GetMsg(propertyName, propertyValue, operatorString, comparedValue);
                    FileContentMessage fcm(msg, ERROR, textmarker);
                    messageLogger->LogMessage(fcm);
                }
            }
        }

        /**
         * Logging a range error violation in treeContext
         *
         * @param object The object that is tested.
         * @param messageLogger to log the message if violation is detected
         * @param propertyName name of the property that is checked
         * @param propertyValue the actual value of the property that was evaluated
         * @param operator operator that was evaluated
         * @param comparedValue the value the actual value is compared to.
         * @param attributeKey the attribute key that is used to locate the violation.
         */
         void LogTreeContentMessage(std::shared_ptr<IOpenScenarioModelElement> object, std::shared_ptr<ITreeMessageLogger>& messageLogger, std::string propertyName, std::string propertyValue, std::string operatorString, std::string comparedValue, std::string attributeKey) const
         {

            std::vector<std::string> attributeKeyList;
            attributeKeyList.push_back(attributeKey);

            auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

            if (locator)
            {
                auto textmarker = locator->GetStartMarkerOfProperty(attributeKey);

                if (textmarker.GetLine() > -1)
                {
                    const auto kContext = std::make_shared<PropertyTreeContext>(object, attributeKeyList);
                    const auto kMsg = GetMsg(propertyName, propertyValue, operatorString, comparedValue);
                    TreeContentMessage tcm(kMsg, ERROR, kContext);
                    messageLogger->LogMessage(tcm);
                }
            }
         }

    private:
        /**
         * Creating a message.
         * @param propertyName name of the property
         * @param propertyValue the actual value of the property that was evaluated
         * @param operatorString operator that was evaluated
         * @param comparedValue the value the actual value is compared to.
         * @return the message
         */
        static std::string GetMsg(std::string& propertyName, std::string& propertyValue, std::string& operatorString, std::string& comparedValue) 
        {
            return "Range error: Rule (" + propertyName + operatorString + comparedValue + ") is violated (value: " + propertyValue + ")";
        }
    };

}