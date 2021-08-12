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
#include "TestWriterApiV1_1.h"
#include "OpenScenarioXmlExporterV1_1.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{
		TestWriterApi::TestWriterApi(std::string& executablePath): TestBase(executablePath) {}

		bool TestWriterApi::TestSimpleSuccess()
		{

			try
			{
				//Load a simple scenario file
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc";
				auto openScenarioImpl = std::dynamic_pointer_cast<IOpenScenarioWriter>(ExecuteParsing(kFilename));

				auto res =  Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				//Write out the scenario object
				auto exporter = OpenScenarioXmlExporter();
				auto xmlDoc = exporter.CreateXmlDocument(openScenarioImpl);
				const std::string kOutputFilename = _executablePath + "/" + kInputDir + "writerApiExports/DoubleLaneChangerGenerated.xosc";
				xmlDoc->SaveFile(kOutputFilename.c_str());
				res =  res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				//ReLoad the generated file and check
				openScenarioImpl = std::dynamic_pointer_cast<IOpenScenarioWriter>(ExecuteParsing(kFilename));
				res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				return res;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}


		bool TestWriterApi::TestParamsSuccess()
		{

			try
			{
				//Load a simple scenario file
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerParams.xosc";
				auto openScenarioImpl = std::dynamic_pointer_cast<IOpenScenarioWriter>(ExecuteParsing(kFilename));

				auto res = Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				//Write out the scenario object
				auto exporter = OpenScenarioXmlExporter();
				auto xmlDoc = exporter.CreateXmlDocument(openScenarioImpl);
				const std::string kOutputFilename = _executablePath + "/" + kInputDir + "writerApiExports/DoubleLaneChangerParamsGenerated.xosc";
				xmlDoc->SaveFile(kOutputFilename.c_str());
				res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				//ReLoad the generated file and check
				openScenarioImpl = std::dynamic_pointer_cast<IOpenScenarioWriter>(ExecuteParsing(kFilename));
				res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				return res;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestWriterApi::TestBomFile()
		{

			try
			{
				//Load a simple scenario file
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChanger-utf8-BOM.xosc";
				auto openScenarioImpl = std::dynamic_pointer_cast<IOpenScenarioWriter>(ExecuteParsing(kFilename));

				auto res = Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				//Write out the scenario object
				auto exporter = OpenScenarioXmlExporter();
				auto xmlDoc = exporter.CreateXmlDocument(openScenarioImpl);
				const std::string kOutputFilename = _executablePath + "/" + kInputDir + "writerApiExports/DoubleLaneChanger-utf8-BOMGenerated.xosc";
				xmlDoc->SaveFile(kOutputFilename.c_str());
				res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				//ReLoad the generated file and check
				openScenarioImpl = std::dynamic_pointer_cast<IOpenScenarioWriter>(ExecuteParsing(kFilename));
				res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				return res;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}
	}
}
