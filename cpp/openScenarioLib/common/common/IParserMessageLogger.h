#pragma once
#include <vector>
#include "FileContentMessage.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * An interface that logs a single message or a list of messages to a log target.
     *
     */
    class IParserMessageLogger
    {
    public:
        IParserMessageLogger() = default;
        virtual ~IParserMessageLogger() = default;
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
