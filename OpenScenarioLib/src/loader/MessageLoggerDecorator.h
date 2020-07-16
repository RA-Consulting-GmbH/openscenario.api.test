#pragma once
#include <vector>
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "MemLeakDetection.h"

#undef ERROR
namespace RAC_OPENSCENARIO
{
    /**
     * Decorates a message logger to connect to detect whether errors or fatal errors have occured.
     * This is a useful helper class.
     */
    class MessageLoggerDecorator: public IParserMessageLogger 
    {
    private:
        bool _hasErrors = false;
        std::shared_ptr<IParserMessageLogger> _innerMessageLogger;

    public:
        /**
         * Constructor
         * @param innerMessageLogger decrated message logger
         */
         MessageLoggerDecorator(std::shared_ptr<IParserMessageLogger>& innerMessageLogger): _innerMessageLogger(innerMessageLogger) {}

        void LogMessage(FileContentMessage& message) override
        {
            const auto kErrorLevel = message.GetErrorLevel();
            _hasErrors = _hasErrors || (kErrorLevel == FATAL || kErrorLevel == ERROR);
            _innerMessageLogger->LogMessage(message);

        }

        void LogAllMessages(std::vector<FileContentMessage>& messages) override
        {
            for (FileContentMessage message : messages) 
            {
                _innerMessageLogger->LogMessage(message);
            }
        }

        /**
         * Report whether errors occured
         * @return true if errors or fatal errors have been occured.
         */
        bool HasErrors() const
        {
            return _hasErrors;
        }

    };

}
