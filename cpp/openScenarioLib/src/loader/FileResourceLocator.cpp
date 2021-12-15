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
#include "ResourceNotFoundException.h"
#include <string>
#include <codecvt>
#include <locale>
#include "utf8.h"

namespace NET_ASAM_OPENSCENARIO
{
    FileResourceLocator::~FileResourceLocator() = default;

    std::shared_ptr<std::ifstream> FileResourceLocator::GetInputStream(std::string& symbolicFilename)
    {
#ifdef WIN32
        std::wstring result;

        if (!Utf8ToWstring(symbolicFilename, result))
        {
            auto msg = "Conversion from utf8 string to wstring failed: " + symbolicFilename;
            throw ResourceNotFoundException(msg);
        }

        auto infile = std::make_shared<std::ifstream>(result, std::ios::binary);
#elif defined (__linux__) || defined (__APPLE__)
    auto infile = std::make_shared<std::ifstream>(symbolicFilename, std::ios::binary);
#else
#   error "Operating system not supported."
#endif

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

    bool FileResourceLocator::Utf8ToWstring(const std::string& str, std::wstring& result)
    {
        result.clear();
        switch (sizeof(wchar_t))
        {
        case 4:
        {
            std::vector<uint32_t> utf32v;
            utf8::utf8to32(str.begin(), str.end(), back_inserter(utf32v));
            result.assign((wchar_t*)utf32v.data(), utf32v.size());
        } break;
        case 2:
        {
            std::vector<uint16_t> utf16v;
            utf8::utf8to16(str.begin(), str.end(), back_inserter(utf16v));
            result.assign((wchar_t*)utf16v.data(), utf16v.size());
        } break;
        default:
        {
            result = L"";
            return false;
        }
        }

        return true;
    }

    bool FileResourceLocator::WstringToUtf8(const std::wstring& str, std::string& result)
    {
        result.clear();
        switch (sizeof(wchar_t))
        {
        case 4:
        {
            utf8::utf32to8(str.begin(), str.end(), back_inserter(result));
        } break;
        case 2:
        {
            utf8::utf16to8(str.begin(), str.end(), back_inserter(result));
        } break;
        default:
        {
            result = "";
            return false;
        }
        }

        return true;
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
