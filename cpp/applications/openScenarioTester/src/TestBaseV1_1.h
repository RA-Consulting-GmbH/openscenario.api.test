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
#include "SimpleMessageLogger.h"
#include "XmlScenarioImportLoaderFactoryV1_1.h"
#include <string>
//#pragma execution_character_set("utf-8")

#define ASSERT_LOCATION __FILE__, __func__, __LINE__
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{
		class TestBase 
		{

		protected:
			std::shared_ptr<NET_ASAM_OPENSCENARIO::SimpleMessageLogger> _messageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);

			const std::string kInputDir = u8"TestResources/OpenScenarioTester/";

			std::string _executablePath;

		public:

			TestBase(std::string& executablePath);

			std::shared_ptr<NET_ASAM_OPENSCENARIO::IOpenScenarioModelElement> ExecuteParsing(std::string filename, std::map<std::string, std::string> injectedProperties) const;

			std::shared_ptr<NET_ASAM_OPENSCENARIO::IOpenScenarioModelElement> ExecuteParsing(std::string filename) const;


			std::shared_ptr<NET_ASAM_OPENSCENARIO::IOpenScenarioModelElement> ExecuteImportParsing(const std::string filename, std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger) const;

			void ClearMessageLogger();

			static bool Assert(const bool condition, const std::string fileName, const std::string function, const int lineNumber);

		protected:

			bool AssertMessages(std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage>& messages, NET_ASAM_OPENSCENARIO::ErrorLevel errorLevel, std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> logger);
			std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> FilterByErrorLevel(std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages, NET_ASAM_OPENSCENARIO::ErrorLevel& errorLevel);
			std::string GetLine(const std::string fileName, const int lineNum) const;

		};
	}
}
