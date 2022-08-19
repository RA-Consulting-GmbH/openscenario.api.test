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
#include "OscInterfacesV1_2.h"
#include "IParserMessageLogger.h"
#include "ApiClassImplV1_2.h"
#include "BaseImpl.h"
#include "SimpleType.h"
#include "ExpressionResolverStackV1_2.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
        /**
        * Resolves all parameter of a parameterized object
        */
        class ExpressionResolver
        {

        private:
			std::shared_ptr<ExpressionResolverStack> _expressionResolverStack;;
			/*
			 * Test equal with epsilon (See https://en.cppreference.com/w/cpp/types/numeric_limits/epsilon)
			 * @param x first operand
			 * @param y first operand
			 * return true if both operands are seen as equal.
			 */      	
			bool AlmostEqual(double x, double y, int ulp = 3);
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
			/**
			 * Validates the parameter constraint groups. Puts the error messages to a list and add them to the logger if all constraint groups fail.
			 * This represents an OR operation between the parameter constraint groups.
			 * @param logger to log messages
			 * @param parameterResolvedValue the resolvedValue for the parameter
			 * @param parameterName name of the parameter
			 * @param parameterType the type of the parameter
			 * @param constraintGroups the vector with the constraint groups
			 * @return false if all groups fail to validate (OR)
			 */
        	bool ValidateParameterConstraintGroups(std::shared_ptr<IParserMessageLogger>& logger,
			                                       std::shared_ptr<OscExpression::ExprValue> parameterResolvedValue,
			                                       std::string parameterName,
			                                       std::shared_ptr<OscExpression::ExprType> parameterType,
			                                       std::vector<std::shared_ptr<IValueConstraintGroup>>
			                                       constraintGroups);

			/**
			 * Validates the parameter constraints
			 * @param logger to log messages
			 * @param gatheredMessages messages to gather form the validation
			 * @param parameterResolvedValue the resolvedValue for the parameter
			 * @param parameterName name of the parameter
			 * @param parameterType the type of the parameter
			 * @param constraintGroup the constraintGroup
			 * @return false if the group fails to validate (any constraint, AND)
			 */
			bool ValidateParameterConstraints(std::shared_ptr<IParserMessageLogger>& logger, std::vector<std::shared_ptr<FileContentMessage>>& gatheredMessages, std::shared_ptr<OscExpression::ExprValue> parameterResolvedValue, std::string parameterName, std::shared_ptr<OscExpression::ExprType> parameterType, std::shared_ptr<IValueConstraintGroup> constraintGroup);
			/**
			 * Validates the parameter constraints
			 * @param logger to log messages
			 * @param parameterResolvedValue the resolvedValue for the parameter
			 * @param parameterName name of the parameter
			 * @param parameterType the type of the parameter
			 * @param constraint the constraint
			 * @return fasle if validation of the single constraint fails
			 */
        	bool ValidateSingleParameterConstraint(std::shared_ptr<IParserMessageLogger>& logger,
												   std::shared_ptr<OscExpression::ExprValue> parameterResolvedValue,
												   std::string parameterName,
			                                       std::shared_ptr<OscExpression::ExprType> parameterType,
			                                       std::shared_ptr<IValueConstraint> constraint);

		public:

			/**
			 * Constructor
			 */
        	ExpressionResolver();

			/**
			 * Default Destructor
			 */
			virtual ~ExpressionResolver() = default;
        	
        	
            
        private:

            /**
             * Checks the data type and overrides the values in the parametervalues.
             *
             * @param parameterDefinition the parameter value to override
             * @param logger the logger to pick up the errors and warnings
             * @param injectedParameters the injected parameters
             * @param parameterDeclaration the parameterDefinition with the global parameter declarations
             * @return true if an injected parameter overrides the parameter definition 
             */
			bool OverrideGlobalParameterWithInjectedParameter(std::shared_ptr<ParameterValue> parameterDefinition,
			                                                  std::shared_ptr<IParserMessageLogger> logger,
			                                                  std::map<std::string, std::string>& injectedParameters,
			                                                  std::shared_ptr<IParameterDeclaration> parameterDeclaration);
			void LogParameterConstraintError(std::shared_ptr<IParserMessageLogger>& logger,
			                                 std::shared_ptr<IParameterDeclaration> parameterDeclaration);
			void LogParameterTypeError(std::shared_ptr<IParserMessageLogger>& logger,
			                           std::shared_ptr<IParameterDeclaration> parameterDeclaration);

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
