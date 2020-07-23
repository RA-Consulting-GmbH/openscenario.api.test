#pragma once
#include <exception>
#include <string>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    class ScenarioLoaderException : public std::exception
    {
    private:
        /**
         * Serial ID, default
         */
        static const long kSerialVersionUid = 1L;
        std::string _msg;

    public:
        /**
         * Constructor
         * @param message text message
         */
        ScenarioLoaderException(std::string message) :_msg(message) {}

        const char* what() const throw() override
        {
            return _msg.c_str();
        }

    };

}
