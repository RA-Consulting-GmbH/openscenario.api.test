#pragma once
#include <vector>
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

            /**
             *
             * @param logger logger to log messages
             * @param baseImpl instance of BaseImpl for which the parameters should be resolved.
             * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
             */
            void Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<BaseImpl> baseImpl, bool logUnresolvableParameter)
            {
                const auto kHasParameterDefinitions = baseImpl->HasParameterDefinitions();
                if (kHasParameterDefinitions)
                {
                    PushParameterValueSet(baseImpl->GetParameterDefinitions());
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
                        Resolve(logger, child, logUnresolvableParameter);
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
                        Resolve(logger, child, false);
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
