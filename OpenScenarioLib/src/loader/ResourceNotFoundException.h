#pragma once
#include <exception>
#include <string>
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
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

        char const * what() const override
        {
            return _msg.c_str();
        }

    };

}
