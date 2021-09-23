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

#include "TestBaseV1_1.h"
#include "TestFilesV1_1.h"

#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{
		TestFiles::TestFiles(std::string& executablePath) : TestBase(executablePath) {}
    	
		double TestFiles::epsilon = 0.001;
    	
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

		bool TestFiles::TestExpressionsSuccess()
		{
			try
			{
				ClearMessageLogger();
				auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteParsing(_executablePath + "/" + kInputDir + "DoubleLaneChangerExpressions.xosc"));
				bool res = Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);
				if (!res)
				{
					auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ERROR);
					for (auto it = filterByErrorLevelLogger.begin(); it != filterByErrorLevelLogger.end(); ++it) {
						std::cout << it->ToString() << "\n";
					}
				}
				auto privates = openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetInit()->GetActions()->GetPrivates()[0];
				double value = privates->GetPrivateActions()[0]->GetLongitudinalAction()->GetSpeedAction()->GetSpeedActionTarget()->GetAbsoluteTargetSpeed()->GetValue();
				res = res && Assert(std::abs(value - 1.0) < epsilon, ASSERT_LOCATION);
				unsigned short revMajor = openScenario->GetFileHeader()->GetRevMajor();
				res = res && Assert(revMajor == 36, ASSERT_LOCATION);
				unsigned short revMinor = openScenario->GetFileHeader()->GetRevMinor();
				res = res && Assert(revMinor == 37, ASSERT_LOCATION);
				auto worldPosition = privates->GetPrivateActions()[1]->GetTeleportAction()->GetPosition()->GetWorldPosition();
				double yPosition = worldPosition->GetY();
				res = res && Assert(std::abs(yPosition - 26.56157396722825) < epsilon, ASSERT_LOCATION);
				double xPosition = worldPosition->GetX();
				res = res && Assert(std::abs(xPosition - 65538.4) < epsilon, ASSERT_LOCATION);
				double zPosition = worldPosition->GetZ();
				res = res && Assert(std::abs(zPosition - 34) < epsilon, ASSERT_LOCATION);
				double hPosition = worldPosition->GetH();
				res = res && Assert(std::abs(hPosition - 35) < epsilon, ASSERT_LOCATION);
				auto condition = openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()
					->GetStories()[0]->GetActs()[0]->GetManeuverGroups()[0]->GetManeuvers()[0]->GetEvents()[0]->GetStartTrigger()->GetConditionGroups()[0]
					->GetConditions()[0];
				res = res && Assert(std::abs(condition->GetDelay() - 21) < epsilon, ASSERT_LOCATION);
				auto distanceCondition = condition->GetByEntityCondition()->GetEntityCondition()->GetDistanceCondition();
				res = res && Assert(std::abs(distanceCondition->GetValue() - 41) < epsilon, ASSERT_LOCATION);

				return res;
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

		bool TestFiles::TestExpressionsFailure()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerExpressionsError.xosc";
				(void) ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Value '65536.000000' cannot be converted to type 'unsignedShort'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(19, 24, kFilename)));

				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Division by zero",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(85, 69, kFilename)));

				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Division by zero",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(95, 39, kFilename)));

				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Cannot calculate square root from a negative value.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(95, 81, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Raising the value 0 to an exponent < 0 is not allowed",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(95, 61, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Raising a negative basis to an exponent that is not 0 or 1 or -1 is not allowed",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(95, 96, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Raising a negative basis to an exponent that is not 0 or 1 or -1 is not allowed",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(95, 116, kFilename)));

				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Internal Overflow (limits of internal 64 byte double value exceeded)",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(95, 131, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Internal Overflow (limits of internal 64 byte double value exceeded)",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(106, 71, kFilename)));

				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Internal Overflow (limits of internal 64 byte double value exceeded)",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(114, 40, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Syntax error in expression",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(114, 97, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Syntax error in expression near '}'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(114, 108, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Expressions are exclusively supported for numeric types. Parameter '$timeParam' is of not supported type 'dateTime'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(125, 48, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Expressions are exclusively supported for numeric types. Parameter '$stringParam' is of not supported type 'string'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(133, 36, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Expressions are exclusively supported for numeric types. Parameter '$boolParam' is of not supported type 'boolean'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(133, 60, kFilename)));


				bool result =  Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
				if (!result)
				{
					auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ERROR);
					for (auto it = filterByErrorLevelLogger.begin(); it != filterByErrorLevelLogger.end(); ++it) {
						std::cout << it->ToString() << "\n";
					}
				}
				return result;
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
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Value 'wrongDouble' cannot be parsed into 'double'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(21, 37, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter '$UnknownParameter' is not defined.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(49, 23, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Value 'wrongDouble' cannot be converted to type 'double'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(85, 46, kFilename)));

				bool result = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
				if (!result)
				{
					auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ERROR);
					for (auto it = filterByErrorLevelLogger.begin(); it != filterByErrorLevelLogger.end(); ++it) {
						std::cout << it->ToString() << "\n";
					}
				}
				return result;
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
					"Parameter type (int) does not match expected type (string). Value '23' of parameter 'testString' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(56, 25, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (string) does not match expected type (boolean). Value 'false' of parameter 'testBoolean' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(147, 44, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (unsignedShort) does not match expected type (unsignedInt). Value '1' of parameter 'testUnsignedInt' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(151, 93, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (string) does not match expected type (double). Value '1.1' of parameter 'testDouble' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(156, 82, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (unsignedInt) does not match expected type (int). Value '1' of parameter 'testInteger' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(158, 70, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (string) does not match expected type (dateTime). Value '2017-02-24T10:00:00' of parameter 'testDateTime' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(179, 50, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (unsignedInt) does not match expected type (int). Value '1' of parameter 'testInteger' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(192, 70, kFilename)));

				bool result = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
				if (!result)
				{
					auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ERROR);
					for (auto it = filterByErrorLevelLogger.begin(); it != filterByErrorLevelLogger.end(); ++it) {
						std::cout << it->ToString() << "\n";
					}
				}
				return result;
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
					"Parameter type (int) does not match expected type (boolean). Value 'false' of parameter 'testBoolean' was converted.",
					NET_ASAM_OPENSCENARIO::INFO, NET_ASAM_OPENSCENARIO::Textmarker(147, 44, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (int) does not match expected type (unsignedInt). Value '-1' of parameter 'testUnsignedInt' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(151, 93, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (string) does not match expected type (double). Value 'RRR1.1' of parameter 'testDouble' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(156, 82, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (unsignedInt) does not match expected type (int). Value '4294967295' of parameter 'testInteger' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(158, 70, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Parameter type (unsignedInt) does not match expected type (int). Value '4294967295' of parameter 'testInteger' cannot be converted.",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(192, 70, kFilename)));

				auto res = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::INFO, _messageLogger), ASSERT_LOCATION);
				res = res && Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
				if (!res)
				{
					auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ERROR);
					for (auto it = filterByErrorLevelLogger.begin(); it != filterByErrorLevelLogger.end(); ++it) {
						std::cout << it->ToString() << "\n";
					}
				}
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
