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

#include "TestVersionOptionsWithReader.h"

#include <iostream>

#include "FileResourceLocator.h"

#define ASSERT_LOCATION __FILE__, __func__, __LINE__
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
	TestVersionOptionsWithReader::TestVersionOptionsWithReader(std::string& executablePath) : _executablePath(executablePath) {}

	int TestVersionOptionsWithReader::ExecuteSystemCommand(std::string& command)
	{
#ifdef WIN32
		std::wstring wstringCommand;
		if (!FileResourceLocator::Utf8ToWstring(command, wstringCommand)) { return -1; }
		return _wsystem(wstringCommand.c_str());
#elif defined (__linux__) || defined (__APPLE__)
		auto ret = system(command.c_str());
		return WEXITSTATUS(ret);
#else
#   error "Operating system not supported."
#endif
	}

	bool TestVersionOptionsWithReader::TestOptionNotSetVersion1_0() const
	{
		return TestOptionNotSetVersion("1_0", "Standard Version 1.0 is not supported. Compile Reader with SUPPORT_OSC_1_0 option.");
	}

	bool TestVersionOptionsWithReader::TestOptionNotSetVersion1_1() const
	{
		return TestOptionNotSetVersion("1_1", "Standard Version 1.1 is not supported. Compile Reader with SUPPORT_OSC_1_1 option.");
	}
	
	bool TestVersionOptionsWithReader::TestOptionNotSetVersion1_2() const
	{
		return TestOptionNotSetVersion("1_2", "Standard Version 1.2 is not supported. Compile Reader with SUPPORT_OSC_1_2 option.");
	}

	bool TestVersionOptionsWithReader::TestOptionNotSetVersion(std::string version, std::string errorMessage) const
	{
		std::string command(DOT_SLASH); command.append("OpenScenarioReader");
		command += " -i " + _executablePath + "/" + kInputDir + "simpleImport/simpleImport.xosc";
		command += " -v"+version+" ";
		command += " > " + _executablePath + "/" + kInputDir + kResultFileName;
		auto res = Assert(ERROR_RESULT == ExecuteSystemCommand(command), ASSERT_LOCATION);
		res = res && Assert(errorMessage == GetLine(kResultFileName, 5), ASSERT_LOCATION);
		return res;
	}

	bool TestVersionOptionsWithReader::Assert(const bool condition, const std::string fileName, const std::string function, const int lineNumber)
	{
		if (!condition)
			std::cout << "Assert failed in file " << fileName << " at line " << lineNumber << " " << function << std::endl;
		return condition;
	}

	std::string TestVersionOptionsWithReader::GetLine(const std::string fileName, const int lineNum) const
	{
#ifdef WIN32
		std::wstring path;
		if (!FileResourceLocator::Utf8ToWstring(_executablePath + "/" + kInputDir + fileName, path))
		{
			return "";
		}
		std::ifstream file(path);

#elif defined (__linux__) || defined (__APPLE__)
		std::ifstream file(_executablePath + "/" + kInputDir + fileName);
#else
#   error "Operating system not supported."
#endif
		std::string line;

		if (file.bad() || file.fail())
		{
			return "";
		}

		int counter = 0;

		while (std::getline(file, line))
		{
			counter++;
			if (counter == lineNum)
			{
				file.close();
				return line;
			}
		}
		file.close();
		return "";
	}
}
