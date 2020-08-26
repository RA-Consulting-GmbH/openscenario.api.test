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

#include "TestExamples.h"
#include "TestRangeChecker.h"
#include "TestFiles.h"
#include "TestImports.h"
#include "TestReader.h"
#include "TestSimpleDemos.h"
#include "TestVersionChecker.h"
#include "TestFlexInterface.h"
#include "TestInjectedParameters.h"

int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

#ifdef WIN32
    char basePath[_MAX_PATH] = "";
    _fullpath(basePath, argv[0], sizeof(basePath));
    std::string executablePath(basePath);
    executablePath = executablePath.substr(0, executablePath.size() - 28);
#elif defined __linux__
    char basePath[PATH_MAX] = "";
    realpath(argv[0], basePath);
    std::string executablePath(basePath);
    auto endPos = executablePath.find_last_of('/') != std::string::npos ? executablePath.find_last_of('/') : executablePath.size();
    executablePath = executablePath.substr(0, endPos);
#else
#error "Operating system not supported."
#endif

    TestExamples testExamples(executablePath);
    TestRangeChecker testRangeChecker(executablePath);
    TestFiles testFiles(executablePath);
    TestImports testImports(executablePath);
    TestReader testReader(executablePath);
    TestSimpleDemos testSimpleDemos(executablePath);
    TestVersionChecker testVersionChecker(executablePath);
    TestFlexInterface testFlexInterface(executablePath);
    TestInjectedParameters testInjectedParameters(executablePath);

    auto res = testExamples.TestExample();

    res = res && testRangeChecker.TestParamsFailure();

    res = res && testFiles.TestSimpleSuccess();
    res = res && testFiles.TestParamsSuccess();
    res = res && testFiles.TestParamsFailure();
    res = res && testFiles.TestUnvalidXml();
    res = res && testFiles.TestUnknownElement();
    res = res && testFiles.TestWrongAttributes();
    res = res && testFiles.TestWrongEndElement();
    res = res && testFiles.TestCustomCommandAction();
    res = res && testFiles.TestFileNotFound();

    res = res && testImports.TestImportSuccess();
    res = res && testImports.TestImportWithParametersSuccess();

    res = res && testReader.TestImportSuccess();
    res = res && testReader.TestFileNotFound();
    res = res && testReader.TestWithErrors();
    res = res && testReader.TestWrongCommandLine();
    res = res && testReader.TestWithParamFile();
    res = res && testReader.TestWithParamFileSyntaxError();
    res = res && testReader.TestWithParamFileSyntaxError2();
    res = res && testReader.TestWithParamFileNotFound();

    res = res && testSimpleDemos.TestSimpleDemo();
    res = res && testSimpleDemos.TestImportDemo();
    res = res && testSimpleDemos.TestCheckerRuleDemo();
    res = res && testSimpleDemos.TestCheckerRuleEgoDemo();

    res = res && testVersionChecker.TestSuccess();

    res = res && testFlexInterface.TestExample();

    res = res && testInjectedParameters.TestNullInjectedParameters();
    res = res && testInjectedParameters.TestEmptyInjectedParameters();
    res = res && testInjectedParameters.TestInjectionsForSuccess();
    res = res && testInjectedParameters.TestWrongFormats();
    res = res && testInjectedParameters.TestNotDefined();
    res = res && testInjectedParameters.TestNotDefinedWithNoGlobalParameters();

    if (res)
        return 0;

    return -1;
}
