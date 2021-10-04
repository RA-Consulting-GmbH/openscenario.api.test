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
#include "TestParameterValidationV1_1.h"

#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
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
				/*messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
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
					"Internal Overflow (limits of internal 64 bit double value exceeded)",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(95, 131, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Internal Overflow (limits of internal 64 bit double value exceeded)",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(106, 71, kFilename)));

				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Internal Overflow (limits of internal 64 bit double value exceeded)",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(114, 40, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Syntax error in expression",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(114, 97, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Syntax error in expression near '}'",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(114, 108, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Value must be numeric",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(125, 48, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
					"Value must be numeric",
					NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(133, 36, kFilename)));

				*/

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

	}
}
