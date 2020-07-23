#pragma once
#include <string>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * Error Levels for Parsing and checking
     * <ul>
     * <li> FATAL - Fatal error that stops the whole loading process
     * <li> ERROR - Error that makes the loading results unusable but the loading process can continue to find
     * additional errors and warnings.
     * <li> WARNING - Warnings are errors that most likely have been corrected by the loader.
     * <li> INFO - Informations for the loader process.
     * <li> DEBUG - Debug information to trace the loading process.
     *
     * </ul>
     *
     */
    enum ErrorLevel { FATAL, ERROR, WARNING, INFO, DEBUG };

    class ErrorLevelString
    {
    public:
        static std::string ToString(const ErrorLevel error)
        {
            switch (error)
            {
                case FATAL:
                    return "FATAL";
                case ERROR: 
                    return "ERROR";
                case WARNING:
                    return "WARNING";
                case INFO:
                    return "INFO";
                case DEBUG:
                    return "DEBUG";
                default: 
                    return "UNKNOWN";
            }
        }
    };

}
