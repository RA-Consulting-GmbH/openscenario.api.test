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

int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    TestExamples testExamples;
    TestRangeChecker testRangeChecker;
    TestFiles testFiles;
    TestImports testImports;
    TestReader testReader;
    TestSimpleDemos testSimpleDemos;

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
    testReader.TestWithErrors();

    testSimpleDemos.TestSimpleDemo();
    testSimpleDemos.TestImportDemo();
    testSimpleDemos.TestCheckerRuleDemo();
    testSimpleDemos.TestCheckerRuleEgoDemo();

}
