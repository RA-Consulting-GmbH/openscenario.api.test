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

#include <iostream>

#include "MessageLogger.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ApiClassImpl.h"
#include "XmlScenarioImportLoaderFactory.h"
#include "ScenarioLoaderException.h"
#include "FileResourceLocator.h" //TODO:: NEEDS TO BE LAST BECAUSE OF FILESYSTEM.HPP WHY?

/**
 * Executable for checking an OpenScenario file.
 * <ul>
 * <li> Reading the file
 * <li> Resolving the parameters
 * <li> Resolving the catalog references
 * <li> Checking all type ranges that differ from the ones of the default type (e.g. positiv doubles)
 * </ul>
 *
 */

static std::string version = "1.0";
static bool isDebug = false;

std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl> ExecuteImportParsing(std::string& filename, std::shared_ptr<NET_ASAM_OPENSCENARIO::MessageLogger>& messageLogger, std::shared_ptr <NET_ASAM_OPENSCENARIO::IParserMessageLogger> catalogMessageLogger)
{
    auto loaderFactory = NET_ASAM_OPENSCENARIO::V_1_0::XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);
    auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());
    return std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl>(loader->Load(messageLogger));
}


int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    // 1. input file
    // 2. option skip parameter checking -P
    // 3. option skip import -Y
    // 4. option skip range checker rules -R
    // 5. Version -v
    // 8. print import errors
    std::cout << "**************************************" << std::endl;
    std::cout << " ASAM OpenSCENARIO 1.0 Checker (2020) " << std::endl;
    std::cout << "**************************************" << std::endl;

    if (argc == 1)
    {
        std::cout << "OpenScenarioChecker [option]" << std::endl;
        std::cout << "Options:" << std::endl;
        std::cout << "-i\tinput file name" << std::endl;
        std::cout << "-v\tprogram version" << std::endl;
        return 0;
    }

    if (std::string(argv[1]) == "-v")
    {
        std::cout << "Program version " << version << std::endl;
        return 0;
    }

    if (std::string(argv[1]) != "-i" || argc < 3)
        return -1;

    std::cout << "Checking '" << argv[2] << "'" << std::endl;

    auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::MessageLogger>();
    auto messageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::MessageLogger>();

    try
    {
        std::string fileName(argv[2]);
        ExecuteImportParsing(fileName, messageLogger, catalogMessageLogger);

        std::cout << "Errors and Warnings" << std::endl;
        std::cout << "===================" << std::endl;

        for (auto&& message : messageLogger->GetMessages())
        {
            auto textmarker = message.GetTextmarker();
            if (message.GetErrorLevel() != NET_ASAM_OPENSCENARIO::ErrorLevel::DEBUG || isDebug)
            {
                std::cout << NET_ASAM_OPENSCENARIO::ErrorLevelString::ToString(message.GetErrorLevel());
                std::cout << ": " + message.GetMsg();
                std::cout << " (" << textmarker.GetLine() << "," << textmarker.GetColumn() << ")";
                std::cout << std::endl;
            }
        }

        if (!catalogMessageLogger->GetMessages().empty() && isDebug)
        {
            std::cout << "Info from catalog referencing" << std::endl;
            std::cout << "=============================" << std::endl;

            for (auto&& message : catalogMessageLogger->GetMessages())
            {
                auto textmarker = message.GetTextmarker();
                if (message.GetErrorLevel() != NET_ASAM_OPENSCENARIO::ErrorLevel::DEBUG || isDebug)
                {
                    std::cout << NET_ASAM_OPENSCENARIO::ErrorLevelString::ToString(NET_ASAM_OPENSCENARIO::ErrorLevel::INFO);
                    std::cout << ": (File:" + textmarker.GetFilename() + ") ";
                    std::cout << message.GetMsg();
                    std::cout << " (" << textmarker.GetLine() << "," << textmarker.GetColumn() << ")";
                    std::cout << std::endl;
                }
            }
        }
    }
    catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
    {
        (void)e;
        std::cout << "Internal error Ocuured" << std::endl;
        return -1;
    }
    return 0;
}
