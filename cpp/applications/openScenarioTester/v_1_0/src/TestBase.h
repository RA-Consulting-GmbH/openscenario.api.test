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
#include "MessageLogger.h"
#include "ApiClassImpl.h"
#include "IScenarioLoaderFactory.h"
#include "XmlScenarioLoaderFactory.h"
#include "FileResourceLocator.h"
#include "XmlScenarioImportLoaderFactory.h"
#include "ErrorLevel.h"
#include <algorithm>

#undef ERROR

class TestBase 
{

protected:
    std::shared_ptr<NET_ASAM_OPENSCENARIO::MessageLogger> _messageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::MessageLogger>();

#ifdef _WINDOWS
    const std::string kInputDir = "../../../../../../applications/openScenarioReader/res/";
#elif defined(__unix__) && defined(__linux__)
    const std::string kInputDir = "../../../../applications/openScenarioReader/res/";
#else
# error "CAN: Unknown OS"
#endif


public:
    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl> ExecuteParsing(std::string filename, std::map<std::string, std::string> injectedProperties) const
    {
        auto loaderFactory = NET_ASAM_OPENSCENARIO::V_1_0::XmlScenarioLoaderFactory(filename);
        auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
        return std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl>(loader->Load(_messageLogger, injectedProperties));
    }

    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl> ExecuteParsing(std::string filename) const
    {
        std::map<std::string, std::string> emptyMap;
       return ExecuteParsing(filename, emptyMap);
    }


    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl> ExecuteImportParsing(const std::string filename, std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger) const
    {
        auto loaderFactory = NET_ASAM_OPENSCENARIO::V_1_0::XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);
        auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
        return std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl>(loader->Load(_messageLogger));
    }

    void ClearMessageLogger() const
    {
        _messageLogger->Clear();
    }

protected:
    static bool HasErrors(std::shared_ptr<NET_ASAM_OPENSCENARIO::MessageLogger>& messageLogger)
    {
        for ( auto&& message : messageLogger->GetMessages()) 
        {
            if (message.GetErrorLevel() == NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR || message.GetErrorLevel() == NET_ASAM_OPENSCENARIO::ErrorLevel::FATAL)
            {
                return true;
            }
        }
        return false;
    }

     bool AssertMessages(std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage>& messages, NET_ASAM_OPENSCENARIO::ErrorLevel errorLevel, std::shared_ptr<NET_ASAM_OPENSCENARIO::MessageLogger>& logger) const
     {
        const auto kFilterByErrorLevelMessages = FilterByErrorLevel(messages, errorLevel);
        const auto kFilterByErrorLevelLogger = FilterByErrorLevel(logger->GetMessages(), errorLevel);
        return kFilterByErrorLevelMessages == kFilterByErrorLevelLogger && kFilterByErrorLevelMessages.size() == kFilterByErrorLevelLogger.size();
    }

    std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> FilterByErrorLevel(std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages, NET_ASAM_OPENSCENARIO::ErrorLevel& errorLevel) const
    {
        std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> result;
        for (auto&& message : messages) 
        {
            if (errorLevel == message.GetErrorLevel()) 
            {
                result.push_back(message);
            }
        }

        std::sort(result.begin(), result.end(), [](const NET_ASAM_OPENSCENARIO::FileContentMessage& lhs, const NET_ASAM_OPENSCENARIO::FileContentMessage& rhs) {
            return lhs.GetMsg() < rhs.GetMsg();
        });
        return result;
    }
};
