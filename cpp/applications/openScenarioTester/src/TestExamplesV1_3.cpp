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

#include "TestExamplesV1_3.h"
#include "FileResourceLocator.h"
#include <iostream>

#include "PropertyTreeContext.h"
#include "ScenarioLoaderException.h"

#undef ERROR

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
	{

		TestExamples::TestExamples(std::string& executablePath) : TestBase(executablePath) {}

		bool TestExamples::TestExample() const
		{
			// Creating a message logger to pick up the messages
			auto msgLogger = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::IParserMessageLogger>(_messageLogger);

			// Instantiating the factory
			std::string fileName = _executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc";
			auto loaderFactory = XmlScenarioLoaderFactory(fileName);

			// Creating the loader
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());

			// Loading 
			auto openScenario = std::static_pointer_cast<IOpenScenario>(loader->Load(_messageLogger)->GetAdapter(typeid(IOpenScenario).name()));

			//Check for errors
			if (_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty())
			{
				// Browse through the results
				auto fileHeader = openScenario->GetFileHeader();
				std::cout << "Major Revision :" << fileHeader->GetRevMajor() << std::endl;
				std::cout << "Minor Revision :" << fileHeader->GetRevMinor() << std::endl;
			}

			if (!openScenario)
				return Assert(false, ASSERT_LOCATION);

			auto openScenarioCategory = openScenario->GetOpenScenarioCategory();

			if (openScenarioCategory)
			{
				// This is a scenario definition, not a catalog
				auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();

				// Browse through parameter declarations
				auto parameterDeclarations = scenarioDefinition->GetParameterDeclarations();

				// Browse through roadNetwork definition
				auto roadNetwork = scenarioDefinition->GetRoadNetwork();

				// Browse through entities
				auto entities = scenarioDefinition->GetEntities();

				// Browse through storyboard
				auto storyboard = scenarioDefinition->GetStoryboard();

				// Browse through catalog locations
				auto catalogLocations = scenarioDefinition->GetCatalogLocations();

			}

			auto checkerRuleLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::INFO);

			// Using the adapter interface to get the checker
			auto scenarioChecker = std::static_pointer_cast<IScenarioChecker>( openScenario->GetAdapter(typeid(IScenarioChecker).name()));

			class CheckerRule: public NET_ASAM_OPENSCENARIO::ICheckerRule
			{
			private:
				bool DoesNameMatches(std::shared_ptr<IVehicle> object) const
				{
					const auto kName = object->GetName();
					// name must start with a capital letter
					return std::regex_match(kName, std::regex("^[A-Z].*"));
				}

				std::string GetMsg()
				{
					return "Name must start with a capital letter";
				}
			public:
				void ApplyRuleInFileContext(std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override
				{
					auto typedObject = std::dynamic_pointer_cast<IVehicle>(object);

					const auto kName = typedObject->GetName();

					// name must start with a capital letter
					if(!DoesNameMatches(typedObject))
					{
						// Get the textmarker at the error
						auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
						const auto kTextmarker = locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__NAME);

						// Add a message to the logger
						auto msg = NET_ASAM_OPENSCENARIO::FileContentMessage(GetMsg(), NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, kTextmarker);
						messageLogger->LogMessage(msg);
					}
				}

				void ApplyRuleInTreeContext(std::shared_ptr<NET_ASAM_OPENSCENARIO::ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override
				{
					auto typedObject = std::dynamic_pointer_cast<IVehicle>(object);
					if (!DoesNameMatches(typedObject))
					{

						// Get the textmarker at the error
						auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
						const auto kTextmarker = locator->GetStartMarkerOfProperty(OSC_CONSTANTS::ATTRIBUTE__NAME);

						// Add a message to the logger
						const auto kContext = NET_ASAM_OPENSCENARIO::PropertyTreeContext::Create(object, OSC_CONSTANTS::ATTRIBUTE__NAME);
						NET_ASAM_OPENSCENARIO::TreeContentMessage tcm(GetMsg(), NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, kContext);
						messageLogger->LogMessage(tcm);
					}

				}

			};

			// Add a checker rule for all vehicles: E.g. Check ^whether the name starts with a capital letter
			scenarioChecker->AddVehicleCheckerRule(std::make_shared<CheckerRule>());
			// Now start the check. It is applied to all vehicles. For any checker rule violation an entry is created.
			scenarioChecker->CheckScenarioInFileContext(checkerRuleLogger, openScenario);

			// Iterate through violations
			for ( auto && message : checkerRuleLogger->GetMessages()) 
			{
				// e.g. display the error 
				std::cout << message.GetMsg() << std::endl;
			}

			return true;
		}

			
	}
}