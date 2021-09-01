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

#include "ParameterDeclarationCheckerV1_1.h"

#include "PropertyTreeContext.h"


/**
 * Checks Parameter declarations' value to be parsable (not empty value)
 */
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        void ParameterDeclarationChecker::ValidateParsing(std::string& value, const ParameterType parameterType)
        {
            if (!value.empty())
            {
                if (parameterType == ParameterType::INTEGER)
                {
                    ParserHelper::ValidateInt(value);
                }
                else if (parameterType == ParameterType::UNSIGNED_INT)
                {
                    ParserHelper::ValidateUnsignedInt(value);
                }
                else if (parameterType == ParameterType::UNSIGNED_SHORT)
                {
                    ParserHelper::ValidateUnsignedShort(value);
                }
                else if (parameterType == ParameterType::DOUBLE)
                {
                    ParserHelper::ValidateDouble(value);
                }
                else if (parameterType == ParameterType::DATE_TIME)
                {
                    ParserHelper::ValidateDateTime(value);
                }
                else if (parameterType == ParameterType::BOOLEAN)
                {
                    ParserHelper::ValidateBoolean(value);
                }
            }
        }

        void ParameterDeclarationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterDeclaration > object)
        {
            // Check whether the value is validatable:
            if (!object) return;
            auto value = object->GetValue();
            const auto kParameterType = object->GetParameterType();
            try 
            {
                ValidateParsing(value, kParameterType);
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

        void ParameterDeclarationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IParameterDeclaration> object)
        {
            if (!object) return;
            auto value = object->GetValue();
            const auto kParameterType = object->GetParameterType();
            try
            {
                ValidateParsing(value, kParameterType);
            }
            catch (std::exception &e)
            {
                (void)e;
                const auto kContext = PropertyTreeContext::Create(object, OSC_CONSTANTS::ATTRIBUTE__VALUE);
                auto msg = TreeContentMessage("Value '" + value + "' cannot be parsed into '" + kParameterType.GetLiteral() + "'", ERROR, kContext);
                messageLogger->LogMessage(msg);
            }

        };
    }
}