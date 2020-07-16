#pragma once
#include "TestBase.h"
#include "RangeCheckerHelper.h"
#include <cassert>
#include "ScenarioCheckerImpl.h"

class TestRangeChecker : public TestBase
{
private:
    void ApplyCheckerRules(std::shared_ptr<RAC_OPENSCENARIO::IOpenScenario> openScenario) const
    {
        auto scenarioChecker = std::make_shared<RAC_OPENSCENARIO::ScenarioCheckerImpl>();
        RAC_OPENSCENARIO::RangeCheckerHelper::AddAllRangeCheckerRules(scenarioChecker);
        scenarioChecker->CheckScenario(_messageLogger, openScenario);
    }
public:
    void TestParamsFailure() 
    {
        try 
        {
            std::string filename = kInputDir + "DoubleLaneChangerCheckerErrors.xosc";
            auto openScenario = ExecuteParsing(filename);
            ApplyCheckerRules(openScenario);
            std::vector<RAC_OPENSCENARIO::FileContentMessage> messages;


            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (maxDeceleration>=0) is violated (value: -10.000000)",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(44, 20, filename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (maxAcceleration>=0) is violated (value: -2.000000)",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(44, 57, filename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (positionZ>=0) is violated (value: -13.000000)",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(46, 22, filename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (trackWidth>=0) is violated (value: -12.000000)",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(46, 38, filename)));
            messages.push_back( RAC_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (wheelDiameter>0) is violated (value: -12.000000)",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(46, 55, filename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (maxSteering<=PI) is violated (value: 7.000000)",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(46, 75, filename)));
            messages.push_back(RAC_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (positionX>=0) is violated (value: -2.000000)",
                RAC_OPENSCENARIO::ERROR, RAC_OPENSCENARIO::Textmarker(46, 91, filename)));


            assert(AssertMessages(messages, RAC_OPENSCENARIO::ERROR, _messageLogger));

        }
        catch ( RAC_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            std::cout << e.what();
        }
    }
};
