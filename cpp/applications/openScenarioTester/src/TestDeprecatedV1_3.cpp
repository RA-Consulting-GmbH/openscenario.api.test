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

#include "TestDeprecatedV1_3.h"
#include <iostream>

#include "FileResourceLocator.h"
#include "ScenarioLoaderException.h"
#include "ErrorLevel.h"

#undef ERROR

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
	{
		

		TestDeprecated::TestDeprecated(std::string& executablePath) : TestBase(executablePath) {}

		bool TestDeprecated::TestDeprecatedSuccess()
		{
			ClearMessageLogger();
			// Creating a message logger to pick up the messages
			auto msgLogger = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::IParserMessageLogger>(_messageLogger);

			// Instantiating the factory
			std::string fileName = _executablePath + "/" + kInputDir + "DoubleLaneChangerDeprecated1_2.xosc";
			auto loaderFactory = XmlScenarioLoaderFactory(fileName);

			// Creating the loader
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());

			// Loading 
			auto openScenario = std::static_pointer_cast<IOpenScenario>(loader->Load(_messageLogger)->GetAdapter(typeid(IOpenScenario).name()));

			std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
			messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
				"Attribute 'alongRoute' is deprecated since standard version '1.1'. Comment: 'Use \"coordinateSystem\" and \"relativeDistanceType\"'.",
				NET_ASAM_OPENSCENARIO::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(202, 92, fileName)));
			messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
				"Element 'Trajectory' is deprecated since standard version '1.1'. Comment: 'Use trajectoryRef instead.'.",
				NET_ASAM_OPENSCENARIO::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(170, 18, fileName)));
			messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
				"Enumeration literal 'wind' is deprecated since standard version '1.1'. Use instead XSDcomplexeType \"Wind\" in \"Weather\".'.",
				NET_ASAM_OPENSCENARIO::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(72, 41, fileName))); 
			messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
				"Enumeration literal 'overwrite' is deprecated since standard version '1.2'. Deprecated for consistency. Use override instead'.",
				NET_ASAM_OPENSCENARIO::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(153, 59, fileName)));
			messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
				"Enumeration literal 'overwrite' is deprecated since standard version '1.2'. Deprecated for consistency. Use override instead'.",
				NET_ASAM_OPENSCENARIO::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(213, 58, fileName)));
			//Check for errors
			bool res = Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

			res = res &&  Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::WARNING, _messageLogger), ASSERT_LOCATION);
			if (!res)
			{
				auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ERROR);
				for (auto it = filterByErrorLevelLogger.begin(); it != filterByErrorLevelLogger.end(); ++it) {
					std::cout << it->ToString() << "\n";
				}
			}

			if (!openScenario)
				res = res && Assert(false, ASSERT_LOCATION);
			return res;
		}
		bool TestDeprecated::TestDeprecatedSupress()
		{
			ClearMessageLogger();
			// Creating a message logger to pick up the messages
			auto msgLogger = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::IParserMessageLogger>(_messageLogger);

			// Instantiating the factory
			std::string fileName = _executablePath + "/" + kInputDir + "DoubleLaneChangerDeprecated.xosc";
			auto loaderFactory = XmlScenarioLoaderFactory(fileName, true);

			// Creating the loader
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());

			// Loading 
			auto openScenario = std::static_pointer_cast<IOpenScenario>(loader->Load(_messageLogger)->GetAdapter(typeid(IOpenScenario).name()));

			return Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::WARNING).empty(), ASSERT_LOCATION);

		}

		
	}
}