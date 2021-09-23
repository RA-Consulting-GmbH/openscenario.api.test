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

	auto result = true;
	
	/*result = testExamples.TestExample() && result;

	result = testRangeChecker.TestParamsFailure() && result;

	result = testFiles.TestSimpleSuccess() && result;
	result = testFiles.TestParamsSuccess() && result;*/
	result = testFiles.TestExpressionsSuccess() && result;
	result = testFiles.TestExpressionsFailure() && result;
	result = testFiles.TestBomFile() && result;
	result = testFiles.TestParamsFailure() && result;
	result = testFiles.TestParamsConversionInfo() && result;
	result = testFiles.TestParamsConversion() && result;
	result = testFiles.TestUnvalidXml() && result;
	result = testFiles.TestUnknownElement() && result;
	result = testFiles.TestWrongAttributes() && result;
	result = testFiles.TestWrongEndElement() && result;
	result = testFiles.TestCustomCommandAction() && result;
	result = testFiles.TestFileNotFound() && result;

	result = testImports.TestImportSuccess() && result;

	result = testImports.TestImportWithParametersSuccess() && result;

	result = testReader.TestImportSuccess() && result;
	result = testReader.TestDirectorySuccess() && result;
	result = testReader.TestDirectoryPartlySuccess() && result;
	result = testReader.TestFileNotFound() && result;
	result = testReader.TestDirectoryNotFound() && result;
	result = testReader.TestWithErrors() && result;
	result = testReader.TestWrongCommandLine() && result;
	result = testReader.TestWithParamFile() && result;
	result = testReader.TestWithParamFileSyntaxError() && result;
	result = testReader.TestWithParamFileSyntaxError2() && result;
	result = testReader.TestWithParamFileNotFound() && result;

	result = testSimpleDemos.TestSimpleDemo() && result;
	result = testSimpleDemos.TestImportDemo() && result;
	result = testSimpleDemos.TestCheckerRuleDemo() && result;
	result = testSimpleDemos.TestCheckerRuleEgoDemo() && result;

	result = testVersionChecker.TestSuccess() && result;

	result = testFlexInterface.TestExample() && result;

	result = testInjectedParameters.TestNullInjectedParameters() && result;
	result = testInjectedParameters.TestEmptyInjectedParameters() && result;
	result = testInjectedParameters.TestInjectionsForSuccess() && result;
	result = testInjectedParameters.TestWrongFormats() && result;
	result = testInjectedParameters.TestNotDefined() && result;
	result = testInjectedParameters.TestNotDefinedWithNoGlobalParameters() && result;

	result = testWriterApi.TestSimpleSuccess() && result;
	result = testWriterApi.TestParamsSuccess() && result;
	result = testWriterApi.TestBomFile() && result;

	return result;
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

	bool result = true;
	
	result = testExamples.TestExample() && result;

	result = testRangeChecker.TestParamsFailure() && result;

	result = testFiles.TestSimpleSuccess() && result;
	result = testFiles.TestParamsSuccess() && result;
	result = testFiles.TestBomFile() && result;
	result = testFiles.TestParamsFailure() && result;
	result = testFiles.TestParamsConversionInfo() && result;
	result = testFiles.TestParamsConversion() && result;
	result = testFiles.TestUnvalidXml() && result;
	result = testFiles.TestUnknownElement() && result;
	result = testFiles.TestWrongAttributes() && result;
	result = testFiles.TestWrongEndElement() && result;
	result = testFiles.TestCustomCommandAction() && result;
	result = testFiles.TestFileNotFound() && result;

	result = testImports.TestImportSuccess() && result;

	result = testImports.TestImportWithParametersSuccess() && result;

	result = testReader.TestImportSuccess() && result;
	result = testReader.TestDirectorySuccess() && result;
	result = testReader.TestDirectoryPartlySuccess() && result;
	result = testReader.TestFileNotFound() && result;
	result = testReader.TestDirectoryNotFound() && result;
	result = testReader.TestWithErrors() && result;
	result = testReader.TestWrongCommandLine() && result;
	result = testReader.TestWithParamFile() && result;
	result = testReader.TestWithParamFileSyntaxError() && result;
	result = testReader.TestWithParamFileSyntaxError2() && result;
	result = testReader.TestWithParamFileNotFound() && result;

	result = testSimpleDemos.TestSimpleDemo() && result;
	result = testSimpleDemos.TestImportDemo() && result;
	result = testSimpleDemos.TestCheckerRuleDemo() && result;
	result = testSimpleDemos.TestCheckerRuleEgoDemo() && result;

	result = testVersionChecker.TestSuccess() && result;

	result = testFlexInterface.TestExample() && result;

	result = testInjectedParameters.TestNullInjectedParameters() && result;
	result = testInjectedParameters.TestEmptyInjectedParameters() && result;
	result = testInjectedParameters.TestInjectionsForSuccess() && result;
	result = testInjectedParameters.TestWrongFormats() && result;
	result = testInjectedParameters.TestNotDefined() && result;
	result = testInjectedParameters.TestNotDefinedWithNoGlobalParameters() && result;

	result = testWriterApi.TestSimpleSuccess() && result;
	result = testWriterApi.TestParamsSuccess() && result;
	result = testWriterApi.TestBomFile() && result;

	return result;
}

int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
	
	std::string basePath = ".";

	

	auto result = TestV1_1(basePath);
	result = TestV1_0(basePath) && result;

	 if (result)
        return 0;

    return -1;
}
