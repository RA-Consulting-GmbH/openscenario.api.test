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
#elif defined __linux__
    char basePath[PATH_MAX] = "";
    realpath(basePath, argv[0]);
#else
#error "Operating system not supported."
#endif

    std::string executablePath(basePath);
    executablePath = executablePath.substr(0, executablePath.size() - 28);

    TestExamples testExamples;
    TestRangeChecker testRangeChecker;
    TestFiles testFiles;
    TestImports testImports;
    TestReader testReader(executablePath);
    TestSimpleDemos testSimpleDemos;
    TestVersionChecker testVersionChecker;
    TestFlexInterface testFlexInterface;
    TestInjectedParameters testInjectedParameters;

    testExamples.TestExample();
    testRangeChecker.TestParamsFailure();

    testFiles.TestSimpleSuccess();
    testFiles.TestParamsSuccess();
    testFiles.TestParamsFailure();
    testFiles.TestUnvalidXml();
    testFiles.TestUnknownElement();
    testFiles.TestWrongAttributes();
    testFiles.TestWrongEndElement();
    testFiles.TestCustomCommandAction();
    testFiles.TestFileNotFound();

    testImports.TestImportSuccess();
    testImports.TestImportWithParametersSuccess();

    testReader.TestImportSuccess();
    testReader.TestFileNotFound();
    testReader.TestWithErrors();
    testReader.TestWrongCommandLine();
    testReader.TestWithParamFile();
    testReader.TestWithParamFileSyntaxError();
    testReader.TestWithParamFileSyntaxError2();
    testReader.TestWithParamFileNotFound();

    testSimpleDemos.TestSimpleDemo();
    testSimpleDemos.TestImportDemo();
    testSimpleDemos.TestCheckerRuleDemo();
    testSimpleDemos.TestCheckerRuleEgoDemo();

    testVersionChecker.TestSuccess();

    testFlexInterface.TestExample();

    testInjectedParameters.TestNullInjectedParameters();
    testInjectedParameters.TestEmptyInjectedParameters();
    testInjectedParameters.TestInjectionsForSuccess();
    testInjectedParameters.TestWrongFormats();
    testInjectedParameters.TestNotDefined();
    testInjectedParameters.TestNotDefinedWithNoGlobalParameters();

}
