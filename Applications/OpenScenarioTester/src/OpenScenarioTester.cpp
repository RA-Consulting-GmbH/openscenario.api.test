#include "TestExamples.h"
#include "TestRangeChecker.h"
#include "TestFiles.h"
#include "TestImports.h"
#include "TestReader.h"

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

}
