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
    
    const std::string kResultFileName = "result.txt";

public:

    TestReader(std::string& executablePath): TestBase(executablePath) {}

    bool TestImportSuccess() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + _executablePath + "/" + kInputDir + "simpleImport/simpleImport.xosc";
        command += " > "+ _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        return true;
    }

    bool TestFileNotFound() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " "testFileNotFound";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        return Assert("Scenario file not found 'testFileNotFound'" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
    }

    bool TestWithErrors() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerParamsError.xosc";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        return Assert("Validation failed with 2 errors and 0 warnings." == GetLine(kResultFileName, 10), ASSERT_LOCATION);
    }

    bool TestWrongCommandLine() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " Test ";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        return Assert("OpenScenarioChecker [[-i <filename> [-p <paramfilename>]] | -v]" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
    }

    bool TestWithParamFile() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + _executablePath + "/" + kInputDir + "params.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        auto res = Assert("\ttestBoolean\ttrue" == GetLine(kResultFileName, 5), ASSERT_LOCATION);
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
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + _executablePath + "/" + kInputDir + "paramsSyntaxError.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        return Assert("Syntax error in parameter file: line 8" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
    }

    bool TestWithParamFileSyntaxError2() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p " + _executablePath + "/" + kInputDir + "paramsSyntaxError2.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        return Assert("Syntax error in parameter file: line 5" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
    }

    bool TestWithParamFileNotFound() const
    {
        std::string command = _executablePath + "/OpenScenarioReaderV_1_0";
        command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
        command += " -p paramsNotFound.conf";
        command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
        (void) system(command.c_str());
        return Assert("paramsfile not found" == GetLine(kResultFileName, 4), ASSERT_LOCATION);
    }

};
