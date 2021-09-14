/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <fstream>
#include <memory>
#include <vector>
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
