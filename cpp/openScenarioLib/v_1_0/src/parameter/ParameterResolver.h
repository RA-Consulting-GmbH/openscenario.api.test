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
#include <vector>
#include <set>
#include <map>
#include "OscInterfaces.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "BaseImpl.h"
#include "ApiClassImpl.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
        /**
        * Resolves all parameter of a parameterized object
        */
        class ParameterResolver
        {

        private:
            std::vector<std::map<std::string, std::shared_ptr<ParameterValue>>> _parameterValueSets;

            /**
             * Resolves all parameters of a parameterized object.
             * @param logger to log messages
             * @param parameterizedObject the parameterized object
             * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
             */
            void ResolveInternal(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<IParameterizedObject> parameterizedObject, const bool logUnresolvableParameter)
            {
                auto attributeKeys = parameterizedObject->GetParameterizedAttributeKeys();

                for (auto&& attributeKey : attributeKeys)
                {
                    auto parameterName = parameterizedObject->GetParameterNameFromAttribute(attributeKey);
                    auto typeName = parameterizedObject->GetTypeFromAttributeName(attributeKey);
                    auto value = FindValue(typeName, parameterName);

                    if (!value.empty())
                    {
                        parameterizedObject->ResolveParameter(logger, attributeKey, value);
                    }
                    else
                    {
                        if (logUnresolvableParameter)
                        {
                            auto msg = FileContentMessage("Cannot resolve parameter '" + parameterName + "'", ERROR, *parameterizedObject->GetTextmarker(attributeKey).get());
                            logger->LogMessage(msg);
                        }
                    }
                }
            }

        public:
            /**
             * Find a parameter value by its parameter name and type
             * @param expectedParameterType expected type
             * @param parameterName  name of the parameter the value is looked up
             * @return the string representation of the value.
             */
            std::string FindValue(std::string& expectedParameterType, std::string& parameterName)
            {
                // Search from the top of the stack (which is the end of the underlying
                // list)
                for (auto parameterNameToParameterValue : _parameterValueSets)
                {
                    const auto kIt = parameterNameToParameterValue.find(parameterName);
                    if (kIt != parameterNameToParameterValue.end() && kIt->second->GetType() == expectedParameterType)
                    {
                        return kIt->second->GetValue();
                    }
                }
                return "";
            }

            /**
             * Pushes a parameter value set on the stack. Implementing scopes of values.
             * The values are always looked up in the head of the stack first.
             * @param parameterValues set of parameter values
             */
            void PushParameterValueSet(std::vector<std::shared_ptr<ParameterValue>> parameterValues)
            {
                std::map<std::string, std::shared_ptr<ParameterValue>> table;
                for (auto&& parameterValue : parameterValues)
                {
                    table.emplace(std::make_pair(parameterValue->GetName(), parameterValue));
                }
                _parameterValueSets.push_back(table);
            }

            /**
             * Remove the head of the stack
             */
            void PopParameterValueSet()
            {
                if (!_parameterValueSets.empty())
                    _parameterValueSets.erase(_parameterValueSets.begin());
            }

        private:

            /**
             * Overrides the value of a paramterValue in a List of paramter values
             *
             * @param parameterValues list of parameter values.
             * @param name name of the parameter to override
             * @param value value of the parameter to override
             */
            void OverrideValue(std::vector<std::shared_ptr<ParameterValue>> parameterValues, std::string& name, std::string& value) 
            {
                for (auto parameterValue : parameterValues)
                {
                    if (parameterValue->GetName() == name) 
                    {
                        parameterValue->SetValue(value);
                        break;
                    }
                }
            }
            /**
             * Checks the data type and overrides the values in the parametervalues.
             *
             * @param parameterDefinitions the parameter values to override
             * @param logger the logger to pick up the errors and warnings
             * @param injectedParameters the injected parameters
             * @param scenarioDefinition the scenario definition with the global parameter declarations
             */
            void OverrideGlobalParametersWithInjectedParameters(std::vector<std::shared_ptr<ParameterValue>> parameterDefinitions, std::shared_ptr<IParserMessageLogger> logger, std::map<std::string, std::string>& injectedParameters, std::shared_ptr<IScenarioDefinition> scenarioDefinition)
            {
                std::set<std::string> notUsedInjectedParameters;
                for (auto&& elm : injectedParameters)
                {
                    notUsedInjectedParameters.insert(elm.first);
                }

                auto parameterDeclarations = scenarioDefinition->GetParameterDeclarations();
                auto locator = std::static_pointer_cast<ILocator>(scenarioDefinition->GetAdapter(typeid(ILocator).name()));
                if (!locator) 
                {
                    return;
                }
                //auto temp = locator->
                Textmarker textmarker = locator->GetStartMarker();
                for (auto&& parameterDeclaration : parameterDeclarations)
                {
                    auto name = parameterDeclaration->GetName();
                    auto injectedValue = injectedParameters[name];
                    if (!injectedValue.empty())
                    {
                        auto typeName = parameterDeclaration->GetParameterType();
                        try
                        {
                            notUsedInjectedParameters.erase(name);
                            if (typeName == ParameterType::UNSIGNED_INT)
                            {
                                ParserHelper::ValidateUnsignedInt(injectedValue);
                            }
                            else if (typeName == ParameterType::INTEGER)
                            {
                                ParserHelper::ValidateInt(injectedValue);
                            }
                            else if (typeName == ParameterType::UNSIGNED_SHORT)
                            {
                                ParserHelper::ValidateUnsignedShort(injectedValue);
                            }
                            else if (typeName == ParameterType::DATE_TIME)
                            {
                                ParserHelper::ValidateDateTime(injectedValue);
                            }
                            else if (typeName == ParameterType::BOOLEAN)
                            {
                                ParserHelper::ValidateBoolean(injectedValue);
                            }
                            else if (typeName == ParameterType::DOUBLE)
                            {
                                ParserHelper::ValidateDouble(injectedValue);
                            }

                            OverrideValue(parameterDefinitions, name, injectedValue);
                        }
                        catch (std::exception& e)
                        {
                            auto msg = FileContentMessage("Injected parameter '" + name + "': " + e.what() + " Injected parameter is ignored.", ERROR, textmarker);
                            logger->LogMessage(msg);
                        }
                    }
                }

                // Now, only the injected paramters are in the set that are not declared in
                // the global parameters.
                for (std::string name : notUsedInjectedParameters) 
                {
                    auto msg = FileContentMessage("Injected parameter '" + name + "' must be declared as a global parameter. Injected parameter is ignored.", WARNING, textmarker);
                    logger->LogMessage(msg);
                }
            }

        public:
            /**
             *
             * @param logger logger to log messages
             * @param baseImpl instance of BaseImpl for which the parameters should be resolved.
             * @param injectedParameters the injected parameters
             * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
             */
            void Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<BaseImpl> baseImpl, std::map<std::string, std::string>& injectedParameters, bool logUnresolvableParameter)
            {
                const auto kHasParameterDefinitions = baseImpl->HasParameterDefinitions();
                if (kHasParameterDefinitions)
                {
                    const auto kParameterDefinitions = baseImpl->GetParameterDefinitions();
                    if (!injectedParameters.empty() && std::dynamic_pointer_cast<IScenarioDefinition>(baseImpl)  != nullptr) 
                    {
                        // override parameter values with injected parameters
                        OverrideGlobalParametersWithInjectedParameters(kParameterDefinitions, logger, injectedParameters, std::dynamic_pointer_cast<IScenarioDefinition>(baseImpl));
                    }
                    PushParameterValueSet(kParameterDefinitions);
                }

                ResolveInternal(logger, baseImpl, logUnresolvableParameter);
                auto children = baseImpl->GetChildren();
                if (std::dynamic_pointer_cast<CatalogReferenceImpl>(baseImpl) != nullptr)
                {
                    const auto kReferencedCatalogElement = std::dynamic_pointer_cast<CatalogReferenceImpl>(baseImpl)->GetRef();
                    if (kReferencedCatalogElement)
                    {
                        if (std::dynamic_pointer_cast<BaseImpl>(kReferencedCatalogElement) != nullptr)
                            children.push_back(std::dynamic_pointer_cast<BaseImpl>(kReferencedCatalogElement));
                    }

                }
                if (!children.empty())
                {
                    for (auto&& child : children)
                    {
                        std::map<std::string, std::string> emptyMap;

                        if (std::dynamic_pointer_cast<IScenarioDefinition>(baseImpl) != nullptr)
                            Resolve(logger, child, emptyMap, logUnresolvableParameter);
                        else
                            Resolve(logger, child, injectedParameters, logUnresolvableParameter);
                    }
                }

                if (kHasParameterDefinitions)
                {
                    PopParameterValueSet();
                }

            }
            /**
             * Resolve all parameters with parameter assignments, instead of parameter definitions
             * @param logger to log messages
             * @param catalogElement a catalogElement the parameters will be resolved.
             * @param parameterAssignments the parameter assignments that provide the parameter names and values
             */
            void ResolveWithParameterAssignments(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments)
            {
                auto baseImpl = std::dynamic_pointer_cast<BaseImpl>(catalogElement);

                if (baseImpl == nullptr)
                    return;

                const auto kHasParameterDefinitions = baseImpl->HasParameterDefinitions();
                if (kHasParameterDefinitions)
                {
                    auto parameterDefinitions = baseImpl->GetParameterDefinitions();

                    for (auto&& parameterValue : parameterDefinitions)
                    {
                        const auto kIt = parameterAssignments.find(parameterValue->GetName());
                        if (kIt != parameterAssignments.end())
                        {
                            parameterValue->SetValue(kIt->second);
                        }
                    }
                    PushParameterValueSet(parameterDefinitions);
                }

                ResolveInternal(logger, baseImpl, false);
                auto children = baseImpl->GetChildren();
                if (!children.empty())
                {
                    for (auto&& child : children)
                    {
                        std::map<std::string, std::string> emptyMap;
                        Resolve(logger, child, emptyMap,false);
                    }
                }

                if (kHasParameterDefinitions)
                {
                    PopParameterValueSet();
                }
            }
        };
    }
}
