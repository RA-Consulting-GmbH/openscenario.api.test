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

				SimpleType targetType = expressionObject->GetTypeFromAttributeName(attributeKey);
            	
				std::shared_ptr<OscExpression::OscExprEvaluator> evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(_expressionResolverStack->GetCurrentMap(), CreateExprTypeFromSimpleType(targetType));
				try {
					std::shared_ptr<OscExpression::ExprValue> value = evaluator->Evaluate(expression);
					
					if (value->IsSimpleParameter())
					{
						if (CreateExprTypeFromSimpleType(targetType) != value->GetExprType())
						{
							// add Matching Info
							auto msg = FileContentMessage("Parameter type (" + value->GetExprType()->GetLiteral() +
								") does not match expected type (" + SimpleTypeString::ToString(targetType) + "). Value '" + value->ToString() +
								"' of parameter '" + value->GetParameterName() + "' was converted.", INFO, *expressionObject->GetTextmarker(attributeKey).get());
							logger->LogMessage(msg);
						}
						auto strValue = value->ToString();
						expressionObject->ResolveParameter( logger, attributeKey, strValue );
					}
					else
					{

						switch (targetType)
						{
							case DOUBLE:
							{
								double doubleValue = value->getDoubleValue();
								expressionObject->ResolveDoubleExpression(attributeKey, doubleValue);
								break;
							}
							case INT:
							{

								int intValue = (int) value->getDoubleValue();
								expressionObject->ResolveIntExpression(attributeKey, intValue);
								break;
							}
							case UNSIGNED_INT:
							{
								unsigned int unsignedIntValue = (unsigned int)value->getDoubleValue();
								expressionObject->ResolveUnsignedIntExpression(attributeKey, unsignedIntValue);
								break;
							}
							case UNSIGNED_SHORT:
							{
								unsigned short unsignedShortValue = (unsigned short)value->getDoubleValue();
								expressionObject->ResolveUnsignedShortExpression(attributeKey, unsignedShortValue);
								break;
							}
							default:
								break;
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
		void ExpressionResolver::ResolveCatalogElement(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<CatalogReferenceImpl> catalogReferenceImpl)
	    {
			if (catalogReferenceImpl != nullptr)
			{
				auto parameterAssignments = catalogReferenceImpl->GetParameterAssignments();
				// if parameterDeclarations are emtpy, there is no need to resolve the assigned parameters,

				for (auto parameterAssignment : parameterAssignments)
				{
					std::string parameterAssignmentName = parameterAssignment->GetParameterRef()->GetNameRef();
					
					// Parameter is  relevant. There is a ParameterDeclaration with this name.

					auto parmeterAssignmentImpl = std::dynamic_pointer_cast<ParameterAssignmentImpl>(parameterAssignment);
					// Resolve value of Parameter Assignment
					auto strValue = parameterAssignment->GetValue();
					if( ParserHelper::IsExpression( strValue ) )
					{
						std::shared_ptr<OscExpression::ExprValue> value = ResolveValueOfParameterAsignment(logger, parameterAssignment);
						if (value != nullptr)
						{
							// Can be resolved
							parmeterAssignmentImpl->SetValue(value->ToString());
						}
					}					
				}
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
	    	
            if (std::dynamic_pointer_cast<CatalogReferenceImpl>(baseImpl) != nullptr)
            {
				auto catalogReferenceImpl = std::dynamic_pointer_cast<CatalogReferenceImpl>(baseImpl);
				ResolveCatalogElement(logger, catalogReferenceImpl);
            }
            else if (!children.empty())
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
								exprValue = CreateExprValueFromParameterValue(parameterValue);
							}
							else
							{
								// Is not overridden, Resolve potential expression in paramterDeclaration's value attribute
								std::shared_ptr<OscExpression::ExprValue> resultValue = ResolveValueOfParameterDeclaration(logger, parameterDeclaration);
								if (resultValue != nullptr)
								{
									exprValue = resultValue;
								}
								else
								{
									exprValue = CreateExprValueFromParameterValue(parameterValue);
								}

							}
						}else
						{
							std::shared_ptr<OscExpression::ExprValue> resultValue = ResolveValueOfParameterDeclaration(logger, parameterDeclaration);
							if (resultValue != nullptr)
							{
								exprValue = resultValue;
							}
							else
							{
								exprValue = CreateExprValueFromParameterValue(parameterValue);
							}
						}
							
						// Insert it and potentially override it
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

		std::shared_ptr<OscExpression::ExprValue> ExpressionResolver::ResolveValueOfParameterDeclaration(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<IParameterDeclaration> parameterDeclaration)
		{
			std::string value = parameterDeclaration->GetValue();
			std::string parameterType = parameterDeclaration->GetParameterType().GetLiteral();
			if (! ParserHelper::IsExpression(value))
			{
				return nullptr;
			}else
			{
				try {
					// Resolve the value
					std::shared_ptr<OscExpression::ExprType> targetType = OscExpression::ExprType::GetFromLiteral(parameterType);
					std::shared_ptr<OscExpression::OscExprEvaluator> evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(_expressionResolverStack->GetCurrentMap(), targetType);
					std::shared_ptr<OscExpression::ExprValue> resultValue = evaluator->Evaluate(value);
					return resultValue;
				}
				catch (OscExpression::SemanticException& s)
				{
					auto locator = std::static_pointer_cast<ILocator>(parameterDeclaration->GetAdapter(typeid(ILocator).name()));
					if (locator)
					{
						Textmarker textmarker = locator->GetStartMarker();
						// Add log Message
						auto msg = FileContentMessage(s.GetErrorMessage(), ERROR, textmarker);
						logger->LogMessage(msg);
					}
				}
			}
			return nullptr;
		}

		std::shared_ptr<OscExpression::ExprValue> ExpressionResolver::ResolveValueOfParameterAsignment(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<IParameterAssignment> parameterAssignment)
		{
			std::string value = parameterAssignment->GetValue();
			if (!ParserHelper::IsExpression(value))
			{
				return nullptr;
			}
			else
			{
				try {
					// Resolve the value
					std::shared_ptr<OscExpression::OscExprEvaluator> evaluator = OscExpression::OscExprEvaluatorFactory::CreateOscExprEvaluator(_expressionResolverStack->GetCurrentMap(), nullptr);
					std::shared_ptr<OscExpression::ExprValue> resultValue = evaluator->Evaluate(value);
					return resultValue;
				}
				catch (OscExpression::SemanticException& s)
				{
					auto locator = std::static_pointer_cast<ILocator>(parameterAssignment->GetAdapter(typeid(ILocator).name()));
					if (locator)
					{
						Textmarker textmarker = locator->GetStartMarker();
						// Add log Message
						auto msg = FileContentMessage(s.GetErrorMessage(), ERROR, textmarker);
						logger->LogMessage(msg);
					}
				}
			}
			return nullptr;
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
						_expressionResolverStack->PushExpression(parameterValue->GetName(), exprValue);
						paramsDefinitionSize++;
                	}
                }
            }

            _expressionResolverStack->PopExpression(paramsDefinitionSize);

        }
    	
    }
}
