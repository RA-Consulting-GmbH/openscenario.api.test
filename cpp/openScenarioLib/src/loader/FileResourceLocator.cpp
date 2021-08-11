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

#include "FileResourceLocator.h"
#include "filesystem.hpp"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    FileResourceLocator::~FileResourceLocator() = default;

        std::shared_ptr<std::ifstream> FileResourceLocator::GetInputStream(std::string& symbolicFilename)
        {
                auto infile = std::make_shared<std::ifstream>(symbolicFilename, std::ios::binary);
                if (infile->bad() || infile->fail())
                {
                    auto msg = "File " + symbolicFilename + " not found";
                    throw ResourceNotFoundException(msg);
                }
                return infile;
        }

        std::vector<std::string> FileResourceLocator::GetSymbolicFilenamesInSymbolicDir(std::string& symbolicDirName)
        {
            auto filePath = ghc::filesystem::path(symbolicDirName);
            try 
            {
                if (!is_directory(filePath))
                {
                    throw ResourceNotFoundException(symbolicDirName);
                }
            }
            catch ( ghc::filesystem::filesystem_error& e) 
            {
                (void)e;
                throw ResourceNotFoundException(symbolicDirName);
            }

            return GetFiles(filePath);
        }


        std::vector<std::string> FileResourceLocator::GetFiles(ghc::filesystem::path& dir) const
        {
            std::vector<std::string> result;
            for( auto&& kFile : ghc::filesystem::directory_iterator(dir) )
            {
                if( is_directory(kFile) )
                {
                    auto subDir = ghc::filesystem::path(kFile);
                    auto subFiles = GetFiles(subDir);
                    result.insert(result.end(), subFiles.begin(), subFiles.end());
                }
                else
                {
                    result.push_back(ghc::filesystem::path::string_type(absolute(kFile.path())));
                }
            }
            return result;
        }

        std::string FileResourceLocator::GetSymbolicDirname(std::string& symbolicBaseDir, std::string& symbolicDir)
        {
            const auto kFilePath = ghc::filesystem::path(symbolicDir);
            if (is_directory(kFilePath) && absolute(kFilePath) == kFilePath)
            {
                // symbolic Dir is given absolute
                return symbolicDir;
            }
            else
            {
                const auto kBasefilePath = ghc::filesystem::path(symbolicBaseDir).parent_path().append(symbolicDir);
                if (is_directory(kBasefilePath))
                {
                    return ghc::filesystem::path::string_type(absolute(kBasefilePath));
                }
            }
            return "";
        }

}
