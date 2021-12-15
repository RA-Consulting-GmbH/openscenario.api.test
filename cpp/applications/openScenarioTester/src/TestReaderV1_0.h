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

#include "TestBaseV1_0.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
	{
		class TestReader : public TestBase
		{
		private:

			const std::string kResultFileName = "result.txt";

			enum RETURN_CODES
			{
				SUCCESS_RESULT = 0,
				ERROR_RESULT,
				USAGE_RESULT,
				VERSION_RESULT
			};

			static int ExecuteSystemCommand(std::string& command);

		public:

			TestReader(std::string& executablePath);

			bool TestImportSuccess() const;

			bool TestImportSuccessNonAsciiFile() const;

			bool TestDirectorySuccess() const;

			bool TestDirectoryPartlySuccess() const;

			bool TestFileNotFound() const;

			bool TestDirectoryNotFound() const;

			bool TestWithErrors() const;

			bool TestWrongCommandLine() const;

			bool TestWithParamFile() const;

			bool TestWithParamFileSyntaxError() const;

			bool TestWithParamFileSyntaxError2() const;

			bool TestWithParamFileNotFound() const;

		};
	}
}
