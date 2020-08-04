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

#ifdef WIN32
#include <direct.h>
#define GetCwd _getcwd
#elif defined __linux__
#include <unistd.h>
#define GetCwd getcwd
#else
#error "Operating system not supported."
#endif

class TestReader : public TestBase
{
private:
    std::string _executablePath;
    const std::string kResultFileName = "result.txt";

    static std::string GetCurrentDir() 
    {
        char buff[FILENAME_MAX];
        GetCwd(buff, FILENAME_MAX);
        std::string currentWorkingDir(buff);
        return currentWorkingDir;
    }

public:
    TestReader(std::string& executablePath): _executablePath(executablePath) {}

    void TestImportSuccess() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + GetCurrentDir() + "/" + kInputDir + "simpleImport/simpleImport.xosc";
        command += " > "+ GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
    }

    void TestFileNotFound() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " "testFileNotFound";
        command += " > " + GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
        assert("Scenario file not found 'testFileNotFound'" == GetLine(kResultFileName, 4));
    }

    void TestWithErrors() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + GetCurrentDir() + "/" + kInputDir + "DoubleLaneChangerParamsError.xosc";
        command += " > " + GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
        assert("Validation failed with 2 errors and 0 warnings." == GetLine(kResultFileName, 10));
    }

    void TestWrongCommandLine() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " Test ";
        command += " > " + GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
        assert("OpenScenarioChecker [option] [-p]" == GetLine(kResultFileName, 4));
    }

    void TestWithParamFile() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + GetCurrentDir() + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + GetCurrentDir() + "/" + kInputDir + "params.conf";
        command += " > " + GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
        assert("\ttestBoolean\ttrue" == GetLine(kResultFileName, 5));
        assert("\ttestDateTime\t2018-02-24T10:00:00" == GetLine(kResultFileName, 6));
        assert("\ttestDouble\t2.0" == GetLine(kResultFileName, 7));
        assert("\ttestInteger\t2" == GetLine(kResultFileName, 8));
        assert("\ttestString\tinjected" == GetLine(kResultFileName, 9));
        assert("\ttestUnsignedInt\t2" == GetLine(kResultFileName, 10));
        assert("\ttestUnsignedShort\t2" == GetLine(kResultFileName, 11));
    }

    void TestWithParamFileSyntaxError() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + GetCurrentDir() + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + GetCurrentDir() + "/" + kInputDir + "paramsSyntaxError.conf";
        command += " > " + GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
        assert("Syntax error in parameter file: line 8" == GetLine(kResultFileName, 4));
    }

    void TestWithParamFileSyntaxError2() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + GetCurrentDir() + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + GetCurrentDir() + "/" + kInputDir + "paramsSyntaxError2.conf";
        command += " > " + GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
        assert("Syntax error in parameter file: line 5" == GetLine(kResultFileName, 4));
    }

    void TestWithParamFileNotFound() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + GetCurrentDir() + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p paramsNotFound.conf";
        command += " > " + GetCurrentDir() + "/" + kInputDir + kResultFileName;
        system(command.c_str());
        assert("paramsfile not found" == GetLine(kResultFileName, 4));
    }

};
