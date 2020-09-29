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

 /** */
#pragma once

#include "ICheckerRule.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "ParserHelper.h"
#include "ApiClassImpl.h"
#include "MemLeakDetection.h"

/**
 * Checks Parameter declarations' value to be parsable (not empty value)
 */
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        class ParameterDeclarationChecker : public ICheckerRule<IParameterDeclaration>
        {
        public:

            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterDeclaration > object) override
            {
                // Check whether the value is validatable:
                if (!object) return;
                auto value = object->GetValue();
                const auto kParameterType = object->GetParameterType();
                try 
                {
                    if (!value.empty()) 
                    {
                        if (kParameterType == ParameterType::INTEGER)
                        {
                            ParserHelper::ValidateInt(value);
                        }
                        else if (kParameterType == ParameterType::UNSIGNED_INT)
                        {
                            ParserHelper::ValidateUnsignedInt(value);
                        }
                        else if (kParameterType == ParameterType::UNSIGNED_SHORT)
                        {
                            ParserHelper::ValidateUnsignedShort(value);
                        }
                        else if (kParameterType == ParameterType::DOUBLE)
                        {
                            ParserHelper::ValidateDouble(value);
                        }
                        else if (kParameterType == ParameterType::DATE_TIME)
                        {
                            ParserHelper::ValidateDateTime(value);
                        }
                        else if (kParameterType == ParameterType::BOOLEAN)
                        {
                            ParserHelper::ValidateBoolean(value);
                        }
                    }

                }
                catch (std::exception &e) 
                {
                    (void)e;
                    auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

                    if (locator)
                    {
                        auto msg = FileContentMessage("Value '" + value + "' cannot be parsed into '" + kParameterType.GetLiteral() + "'", ERROR, locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__VALUE));
                        messageLogger->LogMessage(msg);
                    }
                }
            }
        };
    }
}