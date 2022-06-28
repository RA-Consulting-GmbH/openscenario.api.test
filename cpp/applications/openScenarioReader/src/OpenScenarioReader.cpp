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

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>

#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "SimpleMessageLogger.h"
#include "Textmarker.h"
#include "ApiClassImplV1_0.h"
#include "XmlScenarioImportLoaderFactoryV1_1.h"
#include "ApiClassImplV1_1.h"
#include "XmlScenarioImportLoaderFactoryV1_2.h"
#include "ApiClassImplV1_2.h"
#include "XmlScenarioImportLoaderFactoryV1_0.h"
#include "ScenarioLoaderException.h"
#include "FileResourceLocator.h"
#include "../common/version.h"
#include "ResourceNotFoundException.h"

#ifdef COLLECT_HEADERS
// Include all header files exporting symbols created with the Linux bash command (execute in cpp/applications/openScenarioReader/src):
// echo "#pragma once" > headerWithExports.h ; for fullfile in `find ../../../ -name "*.h" -exec grep -l -h -e "OPENSCENARIOLIB_EXP" \{\} \;` ; do echo "#include \"${fullfile##*/}\"" >> headerWithExports.h ; done
#include "headerWithExports.h"
#include "NamedReferenceProxy.h"
#endif


#undef ERROR


/**
 * Executable for checking an OpenScenario file.
 * <ul>
 * <li> Reading the file
 * <li> Resolving the parameters
 * <li> Resolving the catalog references
 * <li> Checking all type ranges that differ from the ones of the default type (e.g. positive doubles)
 * </ul>
 *
 */

static NET_ASAM_OPENSCENARIO::ErrorLevel logLevel = NET_ASAM_OPENSCENARIO::ErrorLevel::INFO;
static std::string VERSION_1_0 = "v1_1";
static std::string VERSION_1_1 = "v1_0";
static std::string VERSION_1_2 = "v1_2";


std::shared_ptr<NET_ASAM_OPENSCENARIO::v1_0::OpenScenarioImpl> ExecuteImportParsing(std::string& filename, std::shared_ptr<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>& messageLogger, std::shared_ptr <NET_ASAM_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger, std::map<std::string, std::string>& injectionParameters)
{
	auto loaderFactory = NET_ASAM_OPENSCENARIO::v1_0::XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);
	auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
	return std::static_pointer_cast<NET_ASAM_OPENSCENARIO::v1_0::OpenScenarioImpl>(loader->Load(messageLogger, injectionParameters)->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::v1_0::OpenScenarioImpl).name()));
}

std::shared_ptr<NET_ASAM_OPENSCENARIO::v1_1::OpenScenarioImpl> ExecuteImportParsingV1_1(std::string& filename, std::shared_ptr<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>& messageLogger, std::shared_ptr <NET_ASAM_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger, std::map<std::string, std::string>& injectionParameters)
{
	auto loaderFactory = NET_ASAM_OPENSCENARIO::v1_1::XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);
	auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
	return std::static_pointer_cast<NET_ASAM_OPENSCENARIO::v1_1::OpenScenarioImpl>(loader->Load(messageLogger, injectionParameters)->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::v1_1::OpenScenarioImpl).name()));
}

std::shared_ptr<NET_ASAM_OPENSCENARIO::v1_2::OpenScenarioImpl> ExecuteImportParsingV1_2(std::string& filename, std::shared_ptr<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>& messageLogger, std::shared_ptr <NET_ASAM_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger, std::map<std::string, std::string>& injectionParameters)
{
	auto loaderFactory = NET_ASAM_OPENSCENARIO::v1_2::XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);
	auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
	return std::static_pointer_cast<NET_ASAM_OPENSCENARIO::v1_2::OpenScenarioImpl>(loader->Load(messageLogger, injectionParameters)->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::v1_2::OpenScenarioImpl).name()));
}

std::string GetFilledString(const size_t length, const char charToFill) 
{
    std::stringstream ss;
    ss << std::setfill(charToFill) << std::setw(length) << charToFill;
    return ss.str();
}

std::string Trim(const std::string s) 
{
    return regex_replace(s, std::regex("^\\s+|\\s+$"), "");
}

enum RETURN_CODES
{
    SUCCESS_RESULT = 0,
    ERROR_RESULT,
    USAGE_RESULT,
    VERSION_RESULT
};

