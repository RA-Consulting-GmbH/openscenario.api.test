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
#include "TestImportsV1_0.h"
#include "CatalogHelperV1_0.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
	{
		std::shared_ptr<ICatalogReference> TestImports::GetVehicleImport(std::shared_ptr<IOpenScenario> openScenario, const std::string scenarioObjectName, const std::string entryName)
		{
			auto scenarioObjects = openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetEntities()->GetScenarioObjects();
			for (auto&& scenarioObject : scenarioObjects)
			{
				if (scenarioObject->GetName() == scenarioObjectName)
				{
					auto catalogReference = scenarioObject->GetEntityObject()->GetCatalogReference();
					if (catalogReference != nullptr && catalogReference->GetEntryName() == entryName)
					{
						return catalogReference;
					}
				}
			}
			return nullptr;
		}

		TestImports::TestImports(std::string& executablePath) : TestBase(executablePath) {}

		bool TestImports::TestImportSuccess()
		{
		
			try 
			{
				// ReSharper disable once CppLocalVariableMayBeConst
				auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::INFO);
				// ReSharper disable once CppLocalVariableMayBeConst
				auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteImportParsing(_executablePath + "/" + kInputDir + "simpleImport/simpleImport.xosc", catalogMessageLogger));
				// Ego parameterAssignement for maxSpeed
				auto catalogReference = GetVehicleImport(openScenario, "Ego", "car_white");
				auto res = Assert(catalogReference != nullptr, ASSERT_LOCATION);
				res = res && Assert(catalogReference->GetRef() != nullptr, ASSERT_LOCATION);
				auto ref = catalogReference->GetRef();
				auto vehicleImportEgo = CatalogHelper::AsVehicle(ref);
				res = res && Assert(vehicleImportEgo != nullptr, ASSERT_LOCATION);
				res = res && Assert(vehicleImportEgo->GetPerformance()->GetMaxSpeed() == 69.0, ASSERT_LOCATION);

				catalogReference = GetVehicleImport(openScenario, "OverTaker", "car_red");
				res = res && Assert(catalogReference != nullptr, ASSERT_LOCATION);
				res = res && Assert(catalogReference->GetRef() != nullptr, ASSERT_LOCATION);
				ref = catalogReference->GetRef();
				auto vehicleImportOvertaker = CatalogHelper::AsVehicle(ref);
				res = res && Assert(vehicleImportOvertaker != nullptr, ASSERT_LOCATION);
				res = res && Assert(vehicleImportOvertaker->GetPerformance()->GetMaxSpeed() == 70.0, ASSERT_LOCATION);
				res = res && Assert(vehicleImportOvertaker != vehicleImportEgo, ASSERT_LOCATION);

				res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);
				return res;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what();
				return Assert(false, ASSERT_LOCATION);
			}
		}


		bool TestImports::TestImportWithParametersSuccess()
		{
			try 
			{
				// ReSharper disable once CppLocalVariableMayBeConst
				auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::SimpleMessageLogger>(NET_ASAM_OPENSCENARIO::ERROR);
				// ReSharper disable once CppLocalVariableMayBeConst
				auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteImportParsing(_executablePath + "/" + kInputDir + "simpleImportWithParameters/importWithParameters.xosc", catalogMessageLogger));

				// Ego parameterAssignement for maxSpeed
				auto catalogReference = GetVehicleImport(openScenario, "Ego", "car_white");
				auto res = Assert(catalogReference != nullptr, ASSERT_LOCATION);
				res = res && Assert(catalogReference->GetRef() != nullptr, ASSERT_LOCATION);
				auto ref = catalogReference->GetRef();
				auto vehicleImportEgo = CatalogHelper::AsVehicle(ref);
				res = res && Assert(vehicleImportEgo != nullptr, ASSERT_LOCATION);
				auto temp = vehicleImportEgo->GetPerformance()->GetMaxSpeed();
				res = res && Assert(vehicleImportEgo->GetPerformance()->GetMaxSpeed() == 70.0, ASSERT_LOCATION);

				// Overtaker: Same import, different ParamterAssignements for maxSpeed
				catalogReference = GetVehicleImport(openScenario, "OverTaker", "car_white");
				res = res && Assert(catalogReference != nullptr, ASSERT_LOCATION);
				res = res && Assert(catalogReference->GetRef() != nullptr, ASSERT_LOCATION);
				ref = catalogReference->GetRef();
				auto vehicleImportOvertaker = CatalogHelper::AsVehicle(ref);
				res = res && Assert(vehicleImportOvertaker != nullptr, ASSERT_LOCATION);
				res = res && Assert(vehicleImportOvertaker->GetPerformance()->GetMaxSpeed() == 31.0, ASSERT_LOCATION);
				res = res && Assert(vehicleImportOvertaker != vehicleImportEgo, ASSERT_LOCATION);

				// ThirdEntity: No ParameterAssignements => Default Value for maxSpeed
				catalogReference = GetVehicleImport(openScenario, "ThirdEntity", "car_white");
				res = res && Assert(catalogReference != nullptr, ASSERT_LOCATION);
				res = res && Assert(catalogReference->GetRef() != nullptr, ASSERT_LOCATION);
				ref = catalogReference->GetRef();
				auto vehicleImportThirdVehicle = CatalogHelper::AsVehicle(ref);
				res = res && Assert(vehicleImportThirdVehicle != nullptr, ASSERT_LOCATION);
				res = res && Assert(vehicleImportThirdVehicle->GetPerformance()->GetMaxSpeed() == 60.0, ASSERT_LOCATION);

				res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

				return res;
			}
			catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
			{
				std::cout << e.what();
				return Assert(false, ASSERT_LOCATION);
			}
		}

	}
}