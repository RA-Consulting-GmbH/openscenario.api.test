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
#ifdef __linux__
#include <sys/wait.h>
#endif
#ifdef __APPLE__
#include <sys/wait.h>
#endif

class TestReader : public TestBase
{
private:

    const std::string kResultFileName = "result.txt";

    enum RETURN_CODES
    {
        SUCCESS_RESULT = 0,
        ERROR_RESULT,
        USAGE_RESULT,
        VERSION_RESULT
    };

    static int ExecuteSystemCommand(std::string& command)
    {
#ifdef WIN32
        return system(command.c_str());
#elif defined __linux__
        auto ret = system(command.c_str());
        return WEXITSTATUS(ret);
#elif defined __APPLE__
        auto ret = system(command.c_str());
        return WEXITSTATUS(ret);
#else
#error "Operating system not supported."
#endif
    }

public:

    TestReader(std::string& executablePath): TestBase(executablePath) {}

    bool TestImportSuccess() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -i " + _executablePath + "/" + kInputDir + "simpleImport/simpleImport.xosc";
        command += " > "+ _executablePath + "/" + kInputDir + kResultFileName;
        return Assert(SUCCESS_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
    }

    bool TestDirectorySuccess() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -d " + _executablePath + "/" + kInputDir + "goodDirectory";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto temp = ExecuteSystemCommand(command);
        return Assert(SUCCESS_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
    }

    bool TestDirectoryPartlySuccess() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -d " + _executablePath + "/" + kInputDir + "badDirectory";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        return Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
    }

    bool TestFileNotFound() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -i " "testFileNotFound";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res  = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("Scenario file not found 'testFileNotFound'" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
        return res;
    }

    bool TestDirectoryNotFound() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -d " "testDirectoryNotFound";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("'testDirectoryNotFound' does not exists or is not a directory." == GetLine(kResultFileName, 4), ASSERT_LOCATION);
        return res;
    }

    bool TestWithErrors() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerParamsError.xosc";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("Validation failed with 3 errors and 0 warnings." == GetLine(kResultFileName, 11), ASSERT_LOCATION);
        return res;
    }

    bool TestWrongCommandLine() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " Test ";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res = Assert(USAGE_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("OpenScenarioChecker [[{-i <filename>|-d <dirname>} [-p <paramfilename>]] | -v]" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
        return res;
    }

    bool TestWithParamFile() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + _executablePath + "/" + kInputDir + "params.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("\ttestBoolean\ttrue" == GetLine(kResultFileName, 5), ASSERT_LOCATION);
        res = res && Assert("\ttestDateTime\t2018-02-24T10:00:00" == GetLine(kResultFileName, 6), ASSERT_LOCATION);
        res = res && Assert("\ttestDouble\t2.0" == GetLine(kResultFileName, 7), ASSERT_LOCATION);
        res = res && Assert("\ttestInteger\t2" == GetLine(kResultFileName, 8), ASSERT_LOCATION);
        res = res && Assert("\ttestString\tinjected" == GetLine(kResultFileName, 9), ASSERT_LOCATION);
        res = res && Assert("\ttestUnsignedInt\t2" == GetLine(kResultFileName, 10), ASSERT_LOCATION);
        res = res && Assert("\ttestUnsignedShort\t2" == GetLine(kResultFileName, 11), ASSERT_LOCATION);
        return res;
    }

    bool TestWithParamFileSyntaxError() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + _executablePath + "/" + kInputDir + "paramsSyntaxError.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("Syntax error in parameter file: line 8" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
        return res;
    }

    bool TestWithParamFileSyntaxError2() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + _executablePath + "/" + kInputDir + "paramsSyntaxError2.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("Syntax error in parameter file: line 5" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
        return res;
    }

    bool TestWithParamFileNotFound() const
    {
        std::string command = _executablePath + "/OpenScenarioReader";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p paramsNotFound.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        auto res = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
        res = res && Assert("paramsfile not found" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
        return res;
    }

};