int CheckFile(std::string& inputFileName, std::string& paramFileName, std::string version = VERSION_1_0)
{
    std::map<std::string, std::string> injectedParamters;
    int result = SUCCESS_RESULT;
	
    if (!paramFileName.empty())
    {
        try
        {

#ifdef WIN32
            std::wstring wparamFileName;

            if (!NET_ASAM_OPENSCENARIO::FileResourceLocator::Utf8ToWstring(paramFileName, wparamFileName))
            {
                auto msg = "Conversion from utf8 string to wstring failed: " + paramFileName;
                return ERROR_RESULT;
            }

            std::ifstream paramFile(wparamFileName);
#elif defined (__linux__) || defined (__APPLE__)
            std::ifstream paramFile(paramFileName);
#else
#   error "Operating system not supported."
#endif

            std::string line;

            if (paramFile.bad() || paramFile.fail())
            {
                std::cout << "paramsfile not found" << std::endl;
                result = ERROR_RESULT;
            }

            int counter = 0;

            while (std::getline(paramFile, line))
            {
                counter++;
                if (!std::regex_match(line, std::regex("\\s*$")) && !std::regex_match(line, std::regex("\\s*#.*$")))
                {
                    auto pattern = std::regex("([^\\t]*)\\t([^\\t]*)$");
                    std::smatch match;
                    std::regex_match(line, match, pattern);
                    if (!match.empty())
                    {
                        auto name = Trim(match[1].str());
                        auto value = Trim(match[2].str());
                        if (!name.empty() && !value.empty())
                        {
                            injectedParamters.emplace(std::make_pair(name, value));
                        }
                        else
                        {
                            std::cout << "Syntax error in parameter file: line " << counter << std::endl;
                            result = ERROR_RESULT;
                        }
                    }
                    else
                    {
                        std::cout << "Syntax error in parameter file: line " << counter << std::endl;
                        result = ERROR_RESULT;
                    }
                }
            }
            paramFile.close();
        }
        catch (NET_ASAM_OPENSCENARIO::ResourceNotFoundException& e)
        {
            (void)e;
            std::cout << "paramsfile not found";
            result = ERROR_RESULT;
        }

        if (!injectedParamters.empty())
        {
            std::cout << "Used Parameters:" << std::endl;
            for (auto& injectedParamter : injectedParamters)
            {
                std::cout << "\t" + injectedParamter.first + "\t" + injectedParamter.second << std::endl;
            }
        }
    }

    if (result == ERROR_RESULT)
        return result;

#ifdef WIN32
    std::wstring winputFileName;

    if (!NET_ASAM_OPENSCENARIO::FileResourceLocator::Utf8ToWstring(inputFileName, winputFileName))
    {
        auto msg = "Conversion from utf8 string to wstring failed: " + inputFileName;
        return ERROR_RESULT;
    }
    std::ifstream inputFile(winputFileName);

#elif defined (__linux__) || defined (__APPLE__)
    std::ifstream inputFile(inputFileName);
#else
#   error "Operating system not supported."
#endif


    if (inputFile.bad() || inputFile.fail())
    {
        std::cout << "Scenario file not found '" + inputFileName + "'";
        return ERROR_RESULT;
    }

    inputFile.close();

    std::cout << "Checking '" << inputFileName << "' with standard version " << version << std::endl;

    auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(logLevel);
    auto messageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(logLevel);

    try
    {
        if (version == VERSION_1_2)
        {
            ExecuteImportParsingV1_2(inputFileName, messageLogger, catalogMessageLogger, injectedParamters);
        } else if(version == VERSION_1_1)
		{
			ExecuteImportParsingV1_1(inputFileName, messageLogger, catalogMessageLogger, injectedParamters);
		}
		else
        {
            ExecuteImportParsing(inputFileName, messageLogger, catalogMessageLogger, injectedParamters);
        }

        for (auto&& message : messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(logLevel))
        {
            auto textmarker = message.GetTextmarker();
            std::cout << NET_ASAM_OPENSCENARIO::ErrorLevelString::ToString(message.GetErrorLevel()) << ": " << message.GetMsg() << " ("
                << textmarker.GetLine() << "," << textmarker.GetColumn() << ")" << std::endl;
        }

        auto warningMessages = messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING);

        if (messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR).empty())
        {
            std::cout << "Validation succeeded with 0 errors and " << warningMessages.size() << " warnings." << std::endl;
        }
        else
        {
            auto errorMessages = messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR);
            std::cout << "Validation failed with " << errorMessages.size() << " errors and " << warningMessages.size() << " warnings." << std::endl;
            result = ERROR_RESULT;
        }

        auto catalogMessages = catalogMessageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR);
        if (!catalogMessages.empty())
        {
            std::cout << "Info from catalog referencing" << std::endl;
            std::cout << "=============================" << std::endl;
            for (auto&& message : catalogMessages)
            {
                auto textmarker = message.GetTextmarker();
                std::cout << NET_ASAM_OPENSCENARIO::ErrorLevelString::ToString(message.GetErrorLevel()) << ": (File:" << textmarker.GetFilename()
                    << ") " << message.GetMsg() << " (" << textmarker.GetLine() << "," << textmarker.GetColumn() << ")" << std::endl;
            }
        }
    }
    catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
    {
        std::cout << e.what() << std::endl;
        return ERROR_RESULT;
    }

    return result;
}

