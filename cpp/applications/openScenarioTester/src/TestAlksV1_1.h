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
#include "TestBaseV1_1.h"
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{
		class TestAlks : public TestBase
		{

		private :
			static std::string pathNameCatalogs;
			static std::string pathNameScenarios;
			static std::string pathNameVariations;
			bool TestFiles(std::vector<std::string> scenarioFiles, std::string path);

		public:

			TestAlks(std::string& executablePath);

			bool TestScenarios();

			bool TestCatalogs();
			
			bool TestVariations();

			
		};
	}
}
