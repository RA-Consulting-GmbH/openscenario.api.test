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

#include "TestFlexInterfaceV1_3.h"
#include "FileResourceLocator.h"
#undef ERROR

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
	{
		TestFlexInterface::TestFlexInterface(std::string& executablePath) : TestBase(executablePath) {}

		bool TestFlexInterface::TestExample()
		{

			// Instantiating the factory
			auto loaderFactory = XmlScenarioLoaderFactory(_executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc");

			// Creating the loader
			auto loader = loaderFactory.CreateLoader(std::make_shared<NET_ASAM_OPENSCENARIO::FileResourceLocator>());

			// Loading
			auto openScenario = std::static_pointer_cast<OpenScenarioImpl>(loader->Load(_messageLogger)->GetAdapter(typeid(OpenScenarioImpl).name()));

			auto res = Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ERROR).empty(), ASSERT_LOCATION);

			// Browse through the results
			auto fileHeader = openScenario->GetFileHeader();
			auto flexElement = fileHeader->GetOpenScenarioFlexElement();

			try 
			{
				 // Date Time
				std::string expectedDateString = "2001-10-26T21:32:52";
				NET_ASAM_OPENSCENARIO::DateTime expectedDate {};
				res = res && Assert(NET_ASAM_OPENSCENARIO::DateTimeParser::ToDateTime(expectedDateString, expectedDate), ASSERT_LOCATION);
				res = res && Assert(expectedDate == flexElement->GetDateTimeProperty(OSC_CONSTANTS::ATTRIBUTE__DATE), ASSERT_LOCATION);

				// Unsigned Short
				res = res && Assert(flexElement->GetUnsignedShortProperty(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR) == 0, ASSERT_LOCATION);

				// String
				res = res && Assert(flexElement->GetStringProperty(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION) == "Sample Scenario - Double Lane Changer", ASSERT_LOCATION);

				// test Enumeration
				auto speedActionDynamics = GetSpeedActionDynamics(openScenario, res);
				res = res && Assert("step" == speedActionDynamics->GetOpenScenarioFlexElement()->GetEnumerationLiteral(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE), ASSERT_LOCATION);

				// test Unsigned integer
				auto eventPtr = GetEvent(openScenario);
				res = res && Assert(2 == eventPtr->GetOpenScenarioFlexElement()->GetUnsignedIntProperty(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT), ASSERT_LOCATION);

				// test Double
				res = res && Assert(speedActionDynamics->GetOpenScenarioFlexElement()->GetDoubleProperty(OSC_CONSTANTS::ATTRIBUTE__VALUE) == 2.0, ASSERT_LOCATION);

				// testInteger
				auto relativeLanePosition = GetRelativeLanePosition(eventPtr);
				res = res && Assert(1 == relativeLanePosition->GetOpenScenarioFlexElement()->GetIntProperty(OSC_CONSTANTS::ATTRIBUTE__D_LANE), ASSERT_LOCATION);

				// test Boolean
				auto actors = GetActors(openScenario);
				res = res && Assert(!actors->GetOpenScenarioFlexElement()->GetBooleanProperty(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES), ASSERT_LOCATION);

				// Test Proxy (Name only)
				res = res && Assert(relativeLanePosition->GetOpenScenarioFlexElement()->GetStringProperty(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF) == "Ego", ASSERT_LOCATION);

				// testParent
				res = res && Assert(std::dynamic_pointer_cast<IManeuver>(eventPtr->GetOpenScenarioFlexElement()->GetParentFlexElement().lock()) != nullptr, ASSERT_LOCATION);

				// test type
				res = res && Assert(eventPtr->GetOpenScenarioFlexElement()->GetModelType() == "Event", ASSERT_LOCATION);

				// Exceptions
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDateTimeProperty("Test"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedShortProperty("Test"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetStringProperty("Test"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDoubleProperty("Test"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetBooleanProperty("Test"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetIntProperty("Test"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedIntProperty("Test"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetReferencedElement("Test", "Ego"); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDateTimeProperty(""); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedShortProperty(""); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetStringProperty(""); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetDoubleProperty(""); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetBooleanProperty(""); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetIntProperty(""); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetUnsignedIntProperty(""); });
				res = res && AssertException(flexElement, [](NET_ASAM_OPENSCENARIO::IOpenScenarioFlexElement* flexElm) {flexElm->GetReferencedElement("", "Ego"); });

				return res;
			}
			catch(...) 
			{
				return Assert(false, ASSERT_LOCATION);
			}
		}


		std::shared_ptr<ITransitionDynamics> TestFlexInterface::GetSpeedActionDynamics(std::shared_ptr<IOpenScenario> openScenario, bool& res)
		{
			if (!res)
				return nullptr;
			auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
			res = res && Assert(openScenarioCategory != nullptr, ASSERT_LOCATION);
			auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();
			res = res && Assert(scenarioDefinition != nullptr, ASSERT_LOCATION);
			auto storyboard = scenarioDefinition->GetStoryboard();
			res = res && Assert(storyboard != nullptr, ASSERT_LOCATION);
			auto init = storyboard->GetInit();
			res = res && Assert(init != nullptr, ASSERT_LOCATION);
			auto actions = init->GetActions();
			res = res && Assert(actions != nullptr, ASSERT_LOCATION);
			const auto kPrivatesSize = actions->GetPrivatesSize();
			res = res && Assert(kPrivatesSize == 3, ASSERT_LOCATION);
			auto privateAction = actions->GetPrivatesAtIndex(0);
			const auto kPrivateActionsSize = privateAction->GetPrivateActionsSize();
			res = res && Assert(kPrivateActionsSize == 2, ASSERT_LOCATION);
			auto speedAction = privateAction->GetPrivateActionsAtIndex(0)->GetLongitudinalAction()->GetSpeedAction();
			return speedAction->GetSpeedActionDynamics();
		}

		// ReSharper disable once CppMemberFunctionMayBeStatic
		std::shared_ptr<IEvent> TestFlexInterface::GetEvent(std::shared_ptr<IOpenScenario> openScenario)
		{
			auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
			auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();
			auto storyboard = scenarioDefinition->GetStoryboard();

			return storyboard->GetStoriesAtIndex(0)->GetActsAtIndex(0)->GetManeuverGroupsAtIndex(0)->GetManeuversAtIndex(0)->GetEventsAtIndex(0);
		}

		// ReSharper disable once CppMemberFunctionMayBeStatic
		std::shared_ptr<IRelativeLanePosition> TestFlexInterface::GetRelativeLanePosition(std::shared_ptr<IEvent> eventPtr)
		{
			return eventPtr->GetActions()[1]->GetPrivateAction()->GetRoutingAction()->GetAcquirePositionAction()->GetPosition()->GetRelativeLanePosition();
		}

		// ReSharper disable once CppMemberFunctionMayBeStatic
		std::shared_ptr<IActors> TestFlexInterface::GetActors(std::shared_ptr<IOpenScenario> openScenario)
		{
			auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
			auto scenarioDefinition = openScenarioCategory->GetScenarioDefinition();
			auto storyboard = scenarioDefinition->GetStoryboard();
			return storyboard->GetStoriesAtIndex(0)->GetActsAtIndex(0)->GetManeuverGroupsAtIndex(0)->GetActors();
		}
		
	}
}