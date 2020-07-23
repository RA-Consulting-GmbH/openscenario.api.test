#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "ResourceNotFoundException.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Abstracts the Locator from the storage medium. It can be a file system or a database or else.
    */
    class IResourceLocator 
    {
    public:
        IResourceLocator() = default;
        virtual ~IResourceLocator() = default;

        /**
         * An input stream to read from.
         * @param symbolicFilename from the OpenSCENARIO file
         * @return the input stream to read from this resource.
         * @throws ResourceNotFoundException if resource cannot be located
         */
        virtual std::shared_ptr<std::ifstream> GetInputStream(std::string& symbolicFilename) //throw(ResourceNotFoundException)
        {
            return nullptr;
        }

        /**
         * A list of symbolic filenames from a symbolic dir.
         * @param symbolicDirName as a result from a getSymbolicDirname.
         * @return the symbolic filenames in a symbolic dir.
         * @throws ResourceNotFoundException if resource cannot be located
         */
        virtual std::vector<std::string> GetSymbolicFilenamesInSymbolicDir(std::string& symbolicDirName) //throw(ResourceNotFoundException)
        {
            return {};
        }

        /**
         * get a symbolic directory name form a symbolic base directory.
         * @param symbolicBaseDir the symbolic base directory
         * @param symbolicDir from the OpenSCENARIO file
         * @return the absolute symbolic dir name
         */
        virtual std::string GetSymbolicDirname(std::string& symbolicBaseDir, std::string& symbolicDir)
        {
            return {};
        }

    };

}
