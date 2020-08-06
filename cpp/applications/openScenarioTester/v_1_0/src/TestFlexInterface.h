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
#include "XmlScenarioLoaderFactory.h"

class TestFlexInterface : public TestBase
{
public:

    TestFlexInterface(std::string& executablePath) : TestBase(executablePath) {}

    void TestExample()
    {
        auto messageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::MessageLoggerDecorator>(_messageLogger);

        // Instantiating the factory
        auto loaderFactory = NET_ASAM_OPENSCENARIO::V_1_0::XmlScenarioLoaderFactory(_executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc");

        // Creating the loader
        auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());

        // Loading
        auto openScenario = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::V_1_0::OpenScenarioImpl>(loader->Load(messageLogger));

        assert(!messageLogger->HasErrors());

        // Browse through the results
        auto fileHeader = openScenario->GetFileHeader();
        auto flexElement = fileHeader->GetOpenScenarioFlexElement();

         try 
        {
             // Date Time
            std::string expectedDateString = "2001-10-26T21:32:52";
            NET_ASAM_OPENSCENARIO::DateTime expectedDate {};
            assert(NET_ASAM_OPENSCENARIO::DateTimeParser::ToDateTime(expectedDateString, expectedDate));

            assert(expectedDate == flexElement->GetDateTimeProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__DATE));

            // Unsigned Short
            assert(flexElement->GetUnsignedShortProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR) == 0);

            // String
            assert(flexElement->GetStringProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION) == "Sample Scenario - Double Lane Changer");

            // test Enumeration
            auto speedActionDynamics = GetSpeedActionDynamics(openScenario);
            assert("step" == speedActionDynamics->GetOpenScenarioFlexElement()->GetEnumerationLiteral(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE));

            // test Unsigned integer
            auto eventPtr = GetEvent(openScenario);
            assert(2 == eventPtr->GetOpenScenarioFlexElement()->GetUnsignedIntProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT));

            // test Double
            assert(speedActionDynamics->GetOpenScenarioFlexElement()->GetDoubleProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__VALUE) == 2.0);

            // testInteger
            auto relativeLanePosition = GetRelativeLanePosition(eventPtr);
            assert(1 == relativeLanePosition->GetOpenScenarioFlexElement()->GetIntProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__D_LANE));

            // test Boolean
            auto actors = GetActors(openScenario);
            assert(!actors->GetOpenScenarioFlexElement()->GetBooleanProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES));

            // Test Proxy (Name only)
            assert(relativeLanePosition->GetOpenScenarioFlexElement()->GetStringProperty(NET_ASAM_OPENSCENARIO::V_1_0::OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF) == "Ego");

            // testParent
            assert(std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::V_1_0::IManeuver>(eventPtr->GetOpenScenarioFlexElement()->GetParentFlexElement().lock()) != nullptr);

            // test type
            assert(eventPtr->GetOpenScenarioFlexElement()->GetModelType() == "Event");

            // Exceptions
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDateTimeProperty("Test"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedShortProperty("Test"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetStringProperty("Test"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDoubleProperty("Test"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetBooleanProperty("Test"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetIntProperty("Test"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedIntProperty("Test"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetReferencedElement("Test", "Ego"); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDateTimeProperty(""); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedShortProperty(""); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetStringProperty(""); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDoubleProperty(""); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetBooleanProperty(""); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetIntProperty(""); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedIntProperty(""); });
            AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetReferencedElement("", "Ego"); });

        }
        catch(...) 
        {
            assert(false);
        }
 }

private:

    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::ITransitionDynamics> GetSpeedActionDynamics(std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IOpenScenario> openScenario) 
    {
        auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
        assert(openScenarioCategory != nullptr);
        auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();
        assert(scenarioDefinition != nullptr);
        auto storyboard = scenarioDefinition->GetStoryboard();
        assert(storyboard != nullptr);
        auto init = storyboard->GetInit();
        assert(init != nullptr);
        auto actions = init->GetActions();
        assert(actions != nullptr);
        auto privates = actions->GetPrivates();
        assert(privates.size() == 3);
        auto privateAction = privates[0];
        auto privateActions = privateAction->GetPrivateActions();
        assert(privateActions.size() == 2);
        auto speedAction = privateActions[0]->GetLongitudinalAction()->GetSpeedAction();
        return speedAction->GetSpeedActionDynamics();
 }

    // ReSharper disable once CppMemberFunctionMayBeStatic
    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IEvent> GetEvent(std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IOpenScenario> openScenario) 
    {
        auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
        auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();
        auto storyboard = scenarioDefinition->GetStoryboard();

        return storyboard->GetStories()[0]->GetActs()[0]->GetManeuverGroups()[0]->GetManeuvers()[0]->GetEvents()[0];
    }

    // ReSharper disable once CppMemberFunctionMayBeStatic
    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IRelativeLanePosition> GetRelativeLanePosition(std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IEvent> eventPtr)
    {
        return eventPtr->GetActions()[1]->GetPrivateAction()->GetRoutingAction()->GetAcquirePositionAction()->GetPosition()->GetRelativeLanePosition();
    }

    // ReSharper disable once CppMemberFunctionMayBeStatic
    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IActors> GetActors(std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IOpenScenario> openScenario) 
    {
        auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
        auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();
        auto storyboard = scenarioDefinition->GetStoryboard();
        return storyboard->GetStories()[0]->GetActs()[0]->GetManeuverGroups()[0]->GetActors();
    }

    template <typename T>
    // ReSharper disable once CppMemberFunctionMayBeStatic
    void AssertException(NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElement, T f)
    {
        bool exceptionThrown = false;
        try
        {
            f(flexElement);
        }
        catch (NET_ASAM_OPENSCENARIO::KeyNotSupportedException& e)
        {
            (void)e;
            exceptionThrown = true;
        }

        assert(exceptionThrown);
    }
};
