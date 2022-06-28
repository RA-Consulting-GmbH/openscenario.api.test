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
#include "TestParameterValidationV1_2.h"

#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
	{
		TestParameterValidation::TestParameterValidation(std::string& executablePath) : TestBase(executablePath) {}
    	
		double TestParameterValidation::epsilon = 0.001;
    	
		

		bool TestParameterValidation::TestValidation()
		{
			try 
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "ALKS_Scenario_4.2_1_FullyBlockingTarget_ParameterValidation.xosc";
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
		bool TestParameterValidation::TestValidationErrors()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "ALKS_Scenario_4.2_1_FullyBlockingTarget_ParameterValidationError.xosc";
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'boolean_equalTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(7, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'boolean_greaterOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(27, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'boolean_greaterThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(12, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'boolean_lessOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(32, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'boolean_lessThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(17, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'boolean_notEqualTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(22, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'dateTime_equalTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(37, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'dateTime_greaterOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(57, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'dateTime_greaterThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(42, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'dateTime_lessOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(62, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'dateTime_lessThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(47, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'dateTime_notEqualTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(52, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'double_equalTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(67, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'double_greaterOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(87, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'double_greaterThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(72, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'double_lessOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(92, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'double_lessThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(77, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'double_notEqualTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(82, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'integer_equalTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(97, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'integer_greaterOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(117, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'integer_greaterThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(102, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'integer_lessOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(122, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'integer_lessThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(107, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'integer_notEqualTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(112, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'string_equalTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(127, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'string_greaterOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(147, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'string_greaterThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(132, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'string_lessOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(152, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'string_lessThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(137, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'string_notEqualTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(142, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedInt_equalTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(157, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedInt_greaterOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(177, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedInt_greaterThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(162, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedInt_lessOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(182, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedInt_lessThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(167, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedInt_notEqualTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(172, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedShort_equalTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(187, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedShort_greaterOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(207, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedShort_greaterThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(192, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedShort_lessOrEqual' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(212, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedShort_lessThan' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(197, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'unsignedShort_notEqualTo' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(202, 1, kFilename)));

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
		bool TestParameterValidation::TestValidationWrongDataTypes()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "ALKS_Scenario_4.2_1_FullyBlockingTarget_ParameterValidationWrongDataTypes.xosc";
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'wrong_dateTime' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(12, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'wrong_boolean' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(7, 1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'wrong_double' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(17,1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'wrong_integer' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(22,1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'wrong_unsignedInt' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(27,1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter validation with value constraint groups for parameter 'wrong_unsignedShort' fail.", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(32,1, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value of constraint for parameter 'wrong_dateTime' cannot be converted to 'dateTime' (wrongDateTime).", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(14, 39, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value of constraint for parameter 'wrong_boolean' cannot be converted to 'boolean' (wrongBoolean).", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(9, 39, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value of constraint for parameter 'wrong_double' cannot be converted to 'double' (wrongDouble).", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(19,39, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value of constraint for parameter 'wrong_integer' cannot be converted to 'int' (wrongInt).", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(24,39, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value of constraint for parameter 'wrong_unsignedInt' cannot be converted to 'unsignedInt' (wrongUnsignedInt).", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(29,39, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Value of constraint for parameter 'wrong_unsignedShort' cannot be converted to 'unsignedShort' (wrongUnsignedShort).", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(34,39, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter 'wrong_boolean_paramValue' cannot be converted into type 'boolean' ('wrongBoolean').", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(37, 79, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter 'wrong_dateTime_paramValue' cannot be converted into type 'dateTime' ('wrongDateTime').", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(42, 81, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter 'wrong_double_paramValue' cannot be converted into type 'double' ('wrongDouble').", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(47, 77, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter 'wrong_integer_paramValue' cannot be converted into type 'integer' ('wrongInt').", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(52, 79, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter 'wrong_unsignedInt_paramValue' cannot be converted into type 'unsignedInt' ('wrongUnsignedInt').", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(57, 87, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Parameter 'wrong_unsignedShort_paramValue' cannot be converted into type 'unsignedShort' ('wrongUnsignedShort').", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(62, 91, kFilename)));


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
