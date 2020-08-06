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
#include "TestBase.h"
#include <cassert>
#include "CatalogHelper.h"


class TestImports : public TestBase
{
private:
    static std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::ICatalogReference> GetVehicleImport(std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IOpenScenario> openScenario, const std::string scenarioObjectName, const std::string entryName)
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

public:

    TestImports(std::string& executablePath) : TestBase(executablePath) {}

    void TestImportSuccess() 
    {
    
        try 
        {
            // ReSharper disable once CppLocalVariableMayBeConst
            auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::MessageLogger>();
            // ReSharper disable once CppLocalVariableMayBeConst
            auto openScenario = ExecuteImportParsing(_executablePath + "/" + kInputDir + "simpleImport/simpleImport.xosc", catalogMessageLogger);
            // Ego parameterAssignement for maxSpeed
            auto catalogReference = GetVehicleImport(openScenario, "Ego", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            auto ref = catalogReference->GetRef();
            auto vehicleImportEgo = NET_ASAM_OPENSCENARIO::V_1_0::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportEgo != nullptr);
            assert(vehicleImportEgo->GetPerformance()->GetMaxSpeed() == 69.0);

            catalogReference = GetVehicleImport(openScenario, "OverTaker", "car_red");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            ref = catalogReference->GetRef();
            auto vehicleImportOvertaker = NET_ASAM_OPENSCENARIO::V_1_0::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportOvertaker != nullptr);
            assert(vehicleImportOvertaker->GetPerformance()->GetMaxSpeed() == 70.0);
            assert(vehicleImportOvertaker != vehicleImportEgo);

            assert(!HasErrors(_messageLogger));
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what();
        }
    }


    void TestImportWithParametersSuccess() 
    {
        try 
        {
            // ReSharper disable once CppLocalVariableMayBeConst
            auto catalogMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::MessageLogger>();
            // ReSharper disable once CppLocalVariableMayBeConst
            auto openScenario = ExecuteImportParsing(_executablePath + "/" + kInputDir + "simpleImportWithParameters/importWithParameters.xosc", catalogMessageLogger);

            // Ego parameterAssignement for maxSpeed
            auto catalogReference = GetVehicleImport(openScenario, "Ego", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            auto ref = catalogReference->GetRef();
            auto vehicleImportEgo = NET_ASAM_OPENSCENARIO::V_1_0::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportEgo != nullptr);
            assert(vehicleImportEgo->GetPerformance()->GetMaxSpeed() == 70.0);

            // Overtaker: Same import, different ParamterAssignements for maxSpeed
            catalogReference = GetVehicleImport(openScenario, "OverTaker", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            ref = catalogReference->GetRef();
            auto vehicleImportOvertaker = NET_ASAM_OPENSCENARIO::V_1_0::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportOvertaker != nullptr);
            assert(vehicleImportOvertaker->GetPerformance()->GetMaxSpeed() == 31.0);
            assert(vehicleImportOvertaker != vehicleImportEgo);

            // ThirdEntity: No ParameterAssignements => Default Value for maxSpeed
            catalogReference = GetVehicleImport(openScenario, "ThirdEntity", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            ref = catalogReference->GetRef();
            auto vehicleImportThirdVehicle = NET_ASAM_OPENSCENARIO::V_1_0::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportThirdVehicle != nullptr);
            assert(vehicleImportThirdVehicle->GetPerformance()->GetMaxSpeed() == 60.0);

            assert(!HasErrors(_messageLogger));
        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what();
        }
    }

};
