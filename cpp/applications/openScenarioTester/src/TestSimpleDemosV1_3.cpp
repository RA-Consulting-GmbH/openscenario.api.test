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

#include "TestSimpleDemosV1_3.h"
#include "SimpleMessageLogger.h"
#include "CatalogHelperV1_3.h"
#include "FileResourceLocator.h"
#include "VersionCheckerRuleV1_3.h"
#include "EgoCheckerRuleV1_3.h"

#include <iostream>
#include "ScenarioLoaderException.h"
#undef ERROR
namespace NET_ASAM_OPENSCENARIO
{

	namespace v1_3
	{
		TestSimpleDemos::TestSimpleDemos(std::string& executablePath) : TestBase(executablePath) {}

		bool TestSimpleDemos::TestSimpleDemo() const
		{

			// Creating a message Logger to pick up the messages
			auto messageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);

			// Instantiating the factory
			XmlScenarioLoaderFactory loaderFactory(_executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc");

			// Creating the loader with a file resource locator (we are reading directly from a file system)
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());

			// Loading the scenario
			auto openScenario = std::static_pointer_cast<IOpenScenario>(loader->Load(messageLogger)->GetAdapter(typeid(IOpenScenario).name()));

			// Check for errors
			if (!messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR).empty()) 
			{
				// Browse through the results
				auto fileHeader = openScenario->GetFileHeader();
				std::cout << "Major Revision :" << fileHeader->GetRevMajor() << std::endl;
				std::cout << "Minor Revision :" << fileHeader->GetRevMinor() << std::endl;
			}

			return true;
		}

		bool TestSimpleDemos::TestImportDemo() const
		{

			// Creating a message Logger to pick up the messages
			auto messageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);

			// create another messageLogger for logging the messages that occur from imported files
			auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);

			// Instantiating the factory
			XmlScenarioImportLoaderFactory loaderFactory(catalogMessageLogger, _executablePath + "/" + kInputDir + "simpleImport/simpleImport.xosc");

			// Creating the loader with a file resource locator (we are reading directly from a file system)
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());

			// Loading the scenario
			auto openScenario = std::static_pointer_cast<OpenScenarioImpl>(loader->Load(messageLogger)->GetAdapter(typeid(OpenScenarioImpl).name()));

			// Get the list of scenario objects
			auto scenarioObjects = openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetEntities()->GetScenarioObjects();

			for (auto&& scenarioObject : scenarioObjects) 
			{
				// Access the object that is imported from a catalog with the name "Ego"
				if (scenarioObject->GetName() == "Ego") 
				{
					// Get the catalog reference
					auto catalogReference = scenarioObject->GetEntityObject()->GetCatalogReference();

					if (catalogReference && catalogReference->GetEntryName() == "car_white")
					{
						auto catalogRef = catalogReference->GetRef();
						// Now check the type.
						if ( CatalogHelper::IsVehicle(catalogRef))
						{
							auto vehicle = CatalogHelper::AsVehicle(catalogRef);
							// Now you can access the resolved vehicle
							auto axles = vehicle->GetAxles();
							// get the additonal axles
							const auto kAdditionalAxlesSize = axles->GetAdditionalAxlesSize();
							if ( kAdditionalAxlesSize == 0)
							{
								std::cout << "Ego has 2 axles (front, rear)\n";
							}
							else 
							{
								std::cout << "Ego has " << 2 + kAdditionalAxlesSize << " axles (front, rear and "
									<< kAdditionalAxlesSize << " addtional axles\n";
							}
						}
					}
				}
			}

			return true;
		}

		bool TestSimpleDemos::TestCheckerRuleDemo() const
		{
			try 
			{
				auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc"));

				// the root of the tree is available in the IOpenScenario openScenario variable
				// Instantiate a checker now
				ScenarioCheckerImpl scenarioChecker;

				// The sceanrio checker provided a method for every model type (here IFileHeader) to add
				// CheckerRule
				scenarioChecker.AddFileHeaderCheckerRule(std::make_shared<VersionCheckerRule>(1, 0));

				// Create a message logger to pick up the messages
				auto simpleMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);

				// Now call the checkScenario method to check the tree
				scenarioChecker.CheckScenarioInFileContext(simpleMessageLogger, openScenario);

				// Now check the picked up messages
				for (auto&& message : simpleMessageLogger->GetMessages()) 
				{
					(void)message;
					// do somethong with the messaged that are picked up during the check
				}
				return true;

			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e) 
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestSimpleDemos::TestCheckerRuleEgoDemo() const
		{
			try 
			{
				auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc"));

				// the root of the tree is available in the IOpenScenario openScenario variable

				// Instantiate a checker now
				ScenarioCheckerImpl scenarioChecker;

				// The sceanrio checker provided a method for every model type (here IFileHeader) to add
				// CheckerRule
				scenarioChecker.AddEntitiesCheckerRule(std::make_shared<EgoCheckerRule>());

				// Create a message logger to pick up the messages
				auto simpleMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);

				// Now call the checkScenario method to check the tree
				scenarioChecker.CheckScenarioInFileContext(simpleMessageLogger, openScenario);

				// Now check the picked up messages
				for (auto&& message : simpleMessageLogger->GetMessages()) 
				{
					(void)message;
					// do somethong with the messaged that are picked up during the check
				}

				return true;
			}
			catch ( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e) 
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}
	};

}
	
