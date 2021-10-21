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

#include "TestBaseV1_0.h"
#include "TestFilesV1_0.h"
#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
	{
		TestFiles::TestFiles(std::string& executablePath) : TestBase(executablePath) {}

		bool TestFiles::TestSimpleSuccess()
		{
			try 
			{
				ClearMessageLogger();
				(void) ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc");
				return Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestNonAsciiFilePaths()
		{
			try
			{
				ClearMessageLogger();
				(void)ExecuteParsing(_executablePath + "/" + kInputDir + "nonAsciiPathßäöü/DoubleLaneChangerßäöü.xosc");
				return Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestParamsSuccess()
		{
			try 
			{
				ClearMessageLogger();
				(void) ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChangerParams.xosc");
				return Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestBomFile()
		{
			try
			{
				ClearMessageLogger();
				(void)ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChanger-utf8-BOM.xosc");
				return Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestParamsFailure()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerParamsError.xosc";
				(void) ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Value 'wrongDouble' cannot be parsed into 'double'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(21, 37, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Cannot resolve parameter 'UnknownParameter'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(49, 17, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Cannot convert 'wrongDouble' to a double. Number format error.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(85, 39, kFilename)));

				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);

			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestParamsConversionInfo()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerParamsInfo.xosc";
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (string) does not match expected type (int). Value '23' of parameter 'testString' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(56, 15, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (boolean) does not match expected type (string). Value 'false' of parameter 'testBoolean' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(147, 18, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (unsignedInt) does not match expected type (unsignedShort). Value '1' of parameter 'testUnsignedInt' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(151, 70, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (double) does not match expected type (string). Value '1.1' of parameter 'testDouble' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(156, 75, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (int) does not match expected type (unsignedInt). Value '1' of parameter 'testInteger' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(158, 63, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (dateTime) does not match expected type (string). Value '2017-02-24T10:00:00' of parameter 'testDateTime' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(179, 25, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (int) does not match expected type (unsignedInt). Value '1' of parameter 'testInteger' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(192, 63, kFilename)));

				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::INFO, _messageLogger), ASSERT_LOCATION);

			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestParamsConversion()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerParamsConversionErrors.xosc";
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Value 'false' cannot be parsed into 'integer'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(21, 44, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (boolean) does not match expected type (int). Value 'false' of parameter 'testBoolean' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(147, 18, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (unsignedInt) does not match expected type (int). Value '-1' of parameter 'testUnsignedInt' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(151, 70, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (double) does not match expected type (string). Value 'RRR1.1' of parameter 'testDouble' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(156, 75, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (int) does not match expected type (unsignedInt). Value '4294967295' of parameter 'testInteger' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(158, 63, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (int) does not match expected type (unsignedInt). Value '4294967295' of parameter 'testInteger' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(192, 63, kFilename)));

				auto res = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::INFO, _messageLogger), ASSERT_LOCATION);
				res = res && Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
				return res;

			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestUnvalidXml()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangeExtraHalf.xosc";
				(void) ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"XML-Dokumentstrukturen mÃƒÂ¯Ã‚Â¿Ã‚Â½ssen innerhalb derselben Entity beginnen und enden.",
					NET_ASAM_OPENSCENARIO::FATAL, NET_ASAM_OPENSCENARIO::Textmarker(30, 3, kFilename)));
				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::FATAL, _messageLogger), ASSERT_LOCATION);
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(true, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestUnknownElement()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangeExtraUnknownElement.xosc";
				(void) ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Unknown element 'ScenarioObject'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(50, 4, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Unknown element 'Test'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(76, 4, kFilename)));
				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestWrongAttributes()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerWrongAttributes.xosc";
				(void) ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Cannot convert 'ezert' to a double. Number format error.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(78, 58, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'TTTT' is not allowed.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(78, 72, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Cannot convert 'TEST' to a double. Number format error.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(80, 39, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Cannot convert '-56' to an unsignedInteger. Value must be in [0..4294967295].", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(138, 23, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Cannot convert '-40' to an unsignedInteger. Value must be in [0..4294967295].", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(175, 69, kFilename)));

				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestWrongEndElement()
		{
			try 
			{
				ClearMessageLogger();
				std::string filename = _executablePath + "/" + kInputDir + "DoubleLaneChangerWrongEndElement.xosc";
				(void) ExecuteParsing(filename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Elementtyp \"PrivateActions\" muss mit dem entsprechenden Endtag \"</PrivateActions>\" beendet werden.", NET_ASAM_OPENSCENARIO::FATAL, NET_ASAM_OPENSCENARIO::Textmarker(73, 12, filename)));
				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::FATAL, _messageLogger), ASSERT_LOCATION);
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(true, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestCustomCommandAction()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerCustomCommandAction.xosc";
				auto openScenarioImpl = std::dynamic_pointer_cast<IOpenScenario>(ExecuteParsing(kFilename));
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				auto res = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
				const auto kContent = openScenarioImpl->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetInit()->GetActions()->GetUserDefinedActionsAtIndex(0)->GetCustomCommandAction()->GetContent();
				res = res && Assert("\n				This is text defined  Inhalt" == kContent, ASSERT_LOCATION);
				return res;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestFiles::TestFileNotFound() const
		{
			try 
			{
				const std::string kFilename = _executablePath + "/" + kInputDir + "FileNotFound.xosc";
				(void) ExecuteParsing(kFilename);
				return true;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
		}
	}
}
