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
#include "IResourceLocator.h"
#include "filesystem.hpp"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Implements the resource locator in a file system
    */
    class FileResourceLocator: public IResourceLocator 
	{
	    public:
			OPENSCENARIOLIB_EXP virtual ~FileResourceLocator();

			OPENSCENARIOLIB_EXP std::shared_ptr<std::ifstream> GetInputStream(std::string& symbolicFilename) override;

			OPENSCENARIOLIB_EXP std::vector<std::string> GetSymbolicFilenamesInSymbolicDir(std::string& symbolicDirName) override;

	    protected:
	        /**
	         * returns the list of files in a directory
	         * @param dir the directory
	         * @return the list of files in this directory
	         */
			std::vector<std::string> GetFiles(ghc::filesystem::path& dir) const;

	    public:
			OPENSCENARIOLIB_EXP std::string GetSymbolicDirname(std::string& symbolicBaseDir, std::string& symbolicDir) override;
    };

}
