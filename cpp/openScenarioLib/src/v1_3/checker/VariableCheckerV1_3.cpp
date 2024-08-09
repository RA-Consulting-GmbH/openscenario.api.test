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

#include "VariableCheckerV1_3.h"

#include "PropertyTreeContext.h"


 /**
  * Checks Parameter declarations' value to be parsable (not empty value)
  */
namespace NET_ASAM_OPENSCENARIO
{
	namespace v1_3
	{
		void VariableCheckerHelper::ValidateParsing(std::string value, const ParameterType& parameterType)
		{
			if (!value.empty())
			{
				if (parameterType == ParameterType::INTEGER || parameterType == ParameterType::INT)
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

		std::shared_ptr<IVariableDeclaration> VariableCheckerHelper::GetVariableDeclarationByName(const std::set<std::shared_ptr<IVariableDeclaration>>& setToSearch,
			const std::string& name)
		{
			std::shared_ptr<IVariableDeclaration> result = nullptr;
			for (auto it = setToSearch.begin(); it != setToSearch.end(); ++it) {
				if ((*it)->GetName() == name)
				{
					result = *it;
					break;
				}
			}
			return result;
		}


		VariableDeclarationChecker::VariableDeclarationChecker(std::shared_ptr < std::set<std::shared_ptr<IVariableDeclaration>>> definedVariables) : definedVariables{ definedVariables }
		{
			
		}
		
	
		void VariableDeclarationChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			// Check whether the value is validatable:
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IVariableDeclaration> (object);

			auto value = typedObject->GetValue();
			const auto kParameterType = typedObject->GetVariableType();
			try
			{
				VariableCheckerHelper::ValidateParsing(value, kParameterType);
				definedVariables->insert(typedObject);
			}
			catch (std::exception &e)
			{
				(void)e;
				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

				if (locator)
				{
					auto msg = FileContentMessage("Value '" + value + "' cannot be parsed into '" + kParameterType.GetLiteral() + "'.", ERROR, locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__VALUE));
					messageLogger->LogMessage(msg);
				}
			}
		}

		void VariableDeclarationChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IVariableDeclaration> (object);

			auto value = typedObject->GetValue();
			const auto kParameterType = typedObject->GetVariableType();
			try
			{
				VariableCheckerHelper::ValidateParsing(value, kParameterType);
				definedVariables->insert(typedObject);
			}
			catch (std::exception &e)
			{
				(void)e;
				const auto kContext = PropertyTreeContext::Create(object, OSC_CONSTANTS::ATTRIBUTE__VALUE);
				auto msg = TreeContentMessage("Value '" + value + "' cannot be parsed into '" + kParameterType.GetLiteral() + "'.", ERROR, kContext);
				messageLogger->LogMessage(msg);
			}

		};

