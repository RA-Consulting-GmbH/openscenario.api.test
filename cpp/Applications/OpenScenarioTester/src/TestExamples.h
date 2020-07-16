#pragma once
#include "TestBase.h"

class TestExamples: public TestBase 
{
public:
    void TestExample() const
    {
        auto msgLogger = std::dynamic_pointer_cast<RAC_OPENSCENARIO::IParserMessageLogger>(_messageLogger);
        const auto kMessageLogger = std::make_shared<RAC_OPENSCENARIO::MessageLoggerDecorator>(msgLogger);

        // Instantiating the factory
        std::string fileName = kInputDir + "DoubleLaneChanger.xosc";
        auto loaderFactory = RAC_OPENSCENARIO::XmlScenarioLoaderFactory(fileName);

        // Creating the loader
        auto loader = loaderFactory.CreateLoader(std::make_shared<RAC_OPENSCENARIO::FileResourceLocator>());

        // Loading 
        auto openScenario = loader->Load(kMessageLogger);

        //Check for errors
        if (!kMessageLogger->HasErrors())
        {
            // Browse through the results
            auto fileHeader = openScenario->GetFileHeader();
            std::cout << "Major Revision :" << fileHeader->GetRevMajor() << std::endl;
            std::cout << "Minor Revision :" << fileHeader->GetRevMinor() << std::endl;
        }

        if (!openScenario)
            return;

        auto openScenarioCategory = openScenario->GetOpenScenarioCategory();

        if (openScenarioCategory)
        {
            // This is a scenario definition, not a catalog
            auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();

            // Browse through parameter declarations
            auto parameterDeclarations = scenarioDefinition->GetParameterDeclarations();

            // Browse through roadNetwork definition
            auto roadNetwork = scenarioDefinition->GetRoadNetwork();

            // Browse through entities
            auto entities = scenarioDefinition->GetEntities();

            // Browse through storyboard
            auto storyboard = scenarioDefinition->GetStoryboard();

            // Browse through catalog locations
            auto catalogLocations = scenarioDefinition->GetCatalogLocations();

        }

        auto checkerRuleLogger = std::make_shared<RAC_OPENSCENARIO::MessageLogger>();

        // Using the adapter interface to get the checker
        auto scenarioChecker = std::static_pointer_cast<RAC_OPENSCENARIO::IScenarioChecker>( openScenario->GetAdapter(typeid(RAC_OPENSCENARIO::IScenarioChecker).name()));

        class CheckerRule: public RAC_OPENSCENARIO::ICheckerRule<RAC_OPENSCENARIO::IVehicle>
        {
        public:
            void ApplyRule(std::shared_ptr<RAC_OPENSCENARIO::IParserMessageLogger>& messageLogger, std::shared_ptr<RAC_OPENSCENARIO::IVehicle> object) override
            {
                const auto kName = object->GetName();

                // name must start with a capital letter
                if(std::regex_match(kName, std::regex("^[A-Z].*")))
                {
                    // Get the textmarker at the error
                    auto locator = std::static_pointer_cast<RAC_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(RAC_OPENSCENARIO::ILocator).name()));
                    const auto kTextmarker = locator->GetStartMarkerOfProperty(RAC_OPENSCENARIO::OSC_CONSTANTS::ATTRIBUTE__NAME);

                    // Add a message to the logger
                    auto msg = RAC_OPENSCENARIO::FileContentMessage("Name must start with a capital letter", RAC_OPENSCENARIO::ErrorLevel::ERROR, kTextmarker);
                    messageLogger->LogMessage(msg);
                }
            }
        };

        // Add a checker rule for all vehicles: E.g. Check ^whether the name starts with a capital letter
        scenarioChecker->AddVehicleCheckerRule(std::make_shared<CheckerRule>());
        // Now start the check. It is applied to all vehicles. For any checker rule violation an entry is created.
        scenarioChecker->CheckScenario(checkerRuleLogger, openScenario);

        // Iterate through violations
        for ( auto && message : checkerRuleLogger->GetMessages()) 
        {
            // e.g. display the error 
            std::cout << message.GetMsg() << std::endl;
        }
    }
};