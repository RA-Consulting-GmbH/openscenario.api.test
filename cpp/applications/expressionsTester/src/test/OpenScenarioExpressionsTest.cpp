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

#ifdef WIN32
#   include <direct.h>
#   define GETCWD _getcwd
#   define OS_PATH_MAX _MAX_PATH
#elif defined (__linux__) || defined (__APPLE__)
#   include <unistd.h>
#   define GETCWD getcwd
#   define OS_PATH_MAX PATH_MAX
#else
#   error "Operating system not supported."
#endif

#include "MemLeakDetection.h"
#include <cstdio>
#include <vector>
#include <locale>
#include <iostream>


#include "OscExprEvaluator.h"
#include "OscExprEvaluatorFactory.h"
#include "SemanticException.h"
#include "TestDescription.h"
#include "TestSpecificationReader.h"
#include "TestSpecificationRunner.h"

#pragma execution_character_set("utf-8")

class MainErrorLogger : public TestLogger {

	public:
		void log(std::string message) const override

		{
			std::cout << message;
		}

	};
	

int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    std::shared_ptr<std::vector<std::shared_ptr<TestSpecification>>> tests = TestSpecificationReader::readFromJson(TestDescription::json);
	int result = 0;
	try
	{
		const MainErrorLogger errorLogger;
		result = TestSpecificationRunner::runTests(tests, errorLogger);
	}
	catch (std::exception& e)
	{
		result = 1;
	}
	return result;


}