#ifdef WIN32
int wmain(int argc, wchar_t** argv)
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);

#if defined(_DEBUG)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    std::stringstream versionStream;
    versionStream << MAJORVERSION << "." << MINORVERSION << "." << PATCHNUMBER;
    const std::string kVersion = versionStream.str();
	std::stringstream hHeaderStream;
	hHeaderStream << "*ASAM OpenSCENARIO " << kVersion << " Checker(2021) *";
	const std::string kHeader = hHeaderStream.str();
    const std::string kHeaderFillString = GetFilledString(kHeader.length(), '*');

    std::cout << kHeaderFillString << std::endl;
    std::cout << kHeader << std::endl;
    std::cout << kHeaderFillString << std::endl;

    bool isCommandLineParsable = false;
    int result = SUCCESS_RESULT;

    std::string inputFileName;
    std::string paramFileName;
    std::string inputDirectoryName;
    std::string version = VERSION_1_0;

    if (argc > 1 && std::wstring(argv[1]) == L"-v")
    {
        std::cout << "Program version " << kVersion << std::endl;
        return VERSION_RESULT;
    }

    if (argc > 2 && (std::wstring(argv[1]) == L"-i" || std::wstring(argv[1]) == L"-d"))
    {
        if (std::wstring(argv[1]) == L"-i")
        {
            if (!NET_ASAM_OPENSCENARIO::FileResourceLocator::WstringToUtf8(argv[2], inputFileName))
            {
                std::cout << "wstring to string conversion failed: inputFileName " << std::endl;
                return ERROR_RESULT;
            }
        }
        else
        {
            if (!NET_ASAM_OPENSCENARIO::FileResourceLocator::WstringToUtf8(argv[2], inputDirectoryName))
            {
                std::cout << "wstring to string conversion failed: inputDirectoryName " << std::endl;
                return ERROR_RESULT;
            }
        }

        if (argc >= 5 && std::wstring(argv[3]) == L"-p")
        {
            if (!NET_ASAM_OPENSCENARIO::FileResourceLocator::WstringToUtf8(argv[4], paramFileName))
            {
                std::cout << "wstring to string conversion failed: paramFileName " << std::endl;
                return ERROR_RESULT;
            }
            if (argc == 6 && std::wstring(argv[5]) == L"-v1_1")
            {
                version = VERSION_1_1;
            }else if (argc == 6 && std::wstring(argv[5]) == L"-v1_2")
            {
				version = VERSION_1_2;
            }
        }
        else if (argc == 4 && std::wstring(argv[3]) == L"-v1_1")
        {
            version = VERSION_1_1;
        }
		else if (argc == 4 && std::wstring(argv[3]) == L"-v1_2")
		{
			version = VERSION_1_2;
		}

        isCommandLineParsable = true;
    }

    if (!isCommandLineParsable)
    {
	std::cout << "OpenScenarioChecker [[{-i <filename>|-d <dirname>} [-p <paramfilename>] [-v1_1|-v1_2]] | -v]" << std::endl;
        std::cout << "Options:" << std::endl;
        std::cout << "-i\t<filename> file to be validated" << std::endl;
        std::cout << "-d\t<directory> directory to be validated" << std::endl;
        std::cout << "-p\t<paramfilename> a file with name/value pairs. One line per name/value pair. tab separated" << std::endl;
		std::cout << "-v1_1\tUse standard version 1.1" << std::endl;
		std::cout << "-v1_2\tUse standard version 1.2" << std::endl;
		std::cout << "-v\tprint program version" << std::endl;

        return USAGE_RESULT;
    }

    if (!inputFileName.empty())
    {
        result = CheckFile(inputFileName, paramFileName, version);
    }
    else
    {
        try
        {
            NET_ASAM_OPENSCENARIO::FileResourceLocator fileLocator;
            auto filePaths = fileLocator.GetSymbolicFilenamesInSymbolicDir(inputDirectoryName);
            for (auto file : filePaths)
                result = CheckFile(file, paramFileName) == SUCCESS_RESULT ? result : ERROR_RESULT;
        }
        catch (NET_ASAM_OPENSCENARIO::ResourceNotFoundException& e)
        {
            (void)e;
            std::cout << "'" << inputDirectoryName << "' does not exists or is not a directory." << std::endl;
            result = ERROR_RESULT;
        }
    }

    return result;
}
#elif defined (__linux__) || defined (__APPLE__)
int main(int argc, char** argv)
{
    std::stringstream versionStream;
    versionStream << MAJORVERSION << "." << MINORVERSION << "." << PATCHNUMBER;
    const std::string kVersion = versionStream.str();
    const std::string kHeader = "* ASAM OpenSCENARIO 1.0 Checker (2020) *";
    const std::string kHeaderFillString = GetFilledString(kHeader.length(), '*');

    std::cout << kHeaderFillString << std::endl;
    std::cout << kHeader << std::endl;
    std::cout << kHeaderFillString << std::endl;

    bool isCommandLineParsable = false;
    int result = SUCCESS_RESULT;

    std::string inputFileName;
    std::string paramFileName;
    std::string inputDirectoryName;
    std::string version = VERSION_1_0;

    if (argc > 1 && std::string(argv[1]) == "-v")
    {
        std::cout << "Program version " << kVersion << std::endl;
        return VERSION_RESULT;
    }

    if (argc > 2 && (std::string(argv[1]) == "-i" || std::string(argv[1]) == "-d"))
    {
        if (std::string(argv[1]) == "-i")
            inputFileName = argv[2];
        else
            inputDirectoryName = argv[2];

        if (argc >= 5 && std::string(argv[3]) == "-p")
        {
            paramFileName = argv[4];
            if (argc == 6 && std::string(argv[5]) == "-v1_1")
            {
                version = VERSION_1_1;
            }else if (argc == 6 && std::string(argv[5]) == "-v1_2")
			{
				version = VERSION_1_2;
			}
        }
        else if (argc == 4 && std::string(argv[3]) == "-v1_1")
        {
            version = VERSION_1_1;
        }
		else if (argc == 4 && std::string(argv[3]) == "-v1_2")
		{
			version = VERSION_1_2;
		}

        isCommandLineParsable = true;
    }

    if (!isCommandLineParsable)
    {
        std::cout << "OpenScenarioChecker [[{-i <filename>|-d <dirname>} [-p <paramfilename>] [-v1_1|-v1_2]] | -v]" << std::endl;
        std::cout << "Options:" << std::endl;
        std::cout << "-i\t<filename> file to be validated" << std::endl;
        std::cout << "-d\t<directory> directory to be validated" << std::endl;
        std::cout << "-p\t<paramfilename> a file with name/value pairs. One line per name/value pair. tab separated" << std::endl;
		std::cout << "-v1_1\tUse standard version 1.1" << std::endl;
		std::cout << "-v1_2\tUse standard version 1.2" << std::endl;
		std::cout << "-v\tprint program version" << std::endl;

        return USAGE_RESULT;
    }

    if (!inputFileName.empty())
    {
        result = CheckFile(inputFileName, paramFileName, version);
    }
    else
    {
        try
        {
            NET_ASAM_OPENSCENARIO::FileResourceLocator fileLocator;
            auto filePaths = fileLocator.GetSymbolicFilenamesInSymbolicDir(inputDirectoryName);
            for (auto file : filePaths)
                result = CheckFile(file, paramFileName) == SUCCESS_RESULT ? result : ERROR_RESULT;
        }
        catch (NET_ASAM_OPENSCENARIO::ResourceNotFoundException& e)
        {
            (void)e;
            std::cout << "'" << inputDirectoryName << "' does not exists or is not a directory." << std::endl;
            result = ERROR_RESULT;
        }
    }

    return result;
}
#else
#   error "Operating system not supported."
#endif


