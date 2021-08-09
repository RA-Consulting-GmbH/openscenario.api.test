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

#include "TestExamplesV1_1.h"
#include "TestRangeCheckerV1_1.h"
#include "TestFilesV1_1.h"
#include "TestImportsV1_1.h"
#include "TestReaderV1_1.h"
#include "TestSimpleDemosV1_1.h"
#include "TestVersionCheckerV1_1.h"
#include "TestFlexInterfaceV1_1.h"
#include "TestInjectedParametersV1_1.h"
#include "TestWriterApiV1_1.h"

#include "TestExamplesV1_0.h"
#include "TestRangeCheckerV1_0.h"
#include "TestFilesV1_0.h"
#include "TestImportsV1_0.h"
#include "TestReaderV1_0.h"
#include "TestSimpleDemosV1_0.h"
#include "TestVersionCheckerV1_0.h"
#include "TestFlexInterfaceV1_0.h"
#include "TestInjectedParametersV1_0.h"
#include "TestWriterApiV1_0.h"




bool TestV1_1(std::string basePath )
{
	NET_ASAM_OPENSCENARIO::v1_1::TestExamples testExamples(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestRangeChecker testRangeChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestFiles testFiles(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestImports testImports(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestReader testReader(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestSimpleDemos testSimpleDemos(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestVersionChecker testVersionChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestFlexInterface testFlexInterface(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestInjectedParameters testInjectedParameters(basePath);
	NET_ASAM_OPENSCENARIO::v1_1::TestWriterApi testWriterApi(basePath);

	auto res = testExamples.TestExample();

	res = res && testRangeChecker.TestParamsFailure();

	res = res && testFiles.TestSimpleSuccess();
	res = res && testFiles.TestParamsSuccess();
	res = res && testFiles.TestBomFile();
	res = res && testFiles.TestParamsFailure();
	res = res && testFiles.TestParamsConversionInfo();
	res = res && testFiles.TestParamsConversion();
	res = res && testFiles.TestUnvalidXml();
	res = res && testFiles.TestUnknownElement();
	res = res && testFiles.TestWrongAttributes();
	res = res && testFiles.TestWrongEndElement();
	res = res && testFiles.TestCustomCommandAction();
	res = res && testFiles.TestFileNotFound();

	res = res && testImports.TestImportSuccess();

	res = res && testImports.TestImportWithParametersSuccess();

	res = res && testReader.TestImportSuccess();
	res = res && testReader.TestDirectorySuccess();
	res = res && testReader.TestDirectoryPartlySuccess();
	res = res && testReader.TestFileNotFound();
	res = res && testReader.TestDirectoryNotFound();
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

	res = res && testWriterApi.TestSimpleSuccess();
	res = res && testWriterApi.TestParamsSuccess();
	res = res && testWriterApi.TestBomFile();

	return res;
}


bool TestV1_0(std::string basePath)
{
	NET_ASAM_OPENSCENARIO::v1_0::TestExamples testExamples(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestRangeChecker testRangeChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestFiles testFiles(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestImports testImports(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestReader testReader(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestSimpleDemos testSimpleDemos(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestVersionChecker testVersionChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestFlexInterface testFlexInterface(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestInjectedParameters testInjectedParameters(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestWriterApi testWriterApi(basePath);

	auto res = testExamples.TestExample();

	res = res && testRangeChecker.TestParamsFailure();

	res = res && testFiles.TestSimpleSuccess();
	res = res && testFiles.TestParamsSuccess();
	res = res && testFiles.TestBomFile();
	res = res && testFiles.TestParamsFailure();
	res = res && testFiles.TestParamsConversionInfo();
	res = res && testFiles.TestParamsConversion();
	res = res && testFiles.TestUnvalidXml();
	res = res && testFiles.TestUnknownElement();
	res = res && testFiles.TestWrongAttributes();
	res = res && testFiles.TestWrongEndElement();
	res = res && testFiles.TestCustomCommandAction();
	res = res && testFiles.TestFileNotFound();

	res = res && testImports.TestImportSuccess();

	res = res && testImports.TestImportWithParametersSuccess();

	res = res && testReader.TestImportSuccess();
	res = res && testReader.TestDirectorySuccess();
	res = res && testReader.TestDirectoryPartlySuccess();
	res = res && testReader.TestFileNotFound();
	res = res && testReader.TestDirectoryNotFound();
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

	res = res && testWriterApi.TestSimpleSuccess();
	res = res && testWriterApi.TestParamsSuccess();
	res = res && testWriterApi.TestBomFile();

	return res;
}

int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
	
	std::string basePath = ".";

	

	auto res = TestV1_0(basePath);
	res = res && TestV1_1(basePath);

	 if (res)
        return 0;

    return -1;
}