		VariableActionChecker::VariableActionChecker(std::shared_ptr < std::set<std::shared_ptr<IVariableDeclaration>>> definedVariables) : definedVariables{ definedVariables }
		{

		}
		void VariableActionChecker::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object)
		{
			// Check whether the value is validatable:
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IVariableAction> (object);

			auto name = typedObject->GetVariableRef()->GetNameRef();
			
			// Is Name defined
			std::shared_ptr<IVariableDeclaration> foundVariableDeclaration = VariableCheckerHelper::GetVariableDeclarationByName(*definedVariables, name);
			if (foundVariableDeclaration == nullptr)
			{

				auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

				if (locator)
				{
					auto msg = FileContentMessage("Variable '" + name + "' is not defined.", ERROR, locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_REF));
					messageLogger->LogMessage(msg);
				}

			} else {
				// Check the Action
				// SetAction: value must be parsable due to data type
				std::shared_ptr<IVariableSetAction> setAction = typedObject->GetSetAction();
				if (setAction != nullptr)
				{
					try
					{
						VariableCheckerHelper::ValidateParsing(setAction->GetValue(), foundVariableDeclaration->GetVariableType());
					}
					catch (std::exception &e)
					{
						(void)e;
						auto locator = std::static_pointer_cast<ILocator>(setAction->GetAdapter(typeid(ILocator).name()));

						if (locator)
						{
							auto msg = FileContentMessage("Value '" + setAction->GetValue() + "' cannot be parsed into '" + foundVariableDeclaration->GetVariableType().GetLiteral() + "'.", ERROR, locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__VALUE));
							messageLogger->LogMessage(msg);
						}
					}
				}
				// VariableAddValueRule, VariableMultiplyByValueRule: Restrict type to numeric (no bool or dateTime or string)
				
				std::shared_ptr<IVariableModifyAction> modifyAction = typedObject->GetModifyAction();
				if (modifyAction != nullptr  && (modifyAction->GetRule()->GetAddValue() != nullptr || modifyAction->GetRule()->GetMultiplyByValue()) )
				{
					auto locator = std::static_pointer_cast<ILocator>(modifyAction->GetAdapter(typeid(ILocator).name()));

					ParameterType parameterType = foundVariableDeclaration->GetVariableType();
					if (parameterType == ParameterType::DATE_TIME || parameterType == ParameterType::STRING || parameterType == ParameterType::BOOLEAN)
					{
						if (locator)
						{
							auto msg = FileContentMessage("Variable '" + name + "' must be of numeric type to use a ModifyAction.", ERROR, locator->GetStartMarker());
							messageLogger->LogMessage(msg);
						}
					} 
				}

			}
		} 

		void VariableActionChecker::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
		{			// Check whether the value is validatable:
			if (!object) return;
			auto typedObject = std::dynamic_pointer_cast <IVariableAction> (object);

			auto name = typedObject->GetVariableRef()->GetNameRef();

			// Is Name defined
			std::shared_ptr<IVariableDeclaration> foundVariableDeclaration = VariableCheckerHelper::GetVariableDeclarationByName(*definedVariables, name);
			if (foundVariableDeclaration == nullptr)
			{

				auto kContext = PropertyTreeContext::Create(object, OSC_CONSTANTS::ATTRIBUTE__VARIABLE_REF);
				auto msg = TreeContentMessage("Variable '" + name + "' is not defined.", ERROR, kContext);
				messageLogger->LogMessage(msg);
				

			} else {
				// Check the Action
				// SetAction: value must be parsable due to data type
				std::shared_ptr<IVariableSetAction> setAction = typedObject->GetSetAction();
				if (setAction != nullptr)
				{
					try
					{
						VariableCheckerHelper::ValidateParsing(setAction->GetValue(), foundVariableDeclaration->GetVariableType());
					}
					catch (std::exception &e)
					{
						(void)e;
						auto kContext = PropertyTreeContext::Create(object, OSC_CONSTANTS::ATTRIBUTE__VALUE);
						auto msg = TreeContentMessage("Value '" + setAction->GetValue() + "' cannot be parsed into '" + foundVariableDeclaration->GetVariableType().GetLiteral() + "'.", ERROR, kContext);
						messageLogger->LogMessage(msg);
					}
				}
				// VariableAddValueRule, VariableMultiplyByValueRule: Restrict type to numeric (no bool or dateTime or string)

				std::shared_ptr<IVariableModifyAction> modifyAction = typedObject->GetModifyAction();
				if (modifyAction != nullptr && (modifyAction->GetRule()->GetAddValue() != nullptr || modifyAction->GetRule()->GetMultiplyByValue()))
				{
					
					ParameterType parameterType = foundVariableDeclaration->GetVariableType();
					if (parameterType == ParameterType::DATE_TIME || parameterType == ParameterType::STRING || parameterType == ParameterType::BOOLEAN)
					{
						auto kContext = std::make_shared<BaseTreeContext>(modifyAction);
						auto msg = TreeContentMessage("Variable '" + name + "' must be of numeric type to use a ModifyAction.", ERROR, kContext);
						messageLogger->LogMessage(msg);
				

					}
				}

			}

		}


		VariableChecker::VariableChecker()
		{
			std::shared_ptr<std::set<std::shared_ptr<IVariableDeclaration>>> definedVariables = std::make_shared<std::set<std::shared_ptr<IVariableDeclaration>>>();
			VariableChecker::AddVariableDeclarationCheckerRule(std::make_shared <VariableDeclarationChecker>(definedVariables));
			VariableChecker::AddVariableActionCheckerRule(std::make_shared <VariableActionChecker>(definedVariables));
		};
	}
}