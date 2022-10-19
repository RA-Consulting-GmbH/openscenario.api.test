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

#include "TestBaseV1_2.h"
#include "TestVariableValidationV1_2.h"

#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
	{
		TestVariableValidation::TestVariableValidation(std::string& executablePath) : TestBase(executablePath) {}
    	
		double TestVariableValidation::epsilon = 0.001;
    	
		

		bool TestVariableValidation::TestValidation()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerVariables1_2.xosc";
				(void) ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;

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
		
		bool TestVariableValidation::TestValidationWrongDataTypes()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerVariablesWrongDataTypes1_2.xosc";
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongBoolean' cannot be parsed into 'boolean'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(23, 67, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongDateTime' cannot be parsed into 'dateTime'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(24, 69, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongDouble' cannot be parsed into 'double'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(25, 65, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongInteger' cannot be parsed into 'integer'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(26, 67, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongUnsignedInt' cannot be parsed into 'unsignedInt'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(27, 75, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongUnsignedShort' cannot be parsed into 'unsignedShort'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(28, 79, kFilename)));


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

		bool TestVariableValidation::TestVariableNotDefined()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerVariablesNotDefined1_2.xosc";
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Variable 'notDefined' is not defined.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(147, 36, kFilename)));

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

		bool TestVariableValidation::TestValidationWrongSetAction()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerVariablesWrongAction1_2.xosc";
				(void)ExecuteParsing(kFilename);  
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongBoolean' cannot be parsed into 'boolean'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(157, 35, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongDateTime' cannot be parsed into 'dateTime'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(164, 35, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongDouble' cannot be parsed into 'double'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(171, 35, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongInteger' cannot be parsed into 'integer'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(178, 35, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongUnsignedInt' cannot be parsed into 'unsignedInt'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(185, 35, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value 'wrongUnsignedShort' cannot be parsed into 'unsignedShort'.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(192, 35, kFilename)));

				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Variable 'booleanTest' must be of numeric type to use a ModifyAction.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(210, 24, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Variable 'dateTimeTest' must be of numeric type to use a ModifyAction.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(221, 24, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Variable 'stringTest' must be of numeric type to use a ModifyAction.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(232, 24, kFilename)));
				

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
	}
}
