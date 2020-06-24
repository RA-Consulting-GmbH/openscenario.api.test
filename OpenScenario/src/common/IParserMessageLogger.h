#pragma once
#include <vector>
#include "FileContentMessage.h"

namespace RAC_OPENSCENARIO
{
    /**
     * An interface that logs a single message or a list of messages to a log target.
     *
     */
    class IParserMessageLogger
    {
    public:
        /**
         * Logging a single message to a log target.
         * @param message the message to log.
         */
        virtual void LogMessage(FileContentMessage& message) {}

        /**
         * Logging a list of messages to a log target.
         * @param messages the list of messages.
         */
        virtual void LogAllMessages(std::vector<FileContentMessage>& messages) {};
    };
}
