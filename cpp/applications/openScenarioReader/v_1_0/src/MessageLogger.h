#pragma once
#include <vector>
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Buffers log messages
    */
    class MessageLogger: public IParserMessageLogger 
    {
    private:
        std::vector<FileContentMessage> _messages;

    public:
        void LogMessage(FileContentMessage& message) override
        {
            _messages.push_back(message);
        }

        void LogAllMessages(std::vector<FileContentMessage>& messages) override
        {
            _messages.insert(_messages.end(), messages.begin(), messages.end());
        }

        /**
         * The buffered messages
         * @return buffered messages
         */
        std::vector<FileContentMessage> GetMessages() const
        {
            return _messages;
        }
    };
}
