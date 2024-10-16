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
	class OPENSCENARIOLIB_EXP FileResourceLocator: public IResourceLocator 
	{
		public:
			virtual ~FileResourceLocator();

			std::shared_ptr<std::ifstream> GetInputStream(std::string& symbolicFilename) override;

			std::vector<std::string> GetSymbolicFilenamesInSymbolicDir(std::string& symbolicDirName) override;

		protected:
			/**
			 * returns the list of files in a directory
			 * @param dir the directory
			 * @return the list of files in this directory
			 */
			std::vector<std::string> GetFiles(ghc::filesystem::path& dir) const;

		public:
			std::string GetSymbolicDirname(std::string& symbolicBaseDir, std::string& symbolicDir) override;

			/**
			 * returns true if conversion was successful
			 * @param str reference to string containing utf8 encoded string to convert to wstring
			 * @param result reference to wstring variable to store the conversion in
			 */
			static bool Utf8ToWstring(const std::string& str, std::wstring& result);

            /**
             * returns true if conversion was successful
             * @param str reference to wstring containing convert to string utf8 encoded
             * @param result reference to string variable to store the conversion in
             */
            static bool WstringToUtf8(const std::wstring& str, std::string& result);
	};

}
