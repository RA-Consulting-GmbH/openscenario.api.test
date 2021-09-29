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
#include "TestAlksV1_1.h"

#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{
		TestAlks::TestAlks(std::string& executablePath) : TestBase(executablePath) {}
    	
		std::string TestAlks::pathNameCatalogs = "alks/Catalogs";
		std::string TestAlks::pathNameScenarios = "alks/Scenarios";;
		std::string TestAlks::pathNameVariations = "alks/Variations";


		bool TestAlks::TestFiles(std::vector<std::string> scenarioFiles, std::string path)
		{
			bool res = true;

			try 
			{
				for (auto filename : scenarioFiles)
				{
					ClearMessageLogger();
					auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::INFO);
					// ReSharper disable once CppLocalVariableMayBeConst
					auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteImportParsing(_executablePath + "/" + kInputDir + "/" + path + "/" + filename, catalogMessageLogger));

					auto filterByErrorLevelLogger = _messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::WARNING);
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

		bool TestAlks::TestScenarios()
		{
			std::vector<std::string> scenarioFiles =
			{
				"ALKS_Scenario_4.1_1_FreeDriving_TEMPLATE.xosc",
				"ALKS_Scenario_4.1_2_SwervingLeadVehicle_TEMPLATE.xosc",
				"ALKS_Scenario_4.1_3_SideVehicle_TEMPLATE.xosc",
				"ALKS_Scenario_4.2_1_FullyBlockingTarget_TEMPLATE.xosc",
				"ALKS_Scenario_4.2_2_PartiallyBlockingTarget_TEMPLATE.xosc",
				"ALKS_Scenario_4.2_3_CrossingPedestrian_TEMPLATE.xosc",
				"ALKS_Scenario_4.2_4_MultipleBlockingTargets_TEMPLATE.xosc",
				"ALKS_Scenario_4.3_1_FollowLeadVehicleComfortable_TEMPLATE.xosc",
				"ALKS_Scenario_4.3_2_FollowLeadVehicleEmergencyBrake_TEMPLATE.xosc",
				"ALKS_Scenario_4.4_1_CutInNoCollision_TEMPLATE.xosc",
				"ALKS_Scenario_4.4_2_CutInUnavoidableCollision_TEMPLATE.xosc",
				"ALKS_Scenario_4.5_1_CutOutFullyBlocking_TEMPLATE.xosc",
				"ALKS_Scenario_4.5_2_CutOutMultipleBlockingTargets_TEMPLATE.xosc",
				"ALKS_Scenario_4.6_1_ForwardDetectionRange_TEMPLATE.xosc",
				"ALKS_Scenario_4.6_2_LateralDetectionRange_TEMPLATE.xosc",
			};
			return TestFiles(scenarioFiles, pathNameScenarios);
		}

		bool TestAlks::TestCatalogs()
		{
			std::vector<std::string> scenarioFiles =
			{
				"Controllers/ControllerCatalog.xosc",
				"MiscObjects/MiscObjectCatalog.xosc",
				"Pedestrians/PedestrianCatalog.xosc",
				"Vehicles/VehicleCatalog.xosc"
			};
			return TestFiles(scenarioFiles, pathNameCatalogs);
		}

		bool TestAlks::TestVariations()
		{
			std::vector<std::string> scenarioFiles =
			{
				"ALKS_Scenario_4.1_1_FreeDriving_Variation.xosc",
				"ALKS_Scenario_4.1_2_SwervingLeadVehicle_Variation.xosc",
				"ALKS_Scenario_4.1_3_SideVehicle_Variation.xosc",
				"ALKS_Scenario_4.2_1_FullyBlockingTarget_Variation.xosc",
				"ALKS_Scenario_4.2_2_PartiallyBlockingTarget_Variation.xosc",
				"ALKS_Scenario_4.2_3_CrossingPedestrian_Variation.xosc",
				"ALKS_Scenario_4.2_4_MultipleBlockingTargets_Variation.xosc",
				"ALKS_Scenario_4.3_1_FollowLeadVehicleComfortable_Variation.xosc",
				"ALKS_Scenario_4.3_2_FollowLeadVehicleEmergencyBrake_Variation.xosc",
				"ALKS_Scenario_4.3_2_FollowLeadVehicleEmergencyBrake_Variation_Reference.xosc",
				"ALKS_Scenario_4.4_1_CutInNoCollision_Variation.xosc",
				"ALKS_Scenario_4.5_1_CutOutFullyBlocking_Variation.xosc",
				"ALKS_Scenario_4.5_2_CutOutMultipleBlockingTargets_Variation.xosc",
				"ALKS_Scenario_4.6_1_ForwardDetectionRange_Variation.xosc",
				"ALKS_Scenario_4.6_2_LateralDetectionRange_Variation.xosc",
			};
			return TestFiles(scenarioFiles, pathNameVariations);
		}

		
	}
}
