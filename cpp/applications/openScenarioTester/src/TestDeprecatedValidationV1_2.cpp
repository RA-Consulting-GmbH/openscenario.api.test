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
#include "TestDeprecatedValidationV1_2.h"

#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
	{
		TestDeprecatedValidation::TestDeprecatedValidation(std::string& executablePath) : TestBase(executablePath) {}
		
		bool TestDeprecatedValidation::TestValidation()
		{
			try
			{
				ClearMessageLogger();
				const std::string kFilename = _executablePath + "/" + kInputDir + "DoubleLaneChangerdeprecationValidationErrors1_2.xosc";
				(void)ExecuteParsing(kFilename);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'height' is deprecated and must not be used with property 'altitude'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(137, 16, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'latitude' is deprecated and must not be used with property 'latitudeDeg'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(145, 16, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'longitude' is deprecated and must not be used with property 'longitudeDeg'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(153, 16, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'value' is deprecated and must not be used with property 'brakeInput'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(161, 18, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'number' is deprecated and must not be used with property 'gear'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(170, 18, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'value' is deprecated and must not be used with property 'brakeInput'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(179, 18, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'intensity' is deprecated and must not be used with property 'illuminance'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(79, 16, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'velocity' is deprecated and must not be used with property 'speed'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(257, 18, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'velocity' is deprecated and must not be used with property 'initialSpeedRange'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(276, 18, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'cloudState' is deprecated and must not be used with property 'fractionalCloudCover'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(78, 14, kFilename)));
				// From 1.1
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'curvatureDot' is deprecated and must not be used with property 'isSetCurvaturePrime'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(298, 26, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'alongRoute' is deprecated and must not be used with property 'coordinateSystem'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(323, 25, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'alongRoute' is deprecated and must not be used with property 'relativeDistanceType'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(323, 25, kFilename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Property 'intensity' is deprecated and must not be used with property 'precipitationIntensity'", NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(80, 16, kFilename)));

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
