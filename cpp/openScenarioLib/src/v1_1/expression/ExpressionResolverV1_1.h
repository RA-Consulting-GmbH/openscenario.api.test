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
#include <map>
#include <memory>
#include <vector>
#include "OscInterfacesV1_1.h"
#include "IParserMessageLogger.h"
#include "ApiClassImplV1_1.h"
#include "BaseImpl.h"
#include "SimpleType.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        /**
        * Resolves all parameter of a parameterized object
        */
        class ExpressionResolver
        {

        private:
			std::vector<std::map<std::string, std::shared_ptr<ParameterValue>>> _parameterValueSets;
			std::shared_ptr < std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> _flatParameterValueSet;

			/**
			 * Adapter function that creates a ExprValue for a ParameterValue.
			 * @param paramterValue to log messages
			 * @return the created ExprValue
			 */
			std::shared_ptr<OscExpression::ExprValue> CreateExprValueFromParameterValue(std::shared_ptr<ParameterValue> paramterValue);

			/**
			 * Adapter function that creates a ExprValue for a ParameterValue.
			 * @param actualSimpleType to log messages
			 * @return the created ExprValue
			 */
			std::shared_ptr<OscExpression::ExprType> CreateExprTypeFromSimpleType(SimpleType& actualSimpleType);

        	/**
             * Resolves all parameters of a parameterized object.
             * @param logger to log messages
             * @param expressionObject the expression object
             * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
             */
			void ResolveInternal(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<IExpressionObject> expressionObject, const bool logUnresolvableParameter);

        public:

			/**
			 * Constructor
			 */
        	ExpressionResolver();

			/**
			 * Default Destructor
			 */
			virtual ~ExpressionResolver() = default;
        	
        	/**
             * @param parameterName  name of the parameter the value is looked up
             * @return the string representation of the value.
             */
			std::shared_ptr<ParameterValue> FindValue(std::string& parameterName);
        	
            /**
             * Pushes a parameter value set on the stack. Implementing scopes of values.
             * The values are always looked up in the head of the stack first.
             * @param parameterValues set of parameter values
             */
			void PushParameterValueSet(std::vector<std::shared_ptr<ParameterValue>> parameterValues);
        	
            /**
             * Remove the head of the stack
             */
			void PopParameterValueSet();
            
        private:

            /**
             * Overrides the value of a paramterValue in a List of paramter values
             *
             * @param parameterValues list of parameter values.
             * @param name name of the parameter to override
             * @param value value of the parameter to override
             */
			void OverrideValue(std::vector<std::shared_ptr<ParameterValue>> parameterValues, std::string& name, std::string& value);
            /**
             * Checks the data type and overrides the values in the parametervalues.
             *
             * @param parameterDefinitions the parameter values to override
             * @param logger the logger to pick up the errors and warnings
             * @param injectedParameters the injected parameters
             * @param scenarioDefinition the scenario definition with the global parameter declarations
             */
			void OverrideGlobalParametersWithInjectedParameters(std::vector<std::shared_ptr<ParameterValue>> parameterDefinitions, std::shared_ptr<IParserMessageLogger> logger, std::map<std::string, std::string>& injectedParameters, std::shared_ptr<IScenarioDefinition> scenarioDefinition);

        public:
        	/**
             *
             * @param logger logger to log messages
             * @param baseImpl instance of BaseImpl for which the parameters should be resolved.
             * @param injectedParameters the injected parameters
             * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
             */
			void Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<BaseImpl> baseImpl, std::map<std::string, std::string>& injectedParameters, bool logUnresolvableParameter);
            /**
             * Resolve all parameters with parameter assignments, instead of parameter definitions
             * @param logger to log messages
             * @param catalogElement a catalogElement the parameters will be resolved.
             * @param parameterAssignments the parameter assignments that provide the parameter names and values
             */
			void ResolveWithParameterAssignments(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments);
        };
    }
}
