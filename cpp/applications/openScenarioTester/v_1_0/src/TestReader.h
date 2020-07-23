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
#include "TestBase.h"


class TestReader : public TestBase
{
private:

    std::string version = "1.0";
    bool isDebug = false;

    int ReadOpenScenarioFile(int argc, const char** argv) const
    {
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

        try
        {
            std::string fileName(argv[2]);
            ExecuteImportParsing(fileName, catalogMessageLogger);

            std::cout << "Errors and Warnings" << std::endl;
            std::cout << "===================" << std::endl;

            for (auto&& message : _messageLogger->GetMessages())
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
public:

    void TestImportSuccess() const
    {
        const std::string kFilePath = kInputDir + "simpleImport/simpleImport.xosc";
        const char* argv[3] = { "TestReader", "-i", &kFilePath[0] };

        ReadOpenScenarioFile(3, argv);
    }

    void TestWithErrors() const
    {
        const std::string kFilePath = kInputDir + "DoubleLaneChangerParamsError.xosc";
        const char* argv[3] = { "TestReader", "-i", &kFilePath[0] };

        ReadOpenScenarioFile(3, argv);
    }

};
