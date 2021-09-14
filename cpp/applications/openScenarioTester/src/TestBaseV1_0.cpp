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

//#include "MessageLogger.h"
#include "TestBaseV1_0.h"
#include "FileResourceLocator.h"

#define ASSERT_LOCATION __FILE__, __func__, __LINE__
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
	{
		
		TestBase::TestBase(std::string& executablePath) : _executablePath(executablePath) {}

		std::shared_ptr<NET_ASAM_OPENSCENARIO::IOpenScenarioModelElement> TestBase::ExecuteParsing(std::string filename, std::map<std::string, std::string> injectedProperties) const
		{
			auto loaderFactory = NET_ASAM_OPENSCENARIO::v1_0::XmlScenarioLoaderFactory(filename);
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
			auto ptr = loader->Load(_messageLogger, injectedProperties);
			if (ptr != nullptr)
				return std::static_pointer_cast<NET_ASAM_OPENSCENARIO::v1_0::OpenScenarioImpl>(ptr->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::v1_0::OpenScenarioImpl).name()));
			return nullptr;
		}

		std::shared_ptr<NET_ASAM_OPENSCENARIO::IOpenScenarioModelElement> TestBase::ExecuteParsing(std::string filename) const
		{
		   std::map<std::string, std::string> emptyMap;
		   return ExecuteParsing(filename, emptyMap);
		}


		std::shared_ptr<NET_ASAM_OPENSCENARIO::IOpenScenarioModelElement> TestBase::ExecuteImportParsing(const std::string filename, std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger) const
		{
			auto loaderFactory = NET_ASAM_OPENSCENARIO::v1_0::XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
			auto ptr = loader->Load(_messageLogger);
			if (ptr != nullptr)
				return std::static_pointer_cast<NET_ASAM_OPENSCENARIO::v1_0::OpenScenarioImpl>(ptr->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::v1_0::OpenScenarioImpl).name()));
			else
				return nullptr;
		}

		void TestBase::ClearMessageLogger()
		{
			_messageLogger =  std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);
		}

		bool TestBase::Assert(const bool condition, const std::string fileName, const std::string function, const int lineNumber)
		{
			if (!condition)
				std::cout << "Assert failed in file " << fileName << " at line " << lineNumber << " " << function << std::endl;
			return condition;
		}


		bool TestBase::AssertMessages(std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage>& messages, NET_ASAM_OPENSCENARIO::ErrorLevel errorLevel, std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> logger)
		{
			auto kFilterByErrorLevelMessages = FilterByErrorLevel(messages, errorLevel);
			auto filterByErrorLevelLogger = logger->GetMessagesFilteredByErrorLevel(errorLevel);
			std::sort(filterByErrorLevelLogger.begin(), filterByErrorLevelLogger.end(), []( NET_ASAM_OPENSCENARIO::FileContentMessage& lhs, NET_ASAM_OPENSCENARIO::FileContentMessage& rhs) {
				return lhs.GetMsg() < rhs.GetMsg();
			});
			return kFilterByErrorLevelMessages.size() == filterByErrorLevelLogger.size() &&
				   std::equal(kFilterByErrorLevelMessages.begin(), kFilterByErrorLevelMessages.end(), filterByErrorLevelLogger.begin(),
				[](NET_ASAM_OPENSCENARIO::FileContentMessage & l, NET_ASAM_OPENSCENARIO::FileContentMessage & r) {return l.ToString() == r.ToString(); });
		}

		std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> TestBase::FilterByErrorLevel(std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages, NET_ASAM_OPENSCENARIO::ErrorLevel& errorLevel)
		{
			std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> result;
			for (auto&& message : messages) 
			{
				if (errorLevel == message.GetErrorLevel()) 
				{
					result.push_back(message);
				}
			}

			std::sort(result.begin(), result.end(), []( NET_ASAM_OPENSCENARIO::FileContentMessage& lhs, NET_ASAM_OPENSCENARIO::FileContentMessage& rhs) {
				return lhs.GetMsg() < rhs.GetMsg();
			});
			return result;
		}

		std::string TestBase::GetLine(const std::string fileName, const int lineNum) const
		{
			std::ifstream file(_executablePath + "/" + kInputDir + fileName);
			std::string line;

			if (file.bad() || file.fail())
			{
				return "";
			}

			int counter = 0;

			while (std::getline(file, line))
			{
				counter++;
				if (counter == lineNum)
				{
					file.close();
					return line;
				}
			}
			file.close();
			return "";
		}
	}
}
