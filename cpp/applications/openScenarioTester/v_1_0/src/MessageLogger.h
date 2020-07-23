#pragma once
#include <vector>
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "MemLeakDetection.h"
#include <iostream>

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
            if (message.GetErrorLevel() == ERROR || message.GetErrorLevel() == INFO || message.GetErrorLevel() == FATAL) 
            {
                const auto kTextmarker = message.GetTextmarker();
                std::cout << message.GetMsg() << " (" << kTextmarker.GetLine() << "," << kTextmarker.GetColumn() << ")" <<std::endl;
            }
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

        void Clear() 
        {
            _messages.clear();
        }
    };
}
