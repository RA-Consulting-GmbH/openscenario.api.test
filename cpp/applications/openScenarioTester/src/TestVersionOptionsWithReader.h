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
#include <xstring>

namespace NET_ASAM_OPENSCENARIO
{
		class TestVersionOptionsWithReader
		{
		protected:
			const std::string kInputDir = u8"TestResources/OpenScenarioTester/";

			std::string _executablePath;


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

			TestVersionOptionsWithReader(std::string& executablePath);
			bool TestOptionNotSetVersion1_0() const;
			bool TestOptionNotSetVersion1_1() const;
			bool TestOptionNotSetVersion1_2() const;
			bool TestOptionNotSetVersion(std::string version, std::string errorMessage) const;
			//bool TestOptionNotSetVersion1_1() const;
			//bool TestOptionNotSetVersion1_2() const;
			static bool Assert(const bool condition, const std::string fileName, const std::string function, const int lineNumber);
			std::string GetLine(std::string fileName, int lineNum) const;
		};
}
