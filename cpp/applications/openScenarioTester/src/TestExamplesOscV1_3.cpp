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

#include "TestBaseV1_3.h"
#include "TestExamplesOscV1_3.h"

#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
	{
		TestExamplesOsc::TestExamplesOsc(std::string& executablePath)  : TestBase(executablePath) {}
    	

		std::string TestExamplesOsc::pathNameScenarios = "exampleFilesVersion1_3";;
		

		bool TestExamplesOsc::TestFiles(std::vector<std::string> scenarioFiles, std::string path)
		{
			bool res = true;

			try 
			{
				for (auto filename : scenarioFiles)
				{
					ClearMessageLogger();
					auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::INFO);
					// ReSharper disable once CppLocalVariableMayBeConst
					auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteImportParsing(_executablePath + "/" + kInputDir + path + "/" + filename, catalogMessageLogger));

					auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR);
					if(! Assert(filterByErrorLevelLogger.empty(), ASSERT_LOCATION))
					{ 
						for (auto it = filterByErrorLevelLogger.begin(); it != filterByErrorLevelLogger.end(); ++it) {
							std::cout << it->ToString() << "\n";
						}
						res = false;
					}
					
				}
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what() << std::endl;
				return Assert(false, ASSERT_LOCATION);
			}
			return res;
		}

		bool TestExamplesOsc::TestScenarios()
		{
			std::vector<std::string> scenarioFiles =
			{
				"CutIn.xosc",
				"DoubleLaneChanger.xosc",
				"EndOfTrafficJam.xosc",
				"EndofTrafficJamNeighboringLaneOccupied.xosc",
				"EndOfTrafficJamParameterSet.xosc",
				"FastOvertakeWithReInitialization.xosc",
				"Overtaker.xosc",
				"SequentialEvents_0-100-0kph_Explicit.xosc",
				"SequentialEvents_0-100-0kph_Implicit.xosc",
				"SimpleOvertake.xosc",
				"SlowPrecedingVehicle.xosc",
				"SlowPrecedingVehicleDeterministicParameterSet.xosc",
				"SlowPrecedingVehicleStochasticParameterSet.xosc",
				"SynchronizedArrivalToIntersection.xosc",
				"TrafficJam.xosc",
				"FollowTrajectory_Nurbs.xosc",
			};
			return TestFiles(scenarioFiles, pathNameScenarios);
		}

		
		
	}
}
