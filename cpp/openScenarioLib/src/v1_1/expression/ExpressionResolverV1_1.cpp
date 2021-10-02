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

#include <vector>
#include <set>
#include <map>
#include "ExpressionResolverV1_1.h"

#include <iostream>

#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "BaseImpl.h"
#include "ApiClassImplV1_1.h"
#include "CatalogHelperV1_1.h"
#include "SimpleType.h"
#include "MemLeakDetection.h"
#include "OscExprEvaluatorFactory.h"
#include "SemanticException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
	    std::shared_ptr<OscExpression::ExprValue> ExpressionResolver::CreateExprValueFromParameterValue(
		    std::shared_ptr<ParameterValue> paramterValue)
	    {
			std::shared_ptr<OscExpression::ExprValue> result = nullptr;
			SimpleType targetType = paramterValue->GetType();
			return OscExpression::ExprValue::CreateSimpleParameterValue(paramterValue->GetName(), paramterValue->GetValue(), CreateExprTypeFromSimpleType(targetType));
	    }

	
	    std::shared_ptr<OscExpression::ExprType> ExpressionResolver::CreateExprTypeFromSimpleType(
		    SimpleType& actualSimpleType)
	    {
			std::shared_ptr<OscExpression::ExprType> result = nullptr;
			switch (actualSimpleType)
			{
			case STRING:
				result = OscExpression::ExprType::GetStringType();
				break;

			case DOUBLE:

				result = OscExpression::ExprType::GetDoubleType();
				break;

			case INT:

				result = OscExpression::ExprType::GetIntType();
				break;

			case UNSIGNED_INT:

				result = OscExpression::ExprType::GetUnsignedIntType();
				break;

			case UNSIGNED_SHORT:

				result = OscExpression::ExprType::GetUnsignedShortType();
				break;

			case BOOLEAN:

				result = OscExpression::ExprType::GetBooleanType();
				break;

			case DATE_TIME:
				result = OscExpression::ExprType::GetDateTimeType();
				break;
				
			case ENUM_TYPE:
				result = OscExpression::ExprType::GetStringType();
				break;

			default:
				break;
			}
			return result;
	    }

	    void ExpressionResolver::ResolveInternal(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<IExpressionObject> expressionObject, const bool logUnresolvableParameter)
        {
            auto attributeKeys = expressionObject->GetParameterizedAttributeKeys();

            for (auto&& attributeKey : attributeKeys)
            {
                auto expression = expressionObject->GetParameterNameFromAttribute(attributeKey);
				std::shared_ptr<OscExpression::ExprType> targetType= nullptr;
				bool isTypedStringAttribute = expressionObject->IsTypedStringAttribute(attributeKey) && ParserHelper::IsExpression(expression);
            	if (isTypedStringAttribute)
				{
					targetType = nullptr;
            		
				}else
				{
					SimpleType simpleTargetType = expressionObject->GetTypeFromAttributeName(attributeKey);
					targetType = CreateExprTypeFromSimpleType(simpleTargetType);
				}
            	
				std::shared_ptr<OscExpression::OscExprEvaluator> evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(_expressionResolverStack->GetCurrentMap(), targetType);
				try {
					std::shared_ptr<OscExpression::ExprValue> value = evaluator->Evaluate(expression);
					
					if (value->IsSimpleParameter())
					{
						if (targetType != nullptr && targetType != value->GetExprType())
						{
							// add Matching Info
							auto msg = FileContentMessage("Parameter type (" + value->GetExprType()->GetLiteral() +
								") does not match expected type (" + targetType->GetLiteral() + "). Value '" + value->ToString() +
								"' of parameter '" + value->GetParameterName() + "' was converted.", INFO, *expressionObject->GetTextmarker(attributeKey).get());
							logger->LogMessage(msg);
						}
						auto strValue = value->ToString();
						expressionObject->ResolveParameter( logger, attributeKey, strValue );
					}
					else
					{
						if(isTypedStringAttribute)
						{
							// targetIsString, so resolve String attribute
							expressionObject->ResolveStringExpression(attributeKey, value->ToString());
						}else if (targetType == OscExpression::ExprType::GetDoubleType())
						{
							double doubleValue = value->getDoubleValue();
							expressionObject->ResolveDoubleExpression(attributeKey, doubleValue);
						}
						else if (targetType == OscExpression::ExprType::GetIntType())
						{

							int intValue = (int) value->getDoubleValue();
							expressionObject->ResolveIntExpression(attributeKey, intValue);
						}
						else if (targetType == OscExpression::ExprType::GetUnsignedIntType())
						{
							unsigned int unsignedIntValue = (unsigned int)value->getDoubleValue();
							expressionObject->ResolveUnsignedIntExpression(attributeKey, unsignedIntValue);
						}
						else if (targetType == OscExpression::ExprType::GetUnsignedShortType())
						{
							unsigned short unsignedShortValue = (unsigned short)value->getDoubleValue();
							expressionObject->ResolveUnsignedShortExpression(attributeKey, unsignedShortValue);
						}
							
						
					}
					
				} catch (OscExpression::SemanticException& s)
				{
					std::shared_ptr<Textmarker>  textMarker = expressionObject->GetTextmarker(attributeKey);
					Textmarker newTextmarker = Textmarker(textMarker->GetLine(), textMarker->GetColumn() + s.GetColumn(), textMarker->GetFilename());
					// Add log Message
					auto msg = FileContentMessage(s.GetErrorMessage(), ERROR, newTextmarker);
					logger->LogMessage(msg);
					
				}
            }
        }

		bool ExpressionResolver::ValidateParameterConstraintGroups(std::shared_ptr<IParserMessageLogger>& logger,
			std::shared_ptr<OscExpression::ExprValue> parameterResolvedValue, std::string parameterName,
			std::shared_ptr<OscExpression::ExprType> parameterType,
			std::vector<std::shared_ptr<IValueConstraintGroup>> constraintGroups)
		{
			std::vector<std::shared_ptr<FileContentMessage>> gatheredMessages = std::vector<std::shared_ptr<FileContentMessage>>();
			bool result = false;
	    	if (constraintGroups.empty())
	    	{
	    		// No contraints => Validation Succeeds
				result = true;
	    	}else
			{ 
	    		for (std::shared_ptr<IValueConstraintGroup> valueConstraintGroup : constraintGroups)
	    		{
					result = result || ValidateParameterConstraints(logger,gatheredMessages, parameterResolvedValue, parameterName, parameterType, valueConstraintGroup);
	    		}
	    		
	    		if (!result)
	    		{
	    			// None of the validation groups succeeded, log all the info messages    		
					for (auto msg : gatheredMessages)
					{
						logger->LogMessage(*msg);
					}
	    		}
			}
			return result;
	    	
		}
    	
	    bool ExpressionResolver::ValidateParameterConstraints(std::shared_ptr<IParserMessageLogger>& logger, std::vector<std::shared_ptr<FileContentMessage>>& gatheredMessages,
		    std::shared_ptr<OscExpression::ExprValue> parameterResolvedValue, std::string parameterName,
		    std::shared_ptr<OscExpression::ExprType> parameterType,
		    std::shared_ptr<IValueConstraintGroup> constraintGroup)
	    {
			bool result = true;
	    	if (constraintGroup == nullptr || constraintGroup->GetConstraints().size() == 0)
	    	{
	    		// No constraints to be tested
				result = true;
			}
			else
			{
				for (std::shared_ptr<IValueConstraint> valueConstraint : constraintGroup->GetConstraints())
				{
					// Test the constraint
					bool isConstrainedViolated = ValidateSingleParameterConstraint(logger, parameterResolvedValue, parameterName, parameterType, valueConstraint);
					if (!isConstrainedViolated)
					{
						// Skip the validations (like in and operation). Do not execute the terms after the first false.
						auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(valueConstraint->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
						if (locator != nullptr)
						{
							std::shared_ptr<FileContentMessage> msg = std::make_shared<FileContentMessage>("Parameter constraint for parameter '" + parameterName + "' is violated. Value is '" + parameterResolvedValue->ToString() + "'.", ErrorLevel::INFO, locator->GetStartMarker());
							gatheredMessages.insert(gatheredMessages.end(), msg);
						}
						result = false;
						break;
					}
				}
			}
			return result;
	    }
		bool ExpressionResolver::ValidateSingleParameterConstraint(
			std::shared_ptr<IParserMessageLogger>& logger,
			std::shared_ptr<OscExpression::ExprValue> parameterResolvedValue,
			std::string parameterName,
			std::shared_ptr<OscExpression::ExprType> parameterType,
			std::shared_ptr<IValueConstraint> constraint)
	    {
	    	// First, check whether the constraint value can be converted into the targetData type;
			std::shared_ptr<OscExpression::ExprValue> constraintValue = OscExpression::ExprValue::CreateTypedValue(constraint->GetValue(), parameterType);
			if (parameterResolvedValue->IsSimpleParameter())
			{
				parameterResolvedValue = OscExpression::ExprValue::CreateTypedValue(parameterResolvedValue->ToString(), parameterResolvedValue->GetExprType());
			}
			if (constraintValue == nullptr)
			{
				auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(constraint->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
				if (locator != nullptr)
				{
					auto msg = FileContentMessage("Value of constraint for parameter '" + parameterName + "' cannot be converted to '" + parameterType->GetLiteral() + "' ("+ constraint->GetValue() +").", ERROR, locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__VALUE));
					logger->LogMessage(msg);
				}
				return false;
			}

			bool result = false;
	    	// Now compare
			Rule rule = constraint->GetRule();
			if (parameterType == OscExpression::ExprType::GetDoubleType())
			{
				if (rule == Rule::RuleEnum::EQUAL_TO || rule == Rule::RuleEnum::NOT_EQUAL_TO)
				{
					auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(constraint->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
					if (locator != nullptr)
					{
						auto msg = FileContentMessage("'==' or '!=' comparison with 'double' types is not recommended due to precision issues.", WARNING, locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__RULE));
						logger->LogMessage(msg);
					}
					bool equalResult = parameterResolvedValue->getDoubleValue() == constraintValue->getDoubleValue();
					
					result =  rule == Rule::RuleEnum::EQUAL_TO ? equalResult : !equalResult;
					
				}else if (rule == Rule::RuleEnum::LESS_THAN)
				{
					result = parameterResolvedValue->getDoubleValue() < constraintValue->getDoubleValue();
				}
				else if (rule == Rule::RuleEnum::LESS_OR_EQUAL)
				{

					result = parameterResolvedValue->getDoubleValue() <= constraintValue->getDoubleValue();
				
				}
				else if (rule == Rule::RuleEnum::GREATER_THAN)
				{
					result = parameterResolvedValue->getDoubleValue() > constraintValue->getDoubleValue();
				}
				else if (rule == Rule::RuleEnum::GREATER_OR_EQUAL)
				{
					result = parameterResolvedValue->getDoubleValue() >= constraintValue->getDoubleValue();
				}
				
			}
			else if (parameterType == OscExpression::ExprType::GetUnsignedIntType()
				|| parameterType == OscExpression::ExprType::GetUnsignedShortType()
				|| parameterType == OscExpression::ExprType::GetIntType())
			{
				if (rule == Rule::RuleEnum::EQUAL_TO)
				{

					result = ((long) parameterResolvedValue->getDoubleValue()) == ((long)constraintValue->getDoubleValue());

				}
				else if (rule == Rule::RuleEnum::LESS_THAN)
				{
					result = ((long)parameterResolvedValue->getDoubleValue()) < ((long)constraintValue->getDoubleValue());
				}
				else if (rule == Rule::RuleEnum::LESS_OR_EQUAL)
				{

					result = ((long)parameterResolvedValue->getDoubleValue()) <= ((long)constraintValue->getDoubleValue());

				}
				else if (rule == Rule::RuleEnum::GREATER_THAN)
				{
					result = ((long)parameterResolvedValue->getDoubleValue()) > ((long)constraintValue->getDoubleValue());
				}
				else if (rule == Rule::RuleEnum::GREATER_OR_EQUAL)
				{
					result = ((long)parameterResolvedValue->getDoubleValue()) >= ((long)constraintValue->getDoubleValue());
				}
				else if (rule == Rule::RuleEnum::NOT_EQUAL_TO)
				{
					result = ((long)parameterResolvedValue->getDoubleValue()) != ((long)constraintValue->getDoubleValue());
				}
			}
			
			else if (parameterType == OscExpression::ExprType::GetBooleanType())
			{
				if (rule == Rule::RuleEnum::EQUAL_TO)
				{
					result = parameterResolvedValue->GetBoolValue() == constraintValue->GetBoolValue();
				}
				else if (rule == Rule::RuleEnum::LESS_THAN)
				{
					result = parameterResolvedValue->GetBoolValue() < constraintValue->GetBoolValue();
				}
				else if (rule == Rule::RuleEnum::LESS_OR_EQUAL)
				{

					result = parameterResolvedValue->GetBoolValue() <= constraintValue->GetBoolValue();

				}
				else if (rule == Rule::RuleEnum::GREATER_THAN)
				{
					result = parameterResolvedValue->GetBoolValue() > constraintValue->GetBoolValue();
				}
				else if (rule == Rule::RuleEnum::GREATER_OR_EQUAL)
				{
					result = parameterResolvedValue->GetBoolValue() >= constraintValue->GetBoolValue();
				}
				else if (rule == Rule::RuleEnum::NOT_EQUAL_TO)
				{
					result = parameterResolvedValue->GetBoolValue() != constraintValue->GetBoolValue();
				}
			}
			else if (parameterType == OscExpression::ExprType::GetStringType())
			{
				if (rule == Rule::RuleEnum::EQUAL_TO)
				{
					result = parameterResolvedValue->ToString() == constraintValue->ToString();
				}
				else if (rule == Rule::RuleEnum::LESS_THAN)
				{
					result = parameterResolvedValue->ToString() < constraintValue->ToString();
				}
				else if (rule == Rule::RuleEnum::LESS_OR_EQUAL)
				{

					result = parameterResolvedValue->ToString() <= constraintValue->ToString();

				}
				else if (rule == Rule::RuleEnum::GREATER_THAN)
				{
					result = parameterResolvedValue->ToString() > constraintValue->ToString();
				}
				else if (rule == Rule::RuleEnum::GREATER_OR_EQUAL)
				{
					result = parameterResolvedValue->ToString() >= constraintValue->ToString();
				}
				else if (rule == Rule::RuleEnum::NOT_EQUAL_TO)
				{
					result = parameterResolvedValue->ToString() != constraintValue->ToString();
				}
			}
			else if (parameterType == OscExpression::ExprType::GetDateTimeType())
			{
				DateTime dateTimeParam;
				DateTime dateTimeConstraintValue;
				std::string dateTimeString = parameterResolvedValue->ToString();
				DateTimeParser::ToDateTime(dateTimeString, dateTimeParam);
				dateTimeString = constraintValue->ToString();
				DateTimeParser::ToDateTime(dateTimeString, dateTimeConstraintValue);

				
				if (rule == Rule::RuleEnum::EQUAL_TO)
				{
					result = dateTimeParam == dateTimeConstraintValue;
				}
				else if (rule == Rule::RuleEnum::NOT_EQUAL_TO)
				{
					result = dateTimeParam != dateTimeConstraintValue;
				}
				else if (rule == Rule::RuleEnum::LESS_THAN)
				{
					result = dateTimeParam < dateTimeConstraintValue;
				}
				else if (rule == Rule::RuleEnum::LESS_OR_EQUAL)
				{
					result = dateTimeParam <= dateTimeConstraintValue;
				}
				else if (rule == Rule::RuleEnum::GREATER_THAN)
				{
					result = dateTimeParam > dateTimeConstraintValue;
				}
				else if (rule == Rule::RuleEnum::GREATER_OR_EQUAL)
				{
					result = dateTimeParam >= dateTimeConstraintValue;
				}
				
			}

			return result;
	    }
    	
	    ExpressionResolver::ExpressionResolver()
	    {
			_expressionResolverStack = std::make_shared<ExpressionResolverStack>();
	    }

		bool ExpressionResolver::OverrideGlobalParameterWithInjectedParameter(std::shared_ptr<ParameterValue> parameterValue, std::shared_ptr<IParserMessageLogger> logger, std::map<std::string, std::string>& injectedParameters, std::shared_ptr<IParameterDeclaration> parameterDeclaration)
		{
			bool result = false;
			auto locator = std::static_pointer_cast<ILocator>(parameterDeclaration->GetAdapter(typeid(ILocator).name()));
			if (!locator)
			{
				return false;
			}
			
			//auto temp = locator->
			Textmarker textmarker = locator->GetStartMarker();
			
			auto name = parameterDeclaration->GetName();
			auto injectedValue = injectedParameters[name];
			if (!injectedValue.empty())
			{
				auto typeName = parameterDeclaration->GetParameterType();
				try
				{
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
					parameterValue->SetValue(injectedValue);
					result = true;
				}
				catch (std::exception& e)
				{
					auto msg = FileContentMessage("Injected parameter '" + name + "': " + e.what() + " Injected parameter is ignored.", ERROR, textmarker);
					logger->LogMessage(msg);
					result = false;
				}
				
			}
			return result;
		}

	    void ExpressionResolver::LogParameterConstraintError(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<IParameterDeclaration> parameterDeclaration)
	    {
		    std::string parameterName = parameterDeclaration->GetName();
		    auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(parameterDeclaration->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
		    if (locator != nullptr)
		    {
			    auto msg = FileContentMessage("Parameter validation with value constraint groups for parameter '" + parameterName + "' fail.", ErrorLevel::ERROR, locator->GetStartMarker());
			    logger->LogMessage(msg);
		    }
	    }

        void ExpressionResolver::Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<BaseImpl> baseImpl, std::map<std::string, std::string>& injectedParameters, bool logUnresolvableParameter)
        {
			std::map<std::string, std::string> emptyMap;
	    	
			//Resolve the object's attribute BEFORE evaluating the possible ParameterDeclarations
	    	ResolveInternal(logger, baseImpl, logUnresolvableParameter);
	    	
			std::set<std::string> notUsedInjectedParameters;
	    	
			if (std::dynamic_pointer_cast<IScenarioDefinition>(baseImpl) != nullptr)
			{
				// track the injected parameters
				for (auto&& elm : injectedParameters)
				{
					notUsedInjectedParameters.insert(elm.first);
				}
			}

	    	size_t paramsDefinitionSize = 0;
            auto children = baseImpl->GetChildren();
	    	
            
            if (!children.empty())
            {
                for (auto&& child : children)
                {
                	// Resolve the child element
					Resolve(logger, child, injectedParameters, logUnresolvableParameter);               	
					if (child->GetModelType() == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION)
					{
						auto parameterDeclaration = std::dynamic_pointer_cast<IParameterDeclaration>(child);
						std::shared_ptr<OscExpression::ExprValue> exprValue = nullptr;
						std::string  parameterName = parameterDeclaration->GetName();
						
						auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
						auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), child->GetParameterType(parameterType), parameterDeclaration->GetValue());

						if (!injectedParameters.empty() && (std::dynamic_pointer_cast<IScenarioDefinition>(baseImpl) != nullptr || std::dynamic_pointer_cast<ICatalogElement>(baseImpl) != nullptr))
						{
							// override parameter values with injected parameters
							if (OverrideGlobalParameterWithInjectedParameter(parameterValue, logger, injectedParameters, parameterDeclaration))
							{
								// Is overriden
								notUsedInjectedParameters.erase(parameterValue->GetName());
							}
							exprValue = CreateExprValueFromParameterValue(parameterValue);
						}
						
						exprValue = CreateExprValueFromParameterValue(parameterValue);
						// Insert it and potentially override it
						if (!ValidateParameterConstraintGroups(logger, exprValue, parameterName, OscExpression::ExprType::GetFromLiteral(parameterType), parameterDeclaration->GetConstraintGroups()))
						{
							LogParameterConstraintError(logger, parameterDeclaration);
						}
						_expressionResolverStack->PushExpression(parameterDeclaration->GetName(), exprValue);
						paramsDefinitionSize++;
						
					}
						
                }
            	
				if (std::dynamic_pointer_cast<IScenarioDefinition>(baseImpl) != nullptr)
				{
					// not used Parameters
					for (std::string name : notUsedInjectedParameters)
					{
						auto locator = std::static_pointer_cast<ILocator>(baseImpl->GetAdapter(typeid(ILocator).name()));
						if (locator)
						{
							Textmarker textmarker = locator->GetStartMarker();
							auto msg = FileContentMessage("Injected parameter '" + name + "' must be declared as a global parameter. Injected parameter is ignored.", WARNING, textmarker);
							logger->LogMessage(msg);
						}
					}
				}
            }

            _expressionResolverStack->PopExpression(paramsDefinitionSize);

        }

		
		
        void ExpressionResolver::ResolveWithParameterAssignments(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments)
        {
            auto baseImpl = std::dynamic_pointer_cast<BaseImpl>(catalogElement);

            if (baseImpl == nullptr)
                return;

            size_t paramsDefinitionSize = 0;
  
            ResolveInternal(logger, baseImpl, false);
            auto children = baseImpl->GetChildren();
            if (!children.empty())
            {
                for (auto&& child : children)
                {
                    std::map<std::string, std::string> emptyMap;
                	
                    Resolve(logger, child, emptyMap,false);
                	// if ParameterDefinition type
                	if (child->GetModelType() == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION)
                	{
                		// Resolve the value if value is an expression
						auto parameterDeclaration = std::dynamic_pointer_cast<IParameterDeclaration>(child);
						auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
						auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), child->GetParameterType(parameterType), parameterDeclaration->GetValue());

                		const auto kIt = parameterAssignments.find(parameterValue->GetName());
						if (kIt != parameterAssignments.end())
						{
							parameterValue->SetValue(kIt->second);
						}
                		
						std::shared_ptr<OscExpression::ExprValue> exprValue = CreateExprValueFromParameterValue(parameterValue);
						// Insert it and potentially override it
						if (!ValidateParameterConstraintGroups(logger, exprValue, parameterValue->GetName(), OscExpression::ExprType::GetFromLiteral(parameterType), parameterDeclaration->GetConstraintGroups()))
						{
							LogParameterConstraintError(logger, parameterDeclaration);
						}
						_expressionResolverStack->PushExpression(parameterValue->GetName(), exprValue);
						paramsDefinitionSize++;
                	}
                }
            }

            _expressionResolverStack->PopExpression(paramsDefinitionSize);

        }
    	
    }
}
