#pragma once
#include "TestBase.h"
#include <cassert>
#include "CatalogHelper.h"


class TestImports : public TestBase
{
private:
    static std::shared_ptr<RAC_OPENSCENARIO::ICatalogReference> GetVehicleImport(std::shared_ptr<RAC_OPENSCENARIO::IOpenScenario> openScenario, const std::string scenarioObjectName, const std::string entryName)
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
    void TestImportSuccess() 
    {
    
        try 
        {
            // ReSharper disable once CppLocalVariableMayBeConst
            auto catalogMessageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            // ReSharper disable once CppLocalVariableMayBeConst
            auto openScenario = ExecuteImportParsing(kInputDir + "simpleImport/simpleImport.xosc", catalogMessageLogger);
            // Ego parameterAssignement for maxSpeed
            auto catalogReference = GetVehicleImport(openScenario, "Ego", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            auto ref = catalogReference->GetRef();
            auto vehicleImportEgo = RAC_OPENSCENARIO::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportEgo != nullptr);
            assert(vehicleImportEgo->GetPerformance()->GetMaxSpeed() == 69.0);

            catalogReference = GetVehicleImport(openScenario, "OverTaker", "car_red");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            ref = catalogReference->GetRef();
            auto vehicleImportOvertaker = RAC_OPENSCENARIO::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportOvertaker != nullptr);
            assert(vehicleImportOvertaker->GetPerformance()->GetMaxSpeed() == 70.0);
            assert(vehicleImportOvertaker != vehicleImportEgo);

            assert(!HasErrors(_messageLogger));
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            std::cout << e.what();
        }
    }


    void TestImportWithParametersSuccess() 
    {
        try 
        {
            // ReSharper disable once CppLocalVariableMayBeConst
            auto catalogMessageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();
            // ReSharper disable once CppLocalVariableMayBeConst
            auto openScenario = ExecuteImportParsing(kInputDir + "simpleImportWithParameters/importWithParameters.xosc", catalogMessageLogger);

            // Ego parameterAssignement for maxSpeed
            auto catalogReference = GetVehicleImport(openScenario, "Ego", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            auto ref = catalogReference->GetRef();
            auto vehicleImportEgo = RAC_OPENSCENARIO::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportEgo != nullptr);
            assert(vehicleImportEgo->GetPerformance()->GetMaxSpeed() == 70.0);

            // Overtaker: Same import, different ParamterAssignements for maxSpeed
            catalogReference = GetVehicleImport(openScenario, "OverTaker", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            ref = catalogReference->GetRef();
            auto vehicleImportOvertaker = RAC_OPENSCENARIO::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportOvertaker != nullptr);
            assert(vehicleImportOvertaker->GetPerformance()->GetMaxSpeed() == 31.0);
            assert(vehicleImportOvertaker != vehicleImportEgo);

            // ThirdEntity: No ParameterAssignements => Default Value for maxSpeed
            catalogReference = GetVehicleImport(openScenario, "ThirdEntity", "car_white");
            assert(catalogReference != nullptr);
            assert(catalogReference->GetRef() != nullptr);
            ref = catalogReference->GetRef();
            auto vehicleImportThirdVehicle = RAC_OPENSCENARIO::CatalogHelper::AsVehicle(ref);
            assert(vehicleImportThirdVehicle != nullptr);
            assert(vehicleImportThirdVehicle->GetPerformance()->GetMaxSpeed() == 60.0);

            assert(!HasErrors(_messageLogger));
        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            std::cout << e.what();
        }
    }

};
