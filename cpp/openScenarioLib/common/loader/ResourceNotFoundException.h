#pragma once
#include <exception>
#include <string>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    class ResourceNotFoundException : public std::exception
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
         * @param fileName
         */
        ResourceNotFoundException(std::string& fileName) :_msg("Resource not found '" + fileName + "'") {}

        const char* what() const throw() override
        {
            return _msg.c_str();
        }

    };

}
