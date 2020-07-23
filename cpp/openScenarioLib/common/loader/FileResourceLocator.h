#pragma once
#include "IResourceLocator.h"
#include "filesystem.hpp"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Implements the resource locator in a file system
    */
    class FileResourceLocator: public IResourceLocator 
    {
    public:
        virtual ~FileResourceLocator() = default;

        std::shared_ptr<std::ifstream> GetInputStream(std::string& symbolicFilename) override
        {
                auto infile = std::make_shared<std::ifstream>(symbolicFilename, std::ios::binary);
                if (infile->bad() || infile->fail())
                {
                    auto msg = "File" + symbolicFilename + " not found";
                    throw ResourceNotFoundException(msg);
                }
                return infile;
        }

        std::vector<std::string> GetSymbolicFilenamesInSymbolicDir(std::string& symbolicDirName) override
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

    protected:
        /**
         * returns the list of files in a directory
         * @param dir the directory
         * @return the list of files in this directory
         */
        std::vector<std::string> GetFiles(ghc::filesystem::path& dir) const
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

    public:
        std::string GetSymbolicDirname(std::string& symbolicBaseDir, std::string& symbolicDir) override
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
    };

}
