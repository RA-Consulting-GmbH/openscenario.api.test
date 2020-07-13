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
    std::shared_ptr<RAC_OPENSCENARIO::MessageLogger> _messageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();

#ifdef _WINDOWS
    const std::string kInputDir = "../../../../../Applications/OpenScenarioReader/res/";
#elif defined(__unix__) && defined(__linux__)
    const std::string kInputDir = "../../../Applications/OpenScenarioReader/res/";
#else
# error "CAN: Unknown OS"
#endif


public:
    std::shared_ptr<RAC_OPENSCENARIO::OpenScenarioImpl> ExecuteParsing(std::string filename) const
    {
        auto loaderFactory = RAC_OPENSCENARIO::XmlScenarioLoaderFactory(filename);
        auto loader = loaderFactory.CreateLoader(std::make_shared<RAC_OPENSCENARIO::FileResourceLocator>());
        return std::dynamic_pointer_cast<RAC_OPENSCENARIO::OpenScenarioImpl>(loader->Load(_messageLogger));
    }

    std::shared_ptr<RAC_OPENSCENARIO::OpenScenarioImpl> ExecuteImportParsing(const std::string filename, std::shared_ptr<RAC_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger) const
    {
        auto loaderFactory = RAC_OPENSCENARIO::XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);
        auto loader = loaderFactory.CreateLoader(std::make_shared<RAC_OPENSCENARIO::FileResourceLocator>());
        return std::dynamic_pointer_cast<RAC_OPENSCENARIO::OpenScenarioImpl>(loader->Load(_messageLogger));
    }

    void ClearMessageLogger() const
    {
        _messageLogger->Clear();
    }

protected:
    static bool HasErrors(std::shared_ptr<RAC_OPENSCENARIO::MessageLogger>& messageLogger)
    {
        for ( auto&& message : messageLogger->GetMessages()) 
        {
            if (message.GetErrorLevel() == RAC_OPENSCENARIO::ErrorLevel::ERROR || message.GetErrorLevel() == RAC_OPENSCENARIO::ErrorLevel::FATAL) 
            {
                return true;
            }
        }
        return false;
    }

     bool AssertMessages(std::vector<RAC_OPENSCENARIO::FileContentMessage>& messages, RAC_OPENSCENARIO::ErrorLevel errorLevel, std::shared_ptr<RAC_OPENSCENARIO::MessageLogger>& logger) const
     {
        const auto kFilterByErrorLevelMessages = FilterByErrorLevel(messages, errorLevel);
        const auto kFilterByErrorLevelLogger = FilterByErrorLevel(logger->GetMessages(), errorLevel);
        return kFilterByErrorLevelMessages == kFilterByErrorLevelLogger && kFilterByErrorLevelMessages.size() == kFilterByErrorLevelLogger.size();
    }

    std::vector<RAC_OPENSCENARIO::FileContentMessage> FilterByErrorLevel(std::vector<RAC_OPENSCENARIO::FileContentMessage> messages, RAC_OPENSCENARIO::ErrorLevel& errorLevel) const
    {
        std::vector<RAC_OPENSCENARIO::FileContentMessage> result;
        for (auto&& message : messages) 
        {
            if (errorLevel == message.GetErrorLevel()) 
            {
                result.push_back(message);
            }
        }

        std::sort(result.begin(), result.end(), [](const RAC_OPENSCENARIO::FileContentMessage& lhs, const RAC_OPENSCENARIO::FileContentMessage& rhs) {
            return lhs.GetMsg() < rhs.GetMsg();
        });
        return result;
    }
};
