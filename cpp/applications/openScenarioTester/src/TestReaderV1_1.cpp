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

#include "TestReaderV1_1.h"


#ifdef WIN32
#   define DOT_SLASH ""
#elif defined (__linux__) || defined (__APPLE__)
#   include <sys/wait.h>
#   define DOT_SLASH "./"
#else
#   error "Operating system not supported."
#endif
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{
		
		int TestReader::ExecuteSystemCommand( std::string& command )
		{
	#ifdef WIN32
			return system( command.c_str() );
	#elif defined (__linux__) || defined (__APPLE__)
			auto ret = system( command.c_str() );
			return WEXITSTATUS( ret );
	#else
	#   error "Operating system not supported."
	#endif
		}

	

		TestReader::TestReader( std::string& executablePath ) : TestBase( executablePath ) {}

		bool TestReader::TestImportSuccess() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -i " + _executablePath + "/" + kInputDir + "simpleImport/simpleImport.xosc";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			return Assert( SUCCESS_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
		}

		bool TestReader::TestDirectorySuccess() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -d " + _executablePath + "/" + kInputDir + "goodDirectory";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto temp = ExecuteSystemCommand( command );
			return Assert( SUCCESS_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
		}

		bool TestReader::TestReader::TestDirectoryPartlySuccess() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -d " + _executablePath + "/" + kInputDir + "badDirectory";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			return Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
		}

		bool TestReader::TestReader::TestFileNotFound() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -i " "testFileNotFound";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "Scenario file not found 'testFileNotFound'" == GetLine( kResultFileName, 4 ), ASSERT_LOCATION );
			return res;
		}

		bool TestReader::TestDirectoryNotFound() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -d " "testDirectoryNotFound";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "'testDirectoryNotFound' does not exists or is not a directory." == GetLine( kResultFileName, 4 ), ASSERT_LOCATION );
			return res;
		}

		bool TestReader::TestWithErrors() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerParamsError.xosc";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "Validation failed with 3 errors and 1 warnings." == GetLine( kResultFileName, 12 ), ASSERT_LOCATION );
			return res;
		}

		bool TestReader::TestWrongCommandLine() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " Test ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( USAGE_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "OpenScenarioChecker [[{-i <filename>|-d <dirname>} [-p <paramfilename>] [-v1_1]] | -v]" == GetLine( kResultFileName, 4 ), ASSERT_LOCATION );
			return res;
		}

		bool TestReader::TestWithParamFile() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
			command += " -p " + _executablePath + "/" + kInputDir + "params.conf";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "\ttestBoolean\ttrue" == GetLine( kResultFileName, 5 ), ASSERT_LOCATION );
			res = res && Assert( "\ttestDateTime\t2018-02-24T10:00:00" == GetLine( kResultFileName, 6 ), ASSERT_LOCATION );
			res = res && Assert( "\ttestDouble\t2.0" == GetLine( kResultFileName, 7 ), ASSERT_LOCATION );
			res = res && Assert( "\ttestInteger\t2" == GetLine( kResultFileName, 8 ), ASSERT_LOCATION );
			res = res && Assert( "\ttestString\tinjected" == GetLine( kResultFileName, 9 ), ASSERT_LOCATION );
			res = res && Assert( "\ttestUnsignedInt\t2" == GetLine( kResultFileName, 10 ), ASSERT_LOCATION );
			res = res && Assert( "\ttestUnsignedShort\t2" == GetLine( kResultFileName, 11 ), ASSERT_LOCATION );
			return res;
		}

		bool TestReader::TestWithParamFileSyntaxError() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
			command += " -p " + _executablePath + "/" + kInputDir + "paramsSyntaxError.conf";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "Syntax error in parameter file: line 8" == GetLine( kResultFileName, 4 ), ASSERT_LOCATION );
			return res;
		}

		bool TestReader::TestWithParamFileSyntaxError2() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
			command += " -p " + _executablePath + "/" + kInputDir + "paramsSyntaxError2.conf";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "Syntax error in parameter file: line 5" == GetLine( kResultFileName, 4 ), ASSERT_LOCATION );
			return res;
		}

		bool TestReader::TestWithParamFileNotFound() const
		{
			std::string command( DOT_SLASH ); command.append( "OpenScenarioReader" );
			command += " -i " + _executablePath + "/" + kInputDir + "DoubleLaneChangerInjectedParams.xosc";
			command += " -p paramsNotFound.conf";
			command += " -v1_1 ";
			command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
			auto res = Assert( ERROR_RESULT == ExecuteSystemCommand( command ), ASSERT_LOCATION );
			res = res && Assert( "paramsfile not found" == GetLine( kResultFileName, 4 ), ASSERT_LOCATION );
			return res;
		}

	}
}
