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
#include "ParameterResolverV1_0.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "BaseImpl.h"
#include "ApiClassImplV1_0.h"
#include "SimpleType.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        bool ParameterResolver::DoesExpectedTypeMatchWithConversions(SimpleType& expectedSimpleType, SimpleType& actualSimpleType, std::string& value)
        {
            auto result = false;
            try {

                switch( expectedSimpleType )
                {
                    case STRING:
                        // Everything can be converted into String
                        result = true;
                    break;

                    case DOUBLE:
                        if (actualSimpleType == SimpleType::INT || actualSimpleType == SimpleType::UNSIGNED_INT
                            || actualSimpleType == SimpleType::UNSIGNED_SHORT || actualSimpleType == SimpleType::STRING)
                        {
                            ParserHelper::ValidateDouble(value);
                            result = true;
                        }
                    break;

                    case INT:
                        if (actualSimpleType == SimpleType::DOUBLE || actualSimpleType == SimpleType::UNSIGNED_INT
                            || actualSimpleType == SimpleType::UNSIGNED_SHORT || actualSimpleType == SimpleType::STRING)
                        {
                            ParserHelper::ValidateInt(value);
                            result = true;
                        }
                    break;

                    case UNSIGNED_INT:
                        if (actualSimpleType == SimpleType::DOUBLE || actualSimpleType == SimpleType::INT
                            || actualSimpleType == SimpleType::UNSIGNED_SHORT || actualSimpleType == SimpleType::STRING)
                        {
                            ParserHelper::ValidateUnsignedInt(value);
                            result = true;
                        }
                    break;

                    case UNSIGNED_SHORT:
                        if (actualSimpleType == SimpleType::DOUBLE || actualSimpleType == SimpleType::INT
                            || actualSimpleType == SimpleType::UNSIGNED_INT || actualSimpleType == SimpleType::STRING)
                        {
                            ParserHelper::ValidateUnsignedShort(value);
                            result = true;
                        }
                    break;

                    case BOOLEAN:
                        if (actualSimpleType == SimpleType::DOUBLE || actualSimpleType == SimpleType::INT
                            || actualSimpleType == SimpleType::UNSIGNED_INT || actualSimpleType == SimpleType::STRING)
                        {
                            ParserHelper::ValidateBoolean(value);
                            result = true;
                        }
                    break;

                    case DATE_TIME:
                        if (actualSimpleType == SimpleType::STRING)
                        {
                            ParserHelper::ValidateDateTime(value);
                            result = true;
                        }
                    break;

                    default:
                    break;
                }
            }
            catch (std::exception& e) 
            {
                (void)e;
                // Do nothing. result is still false;
            }
            return result;
        }

        void ParameterResolver::ResolveInternal(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<IParameterizedObject> parameterizedObject, const bool logUnresolvableParameter)
        {
            auto attributeKeys = parameterizedObject->GetParameterizedAttributeKeys();

            for (auto&& attributeKey : attributeKeys)
            {
                auto parameterName = parameterizedObject->GetParameterNameFromAttribute(attributeKey);


                auto paramValue = FindValue(parameterName);
                if (paramValue) 
                {

                    auto expectedSimpleType = parameterizedObject->GetTypeFromAttributeName(attributeKey);
                    auto actualSimpleType = paramValue->GetType();
                    auto value = paramValue->GetValue();
                    if (expectedSimpleType == actualSimpleType || (expectedSimpleType == SimpleType::ENUM_TYPE && actualSimpleType == SimpleType::STRING)) 
                    {
                        parameterizedObject->ResolveParameter(logger, attributeKey, value);
                    }
                    else if (DoesExpectedTypeMatchWithConversions(expectedSimpleType, actualSimpleType, value)) 
                    {
                        parameterizedObject->ResolveParameter(logger, attributeKey, value);
                        // add Matching Info
                        auto msg = FileContentMessage("Parameter type (" + SimpleTypeString::ToString(expectedSimpleType) +
                                                      ") does not match expected type (" + SimpleTypeString::ToString(actualSimpleType) + "). Value '" + value +
                                                      "' of parameter '" + parameterName + "' was converted.", INFO, *parameterizedObject->GetTextmarker(attributeKey).get());
                        logger->LogMessage(msg);
                    }
                    else 
                    {
                        // add Error
                        auto msg = FileContentMessage("Parameter type (" + SimpleTypeString::ToString(expectedSimpleType) +
                                                      ") does not match expected type (" + SimpleTypeString::ToString(actualSimpleType) + "). Value '" + value +
                                                      "' of parameter '" + parameterName + "' cannot be converted.", ERROR, *parameterizedObject->GetTextmarker(attributeKey).get());
                        logger->LogMessage(msg);
                    }
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

        std::shared_ptr<ParameterValue> ParameterResolver::FindValue(std::string& parameterName)
        {
            // Search from the top of the stack (which is the end of the underlying
            // list)
            for (auto parameterNameToParameterValue : _parameterValueSets)
            {
                const auto kIt = parameterNameToParameterValue.find(parameterName);
                if (kIt != parameterNameToParameterValue.end())
                {
                    return kIt->second;
                }
            }
            return nullptr;
        }

        void ParameterResolver::PushParameterValueSet(std::vector<std::shared_ptr<ParameterValue>> parameterValues)
        {
            std::map<std::string, std::shared_ptr<ParameterValue>> table;
            for (auto&& parameterValue : parameterValues)
            {
                table.emplace(std::make_pair(parameterValue->GetName(), parameterValue));
            }
            _parameterValueSets.insert(_parameterValueSets.begin(), table);
        }

        /**
         * Remove the head of the stack
         */
        void ParameterResolver::PopParameterValueSet()
        {
            if (!_parameterValueSets.empty())
                _parameterValueSets.erase(_parameterValueSets.begin());
        }


        void ParameterResolver::OverrideValue(std::vector<std::shared_ptr<ParameterValue>> parameterValues, std::string& name, std::string& value)
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
        void ParameterResolver::OverrideGlobalParametersWithInjectedParameters(std::vector<std::shared_ptr<ParameterValue>> parameterDefinitions, std::shared_ptr<IParserMessageLogger> logger, std::map<std::string, std::string>& injectedParameters, std::shared_ptr<IScenarioDefinition> scenarioDefinition)
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

         void ParameterResolver::Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<BaseImpl> baseImpl, std::map<std::string, std::string>& injectedParameters, bool logUnresolvableParameter)
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
        void ParameterResolver::ResolveWithParameterAssignments(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments)
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
    }
}
