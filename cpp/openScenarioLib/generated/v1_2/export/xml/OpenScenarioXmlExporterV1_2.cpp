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


#include <vector>
#include <map>
#include "XmlExportHelper.h"
#include "IParserMessageLogger.h"
#include "OscConstantsV1_2.h" 
#include "INamedReference.h"
#include "ApiClassImplV1_2.h"
#include "ApiClassInterfacesV1_2.h"

#include "OpenScenarioXmlExporterV1_2.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
        std::shared_ptr<tinyxml2::XMLDocument> OpenScenarioXmlExporter::CreateXmlDocument(std::shared_ptr<IOpenScenarioWriter> openScenarioWriter)
        {
            auto document = std::make_shared<tinyxml2::XMLDocument>();

            try
            {
                tinyxml2::XMLNode* root = document->NewElement("OpenSCENARIO");
                document->InsertFirstChild(root);
                FillOpenScenarioNode(document, root, openScenarioWriter);    
            }
            catch (std::exception& e)
            {
                (void)e;
                // do nothing
            }

            return document;
        }

        void OpenScenarioXmlExporter::FillAbsoluteSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteSpeedWriter> absoluteSpeedWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = absoluteSpeedWriter->GetValue();
            if (absoluteSpeedWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), absoluteSpeedWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
            const auto kSteadyState = absoluteSpeedWriter->GetWriterSteadyState();
            if (kSteadyState)
            {
				FillSteadyStateNode(document, elementNode, kSteadyState);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAbsoluteTargetLaneNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteTargetLaneWriter> absoluteTargetLaneWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = absoluteTargetLaneWriter->GetValue();
            if (absoluteTargetLaneWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), absoluteTargetLaneWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAbsoluteTargetLaneOffsetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> absoluteTargetLaneOffsetWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = absoluteTargetLaneOffsetWriter->GetValue();
            if (absoluteTargetLaneOffsetWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), absoluteTargetLaneOffsetWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAbsoluteTargetSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteTargetSpeedWriter> absoluteTargetSpeedWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = absoluteTargetSpeedWriter->GetValue();
            if (absoluteTargetSpeedWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), absoluteTargetSpeedWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAccelerationConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAccelerationConditionWriter> accelerationConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirection = accelerationConditionWriter->GetDirection();
            if (!( kDirection == DirectionalDimension::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), kDirection.GetLiteral().c_str());
            }
			else if (accelerationConditionWriter->IsDirectionParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), accelerationConditionWriter->GetParameterFromDirection().c_str());
            }
            const auto kRule = accelerationConditionWriter->GetRule();
            if (accelerationConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), accelerationConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = accelerationConditionWriter->GetValue();
            if (accelerationConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), accelerationConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAcquirePositionActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAcquirePositionActionWriter> acquirePositionActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kPosition = acquirePositionActionWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillActNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActWriter> actWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = actWriter->GetName();
            if (actWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), actWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kManeuverGroups = actWriter->GetWriterManeuverGroups();
            if (!kManeuverGroups.empty())
            {
                for (auto maneuverGroupsWriterItem : kManeuverGroups)
                {
                    tinyxml2::XMLNode* maneuverGroupsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MANEUVER_GROUP.c_str());
                    elementNode->InsertEndChild(maneuverGroupsElement);
                    FillManeuverGroupNode(document, maneuverGroupsElement, maneuverGroupsWriterItem);
                    
                }
            }
            const auto kStartTrigger = actWriter->GetWriterStartTrigger();
            if (kStartTrigger)
            {
                tinyxml2::XMLNode* startTriggerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__START_TRIGGER.c_str());
                elementNode->InsertEndChild(startTriggerElement);
                FillTriggerNode(document, startTriggerElement, kStartTrigger);
            }
            const auto kStopTrigger = actWriter->GetWriterStopTrigger();
            if (kStopTrigger)
            {
                tinyxml2::XMLNode* stopTriggerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STOP_TRIGGER.c_str());
                elementNode->InsertEndChild(stopTriggerElement);
                FillTriggerNode(document, stopTriggerElement, kStopTrigger);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActionWriter> actionWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = actionWriter->GetName();
            if (actionWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), actionWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kGlobalAction = actionWriter->GetWriterGlobalAction();
            if (kGlobalAction)
            {
                tinyxml2::XMLNode* globalActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION.c_str());
                elementNode->InsertEndChild(globalActionElement);
                FillGlobalActionNode(document, globalActionElement, kGlobalAction);
            }
            const auto kUserDefinedAction = actionWriter->GetWriterUserDefinedAction();
            if (kUserDefinedAction)
            {
                tinyxml2::XMLNode* userDefinedActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION.c_str());
                elementNode->InsertEndChild(userDefinedActionElement);
                FillUserDefinedActionNode(document, userDefinedActionElement, kUserDefinedAction);
            }
            const auto kPrivateAction = actionWriter->GetWriterPrivateAction();
            if (kPrivateAction)
            {
                tinyxml2::XMLNode* privateActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION.c_str());
                elementNode->InsertEndChild(privateActionElement);
                FillPrivateActionNode(document, privateActionElement, kPrivateAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillActivateControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActivateControllerActionWriter> activateControllerActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAnimation = activateControllerActionWriter->GetAnimation();
            if (!( kAnimation == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ANIMATION.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kAnimation).c_str());
            }
			else if (activateControllerActionWriter->IsAnimationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ANIMATION.c_str(), activateControllerActionWriter->GetParameterFromAnimation().c_str());
            }
            const auto kControllerRef = activateControllerActionWriter->GetControllerRef();
            if (kControllerRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTROLLER_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kControllerRef->GetNameRef()).c_str());
            }
            const auto kLateral = activateControllerActionWriter->GetLateral();
            if (!( kLateral == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LATERAL.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kLateral).c_str());
            }
			else if (activateControllerActionWriter->IsLateralParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LATERAL.c_str(), activateControllerActionWriter->GetParameterFromLateral().c_str());
            }
            const auto kLighting = activateControllerActionWriter->GetLighting();
            if (!( kLighting == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LIGHTING.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kLighting).c_str());
            }
			else if (activateControllerActionWriter->IsLightingParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LIGHTING.c_str(), activateControllerActionWriter->GetParameterFromLighting().c_str());
            }
            const auto kLongitudinal = activateControllerActionWriter->GetLongitudinal();
            if (!( kLongitudinal == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kLongitudinal).c_str());
            }
			else if (activateControllerActionWriter->IsLongitudinalParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL.c_str(), activateControllerActionWriter->GetParameterFromLongitudinal().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillActorsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActorsWriter> actorsWriter)
        {
            // Add Attributes (Parameters)
            const auto kSelectTriggeringEntities = actorsWriter->GetSelectTriggeringEntities();
            if (actorsWriter->IsSelectTriggeringEntitiesParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES.c_str(), actorsWriter->GetParameterFromSelectTriggeringEntities().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kSelectTriggeringEntities).c_str());
            }
            const auto kEntityRefs = actorsWriter->GetWriterEntityRefs();
            if (!kEntityRefs.empty())
            {
                for (auto entityRefsWriterItem : kEntityRefs)
                {
                    tinyxml2::XMLNode* entityRefsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_REF.c_str());
                    elementNode->InsertEndChild(entityRefsElement);
                    FillEntityRefNode(document, entityRefsElement, entityRefsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAddEntityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAddEntityActionWriter> addEntityActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kPosition = addEntityActionWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAnimationActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationActionWriter> animationActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAnimationDuration = animationActionWriter->GetAnimationDuration();
            if (!( kAnimationDuration == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ANIMATION_DURATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kAnimationDuration).c_str());
            }
			else if (animationActionWriter->IsAnimationDurationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ANIMATION_DURATION.c_str(), animationActionWriter->GetParameterFromAnimationDuration().c_str());
            }
            const auto kLoop = animationActionWriter->GetLoop();
            if (!( kLoop == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LOOP.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kLoop).c_str());
            }
			else if (animationActionWriter->IsLoopParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LOOP.c_str(), animationActionWriter->GetParameterFromLoop().c_str());
            }
            const auto kAnimationType = animationActionWriter->GetWriterAnimationType();
            if (kAnimationType)
            {
                tinyxml2::XMLNode* animationTypeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ANIMATION_TYPE.c_str());
                elementNode->InsertEndChild(animationTypeElement);
                FillAnimationTypeNode(document, animationTypeElement, kAnimationType);
            }
            const auto kAnimationState = animationActionWriter->GetWriterAnimationState();
            if (kAnimationState)
            {
                tinyxml2::XMLNode* animationStateElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ANIMATION_STATE.c_str());
                elementNode->InsertEndChild(animationStateElement);
                FillAnimationStateNode(document, animationStateElement, kAnimationState);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAnimationFileNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationFileWriter> animationFileWriter)
        {
            // Add Attributes (Parameters)
            const auto kTimeOffset = animationFileWriter->GetTimeOffset();
            if (!( kTimeOffset == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME_OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTimeOffset).c_str());
            }
			else if (animationFileWriter->IsTimeOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME_OFFSET.c_str(), animationFileWriter->GetParameterFromTimeOffset().c_str());
            }
            const auto kFile = animationFileWriter->GetWriterFile();
            if (kFile)
            {
                tinyxml2::XMLNode* fileElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FILE.c_str());
                elementNode->InsertEndChild(fileElement);
                FillFileNode(document, fileElement, kFile);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAnimationStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationStateWriter> animationStateWriter)
        {
            // Add Attributes (Parameters)
            const auto kState = animationStateWriter->GetState();
            if (animationStateWriter->IsStateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), animationStateWriter->GetParameterFromState().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kState).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAnimationTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationTypeWriter> animationTypeWriter)
        {
            // Add Attributes (Parameters)
            const auto kComponentAnimation = animationTypeWriter->GetWriterComponentAnimation();
            if (kComponentAnimation)
            {
                tinyxml2::XMLNode* componentAnimationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__COMPONENT_ANIMATION.c_str());
                elementNode->InsertEndChild(componentAnimationElement);
                FillComponentAnimationNode(document, componentAnimationElement, kComponentAnimation);
            }
            const auto kPedestrianAnimation = animationTypeWriter->GetWriterPedestrianAnimation();
            if (kPedestrianAnimation)
            {
                tinyxml2::XMLNode* pedestrianAnimationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PEDESTRIAN_ANIMATION.c_str());
                elementNode->InsertEndChild(pedestrianAnimationElement);
                FillPedestrianAnimationNode(document, pedestrianAnimationElement, kPedestrianAnimation);
            }
            const auto kAnimationFile = animationTypeWriter->GetWriterAnimationFile();
            if (kAnimationFile)
            {
                tinyxml2::XMLNode* animationFileElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ANIMATION_FILE.c_str());
                elementNode->InsertEndChild(animationFileElement);
                FillAnimationFileNode(document, animationFileElement, kAnimationFile);
            }
            const auto kUserDefinedAnimation = animationTypeWriter->GetWriterUserDefinedAnimation();
            if (kUserDefinedAnimation)
            {
                tinyxml2::XMLNode* userDefinedAnimationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_ANIMATION.c_str());
                elementNode->InsertEndChild(userDefinedAnimationElement);
                FillUserDefinedAnimationNode(document, userDefinedAnimationElement, kUserDefinedAnimation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAppearanceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAppearanceActionWriter> appearanceActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kLightStateAction = appearanceActionWriter->GetWriterLightStateAction();
            if (kLightStateAction)
            {
                tinyxml2::XMLNode* lightStateActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LIGHT_STATE_ACTION.c_str());
                elementNode->InsertEndChild(lightStateActionElement);
                FillLightStateActionNode(document, lightStateActionElement, kLightStateAction);
            }
            const auto kAnimationAction = appearanceActionWriter->GetWriterAnimationAction();
            if (kAnimationAction)
            {
                tinyxml2::XMLNode* animationActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ANIMATION_ACTION.c_str());
                elementNode->InsertEndChild(animationActionElement);
                FillAnimationActionNode(document, animationActionElement, kAnimationAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAssignControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAssignControllerActionWriter> assignControllerActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kActivateAnimation = assignControllerActionWriter->GetActivateAnimation();
            if (!( kActivateAnimation == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_ANIMATION.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActivateAnimation).c_str());
            }
			else if (assignControllerActionWriter->IsActivateAnimationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_ANIMATION.c_str(), assignControllerActionWriter->GetParameterFromActivateAnimation().c_str());
            }
            const auto kActivateLateral = assignControllerActionWriter->GetActivateLateral();
            if (!( kActivateLateral == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_LATERAL.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActivateLateral).c_str());
            }
			else if (assignControllerActionWriter->IsActivateLateralParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_LATERAL.c_str(), assignControllerActionWriter->GetParameterFromActivateLateral().c_str());
            }
            const auto kActivateLighting = assignControllerActionWriter->GetActivateLighting();
            if (!( kActivateLighting == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_LIGHTING.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActivateLighting).c_str());
            }
			else if (assignControllerActionWriter->IsActivateLightingParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_LIGHTING.c_str(), assignControllerActionWriter->GetParameterFromActivateLighting().c_str());
            }
            const auto kActivateLongitudinal = assignControllerActionWriter->GetActivateLongitudinal();
            if (!( kActivateLongitudinal == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_LONGITUDINAL.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActivateLongitudinal).c_str());
            }
			else if (assignControllerActionWriter->IsActivateLongitudinalParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVATE_LONGITUDINAL.c_str(), assignControllerActionWriter->GetParameterFromActivateLongitudinal().c_str());
            }
            const auto kController = assignControllerActionWriter->GetWriterController();
            if (kController)
            {
                tinyxml2::XMLNode* controllerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER.c_str());
                elementNode->InsertEndChild(controllerElement);
                FillControllerNode(document, controllerElement, kController);
            }
            const auto kCatalogReference = assignControllerActionWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAssignRouteActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAssignRouteActionWriter> assignRouteActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRoute = assignRouteActionWriter->GetWriterRoute();
            if (kRoute)
            {
                tinyxml2::XMLNode* routeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROUTE.c_str());
                elementNode->InsertEndChild(routeElement);
                FillRouteNode(document, routeElement, kRoute);
            }
            const auto kCatalogReference = assignRouteActionWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAutomaticGearNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAutomaticGearWriter> automaticGearWriter)
        {
            // Add Attributes (Parameters)
            const auto kGear = automaticGearWriter->GetGear();
            if (automaticGearWriter->IsGearParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GEAR.c_str(), automaticGearWriter->GetParameterFromGear().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GEAR.c_str(), kGear.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAxleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAxleWriter> axleWriter)
        {
            // Add Attributes (Parameters)
            const auto kMaxSteering = axleWriter->GetMaxSteering();
            if (axleWriter->IsMaxSteeringParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING.c_str(), axleWriter->GetParameterFromMaxSteering().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxSteering).c_str());
            }
            const auto kPositionX = axleWriter->GetPositionX();
            if (axleWriter->IsPositionXParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__POSITION_X.c_str(), axleWriter->GetParameterFromPositionX().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__POSITION_X.c_str(), XmlExportHelper::ToXmlStringFromDouble( kPositionX).c_str());
            }
            const auto kPositionZ = axleWriter->GetPositionZ();
            if (axleWriter->IsPositionZParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z.c_str(), axleWriter->GetParameterFromPositionZ().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z.c_str(), XmlExportHelper::ToXmlStringFromDouble( kPositionZ).c_str());
            }
            const auto kTrackWidth = axleWriter->GetTrackWidth();
            if (axleWriter->IsTrackWidthParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH.c_str(), axleWriter->GetParameterFromTrackWidth().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTrackWidth).c_str());
            }
            const auto kWheelDiameter = axleWriter->GetWheelDiameter();
            if (axleWriter->IsWheelDiameterParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER.c_str(), axleWriter->GetParameterFromWheelDiameter().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWheelDiameter).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillAxlesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAxlesWriter> axlesWriter)
        {
            // Add Attributes (Parameters)
            const auto kFrontAxle = axlesWriter->GetWriterFrontAxle();
            if (kFrontAxle)
            {
                tinyxml2::XMLNode* frontAxleElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FRONT_AXLE.c_str());
                elementNode->InsertEndChild(frontAxleElement);
                FillAxleNode(document, frontAxleElement, kFrontAxle);
            }
            const auto kRearAxle = axlesWriter->GetWriterRearAxle();
            if (kRearAxle)
            {
                tinyxml2::XMLNode* rearAxleElement = document->NewElement(OSC_CONSTANTS::ELEMENT__REAR_AXLE.c_str());
                elementNode->InsertEndChild(rearAxleElement);
                FillAxleNode(document, rearAxleElement, kRearAxle);
            }
            const auto kAdditionalAxles = axlesWriter->GetWriterAdditionalAxles();
            if (!kAdditionalAxles.empty())
            {
                for (auto additionalAxlesWriterItem : kAdditionalAxles)
                {
                    tinyxml2::XMLNode* additionalAxlesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ADDITIONAL_AXLE.c_str());
                    elementNode->InsertEndChild(additionalAxlesElement);
                    FillAxleNode(document, additionalAxlesElement, additionalAxlesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillBoundingBoxNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IBoundingBoxWriter> boundingBoxWriter)
        {
            // Add Attributes (Parameters)
            const auto kCenter = boundingBoxWriter->GetWriterCenter();
            if (kCenter)
            {
                tinyxml2::XMLNode* centerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CENTER.c_str());
                elementNode->InsertEndChild(centerElement);
                FillCenterNode(document, centerElement, kCenter);
            }
            const auto kDimensions = boundingBoxWriter->GetWriterDimensions();
            if (kDimensions)
            {
                tinyxml2::XMLNode* dimensionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIMENSIONS.c_str());
                elementNode->InsertEndChild(dimensionsElement);
                FillDimensionsNode(document, dimensionsElement, kDimensions);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillBrakeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IBrakeWriter> brakeWriter)
        {
            // Add Attributes (Parameters)
            const auto kMaxRate = brakeWriter->GetMaxRate();
            if (!( kMaxRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxRate).c_str());
            }
			else if (brakeWriter->IsMaxRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), brakeWriter->GetParameterFromMaxRate().c_str());
            }
            const auto kValue = brakeWriter->GetValue();
            if (brakeWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), brakeWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillBrakeInputNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IBrakeInputWriter> brakeInputWriter)
        {
            // Add Attributes (Parameters)
            const auto kBrakePercent = brakeInputWriter->GetWriterBrakePercent();
            if (kBrakePercent)
            {
                tinyxml2::XMLNode* brakePercentElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BRAKE_PERCENT.c_str());
                elementNode->InsertEndChild(brakePercentElement);
                FillBrakeNode(document, brakePercentElement, kBrakePercent);
            }
            const auto kBrakeForce = brakeInputWriter->GetWriterBrakeForce();
            if (kBrakeForce)
            {
                tinyxml2::XMLNode* brakeForceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BRAKE_FORCE.c_str());
                elementNode->InsertEndChild(brakeForceElement);
                FillBrakeNode(document, brakeForceElement, kBrakeForce);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillByEntityConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByEntityConditionWriter> byEntityConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kTriggeringEntities = byEntityConditionWriter->GetWriterTriggeringEntities();
            if (kTriggeringEntities)
            {
                tinyxml2::XMLNode* triggeringEntitiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRIGGERING_ENTITIES.c_str());
                elementNode->InsertEndChild(triggeringEntitiesElement);
                FillTriggeringEntitiesNode(document, triggeringEntitiesElement, kTriggeringEntities);
            }
            const auto kEntityCondition = byEntityConditionWriter->GetWriterEntityCondition();
            if (kEntityCondition)
            {
                tinyxml2::XMLNode* entityConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_CONDITION.c_str());
                elementNode->InsertEndChild(entityConditionElement);
                FillEntityConditionNode(document, entityConditionElement, kEntityCondition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillByObjectTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByObjectTypeWriter> byObjectTypeWriter)
        {
            // Add Attributes (Parameters)
            const auto kType = byObjectTypeWriter->GetType();
            if (byObjectTypeWriter->IsTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), byObjectTypeWriter->GetParameterFromType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), kType.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillByTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByTypeWriter> byTypeWriter)
        {
            // Add Attributes (Parameters)
            const auto kObjectType = byTypeWriter->GetObjectType();
            if (byTypeWriter->IsObjectTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE.c_str(), byTypeWriter->GetParameterFromObjectType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE.c_str(), kObjectType.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillByValueConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByValueConditionWriter> byValueConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterCondition = byValueConditionWriter->GetWriterParameterCondition();
            if (kParameterCondition)
            {
                tinyxml2::XMLNode* parameterConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_CONDITION.c_str());
                elementNode->InsertEndChild(parameterConditionElement);
                FillParameterConditionNode(document, parameterConditionElement, kParameterCondition);
            }
            const auto kTimeOfDayCondition = byValueConditionWriter->GetWriterTimeOfDayCondition();
            if (kTimeOfDayCondition)
            {
                tinyxml2::XMLNode* timeOfDayConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TIME_OF_DAY_CONDITION.c_str());
                elementNode->InsertEndChild(timeOfDayConditionElement);
                FillTimeOfDayConditionNode(document, timeOfDayConditionElement, kTimeOfDayCondition);
            }
            const auto kSimulationTimeCondition = byValueConditionWriter->GetWriterSimulationTimeCondition();
            if (kSimulationTimeCondition)
            {
                tinyxml2::XMLNode* simulationTimeConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SIMULATION_TIME_CONDITION.c_str());
                elementNode->InsertEndChild(simulationTimeConditionElement);
                FillSimulationTimeConditionNode(document, simulationTimeConditionElement, kSimulationTimeCondition);
            }
            const auto kStoryboardElementStateCondition = byValueConditionWriter->GetWriterStoryboardElementStateCondition();
            if (kStoryboardElementStateCondition)
            {
                tinyxml2::XMLNode* storyboardElementStateConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION.c_str());
                elementNode->InsertEndChild(storyboardElementStateConditionElement);
                FillStoryboardElementStateConditionNode(document, storyboardElementStateConditionElement, kStoryboardElementStateCondition);
            }
            const auto kUserDefinedValueCondition = byValueConditionWriter->GetWriterUserDefinedValueCondition();
            if (kUserDefinedValueCondition)
            {
                tinyxml2::XMLNode* userDefinedValueConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_VALUE_CONDITION.c_str());
                elementNode->InsertEndChild(userDefinedValueConditionElement);
                FillUserDefinedValueConditionNode(document, userDefinedValueConditionElement, kUserDefinedValueCondition);
            }
            const auto kTrafficSignalCondition = byValueConditionWriter->GetWriterTrafficSignalCondition();
            if (kTrafficSignalCondition)
            {
                tinyxml2::XMLNode* trafficSignalConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONDITION.c_str());
                elementNode->InsertEndChild(trafficSignalConditionElement);
                FillTrafficSignalConditionNode(document, trafficSignalConditionElement, kTrafficSignalCondition);
            }
            const auto kTrafficSignalControllerCondition = byValueConditionWriter->GetWriterTrafficSignalControllerCondition();
            if (kTrafficSignalControllerCondition)
            {
                tinyxml2::XMLNode* trafficSignalControllerConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION.c_str());
                elementNode->InsertEndChild(trafficSignalControllerConditionElement);
                FillTrafficSignalControllerConditionNode(document, trafficSignalControllerConditionElement, kTrafficSignalControllerCondition);
            }
            const auto kVariableCondition = byValueConditionWriter->GetWriterVariableCondition();
            if (kVariableCondition)
            {
                tinyxml2::XMLNode* variableConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VARIABLE_CONDITION.c_str());
                elementNode->InsertEndChild(variableConditionElement);
                FillVariableConditionNode(document, variableConditionElement, kVariableCondition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCatalogNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogWriter> catalogWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = catalogWriter->GetName();
            if (!( kName.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
			else if (catalogWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), catalogWriter->GetParameterFromName().c_str());
            }
            const auto kVehicles = catalogWriter->GetWriterVehicles();
            if (!kVehicles.empty())
            {
                for (auto vehiclesWriterItem : kVehicles)
                {
                    tinyxml2::XMLNode* vehiclesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE.c_str());
                    elementNode->InsertEndChild(vehiclesElement);
                    FillVehicleNode(document, vehiclesElement, vehiclesWriterItem);
                    
                }
            }
            const auto kControllers = catalogWriter->GetWriterControllers();
            if (!kControllers.empty())
            {
                for (auto controllersWriterItem : kControllers)
                {
                    tinyxml2::XMLNode* controllersElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER.c_str());
                    elementNode->InsertEndChild(controllersElement);
                    FillControllerNode(document, controllersElement, controllersWriterItem);
                    
                }
            }
            const auto kPedestrians = catalogWriter->GetWriterPedestrians();
            if (!kPedestrians.empty())
            {
                for (auto pedestriansWriterItem : kPedestrians)
                {
                    tinyxml2::XMLNode* pedestriansElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PEDESTRIAN.c_str());
                    elementNode->InsertEndChild(pedestriansElement);
                    FillPedestrianNode(document, pedestriansElement, pedestriansWriterItem);
                    
                }
            }
            const auto kMiscObjects = catalogWriter->GetWriterMiscObjects();
            if (!kMiscObjects.empty())
            {
                for (auto miscObjectsWriterItem : kMiscObjects)
                {
                    tinyxml2::XMLNode* miscObjectsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MISC_OBJECT.c_str());
                    elementNode->InsertEndChild(miscObjectsElement);
                    FillMiscObjectNode(document, miscObjectsElement, miscObjectsWriterItem);
                    
                }
            }
            const auto kEnvironments = catalogWriter->GetWriterEnvironments();
            if (!kEnvironments.empty())
            {
                for (auto environmentsWriterItem : kEnvironments)
                {
                    tinyxml2::XMLNode* environmentsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENVIRONMENT.c_str());
                    elementNode->InsertEndChild(environmentsElement);
                    FillEnvironmentNode(document, environmentsElement, environmentsWriterItem);
                    
                }
            }
            const auto kManeuvers = catalogWriter->GetWriterManeuvers();
            if (!kManeuvers.empty())
            {
                for (auto maneuversWriterItem : kManeuvers)
                {
                    tinyxml2::XMLNode* maneuversElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MANEUVER.c_str());
                    elementNode->InsertEndChild(maneuversElement);
                    FillManeuverNode(document, maneuversElement, maneuversWriterItem);
                    
                }
            }
            const auto kTrajectories = catalogWriter->GetWriterTrajectories();
            if (!kTrajectories.empty())
            {
                for (auto trajectoriesWriterItem : kTrajectories)
                {
                    tinyxml2::XMLNode* trajectoriesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY.c_str());
                    elementNode->InsertEndChild(trajectoriesElement);
                    FillTrajectoryNode(document, trajectoriesElement, trajectoriesWriterItem);
                    
                }
            }
            const auto kRoutes = catalogWriter->GetWriterRoutes();
            if (!kRoutes.empty())
            {
                for (auto routesWriterItem : kRoutes)
                {
                    tinyxml2::XMLNode* routesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROUTE.c_str());
                    elementNode->InsertEndChild(routesElement);
                    FillRouteNode(document, routesElement, routesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCatalogDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogDefinitionWriter> catalogDefinitionWriter)
        {
            // Add Attributes (Parameters)
            const auto kCatalog = catalogDefinitionWriter->GetWriterCatalog();
            if (kCatalog)
            {
                tinyxml2::XMLNode* catalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG.c_str());
                elementNode->InsertEndChild(catalogElement);
                FillCatalogNode(document, catalogElement, kCatalog);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCatalogLocationsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogLocationsWriter> catalogLocationsWriter)
        {
            // Add Attributes (Parameters)
            const auto kVehicleCatalog = catalogLocationsWriter->GetWriterVehicleCatalog();
            if (kVehicleCatalog)
            {
                tinyxml2::XMLNode* vehicleCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE_CATALOG.c_str());
                elementNode->InsertEndChild(vehicleCatalogElement);
                FillVehicleCatalogLocationNode(document, vehicleCatalogElement, kVehicleCatalog);
            }
            const auto kControllerCatalog = catalogLocationsWriter->GetWriterControllerCatalog();
            if (kControllerCatalog)
            {
                tinyxml2::XMLNode* controllerCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER_CATALOG.c_str());
                elementNode->InsertEndChild(controllerCatalogElement);
                FillControllerCatalogLocationNode(document, controllerCatalogElement, kControllerCatalog);
            }
            const auto kPedestrianCatalog = catalogLocationsWriter->GetWriterPedestrianCatalog();
            if (kPedestrianCatalog)
            {
                tinyxml2::XMLNode* pedestrianCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PEDESTRIAN_CATALOG.c_str());
                elementNode->InsertEndChild(pedestrianCatalogElement);
                FillPedestrianCatalogLocationNode(document, pedestrianCatalogElement, kPedestrianCatalog);
            }
            const auto kMiscObjectCatalog = catalogLocationsWriter->GetWriterMiscObjectCatalog();
            if (kMiscObjectCatalog)
            {
                tinyxml2::XMLNode* miscObjectCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MISC_OBJECT_CATALOG.c_str());
                elementNode->InsertEndChild(miscObjectCatalogElement);
                FillMiscObjectCatalogLocationNode(document, miscObjectCatalogElement, kMiscObjectCatalog);
            }
            const auto kEnvironmentCatalog = catalogLocationsWriter->GetWriterEnvironmentCatalog();
            if (kEnvironmentCatalog)
            {
                tinyxml2::XMLNode* environmentCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENVIRONMENT_CATALOG.c_str());
                elementNode->InsertEndChild(environmentCatalogElement);
                FillEnvironmentCatalogLocationNode(document, environmentCatalogElement, kEnvironmentCatalog);
            }
            const auto kManeuverCatalog = catalogLocationsWriter->GetWriterManeuverCatalog();
            if (kManeuverCatalog)
            {
                tinyxml2::XMLNode* maneuverCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MANEUVER_CATALOG.c_str());
                elementNode->InsertEndChild(maneuverCatalogElement);
                FillManeuverCatalogLocationNode(document, maneuverCatalogElement, kManeuverCatalog);
            }
            const auto kTrajectoryCatalog = catalogLocationsWriter->GetWriterTrajectoryCatalog();
            if (kTrajectoryCatalog)
            {
                tinyxml2::XMLNode* trajectoryCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY_CATALOG.c_str());
                elementNode->InsertEndChild(trajectoryCatalogElement);
                FillTrajectoryCatalogLocationNode(document, trajectoryCatalogElement, kTrajectoryCatalog);
            }
            const auto kRouteCatalog = catalogLocationsWriter->GetWriterRouteCatalog();
            if (kRouteCatalog)
            {
                tinyxml2::XMLNode* routeCatalogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROUTE_CATALOG.c_str());
                elementNode->InsertEndChild(routeCatalogElement);
                FillRouteCatalogLocationNode(document, routeCatalogElement, kRouteCatalog);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCatalogReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogReferenceWriter> catalogReferenceWriter)
        {
            // Add Attributes (Parameters)
            const auto kCatalogName = catalogReferenceWriter->GetCatalogName();
            if (catalogReferenceWriter->IsCatalogNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME.c_str(), catalogReferenceWriter->GetParameterFromCatalogName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kCatalogName).c_str());
            }
            const auto kEntryName = catalogReferenceWriter->GetEntryName();
            if (catalogReferenceWriter->IsEntryNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME.c_str(), catalogReferenceWriter->GetParameterFromEntryName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kEntryName).c_str());
            }
            const auto kParameterAssignments = catalogReferenceWriter->GetWriterParameterAssignments();
            if (!kParameterAssignments.empty())
            {
                tinyxml2::XMLNode* parameterAssignmentsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT.c_str());
                elementNode->InsertEndChild(parameterAssignmentsWrapperElement);
                for (auto parameterAssignmentsWriterItem : kParameterAssignments)
                {
                    tinyxml2::XMLNode* parameterAssignmentsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENTS.c_str());
                    parameterAssignmentsWrapperElement->InsertEndChild(parameterAssignmentsElement);
                    FillParameterAssignmentNode(document, parameterAssignmentsElement, parameterAssignmentsWriterItem);
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCenterNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICenterWriter> centerWriter)
        {
            // Add Attributes (Parameters)
            const auto kX = centerWriter->GetX();
            if (centerWriter->IsXParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__X.c_str(), centerWriter->GetParameterFromX().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__X.c_str(), XmlExportHelper::ToXmlStringFromDouble( kX).c_str());
            }
            const auto kY = centerWriter->GetY();
            if (centerWriter->IsYParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Y.c_str(), centerWriter->GetParameterFromY().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Y.c_str(), XmlExportHelper::ToXmlStringFromDouble( kY).c_str());
            }
            const auto kZ = centerWriter->GetZ();
            if (centerWriter->IsZParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Z.c_str(), centerWriter->GetParameterFromZ().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Z.c_str(), XmlExportHelper::ToXmlStringFromDouble( kZ).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCentralSwarmObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICentralSwarmObjectWriter> centralSwarmObjectWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = centralSwarmObjectWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillClothoidNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IClothoidWriter> clothoidWriter)
        {
            // Add Attributes (Parameters)
            const auto kCurvature = clothoidWriter->GetCurvature();
            if (clothoidWriter->IsCurvatureParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CURVATURE.c_str(), clothoidWriter->GetParameterFromCurvature().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CURVATURE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kCurvature).c_str());
            }
            const auto kCurvatureDot = clothoidWriter->GetCurvatureDot();
            if (!( kCurvatureDot == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kCurvatureDot).c_str());
            }
			else if (clothoidWriter->IsCurvatureDotParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT.c_str(), clothoidWriter->GetParameterFromCurvatureDot().c_str());
            }
            const auto kCurvaturePrime = clothoidWriter->GetCurvaturePrime();
            if (!( kCurvaturePrime == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_PRIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kCurvaturePrime).c_str());
            }
			else if (clothoidWriter->IsCurvaturePrimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_PRIME.c_str(), clothoidWriter->GetParameterFromCurvaturePrime().c_str());
            }
            const auto kLength = clothoidWriter->GetLength();
            if (clothoidWriter->IsLengthParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LENGTH.c_str(), clothoidWriter->GetParameterFromLength().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LENGTH.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLength).c_str());
            }
            const auto kStartTime = clothoidWriter->GetStartTime();
            if (!( kStartTime == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__START_TIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kStartTime).c_str());
            }
			else if (clothoidWriter->IsStartTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__START_TIME.c_str(), clothoidWriter->GetParameterFromStartTime().c_str());
            }
            const auto kStopTime = clothoidWriter->GetStopTime();
            if (!( kStopTime == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kStopTime).c_str());
            }
			else if (clothoidWriter->IsStopTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME.c_str(), clothoidWriter->GetParameterFromStopTime().c_str());
            }
            const auto kPosition = clothoidWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCollisionConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICollisionConditionWriter> collisionConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = collisionConditionWriter->GetWriterEntityRef();
            if (kEntityRef)
            {
                tinyxml2::XMLNode* entityRefElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_REF.c_str());
                elementNode->InsertEndChild(entityRefElement);
                FillEntityRefNode(document, entityRefElement, kEntityRef);
            }
            const auto kByType = collisionConditionWriter->GetWriterByType();
            if (kByType)
            {
                tinyxml2::XMLNode* byTypeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BY_TYPE.c_str());
                elementNode->InsertEndChild(byTypeElement);
                FillByObjectTypeNode(document, byTypeElement, kByType);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillColorNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IColorWriter> colorWriter)
        {
            // Add Attributes (Parameters)
            const auto kColorType = colorWriter->GetColorType();
            if (colorWriter->IsColorTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COLOR_TYPE.c_str(), colorWriter->GetParameterFromColorType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COLOR_TYPE.c_str(), kColorType.GetLiteral().c_str());
            }
            const auto kColorRgb = colorWriter->GetWriterColorRgb();
            if (kColorRgb)
            {
                tinyxml2::XMLNode* colorRgbElement = document->NewElement(OSC_CONSTANTS::ELEMENT__COLOR_RGB.c_str());
                elementNode->InsertEndChild(colorRgbElement);
                FillColorRgbNode(document, colorRgbElement, kColorRgb);
            }
            const auto kColorCmyk = colorWriter->GetWriterColorCmyk();
            if (kColorCmyk)
            {
                tinyxml2::XMLNode* colorCmykElement = document->NewElement(OSC_CONSTANTS::ELEMENT__COLOR_CMYK.c_str());
                elementNode->InsertEndChild(colorCmykElement);
                FillColorCmykNode(document, colorCmykElement, kColorCmyk);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillColorCmykNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IColorCmykWriter> colorCmykWriter)
        {
            // Add Attributes (Parameters)
            const auto kCyan = colorCmykWriter->GetCyan();
            if (colorCmykWriter->IsCyanParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CYAN.c_str(), colorCmykWriter->GetParameterFromCyan().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CYAN.c_str(), XmlExportHelper::ToXmlStringFromDouble( kCyan).c_str());
            }
            const auto kKey = colorCmykWriter->GetKey();
            if (colorCmykWriter->IsKeyParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__KEY.c_str(), colorCmykWriter->GetParameterFromKey().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__KEY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kKey).c_str());
            }
            const auto kMagenta = colorCmykWriter->GetMagenta();
            if (colorCmykWriter->IsMagentaParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAGENTA.c_str(), colorCmykWriter->GetParameterFromMagenta().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAGENTA.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMagenta).c_str());
            }
            const auto kYellow = colorCmykWriter->GetYellow();
            if (colorCmykWriter->IsYellowParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__YELLOW.c_str(), colorCmykWriter->GetParameterFromYellow().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__YELLOW.c_str(), XmlExportHelper::ToXmlStringFromDouble( kYellow).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillColorRgbNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IColorRgbWriter> colorRgbWriter)
        {
            // Add Attributes (Parameters)
            const auto kBlue = colorRgbWriter->GetBlue();
            if (colorRgbWriter->IsBlueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__BLUE.c_str(), colorRgbWriter->GetParameterFromBlue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__BLUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kBlue).c_str());
            }
            const auto kGreen = colorRgbWriter->GetGreen();
            if (colorRgbWriter->IsGreenParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GREEN.c_str(), colorRgbWriter->GetParameterFromGreen().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GREEN.c_str(), XmlExportHelper::ToXmlStringFromDouble( kGreen).c_str());
            }
            const auto kRed = colorRgbWriter->GetRed();
            if (colorRgbWriter->IsRedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RED.c_str(), colorRgbWriter->GetParameterFromRed().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RED.c_str(), XmlExportHelper::ToXmlStringFromDouble( kRed).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillComponentAnimationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IComponentAnimationWriter> componentAnimationWriter)
        {
            // Add Attributes (Parameters)
            const auto kVehicleComponent = componentAnimationWriter->GetWriterVehicleComponent();
            if (kVehicleComponent)
            {
                tinyxml2::XMLNode* vehicleComponentElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE_COMPONENT.c_str());
                elementNode->InsertEndChild(vehicleComponentElement);
                FillVehicleComponentNode(document, vehicleComponentElement, kVehicleComponent);
            }
            const auto kUserDefinedComponent = componentAnimationWriter->GetWriterUserDefinedComponent();
            if (kUserDefinedComponent)
            {
                tinyxml2::XMLNode* userDefinedComponentElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_COMPONENT.c_str());
                elementNode->InsertEndChild(userDefinedComponentElement);
                FillUserDefinedComponentNode(document, userDefinedComponentElement, kUserDefinedComponent);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IConditionWriter> conditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kConditionEdge = conditionWriter->GetConditionEdge();
            if (conditionWriter->IsConditionEdgeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE.c_str(), conditionWriter->GetParameterFromConditionEdge().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE.c_str(), kConditionEdge.GetLiteral().c_str());
            }
            const auto kDelay = conditionWriter->GetDelay();
            if (conditionWriter->IsDelayParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DELAY.c_str(), conditionWriter->GetParameterFromDelay().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DELAY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDelay).c_str());
            }
            const auto kName = conditionWriter->GetName();
            if (conditionWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), conditionWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kByEntityCondition = conditionWriter->GetWriterByEntityCondition();
            if (kByEntityCondition)
            {
                tinyxml2::XMLNode* byEntityConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BY_ENTITY_CONDITION.c_str());
                elementNode->InsertEndChild(byEntityConditionElement);
                FillByEntityConditionNode(document, byEntityConditionElement, kByEntityCondition);
            }
            const auto kByValueCondition = conditionWriter->GetWriterByValueCondition();
            if (kByValueCondition)
            {
                tinyxml2::XMLNode* byValueConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BY_VALUE_CONDITION.c_str());
                elementNode->InsertEndChild(byValueConditionElement);
                FillByValueConditionNode(document, byValueConditionElement, kByValueCondition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillConditionGroupNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IConditionGroupWriter> conditionGroupWriter)
        {
            // Add Attributes (Parameters)
            const auto kConditions = conditionGroupWriter->GetWriterConditions();
            if (!kConditions.empty())
            {
                for (auto conditionsWriterItem : kConditions)
                {
                    tinyxml2::XMLNode* conditionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONDITION.c_str());
                    elementNode->InsertEndChild(conditionsElement);
                    FillConditionNode(document, conditionsElement, conditionsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillControlPointNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControlPointWriter> controlPointWriter)
        {
            // Add Attributes (Parameters)
            const auto kTime = controlPointWriter->GetTime();
            if (!( kTime == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTime).c_str());
            }
			else if (controlPointWriter->IsTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), controlPointWriter->GetParameterFromTime().c_str());
            }
            const auto kWeight = controlPointWriter->GetWeight();
            if (!( kWeight == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWeight).c_str());
            }
			else if (controlPointWriter->IsWeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), controlPointWriter->GetParameterFromWeight().c_str());
            }
            const auto kPosition = controlPointWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillControllerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerWriter> controllerWriter)
        {
            // Add Attributes (Parameters)
            const auto kControllerType = controllerWriter->GetControllerType();
            if (!( kControllerType == ControllerType::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTROLLER_TYPE.c_str(), kControllerType.GetLiteral().c_str());
            }
			else if (controllerWriter->IsControllerTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTROLLER_TYPE.c_str(), controllerWriter->GetParameterFromControllerType().c_str());
            }
            const auto kName = controllerWriter->GetName();
            if (controllerWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), controllerWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kParameterDeclarations = controllerWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kProperties = controllerWriter->GetWriterProperties();
            if (kProperties)
            {
                tinyxml2::XMLNode* propertiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROPERTIES.c_str());
                elementNode->InsertEndChild(propertiesElement);
                FillPropertiesNode(document, propertiesElement, kProperties);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerActionWriter> controllerActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAssignControllerAction = controllerActionWriter->GetWriterAssignControllerAction();
            if (kAssignControllerAction)
            {
                tinyxml2::XMLNode* assignControllerActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ASSIGN_CONTROLLER_ACTION.c_str());
                elementNode->InsertEndChild(assignControllerActionElement);
                FillAssignControllerActionNode(document, assignControllerActionElement, kAssignControllerAction);
            }
            const auto kOverrideControllerValueAction = controllerActionWriter->GetWriterOverrideControllerValueAction();
            if (kOverrideControllerValueAction)
            {
                tinyxml2::XMLNode* overrideControllerValueActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION.c_str());
                elementNode->InsertEndChild(overrideControllerValueActionElement);
                FillOverrideControllerValueActionNode(document, overrideControllerValueActionElement, kOverrideControllerValueAction);
            }
            const auto kActivateControllerAction = controllerActionWriter->GetWriterActivateControllerAction();
            if (kActivateControllerAction)
            {
                tinyxml2::XMLNode* activateControllerActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION.c_str());
                elementNode->InsertEndChild(activateControllerActionElement);
                FillActivateControllerActionNode(document, activateControllerActionElement, kActivateControllerAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillControllerCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerCatalogLocationWriter> controllerCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = controllerCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillControllerDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerDistributionWriter> controllerDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kControllerDistributionEntries = controllerDistributionWriter->GetWriterControllerDistributionEntries();
            if (!kControllerDistributionEntries.empty())
            {
                for (auto controllerDistributionEntriesWriterItem : kControllerDistributionEntries)
                {
                    tinyxml2::XMLNode* controllerDistributionEntriesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY.c_str());
                    elementNode->InsertEndChild(controllerDistributionEntriesElement);
                    FillControllerDistributionEntryNode(document, controllerDistributionEntriesElement, controllerDistributionEntriesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillControllerDistributionEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerDistributionEntryWriter> controllerDistributionEntryWriter)
        {
            // Add Attributes (Parameters)
            const auto kWeight = controllerDistributionEntryWriter->GetWeight();
            if (controllerDistributionEntryWriter->IsWeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), controllerDistributionEntryWriter->GetParameterFromWeight().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWeight).c_str());
            }
            const auto kController = controllerDistributionEntryWriter->GetWriterController();
            if (kController)
            {
                tinyxml2::XMLNode* controllerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER.c_str());
                elementNode->InsertEndChild(controllerElement);
                FillControllerNode(document, controllerElement, kController);
            }
            const auto kCatalogReference = controllerDistributionEntryWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCustomCommandActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICustomCommandActionWriter> customCommandActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kContent = customCommandActionWriter->GetContent();
            if (customCommandActionWriter->IsContentParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTENT.c_str(), customCommandActionWriter->GetParameterFromContent().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTENT.c_str(), XmlExportHelper::ToXmlStringFromString( kContent).c_str());
            }
            const auto kType = customCommandActionWriter->GetType();
            if (customCommandActionWriter->IsTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), customCommandActionWriter->GetParameterFromType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), XmlExportHelper::ToXmlStringFromString( kType).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillCustomContentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICustomContentWriter> customContentWriter)
        {
            // Add Attributes (Parameters)
            const auto kContent = customContentWriter->GetContent();
            if (customContentWriter->IsContentParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTENT.c_str(), customContentWriter->GetParameterFromContent().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTENT.c_str(), XmlExportHelper::ToXmlStringFromString( kContent).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDeleteEntityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeleteEntityActionWriter> deleteEntityActionWriter)
        {
            // Add Attributes (Parameters)
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDeterministicNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicWriter> deterministicWriter)
        {
            // Add Attributes (Parameters)
            const auto kDeterministicParameterDistributions = deterministicWriter->GetWriterDeterministicParameterDistributions();
            if (!kDeterministicParameterDistributions.empty())
            {
                for (auto deterministicParameterDistributionsWriterItem : kDeterministicParameterDistributions)
                {
                    tinyxml2::XMLNode* deterministicParameterDistributionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_PARAMETER_DISTRIBUTIONS.c_str());
                    elementNode->InsertEndChild(deterministicParameterDistributionsElement);
                    FillDeterministicParameterDistributionNode(document, deterministicParameterDistributionsElement, deterministicParameterDistributionsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDeterministicMultiParameterDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicMultiParameterDistributionWriter> deterministicMultiParameterDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDeterministicMultiParameterDistributionType = deterministicMultiParameterDistributionWriter->GetWriterDeterministicMultiParameterDistributionType();
            if (kDeterministicMultiParameterDistributionType)
            {
				FillDeterministicMultiParameterDistributionTypeNode(document, elementNode, kDeterministicMultiParameterDistributionType);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDeterministicMultiParameterDistributionTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicMultiParameterDistributionTypeWriter> deterministicMultiParameterDistributionTypeWriter)
        {
            // Add Attributes (Parameters)
            const auto kValueSetDistribution = deterministicMultiParameterDistributionTypeWriter->GetWriterValueSetDistribution();
            if (kValueSetDistribution)
            {
                tinyxml2::XMLNode* valueSetDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VALUE_SET_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(valueSetDistributionElement);
                FillValueSetDistributionNode(document, valueSetDistributionElement, kValueSetDistribution);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDeterministicParameterDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicParameterDistributionWriter> deterministicParameterDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDeterministicMultiParameterDistribution = deterministicParameterDistributionWriter->GetWriterDeterministicMultiParameterDistribution();
            if (kDeterministicMultiParameterDistribution)
            {
                tinyxml2::XMLNode* deterministicMultiParameterDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_MULTI_PARAMETER_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(deterministicMultiParameterDistributionElement);
                FillDeterministicMultiParameterDistributionNode(document, deterministicMultiParameterDistributionElement, kDeterministicMultiParameterDistribution);
            }
            const auto kDeterministicSingleParameterDistribution = deterministicParameterDistributionWriter->GetWriterDeterministicSingleParameterDistribution();
            if (kDeterministicSingleParameterDistribution)
            {
                tinyxml2::XMLNode* deterministicSingleParameterDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_SINGLE_PARAMETER_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(deterministicSingleParameterDistributionElement);
                FillDeterministicSingleParameterDistributionNode(document, deterministicSingleParameterDistributionElement, kDeterministicSingleParameterDistribution);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDeterministicSingleParameterDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicSingleParameterDistributionWriter> deterministicSingleParameterDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterName = deterministicSingleParameterDistributionWriter->GetParameterName();
            if (deterministicSingleParameterDistributionWriter->IsParameterNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME.c_str(), deterministicSingleParameterDistributionWriter->GetParameterFromParameterName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kParameterName).c_str());
            }
            const auto kDeterministicSingleParameterDistributionType = deterministicSingleParameterDistributionWriter->GetWriterDeterministicSingleParameterDistributionType();
            if (kDeterministicSingleParameterDistributionType)
            {
				FillDeterministicSingleParameterDistributionTypeNode(document, elementNode, kDeterministicSingleParameterDistributionType);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDeterministicSingleParameterDistributionTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicSingleParameterDistributionTypeWriter> deterministicSingleParameterDistributionTypeWriter)
        {
            // Add Attributes (Parameters)
            const auto kDistributionSet = deterministicSingleParameterDistributionTypeWriter->GetWriterDistributionSet();
            if (kDistributionSet)
            {
                tinyxml2::XMLNode* distributionSetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DISTRIBUTION_SET.c_str());
                elementNode->InsertEndChild(distributionSetElement);
                FillDistributionSetNode(document, distributionSetElement, kDistributionSet);
            }
            const auto kDistributionRange = deterministicSingleParameterDistributionTypeWriter->GetWriterDistributionRange();
            if (kDistributionRange)
            {
                tinyxml2::XMLNode* distributionRangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DISTRIBUTION_RANGE.c_str());
                elementNode->InsertEndChild(distributionRangeElement);
                FillDistributionRangeNode(document, distributionRangeElement, kDistributionRange);
            }
            const auto kUserDefinedDistribution = deterministicSingleParameterDistributionTypeWriter->GetWriterUserDefinedDistribution();
            if (kUserDefinedDistribution)
            {
                tinyxml2::XMLNode* userDefinedDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(userDefinedDistributionElement);
                FillUserDefinedDistributionNode(document, userDefinedDistributionElement, kUserDefinedDistribution);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDimensionsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDimensionsWriter> dimensionsWriter)
        {
            // Add Attributes (Parameters)
            const auto kHeight = dimensionsWriter->GetHeight();
            if (dimensionsWriter->IsHeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__HEIGHT.c_str(), dimensionsWriter->GetParameterFromHeight().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__HEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kHeight).c_str());
            }
            const auto kLength = dimensionsWriter->GetLength();
            if (dimensionsWriter->IsLengthParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LENGTH.c_str(), dimensionsWriter->GetParameterFromLength().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LENGTH.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLength).c_str());
            }
            const auto kWidth = dimensionsWriter->GetWidth();
            if (dimensionsWriter->IsWidthParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WIDTH.c_str(), dimensionsWriter->GetParameterFromWidth().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WIDTH.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWidth).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDirectionOfTravelDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDirectionOfTravelDistributionWriter> directionOfTravelDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kOpposite = directionOfTravelDistributionWriter->GetOpposite();
            if (directionOfTravelDistributionWriter->IsOppositeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE.c_str(), directionOfTravelDistributionWriter->GetParameterFromOpposite().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kOpposite).c_str());
            }
            const auto kSame = directionOfTravelDistributionWriter->GetSame();
            if (directionOfTravelDistributionWriter->IsSameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SAME.c_str(), directionOfTravelDistributionWriter->GetParameterFromSame().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SAME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kSame).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDirectoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDirectoryWriter> directoryWriter)
        {
            // Add Attributes (Parameters)
            const auto kPath = directoryWriter->GetPath();
            if (directoryWriter->IsPathParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PATH.c_str(), directoryWriter->GetParameterFromPath().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PATH.c_str(), XmlExportHelper::ToXmlStringFromString( kPath).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDistanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistanceConditionWriter> distanceConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAlongRoute = distanceConditionWriter->GetAlongRoute();
            if (!( kAlongRoute == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kAlongRoute).c_str());
            }
			else if (distanceConditionWriter->IsAlongRouteParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE.c_str(), distanceConditionWriter->GetParameterFromAlongRoute().c_str());
            }
            const auto kCoordinateSystem = distanceConditionWriter->GetCoordinateSystem();
            if (!( kCoordinateSystem == CoordinateSystem::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), kCoordinateSystem.GetLiteral().c_str());
            }
			else if (distanceConditionWriter->IsCoordinateSystemParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), distanceConditionWriter->GetParameterFromCoordinateSystem().c_str());
            }
            const auto kFreespace = distanceConditionWriter->GetFreespace();
            if (distanceConditionWriter->IsFreespaceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), distanceConditionWriter->GetParameterFromFreespace().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kFreespace).c_str());
            }
            const auto kRelativeDistanceType = distanceConditionWriter->GetRelativeDistanceType();
            if (!( kRelativeDistanceType == RelativeDistanceType::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), kRelativeDistanceType.GetLiteral().c_str());
            }
			else if (distanceConditionWriter->IsRelativeDistanceTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), distanceConditionWriter->GetParameterFromRelativeDistanceType().c_str());
            }
            const auto kRoutingAlgorithm = distanceConditionWriter->GetRoutingAlgorithm();
            if (!( kRoutingAlgorithm == RoutingAlgorithm::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), kRoutingAlgorithm.GetLiteral().c_str());
            }
			else if (distanceConditionWriter->IsRoutingAlgorithmParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), distanceConditionWriter->GetParameterFromRoutingAlgorithm().c_str());
            }
            const auto kRule = distanceConditionWriter->GetRule();
            if (distanceConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), distanceConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = distanceConditionWriter->GetValue();
            if (distanceConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), distanceConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
            const auto kPosition = distanceConditionWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDistributionDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionDefinitionWriter> distributionDefinitionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDeterministic = distributionDefinitionWriter->GetWriterDeterministic();
            if (kDeterministic)
            {
                tinyxml2::XMLNode* deterministicElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DETERMINISTIC.c_str());
                elementNode->InsertEndChild(deterministicElement);
                FillDeterministicNode(document, deterministicElement, kDeterministic);
            }
            const auto kStochastic = distributionDefinitionWriter->GetWriterStochastic();
            if (kStochastic)
            {
                tinyxml2::XMLNode* stochasticElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STOCHASTIC.c_str());
                elementNode->InsertEndChild(stochasticElement);
                FillStochasticNode(document, stochasticElement, kStochastic);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDistributionRangeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionRangeWriter> distributionRangeWriter)
        {
            // Add Attributes (Parameters)
            const auto kStepWidth = distributionRangeWriter->GetStepWidth();
            if (distributionRangeWriter->IsStepWidthParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STEP_WIDTH.c_str(), distributionRangeWriter->GetParameterFromStepWidth().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STEP_WIDTH.c_str(), XmlExportHelper::ToXmlStringFromDouble( kStepWidth).c_str());
            }
            const auto kRange = distributionRangeWriter->GetWriterRange();
            if (kRange)
            {
                tinyxml2::XMLNode* rangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RANGE.c_str());
                elementNode->InsertEndChild(rangeElement);
                FillRangeNode(document, rangeElement, kRange);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDistributionSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionSetWriter> distributionSetWriter)
        {
            // Add Attributes (Parameters)
            const auto kElements = distributionSetWriter->GetWriterElements();
            if (!kElements.empty())
            {
                for (auto elementsWriterItem : kElements)
                {
                    tinyxml2::XMLNode* elementsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ELEMENT.c_str());
                    elementNode->InsertEndChild(elementsElement);
                    FillDistributionSetElementNode(document, elementsElement, elementsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDistributionSetElementNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionSetElementWriter> distributionSetElementWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = distributionSetElementWriter->GetValue();
            if (distributionSetElementWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), distributionSetElementWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDomeImageNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDomeImageWriter> domeImageWriter)
        {
            // Add Attributes (Parameters)
            const auto kAzimuthOffset = domeImageWriter->GetAzimuthOffset();
            if (!( kAzimuthOffset == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kAzimuthOffset).c_str());
            }
			else if (domeImageWriter->IsAzimuthOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET.c_str(), domeImageWriter->GetParameterFromAzimuthOffset().c_str());
            }
            const auto kDomeFile = domeImageWriter->GetWriterDomeFile();
            if (kDomeFile)
            {
                tinyxml2::XMLNode* domeFileElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DOME_FILE.c_str());
                elementNode->InsertEndChild(domeFileElement);
                FillFileNode(document, domeFileElement, kDomeFile);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillDynamicConstraintsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDynamicConstraintsWriter> dynamicConstraintsWriter)
        {
            // Add Attributes (Parameters)
            const auto kMaxAcceleration = dynamicConstraintsWriter->GetMaxAcceleration();
            if (!( kMaxAcceleration == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxAcceleration).c_str());
            }
			else if (dynamicConstraintsWriter->IsMaxAccelerationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION.c_str(), dynamicConstraintsWriter->GetParameterFromMaxAcceleration().c_str());
            }
            const auto kMaxAccelerationRate = dynamicConstraintsWriter->GetMaxAccelerationRate();
            if (!( kMaxAccelerationRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxAccelerationRate).c_str());
            }
			else if (dynamicConstraintsWriter->IsMaxAccelerationRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE.c_str(), dynamicConstraintsWriter->GetParameterFromMaxAccelerationRate().c_str());
            }
            const auto kMaxDeceleration = dynamicConstraintsWriter->GetMaxDeceleration();
            if (!( kMaxDeceleration == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxDeceleration).c_str());
            }
			else if (dynamicConstraintsWriter->IsMaxDecelerationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION.c_str(), dynamicConstraintsWriter->GetParameterFromMaxDeceleration().c_str());
            }
            const auto kMaxDecelerationRate = dynamicConstraintsWriter->GetMaxDecelerationRate();
            if (!( kMaxDecelerationRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxDecelerationRate).c_str());
            }
			else if (dynamicConstraintsWriter->IsMaxDecelerationRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE.c_str(), dynamicConstraintsWriter->GetParameterFromMaxDecelerationRate().c_str());
            }
            const auto kMaxSpeed = dynamicConstraintsWriter->GetMaxSpeed();
            if (!( kMaxSpeed == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxSpeed).c_str());
            }
			else if (dynamicConstraintsWriter->IsMaxSpeedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED.c_str(), dynamicConstraintsWriter->GetParameterFromMaxSpeed().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEndOfRoadConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEndOfRoadConditionWriter> endOfRoadConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDuration = endOfRoadConditionWriter->GetDuration();
            if (endOfRoadConditionWriter->IsDurationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), endOfRoadConditionWriter->GetParameterFromDuration().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDuration).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEntitiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntitiesWriter> entitiesWriter)
        {
            // Add Attributes (Parameters)
            const auto kScenarioObjects = entitiesWriter->GetWriterScenarioObjects();
            if (!kScenarioObjects.empty())
            {
                for (auto scenarioObjectsWriterItem : kScenarioObjects)
                {
                    tinyxml2::XMLNode* scenarioObjectsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SCENARIO_OBJECT.c_str());
                    elementNode->InsertEndChild(scenarioObjectsElement);
                    FillScenarioObjectNode(document, scenarioObjectsElement, scenarioObjectsWriterItem);
                    
                }
            }
            const auto kEntitySelections = entitiesWriter->GetWriterEntitySelections();
            if (!kEntitySelections.empty())
            {
                for (auto entitySelectionsWriterItem : kEntitySelections)
                {
                    tinyxml2::XMLNode* entitySelectionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_SELECTION.c_str());
                    elementNode->InsertEndChild(entitySelectionsElement);
                    FillEntitySelectionNode(document, entitySelectionsElement, entitySelectionsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEntityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityActionWriter> entityActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = entityActionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kAddEntityAction = entityActionWriter->GetWriterAddEntityAction();
            if (kAddEntityAction)
            {
                tinyxml2::XMLNode* addEntityActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ADD_ENTITY_ACTION.c_str());
                elementNode->InsertEndChild(addEntityActionElement);
                FillAddEntityActionNode(document, addEntityActionElement, kAddEntityAction);
            }
            const auto kDeleteEntityAction = entityActionWriter->GetWriterDeleteEntityAction();
            if (kDeleteEntityAction)
            {
                tinyxml2::XMLNode* deleteEntityActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DELETE_ENTITY_ACTION.c_str());
                elementNode->InsertEndChild(deleteEntityActionElement);
                FillDeleteEntityActionNode(document, deleteEntityActionElement, kDeleteEntityAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEntityConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityConditionWriter> entityConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kEndOfRoadCondition = entityConditionWriter->GetWriterEndOfRoadCondition();
            if (kEndOfRoadCondition)
            {
                tinyxml2::XMLNode* endOfRoadConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__END_OF_ROAD_CONDITION.c_str());
                elementNode->InsertEndChild(endOfRoadConditionElement);
                FillEndOfRoadConditionNode(document, endOfRoadConditionElement, kEndOfRoadCondition);
            }
            const auto kCollisionCondition = entityConditionWriter->GetWriterCollisionCondition();
            if (kCollisionCondition)
            {
                tinyxml2::XMLNode* collisionConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__COLLISION_CONDITION.c_str());
                elementNode->InsertEndChild(collisionConditionElement);
                FillCollisionConditionNode(document, collisionConditionElement, kCollisionCondition);
            }
            const auto kOffroadCondition = entityConditionWriter->GetWriterOffroadCondition();
            if (kOffroadCondition)
            {
                tinyxml2::XMLNode* offroadConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__OFFROAD_CONDITION.c_str());
                elementNode->InsertEndChild(offroadConditionElement);
                FillOffroadConditionNode(document, offroadConditionElement, kOffroadCondition);
            }
            const auto kTimeHeadwayCondition = entityConditionWriter->GetWriterTimeHeadwayCondition();
            if (kTimeHeadwayCondition)
            {
                tinyxml2::XMLNode* timeHeadwayConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TIME_HEADWAY_CONDITION.c_str());
                elementNode->InsertEndChild(timeHeadwayConditionElement);
                FillTimeHeadwayConditionNode(document, timeHeadwayConditionElement, kTimeHeadwayCondition);
            }
            const auto kTimeToCollisionCondition = entityConditionWriter->GetWriterTimeToCollisionCondition();
            if (kTimeToCollisionCondition)
            {
                tinyxml2::XMLNode* timeToCollisionConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION.c_str());
                elementNode->InsertEndChild(timeToCollisionConditionElement);
                FillTimeToCollisionConditionNode(document, timeToCollisionConditionElement, kTimeToCollisionCondition);
            }
            const auto kAccelerationCondition = entityConditionWriter->GetWriterAccelerationCondition();
            if (kAccelerationCondition)
            {
                tinyxml2::XMLNode* accelerationConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACCELERATION_CONDITION.c_str());
                elementNode->InsertEndChild(accelerationConditionElement);
                FillAccelerationConditionNode(document, accelerationConditionElement, kAccelerationCondition);
            }
            const auto kStandStillCondition = entityConditionWriter->GetWriterStandStillCondition();
            if (kStandStillCondition)
            {
                tinyxml2::XMLNode* standStillConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STAND_STILL_CONDITION.c_str());
                elementNode->InsertEndChild(standStillConditionElement);
                FillStandStillConditionNode(document, standStillConditionElement, kStandStillCondition);
            }
            const auto kSpeedCondition = entityConditionWriter->GetWriterSpeedCondition();
            if (kSpeedCondition)
            {
                tinyxml2::XMLNode* speedConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SPEED_CONDITION.c_str());
                elementNode->InsertEndChild(speedConditionElement);
                FillSpeedConditionNode(document, speedConditionElement, kSpeedCondition);
            }
            const auto kRelativeSpeedCondition = entityConditionWriter->GetWriterRelativeSpeedCondition();
            if (kRelativeSpeedCondition)
            {
                tinyxml2::XMLNode* relativeSpeedConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_CONDITION.c_str());
                elementNode->InsertEndChild(relativeSpeedConditionElement);
                FillRelativeSpeedConditionNode(document, relativeSpeedConditionElement, kRelativeSpeedCondition);
            }
            const auto kTraveledDistanceCondition = entityConditionWriter->GetWriterTraveledDistanceCondition();
            if (kTraveledDistanceCondition)
            {
                tinyxml2::XMLNode* traveledDistanceConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAVELED_DISTANCE_CONDITION.c_str());
                elementNode->InsertEndChild(traveledDistanceConditionElement);
                FillTraveledDistanceConditionNode(document, traveledDistanceConditionElement, kTraveledDistanceCondition);
            }
            const auto kReachPositionCondition = entityConditionWriter->GetWriterReachPositionCondition();
            if (kReachPositionCondition)
            {
                tinyxml2::XMLNode* reachPositionConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__REACH_POSITION_CONDITION.c_str());
                elementNode->InsertEndChild(reachPositionConditionElement);
                FillReachPositionConditionNode(document, reachPositionConditionElement, kReachPositionCondition);
            }
            const auto kDistanceCondition = entityConditionWriter->GetWriterDistanceCondition();
            if (kDistanceCondition)
            {
                tinyxml2::XMLNode* distanceConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DISTANCE_CONDITION.c_str());
                elementNode->InsertEndChild(distanceConditionElement);
                FillDistanceConditionNode(document, distanceConditionElement, kDistanceCondition);
            }
            const auto kRelativeDistanceCondition = entityConditionWriter->GetWriterRelativeDistanceCondition();
            if (kRelativeDistanceCondition)
            {
                tinyxml2::XMLNode* relativeDistanceConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_DISTANCE_CONDITION.c_str());
                elementNode->InsertEndChild(relativeDistanceConditionElement);
                FillRelativeDistanceConditionNode(document, relativeDistanceConditionElement, kRelativeDistanceCondition);
            }
            const auto kRelativeClearanceCondition = entityConditionWriter->GetWriterRelativeClearanceCondition();
            if (kRelativeClearanceCondition)
            {
                tinyxml2::XMLNode* relativeClearanceConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_CLEARANCE_CONDITION.c_str());
                elementNode->InsertEndChild(relativeClearanceConditionElement);
                FillRelativeClearanceConditionNode(document, relativeClearanceConditionElement, kRelativeClearanceCondition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEntityObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityObjectWriter> entityObjectWriter)
        {
            // Add Attributes (Parameters)
            const auto kCatalogReference = entityObjectWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
            const auto kVehicle = entityObjectWriter->GetWriterVehicle();
            if (kVehicle)
            {
                tinyxml2::XMLNode* vehicleElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE.c_str());
                elementNode->InsertEndChild(vehicleElement);
                FillVehicleNode(document, vehicleElement, kVehicle);
            }
            const auto kPedestrian = entityObjectWriter->GetWriterPedestrian();
            if (kPedestrian)
            {
                tinyxml2::XMLNode* pedestrianElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PEDESTRIAN.c_str());
                elementNode->InsertEndChild(pedestrianElement);
                FillPedestrianNode(document, pedestrianElement, kPedestrian);
            }
            const auto kMiscObject = entityObjectWriter->GetWriterMiscObject();
            if (kMiscObject)
            {
                tinyxml2::XMLNode* miscObjectElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MISC_OBJECT.c_str());
                elementNode->InsertEndChild(miscObjectElement);
                FillMiscObjectNode(document, miscObjectElement, kMiscObject);
            }
            const auto kExternalObjectReference = entityObjectWriter->GetWriterExternalObjectReference();
            if (kExternalObjectReference)
            {
                tinyxml2::XMLNode* externalObjectReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__EXTERNAL_OBJECT_REFERENCE.c_str());
                elementNode->InsertEndChild(externalObjectReferenceElement);
                FillExternalObjectReferenceNode(document, externalObjectReferenceElement, kExternalObjectReference);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEntityRefNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityRefWriter> entityRefWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = entityRefWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEntitySelectionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntitySelectionWriter> entitySelectionWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = entitySelectionWriter->GetName();
            if (entitySelectionWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), entitySelectionWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kMembers = entitySelectionWriter->GetWriterMembers();
            if (kMembers)
            {
                tinyxml2::XMLNode* membersElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MEMBERS.c_str());
                elementNode->InsertEndChild(membersElement);
                FillSelectedEntitiesNode(document, membersElement, kMembers);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEnvironmentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEnvironmentWriter> environmentWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = environmentWriter->GetName();
            if (environmentWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), environmentWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kParameterDeclarations = environmentWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kTimeOfDay = environmentWriter->GetWriterTimeOfDay();
            if (kTimeOfDay)
            {
                tinyxml2::XMLNode* timeOfDayElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TIME_OF_DAY.c_str());
                elementNode->InsertEndChild(timeOfDayElement);
                FillTimeOfDayNode(document, timeOfDayElement, kTimeOfDay);
            }
            const auto kWeather = environmentWriter->GetWriterWeather();
            if (kWeather)
            {
                tinyxml2::XMLNode* weatherElement = document->NewElement(OSC_CONSTANTS::ELEMENT__WEATHER.c_str());
                elementNode->InsertEndChild(weatherElement);
                FillWeatherNode(document, weatherElement, kWeather);
            }
            const auto kRoadCondition = environmentWriter->GetWriterRoadCondition();
            if (kRoadCondition)
            {
                tinyxml2::XMLNode* roadConditionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROAD_CONDITION.c_str());
                elementNode->InsertEndChild(roadConditionElement);
                FillRoadConditionNode(document, roadConditionElement, kRoadCondition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEnvironmentActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEnvironmentActionWriter> environmentActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kEnvironment = environmentActionWriter->GetWriterEnvironment();
            if (kEnvironment)
            {
                tinyxml2::XMLNode* environmentElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENVIRONMENT.c_str());
                elementNode->InsertEndChild(environmentElement);
                FillEnvironmentNode(document, environmentElement, kEnvironment);
            }
            const auto kCatalogReference = environmentActionWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEnvironmentCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEnvironmentCatalogLocationWriter> environmentCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = environmentCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillEventNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEventWriter> eventWriter)
        {
            // Add Attributes (Parameters)
            const auto kMaximumExecutionCount = eventWriter->GetMaximumExecutionCount();
            if (!( kMaximumExecutionCount == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT.c_str(), XmlExportHelper::ToXmlStringFromUnsignedInt( kMaximumExecutionCount).c_str());
            }
			else if (eventWriter->IsMaximumExecutionCountParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT.c_str(), eventWriter->GetParameterFromMaximumExecutionCount().c_str());
            }
            const auto kName = eventWriter->GetName();
            if (eventWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), eventWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kPriority = eventWriter->GetPriority();
            if (eventWriter->IsPriorityParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PRIORITY.c_str(), eventWriter->GetParameterFromPriority().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PRIORITY.c_str(), kPriority.GetLiteral().c_str());
            }
            const auto kActions = eventWriter->GetWriterActions();
            if (!kActions.empty())
            {
                for (auto actionsWriterItem : kActions)
                {
                    tinyxml2::XMLNode* actionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACTION.c_str());
                    elementNode->InsertEndChild(actionsElement);
                    FillActionNode(document, actionsElement, actionsWriterItem);
                    
                }
            }
            const auto kStartTrigger = eventWriter->GetWriterStartTrigger();
            if (kStartTrigger)
            {
                tinyxml2::XMLNode* startTriggerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__START_TRIGGER.c_str());
                elementNode->InsertEndChild(startTriggerElement);
                FillTriggerNode(document, startTriggerElement, kStartTrigger);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillExternalObjectReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IExternalObjectReferenceWriter> externalObjectReferenceWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = externalObjectReferenceWriter->GetName();
            if (externalObjectReferenceWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), externalObjectReferenceWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillFileNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFileWriter> fileWriter)
        {
            // Add Attributes (Parameters)
            const auto kFilepath = fileWriter->GetFilepath();
            if (fileWriter->IsFilepathParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FILEPATH.c_str(), fileWriter->GetParameterFromFilepath().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FILEPATH.c_str(), XmlExportHelper::ToXmlStringFromString( kFilepath).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillFileHeaderNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFileHeaderWriter> fileHeaderWriter)
        {
            // Add Attributes (Parameters)
            const auto kAuthor = fileHeaderWriter->GetAuthor();
            if (fileHeaderWriter->IsAuthorParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__AUTHOR.c_str(), fileHeaderWriter->GetParameterFromAuthor().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__AUTHOR.c_str(), XmlExportHelper::ToXmlStringFromString( kAuthor).c_str());
            }
            const auto kDate = fileHeaderWriter->GetDate();
            if (fileHeaderWriter->IsDateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DATE.c_str(), fileHeaderWriter->GetParameterFromDate().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DATE.c_str(), XmlExportHelper::ToXmlStringFromDateTime( kDate).c_str());
            }
            const auto kDescription = fileHeaderWriter->GetDescription();
            if (fileHeaderWriter->IsDescriptionParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION.c_str(), fileHeaderWriter->GetParameterFromDescription().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION.c_str(), XmlExportHelper::ToXmlStringFromString( kDescription).c_str());
            }
            const auto kRevMajor = fileHeaderWriter->GetRevMajor();
            if (fileHeaderWriter->IsRevMajorParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR.c_str(), fileHeaderWriter->GetParameterFromRevMajor().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR.c_str(), XmlExportHelper::ToXmlStringFromUnsignedShort( kRevMajor).c_str());
            }
            const auto kRevMinor = fileHeaderWriter->GetRevMinor();
            if (fileHeaderWriter->IsRevMinorParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR.c_str(), fileHeaderWriter->GetParameterFromRevMinor().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR.c_str(), XmlExportHelper::ToXmlStringFromUnsignedShort( kRevMinor).c_str());
            }
            const auto kLicense = fileHeaderWriter->GetWriterLicense();
            if (kLicense)
            {
                tinyxml2::XMLNode* licenseElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LICENSE.c_str());
                elementNode->InsertEndChild(licenseElement);
                FillLicenseNode(document, licenseElement, kLicense);
            }
            const auto kProperties = fileHeaderWriter->GetWriterProperties();
            if (kProperties)
            {
                tinyxml2::XMLNode* propertiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROPERTIES.c_str());
                elementNode->InsertEndChild(propertiesElement);
                FillPropertiesNode(document, propertiesElement, kProperties);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillFinalSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFinalSpeedWriter> finalSpeedWriter)
        {
            // Add Attributes (Parameters)
            const auto kAbsoluteSpeed = finalSpeedWriter->GetWriterAbsoluteSpeed();
            if (kAbsoluteSpeed)
            {
                tinyxml2::XMLNode* absoluteSpeedElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ABSOLUTE_SPEED.c_str());
                elementNode->InsertEndChild(absoluteSpeedElement);
                FillAbsoluteSpeedNode(document, absoluteSpeedElement, kAbsoluteSpeed);
            }
            const auto kRelativeSpeedToMaster = finalSpeedWriter->GetWriterRelativeSpeedToMaster();
            if (kRelativeSpeedToMaster)
            {
                tinyxml2::XMLNode* relativeSpeedToMasterElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_TO_MASTER.c_str());
                elementNode->InsertEndChild(relativeSpeedToMasterElement);
                FillRelativeSpeedToMasterNode(document, relativeSpeedToMasterElement, kRelativeSpeedToMaster);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillFogNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFogWriter> fogWriter)
        {
            // Add Attributes (Parameters)
            const auto kVisualRange = fogWriter->GetVisualRange();
            if (fogWriter->IsVisualRangeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE.c_str(), fogWriter->GetParameterFromVisualRange().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kVisualRange).c_str());
            }
            const auto kBoundingBox = fogWriter->GetWriterBoundingBox();
            if (kBoundingBox)
            {
                tinyxml2::XMLNode* boundingBoxElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX.c_str());
                elementNode->InsertEndChild(boundingBoxElement);
                FillBoundingBoxNode(document, boundingBoxElement, kBoundingBox);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillFollowTrajectoryActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFollowTrajectoryActionWriter> followTrajectoryActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kInitialDistanceOffset = followTrajectoryActionWriter->GetInitialDistanceOffset();
            if (!( kInitialDistanceOffset == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INITIAL_DISTANCE_OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kInitialDistanceOffset).c_str());
            }
			else if (followTrajectoryActionWriter->IsInitialDistanceOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INITIAL_DISTANCE_OFFSET.c_str(), followTrajectoryActionWriter->GetParameterFromInitialDistanceOffset().c_str());
            }
            const auto kTrajectory = followTrajectoryActionWriter->GetWriterTrajectory();
            if (kTrajectory)
            {
                tinyxml2::XMLNode* trajectoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY.c_str());
                elementNode->InsertEndChild(trajectoryElement);
                FillTrajectoryNode(document, trajectoryElement, kTrajectory);
            }
            const auto kCatalogReference = followTrajectoryActionWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
            const auto kTimeReference = followTrajectoryActionWriter->GetWriterTimeReference();
            if (kTimeReference)
            {
                tinyxml2::XMLNode* timeReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TIME_REFERENCE.c_str());
                elementNode->InsertEndChild(timeReferenceElement);
                FillTimeReferenceNode(document, timeReferenceElement, kTimeReference);
            }
            const auto kTrajectoryFollowingMode = followTrajectoryActionWriter->GetWriterTrajectoryFollowingMode();
            if (kTrajectoryFollowingMode)
            {
                tinyxml2::XMLNode* trajectoryFollowingModeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY_FOLLOWING_MODE.c_str());
                elementNode->InsertEndChild(trajectoryFollowingModeElement);
                FillTrajectoryFollowingModeNode(document, trajectoryFollowingModeElement, kTrajectoryFollowingMode);
            }
            const auto kTrajectoryRef = followTrajectoryActionWriter->GetWriterTrajectoryRef();
            if (kTrajectoryRef)
            {
                tinyxml2::XMLNode* trajectoryRefElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY_REF.c_str());
                elementNode->InsertEndChild(trajectoryRefElement);
                FillTrajectoryRefNode(document, trajectoryRefElement, kTrajectoryRef);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillGearNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IGearWriter> gearWriter)
        {
            // Add Attributes (Parameters)
            const auto kManualGear = gearWriter->GetWriterManualGear();
            if (kManualGear)
            {
                tinyxml2::XMLNode* manualGearElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MANUAL_GEAR.c_str());
                elementNode->InsertEndChild(manualGearElement);
                FillManualGearNode(document, manualGearElement, kManualGear);
            }
            const auto kAutomaticGear = gearWriter->GetWriterAutomaticGear();
            if (kAutomaticGear)
            {
                tinyxml2::XMLNode* automaticGearElement = document->NewElement(OSC_CONSTANTS::ELEMENT__AUTOMATIC_GEAR.c_str());
                elementNode->InsertEndChild(automaticGearElement);
                FillAutomaticGearNode(document, automaticGearElement, kAutomaticGear);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillGeoPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IGeoPositionWriter> geoPositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAltitude = geoPositionWriter->GetAltitude();
            if (!( kAltitude == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALTITUDE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kAltitude).c_str());
            }
			else if (geoPositionWriter->IsAltitudeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALTITUDE.c_str(), geoPositionWriter->GetParameterFromAltitude().c_str());
            }
            const auto kHeight = geoPositionWriter->GetHeight();
            if (!( kHeight == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__HEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kHeight).c_str());
            }
			else if (geoPositionWriter->IsHeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__HEIGHT.c_str(), geoPositionWriter->GetParameterFromHeight().c_str());
            }
            const auto kLatitude = geoPositionWriter->GetLatitude();
            if (!( kLatitude == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LATITUDE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLatitude).c_str());
            }
			else if (geoPositionWriter->IsLatitudeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LATITUDE.c_str(), geoPositionWriter->GetParameterFromLatitude().c_str());
            }
            const auto kLatitudeDeg = geoPositionWriter->GetLatitudeDeg();
            if (!( kLatitudeDeg == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLatitudeDeg).c_str());
            }
			else if (geoPositionWriter->IsLatitudeDegParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG.c_str(), geoPositionWriter->GetParameterFromLatitudeDeg().c_str());
            }
            const auto kLongitude = geoPositionWriter->GetLongitude();
            if (!( kLongitude == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LONGITUDE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLongitude).c_str());
            }
			else if (geoPositionWriter->IsLongitudeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LONGITUDE.c_str(), geoPositionWriter->GetParameterFromLongitude().c_str());
            }
            const auto kLongitudeDeg = geoPositionWriter->GetLongitudeDeg();
            if (!( kLongitudeDeg == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLongitudeDeg).c_str());
            }
			else if (geoPositionWriter->IsLongitudeDegParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG.c_str(), geoPositionWriter->GetParameterFromLongitudeDeg().c_str());
            }
            const auto kOrientation = geoPositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillGlobalActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IGlobalActionWriter> globalActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kEnvironmentAction = globalActionWriter->GetWriterEnvironmentAction();
            if (kEnvironmentAction)
            {
                tinyxml2::XMLNode* environmentActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENVIRONMENT_ACTION.c_str());
                elementNode->InsertEndChild(environmentActionElement);
                FillEnvironmentActionNode(document, environmentActionElement, kEnvironmentAction);
            }
            const auto kEntityAction = globalActionWriter->GetWriterEntityAction();
            if (kEntityAction)
            {
                tinyxml2::XMLNode* entityActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_ACTION.c_str());
                elementNode->InsertEndChild(entityActionElement);
                FillEntityActionNode(document, entityActionElement, kEntityAction);
            }
            const auto kParameterAction = globalActionWriter->GetWriterParameterAction();
            if (kParameterAction)
            {
                tinyxml2::XMLNode* parameterActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_ACTION.c_str());
                elementNode->InsertEndChild(parameterActionElement);
                FillParameterActionNode(document, parameterActionElement, kParameterAction);
            }
            const auto kInfrastructureAction = globalActionWriter->GetWriterInfrastructureAction();
            if (kInfrastructureAction)
            {
                tinyxml2::XMLNode* infrastructureActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__INFRASTRUCTURE_ACTION.c_str());
                elementNode->InsertEndChild(infrastructureActionElement);
                FillInfrastructureActionNode(document, infrastructureActionElement, kInfrastructureAction);
            }
            const auto kTrafficAction = globalActionWriter->GetWriterTrafficAction();
            if (kTrafficAction)
            {
                tinyxml2::XMLNode* trafficActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_ACTION.c_str());
                elementNode->InsertEndChild(trafficActionElement);
                FillTrafficActionNode(document, trafficActionElement, kTrafficAction);
            }
            const auto kVariableAction = globalActionWriter->GetWriterVariableAction();
            if (kVariableAction)
            {
                tinyxml2::XMLNode* variableActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VARIABLE_ACTION.c_str());
                elementNode->InsertEndChild(variableActionElement);
                FillVariableActionNode(document, variableActionElement, kVariableAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillHistogramNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IHistogramWriter> histogramWriter)
        {
            // Add Attributes (Parameters)
            const auto kBins = histogramWriter->GetWriterBins();
            if (!kBins.empty())
            {
                for (auto binsWriterItem : kBins)
                {
                    tinyxml2::XMLNode* binsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BIN.c_str());
                    elementNode->InsertEndChild(binsElement);
                    FillHistogramBinNode(document, binsElement, binsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillHistogramBinNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IHistogramBinWriter> histogramBinWriter)
        {
            // Add Attributes (Parameters)
            const auto kWeight = histogramBinWriter->GetWeight();
            if (histogramBinWriter->IsWeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), histogramBinWriter->GetParameterFromWeight().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWeight).c_str());
            }
            const auto kRange = histogramBinWriter->GetWriterRange();
            if (kRange)
            {
                tinyxml2::XMLNode* rangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RANGE.c_str());
                elementNode->InsertEndChild(rangeElement);
                FillRangeNode(document, rangeElement, kRange);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillInRoutePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInRoutePositionWriter> inRoutePositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kFromCurrentEntity = inRoutePositionWriter->GetWriterFromCurrentEntity();
            if (kFromCurrentEntity)
            {
                tinyxml2::XMLNode* fromCurrentEntityElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FROM_CURRENT_ENTITY.c_str());
                elementNode->InsertEndChild(fromCurrentEntityElement);
                FillPositionOfCurrentEntityNode(document, fromCurrentEntityElement, kFromCurrentEntity);
            }
            const auto kFromRoadCoordinates = inRoutePositionWriter->GetWriterFromRoadCoordinates();
            if (kFromRoadCoordinates)
            {
                tinyxml2::XMLNode* fromRoadCoordinatesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FROM_ROAD_COORDINATES.c_str());
                elementNode->InsertEndChild(fromRoadCoordinatesElement);
                FillPositionInRoadCoordinatesNode(document, fromRoadCoordinatesElement, kFromRoadCoordinates);
            }
            const auto kFromLaneCoordinates = inRoutePositionWriter->GetWriterFromLaneCoordinates();
            if (kFromLaneCoordinates)
            {
                tinyxml2::XMLNode* fromLaneCoordinatesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FROM_LANE_COORDINATES.c_str());
                elementNode->InsertEndChild(fromLaneCoordinatesElement);
                FillPositionInLaneCoordinatesNode(document, fromLaneCoordinatesElement, kFromLaneCoordinates);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillInfrastructureActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInfrastructureActionWriter> infrastructureActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kTrafficSignalAction = infrastructureActionWriter->GetWriterTrafficSignalAction();
            if (kTrafficSignalAction)
            {
                tinyxml2::XMLNode* trafficSignalActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_ACTION.c_str());
                elementNode->InsertEndChild(trafficSignalActionElement);
                FillTrafficSignalActionNode(document, trafficSignalActionElement, kTrafficSignalAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillInitNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInitWriter> initWriter)
        {
            // Add Attributes (Parameters)
            const auto kActions = initWriter->GetWriterActions();
            if (kActions)
            {
                tinyxml2::XMLNode* actionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACTIONS.c_str());
                elementNode->InsertEndChild(actionsElement);
                FillInitActionsNode(document, actionsElement, kActions);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillInitActionsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInitActionsWriter> initActionsWriter)
        {
            // Add Attributes (Parameters)
            const auto kGlobalActions = initActionsWriter->GetWriterGlobalActions();
            if (!kGlobalActions.empty())
            {
                for (auto globalActionsWriterItem : kGlobalActions)
                {
                    tinyxml2::XMLNode* globalActionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION.c_str());
                    elementNode->InsertEndChild(globalActionsElement);
                    FillGlobalActionNode(document, globalActionsElement, globalActionsWriterItem);
                    
                }
            }
            const auto kUserDefinedActions = initActionsWriter->GetWriterUserDefinedActions();
            if (!kUserDefinedActions.empty())
            {
                for (auto userDefinedActionsWriterItem : kUserDefinedActions)
                {
                    tinyxml2::XMLNode* userDefinedActionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION.c_str());
                    elementNode->InsertEndChild(userDefinedActionsElement);
                    FillUserDefinedActionNode(document, userDefinedActionsElement, userDefinedActionsWriterItem);
                    
                }
            }
            const auto kPrivates = initActionsWriter->GetWriterPrivates();
            if (!kPrivates.empty())
            {
                for (auto privatesWriterItem : kPrivates)
                {
                    tinyxml2::XMLNode* privatesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PRIVATE.c_str());
                    elementNode->InsertEndChild(privatesElement);
                    FillPrivateNode(document, privatesElement, privatesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillKnotNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IKnotWriter> knotWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = knotWriter->GetValue();
            if (knotWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), knotWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLaneChangeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneChangeActionWriter> laneChangeActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kTargetLaneOffset = laneChangeActionWriter->GetTargetLaneOffset();
            if (!( kTargetLaneOffset == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTargetLaneOffset).c_str());
            }
			else if (laneChangeActionWriter->IsTargetLaneOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET.c_str(), laneChangeActionWriter->GetParameterFromTargetLaneOffset().c_str());
            }
            const auto kLaneChangeActionDynamics = laneChangeActionWriter->GetWriterLaneChangeActionDynamics();
            if (kLaneChangeActionDynamics)
            {
                tinyxml2::XMLNode* laneChangeActionDynamicsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION_DYNAMICS.c_str());
                elementNode->InsertEndChild(laneChangeActionDynamicsElement);
                FillTransitionDynamicsNode(document, laneChangeActionDynamicsElement, kLaneChangeActionDynamics);
            }
            const auto kLaneChangeTarget = laneChangeActionWriter->GetWriterLaneChangeTarget();
            if (kLaneChangeTarget)
            {
                tinyxml2::XMLNode* laneChangeTargetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_TARGET.c_str());
                elementNode->InsertEndChild(laneChangeTargetElement);
                FillLaneChangeTargetNode(document, laneChangeTargetElement, kLaneChangeTarget);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLaneChangeTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneChangeTargetWriter> laneChangeTargetWriter)
        {
            // Add Attributes (Parameters)
            const auto kRelativeTargetLane = laneChangeTargetWriter->GetWriterRelativeTargetLane();
            if (kRelativeTargetLane)
            {
                tinyxml2::XMLNode* relativeTargetLaneElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE.c_str());
                elementNode->InsertEndChild(relativeTargetLaneElement);
                FillRelativeTargetLaneNode(document, relativeTargetLaneElement, kRelativeTargetLane);
            }
            const auto kAbsoluteTargetLane = laneChangeTargetWriter->GetWriterAbsoluteTargetLane();
            if (kAbsoluteTargetLane)
            {
                tinyxml2::XMLNode* absoluteTargetLaneElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE.c_str());
                elementNode->InsertEndChild(absoluteTargetLaneElement);
                FillAbsoluteTargetLaneNode(document, absoluteTargetLaneElement, kAbsoluteTargetLane);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLaneOffsetActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneOffsetActionWriter> laneOffsetActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kContinuous = laneOffsetActionWriter->GetContinuous();
            if (laneOffsetActionWriter->IsContinuousParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), laneOffsetActionWriter->GetParameterFromContinuous().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kContinuous).c_str());
            }
            const auto kLaneOffsetActionDynamics = laneOffsetActionWriter->GetWriterLaneOffsetActionDynamics();
            if (kLaneOffsetActionDynamics)
            {
                tinyxml2::XMLNode* laneOffsetActionDynamicsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION_DYNAMICS.c_str());
                elementNode->InsertEndChild(laneOffsetActionDynamicsElement);
                FillLaneOffsetActionDynamicsNode(document, laneOffsetActionDynamicsElement, kLaneOffsetActionDynamics);
            }
            const auto kLaneOffsetTarget = laneOffsetActionWriter->GetWriterLaneOffsetTarget();
            if (kLaneOffsetTarget)
            {
                tinyxml2::XMLNode* laneOffsetTargetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_TARGET.c_str());
                elementNode->InsertEndChild(laneOffsetTargetElement);
                FillLaneOffsetTargetNode(document, laneOffsetTargetElement, kLaneOffsetTarget);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLaneOffsetActionDynamicsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneOffsetActionDynamicsWriter> laneOffsetActionDynamicsWriter)
        {
            // Add Attributes (Parameters)
            const auto kDynamicsShape = laneOffsetActionDynamicsWriter->GetDynamicsShape();
            if (laneOffsetActionDynamicsWriter->IsDynamicsShapeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE.c_str(), laneOffsetActionDynamicsWriter->GetParameterFromDynamicsShape().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE.c_str(), kDynamicsShape.GetLiteral().c_str());
            }
            const auto kMaxLateralAcc = laneOffsetActionDynamicsWriter->GetMaxLateralAcc();
            if (!( kMaxLateralAcc == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxLateralAcc).c_str());
            }
			else if (laneOffsetActionDynamicsWriter->IsMaxLateralAccParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC.c_str(), laneOffsetActionDynamicsWriter->GetParameterFromMaxLateralAcc().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLaneOffsetTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneOffsetTargetWriter> laneOffsetTargetWriter)
        {
            // Add Attributes (Parameters)
            const auto kRelativeTargetLaneOffset = laneOffsetTargetWriter->GetWriterRelativeTargetLaneOffset();
            if (kRelativeTargetLaneOffset)
            {
                tinyxml2::XMLNode* relativeTargetLaneOffsetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE_OFFSET.c_str());
                elementNode->InsertEndChild(relativeTargetLaneOffsetElement);
                FillRelativeTargetLaneOffsetNode(document, relativeTargetLaneOffsetElement, kRelativeTargetLaneOffset);
            }
            const auto kAbsoluteTargetLaneOffset = laneOffsetTargetWriter->GetWriterAbsoluteTargetLaneOffset();
            if (kAbsoluteTargetLaneOffset)
            {
                tinyxml2::XMLNode* absoluteTargetLaneOffsetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET.c_str());
                elementNode->InsertEndChild(absoluteTargetLaneOffsetElement);
                FillAbsoluteTargetLaneOffsetNode(document, absoluteTargetLaneOffsetElement, kAbsoluteTargetLaneOffset);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLanePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILanePositionWriter> lanePositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kLaneId = lanePositionWriter->GetLaneId();
            if (lanePositionWriter->IsLaneIdParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LANE_ID.c_str(), lanePositionWriter->GetParameterFromLaneId().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LANE_ID.c_str(), XmlExportHelper::ToXmlStringFromString( kLaneId).c_str());
            }
            const auto kOffset = lanePositionWriter->GetOffset();
            if (!( kOffset == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kOffset).c_str());
            }
			else if (lanePositionWriter->IsOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), lanePositionWriter->GetParameterFromOffset().c_str());
            }
            const auto kRoadId = lanePositionWriter->GetRoadId();
            if (lanePositionWriter->IsRoadIdParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID.c_str(), lanePositionWriter->GetParameterFromRoadId().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID.c_str(), XmlExportHelper::ToXmlStringFromString( kRoadId).c_str());
            }
            const auto kS = lanePositionWriter->GetS();
            if (lanePositionWriter->IsSParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__S.c_str(), lanePositionWriter->GetParameterFromS().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__S.c_str(), XmlExportHelper::ToXmlStringFromDouble( kS).c_str());
            }
            const auto kOrientation = lanePositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLateralActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILateralActionWriter> lateralActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kLaneChangeAction = lateralActionWriter->GetWriterLaneChangeAction();
            if (kLaneChangeAction)
            {
                tinyxml2::XMLNode* laneChangeActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION.c_str());
                elementNode->InsertEndChild(laneChangeActionElement);
                FillLaneChangeActionNode(document, laneChangeActionElement, kLaneChangeAction);
            }
            const auto kLaneOffsetAction = lateralActionWriter->GetWriterLaneOffsetAction();
            if (kLaneOffsetAction)
            {
                tinyxml2::XMLNode* laneOffsetActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION.c_str());
                elementNode->InsertEndChild(laneOffsetActionElement);
                FillLaneOffsetActionNode(document, laneOffsetActionElement, kLaneOffsetAction);
            }
            const auto kLateralDistanceAction = lateralActionWriter->GetWriterLateralDistanceAction();
            if (kLateralDistanceAction)
            {
                tinyxml2::XMLNode* lateralDistanceActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LATERAL_DISTANCE_ACTION.c_str());
                elementNode->InsertEndChild(lateralDistanceActionElement);
                FillLateralDistanceActionNode(document, lateralDistanceActionElement, kLateralDistanceAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLateralDistanceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILateralDistanceActionWriter> lateralDistanceActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kContinuous = lateralDistanceActionWriter->GetContinuous();
            if (lateralDistanceActionWriter->IsContinuousParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), lateralDistanceActionWriter->GetParameterFromContinuous().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kContinuous).c_str());
            }
            const auto kCoordinateSystem = lateralDistanceActionWriter->GetCoordinateSystem();
            if (!( kCoordinateSystem == CoordinateSystem::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), kCoordinateSystem.GetLiteral().c_str());
            }
			else if (lateralDistanceActionWriter->IsCoordinateSystemParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), lateralDistanceActionWriter->GetParameterFromCoordinateSystem().c_str());
            }
            const auto kDisplacement = lateralDistanceActionWriter->GetDisplacement();
            if (!( kDisplacement == LateralDisplacement::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISPLACEMENT.c_str(), kDisplacement.GetLiteral().c_str());
            }
			else if (lateralDistanceActionWriter->IsDisplacementParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISPLACEMENT.c_str(), lateralDistanceActionWriter->GetParameterFromDisplacement().c_str());
            }
            const auto kDistance = lateralDistanceActionWriter->GetDistance();
            if (!( kDistance == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDistance).c_str());
            }
			else if (lateralDistanceActionWriter->IsDistanceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE.c_str(), lateralDistanceActionWriter->GetParameterFromDistance().c_str());
            }
            const auto kEntityRef = lateralDistanceActionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kFreespace = lateralDistanceActionWriter->GetFreespace();
            if (lateralDistanceActionWriter->IsFreespaceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), lateralDistanceActionWriter->GetParameterFromFreespace().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kFreespace).c_str());
            }
            const auto kDynamicConstraints = lateralDistanceActionWriter->GetWriterDynamicConstraints();
            if (kDynamicConstraints)
            {
                tinyxml2::XMLNode* dynamicConstraintsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS.c_str());
                elementNode->InsertEndChild(dynamicConstraintsElement);
                FillDynamicConstraintsNode(document, dynamicConstraintsElement, kDynamicConstraints);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLicenseNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILicenseWriter> licenseWriter)
        {
            // Add Attributes (Parameters)
            const auto kText = licenseWriter->GetText();
            if (!( kText.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TEXT.c_str(), XmlExportHelper::ToXmlStringFromString( kText).c_str());
            }
			else if (licenseWriter->IsTextParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TEXT.c_str(), licenseWriter->GetParameterFromText().c_str());
            }
            const auto kName = licenseWriter->GetName();
            if (licenseWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), licenseWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kResource = licenseWriter->GetResource();
            if (!( kResource.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RESOURCE.c_str(), XmlExportHelper::ToXmlStringFromString( kResource).c_str());
            }
			else if (licenseWriter->IsResourceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RESOURCE.c_str(), licenseWriter->GetParameterFromResource().c_str());
            }
            const auto kSpdxId = licenseWriter->GetSpdxId();
            if (!( kSpdxId.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPDX_ID.c_str(), XmlExportHelper::ToXmlStringFromString( kSpdxId).c_str());
            }
			else if (licenseWriter->IsSpdxIdParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPDX_ID.c_str(), licenseWriter->GetParameterFromSpdxId().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLightStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILightStateWriter> lightStateWriter)
        {
            // Add Attributes (Parameters)
            const auto kFlashingOffDuration = lightStateWriter->GetFlashingOffDuration();
            if (!( kFlashingOffDuration == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FLASHING_OFF_DURATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kFlashingOffDuration).c_str());
            }
			else if (lightStateWriter->IsFlashingOffDurationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FLASHING_OFF_DURATION.c_str(), lightStateWriter->GetParameterFromFlashingOffDuration().c_str());
            }
            const auto kFlashingOnDuration = lightStateWriter->GetFlashingOnDuration();
            if (!( kFlashingOnDuration == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FLASHING_ON_DURATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kFlashingOnDuration).c_str());
            }
			else if (lightStateWriter->IsFlashingOnDurationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FLASHING_ON_DURATION.c_str(), lightStateWriter->GetParameterFromFlashingOnDuration().c_str());
            }
            const auto kLuminousIntensity = lightStateWriter->GetLuminousIntensity();
            if (!( kLuminousIntensity == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LUMINOUS_INTENSITY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLuminousIntensity).c_str());
            }
			else if (lightStateWriter->IsLuminousIntensityParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LUMINOUS_INTENSITY.c_str(), lightStateWriter->GetParameterFromLuminousIntensity().c_str());
            }
            const auto kMode = lightStateWriter->GetMode();
            if (lightStateWriter->IsModeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODE.c_str(), lightStateWriter->GetParameterFromMode().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODE.c_str(), kMode.GetLiteral().c_str());
            }
            const auto kColor = lightStateWriter->GetWriterColor();
            if (kColor)
            {
                tinyxml2::XMLNode* colorElement = document->NewElement(OSC_CONSTANTS::ELEMENT__COLOR.c_str());
                elementNode->InsertEndChild(colorElement);
                FillColorNode(document, colorElement, kColor);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLightStateActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILightStateActionWriter> lightStateActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kTransitionTime = lightStateActionWriter->GetTransitionTime();
            if (!( kTransitionTime == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRANSITION_TIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTransitionTime).c_str());
            }
			else if (lightStateActionWriter->IsTransitionTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRANSITION_TIME.c_str(), lightStateActionWriter->GetParameterFromTransitionTime().c_str());
            }
            const auto kLightType = lightStateActionWriter->GetWriterLightType();
            if (kLightType)
            {
                tinyxml2::XMLNode* lightTypeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LIGHT_TYPE.c_str());
                elementNode->InsertEndChild(lightTypeElement);
                FillLightTypeNode(document, lightTypeElement, kLightType);
            }
            const auto kLightState = lightStateActionWriter->GetWriterLightState();
            if (kLightState)
            {
                tinyxml2::XMLNode* lightStateElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LIGHT_STATE.c_str());
                elementNode->InsertEndChild(lightStateElement);
                FillLightStateNode(document, lightStateElement, kLightState);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLightTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILightTypeWriter> lightTypeWriter)
        {
            // Add Attributes (Parameters)
            const auto kVehicleLight = lightTypeWriter->GetWriterVehicleLight();
            if (kVehicleLight)
            {
                tinyxml2::XMLNode* vehicleLightElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE_LIGHT.c_str());
                elementNode->InsertEndChild(vehicleLightElement);
                FillVehicleLightNode(document, vehicleLightElement, kVehicleLight);
            }
            const auto kUserDefinedLight = lightTypeWriter->GetWriterUserDefinedLight();
            if (kUserDefinedLight)
            {
                tinyxml2::XMLNode* userDefinedLightElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_LIGHT.c_str());
                elementNode->InsertEndChild(userDefinedLightElement);
                FillUserDefinedLightNode(document, userDefinedLightElement, kUserDefinedLight);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLongitudinalActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILongitudinalActionWriter> longitudinalActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kSpeedAction = longitudinalActionWriter->GetWriterSpeedAction();
            if (kSpeedAction)
            {
                tinyxml2::XMLNode* speedActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SPEED_ACTION.c_str());
                elementNode->InsertEndChild(speedActionElement);
                FillSpeedActionNode(document, speedActionElement, kSpeedAction);
            }
            const auto kLongitudinalDistanceAction = longitudinalActionWriter->GetWriterLongitudinalDistanceAction();
            if (kLongitudinalDistanceAction)
            {
                tinyxml2::XMLNode* longitudinalDistanceActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LONGITUDINAL_DISTANCE_ACTION.c_str());
                elementNode->InsertEndChild(longitudinalDistanceActionElement);
                FillLongitudinalDistanceActionNode(document, longitudinalDistanceActionElement, kLongitudinalDistanceAction);
            }
            const auto kSpeedProfileAction = longitudinalActionWriter->GetWriterSpeedProfileAction();
            if (kSpeedProfileAction)
            {
                tinyxml2::XMLNode* speedProfileActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SPEED_PROFILE_ACTION.c_str());
                elementNode->InsertEndChild(speedProfileActionElement);
                FillSpeedProfileActionNode(document, speedProfileActionElement, kSpeedProfileAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillLongitudinalDistanceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILongitudinalDistanceActionWriter> longitudinalDistanceActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kContinuous = longitudinalDistanceActionWriter->GetContinuous();
            if (longitudinalDistanceActionWriter->IsContinuousParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), longitudinalDistanceActionWriter->GetParameterFromContinuous().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kContinuous).c_str());
            }
            const auto kCoordinateSystem = longitudinalDistanceActionWriter->GetCoordinateSystem();
            if (!( kCoordinateSystem == CoordinateSystem::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), kCoordinateSystem.GetLiteral().c_str());
            }
			else if (longitudinalDistanceActionWriter->IsCoordinateSystemParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), longitudinalDistanceActionWriter->GetParameterFromCoordinateSystem().c_str());
            }
            const auto kDisplacement = longitudinalDistanceActionWriter->GetDisplacement();
            if (!( kDisplacement == LongitudinalDisplacement::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISPLACEMENT.c_str(), kDisplacement.GetLiteral().c_str());
            }
			else if (longitudinalDistanceActionWriter->IsDisplacementParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISPLACEMENT.c_str(), longitudinalDistanceActionWriter->GetParameterFromDisplacement().c_str());
            }
            const auto kDistance = longitudinalDistanceActionWriter->GetDistance();
            if (!( kDistance == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDistance).c_str());
            }
			else if (longitudinalDistanceActionWriter->IsDistanceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE.c_str(), longitudinalDistanceActionWriter->GetParameterFromDistance().c_str());
            }
            const auto kEntityRef = longitudinalDistanceActionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kFreespace = longitudinalDistanceActionWriter->GetFreespace();
            if (longitudinalDistanceActionWriter->IsFreespaceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), longitudinalDistanceActionWriter->GetParameterFromFreespace().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kFreespace).c_str());
            }
            const auto kTimeGap = longitudinalDistanceActionWriter->GetTimeGap();
            if (!( kTimeGap == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTimeGap).c_str());
            }
			else if (longitudinalDistanceActionWriter->IsTimeGapParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP.c_str(), longitudinalDistanceActionWriter->GetParameterFromTimeGap().c_str());
            }
            const auto kDynamicConstraints = longitudinalDistanceActionWriter->GetWriterDynamicConstraints();
            if (kDynamicConstraints)
            {
                tinyxml2::XMLNode* dynamicConstraintsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS.c_str());
                elementNode->InsertEndChild(dynamicConstraintsElement);
                FillDynamicConstraintsNode(document, dynamicConstraintsElement, kDynamicConstraints);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillManeuverNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManeuverWriter> maneuverWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = maneuverWriter->GetName();
            if (maneuverWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), maneuverWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kParameterDeclarations = maneuverWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kEvents = maneuverWriter->GetWriterEvents();
            if (!kEvents.empty())
            {
                for (auto eventsWriterItem : kEvents)
                {
                    tinyxml2::XMLNode* eventsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__EVENT.c_str());
                    elementNode->InsertEndChild(eventsElement);
                    FillEventNode(document, eventsElement, eventsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillManeuverCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManeuverCatalogLocationWriter> maneuverCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = maneuverCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillManeuverGroupNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManeuverGroupWriter> maneuverGroupWriter)
        {
            // Add Attributes (Parameters)
            const auto kMaximumExecutionCount = maneuverGroupWriter->GetMaximumExecutionCount();
            if (maneuverGroupWriter->IsMaximumExecutionCountParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT.c_str(), maneuverGroupWriter->GetParameterFromMaximumExecutionCount().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT.c_str(), XmlExportHelper::ToXmlStringFromUnsignedInt( kMaximumExecutionCount).c_str());
            }
            const auto kName = maneuverGroupWriter->GetName();
            if (maneuverGroupWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), maneuverGroupWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kActors = maneuverGroupWriter->GetWriterActors();
            if (kActors)
            {
                tinyxml2::XMLNode* actorsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACTORS.c_str());
                elementNode->InsertEndChild(actorsElement);
                FillActorsNode(document, actorsElement, kActors);
            }
            const auto kCatalogReferences = maneuverGroupWriter->GetWriterCatalogReferences();
            if (!kCatalogReferences.empty())
            {
                for (auto catalogReferencesWriterItem : kCatalogReferences)
                {
                    tinyxml2::XMLNode* catalogReferencesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                    elementNode->InsertEndChild(catalogReferencesElement);
                    FillCatalogReferenceNode(document, catalogReferencesElement, catalogReferencesWriterItem);
                    
                }
            }
            const auto kManeuvers = maneuverGroupWriter->GetWriterManeuvers();
            if (!kManeuvers.empty())
            {
                for (auto maneuversWriterItem : kManeuvers)
                {
                    tinyxml2::XMLNode* maneuversElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MANEUVER.c_str());
                    elementNode->InsertEndChild(maneuversElement);
                    FillManeuverNode(document, maneuversElement, maneuversWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillManualGearNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManualGearWriter> manualGearWriter)
        {
            // Add Attributes (Parameters)
            const auto kNumber = manualGearWriter->GetNumber();
            if (manualGearWriter->IsNumberParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER.c_str(), manualGearWriter->GetParameterFromNumber().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER.c_str(), XmlExportHelper::ToXmlStringFromInt( kNumber).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillMiscObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IMiscObjectWriter> miscObjectWriter)
        {
            // Add Attributes (Parameters)
            const auto kMass = miscObjectWriter->GetMass();
            if (miscObjectWriter->IsMassParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MASS.c_str(), miscObjectWriter->GetParameterFromMass().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MASS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMass).c_str());
            }
            const auto kMiscObjectCategory = miscObjectWriter->GetMiscObjectCategory();
            if (miscObjectWriter->IsMiscObjectCategoryParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY.c_str(), miscObjectWriter->GetParameterFromMiscObjectCategory().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY.c_str(), kMiscObjectCategory.GetLiteral().c_str());
            }
            const auto kModel3d = miscObjectWriter->GetModel3d();
            if (!( kModel3d.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL3D.c_str(), XmlExportHelper::ToXmlStringFromString( kModel3d).c_str());
            }
			else if (miscObjectWriter->IsModel3dParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL3D.c_str(), miscObjectWriter->GetParameterFromModel3d().c_str());
            }
            const auto kName = miscObjectWriter->GetName();
            if (miscObjectWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), miscObjectWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kParameterDeclarations = miscObjectWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kBoundingBox = miscObjectWriter->GetWriterBoundingBox();
            if (kBoundingBox)
            {
                tinyxml2::XMLNode* boundingBoxElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX.c_str());
                elementNode->InsertEndChild(boundingBoxElement);
                FillBoundingBoxNode(document, boundingBoxElement, kBoundingBox);
            }
            const auto kProperties = miscObjectWriter->GetWriterProperties();
            if (kProperties)
            {
                tinyxml2::XMLNode* propertiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROPERTIES.c_str());
                elementNode->InsertEndChild(propertiesElement);
                FillPropertiesNode(document, propertiesElement, kProperties);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillMiscObjectCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IMiscObjectCatalogLocationWriter> miscObjectCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = miscObjectCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillModifyRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IModifyRuleWriter> modifyRuleWriter)
        {
            // Add Attributes (Parameters)
            const auto kAddValue = modifyRuleWriter->GetWriterAddValue();
            if (kAddValue)
            {
                tinyxml2::XMLNode* addValueElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ADD_VALUE.c_str());
                elementNode->InsertEndChild(addValueElement);
                FillParameterAddValueRuleNode(document, addValueElement, kAddValue);
            }
            const auto kMultiplyByValue = modifyRuleWriter->GetWriterMultiplyByValue();
            if (kMultiplyByValue)
            {
                tinyxml2::XMLNode* multiplyByValueElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE.c_str());
                elementNode->InsertEndChild(multiplyByValueElement);
                FillParameterMultiplyByValueRuleNode(document, multiplyByValueElement, kMultiplyByValue);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillNoneNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<INoneWriter> noneWriter)
        {
            // Add Attributes (Parameters)
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillNormalDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<INormalDistributionWriter> normalDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kExpectedValue = normalDistributionWriter->GetExpectedValue();
            if (normalDistributionWriter->IsExpectedValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE.c_str(), normalDistributionWriter->GetParameterFromExpectedValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kExpectedValue).c_str());
            }
            const auto kVariance = normalDistributionWriter->GetVariance();
            if (normalDistributionWriter->IsVarianceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VARIANCE.c_str(), normalDistributionWriter->GetParameterFromVariance().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VARIANCE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kVariance).c_str());
            }
            const auto kRange = normalDistributionWriter->GetWriterRange();
            if (kRange)
            {
                tinyxml2::XMLNode* rangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RANGE.c_str());
                elementNode->InsertEndChild(rangeElement);
                FillRangeNode(document, rangeElement, kRange);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillNurbsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<INurbsWriter> nurbsWriter)
        {
            // Add Attributes (Parameters)
            const auto kOrder = nurbsWriter->GetOrder();
            if (nurbsWriter->IsOrderParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ORDER.c_str(), nurbsWriter->GetParameterFromOrder().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ORDER.c_str(), XmlExportHelper::ToXmlStringFromUnsignedInt( kOrder).c_str());
            }
            const auto kControlPoints = nurbsWriter->GetWriterControlPoints();
            if (!kControlPoints.empty())
            {
                for (auto controlPointsWriterItem : kControlPoints)
                {
                    tinyxml2::XMLNode* controlPointsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROL_POINT.c_str());
                    elementNode->InsertEndChild(controlPointsElement);
                    FillControlPointNode(document, controlPointsElement, controlPointsWriterItem);
                    
                }
            }
            const auto kKnots = nurbsWriter->GetWriterKnots();
            if (!kKnots.empty())
            {
                for (auto knotsWriterItem : kKnots)
                {
                    tinyxml2::XMLNode* knotsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__KNOT.c_str());
                    elementNode->InsertEndChild(knotsElement);
                    FillKnotNode(document, knotsElement, knotsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillObjectControllerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IObjectControllerWriter> objectControllerWriter)
        {
            // Add Attributes (Parameters)
            const auto kCatalogReference = objectControllerWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
            const auto kController = objectControllerWriter->GetWriterController();
            if (kController)
            {
                tinyxml2::XMLNode* controllerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER.c_str());
                elementNode->InsertEndChild(controllerElement);
                FillControllerNode(document, controllerElement, kController);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOffroadConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOffroadConditionWriter> offroadConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDuration = offroadConditionWriter->GetDuration();
            if (offroadConditionWriter->IsDurationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), offroadConditionWriter->GetParameterFromDuration().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDuration).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOpenScenarioNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOpenScenarioWriter> openScenarioWriter)
        {
            // Add Attributes (Parameters)
            const auto kFileHeader = openScenarioWriter->GetWriterFileHeader();
            if (kFileHeader)
            {
                tinyxml2::XMLNode* fileHeaderElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FILE_HEADER.c_str());
                elementNode->InsertEndChild(fileHeaderElement);
                FillFileHeaderNode(document, fileHeaderElement, kFileHeader);
            }
            const auto kOpenScenarioCategory = openScenarioWriter->GetWriterOpenScenarioCategory();
            if (kOpenScenarioCategory)
            {
				FillOpenScenarioCategoryNode(document, elementNode, kOpenScenarioCategory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOpenScenarioCategoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOpenScenarioCategoryWriter> openScenarioCategoryWriter)
        {
            // Add Attributes (Parameters)
            const auto kScenarioDefinition = openScenarioCategoryWriter->GetWriterScenarioDefinition();
            if (kScenarioDefinition)
            {
				FillScenarioDefinitionNode(document, elementNode, kScenarioDefinition);
            }
            const auto kCatalogDefinition = openScenarioCategoryWriter->GetWriterCatalogDefinition();
            if (kCatalogDefinition)
            {
				FillCatalogDefinitionNode(document, elementNode, kCatalogDefinition);
            }
            const auto kParameterValueDistributionDefinition = openScenarioCategoryWriter->GetWriterParameterValueDistributionDefinition();
            if (kParameterValueDistributionDefinition)
            {
				FillParameterValueDistributionDefinitionNode(document, elementNode, kParameterValueDistributionDefinition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOrientationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOrientationWriter> orientationWriter)
        {
            // Add Attributes (Parameters)
            const auto kH = orientationWriter->GetH();
            if (!( kH == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__H.c_str(), XmlExportHelper::ToXmlStringFromDouble( kH).c_str());
            }
			else if (orientationWriter->IsHParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__H.c_str(), orientationWriter->GetParameterFromH().c_str());
            }
            const auto kP = orientationWriter->GetP();
            if (!( kP == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__P.c_str(), XmlExportHelper::ToXmlStringFromDouble( kP).c_str());
            }
			else if (orientationWriter->IsPParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__P.c_str(), orientationWriter->GetParameterFromP().c_str());
            }
            const auto kR = orientationWriter->GetR();
            if (!( kR == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__R.c_str(), XmlExportHelper::ToXmlStringFromDouble( kR).c_str());
            }
			else if (orientationWriter->IsRParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__R.c_str(), orientationWriter->GetParameterFromR().c_str());
            }
            const auto kType = orientationWriter->GetType();
            if (!( kType == ReferenceContext::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), kType.GetLiteral().c_str());
            }
			else if (orientationWriter->IsTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), orientationWriter->GetParameterFromType().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOverrideBrakeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideBrakeActionWriter> overrideBrakeActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kActive = overrideBrakeActionWriter->GetActive();
            if (overrideBrakeActionWriter->IsActiveParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), overrideBrakeActionWriter->GetParameterFromActive().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActive).c_str());
            }
            const auto kValue = overrideBrakeActionWriter->GetValue();
            if (!( kValue == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
			else if (overrideBrakeActionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), overrideBrakeActionWriter->GetParameterFromValue().c_str());
            }
            const auto kBrakeInput = overrideBrakeActionWriter->GetWriterBrakeInput();
            if (kBrakeInput)
            {
				FillBrakeInputNode(document, elementNode, kBrakeInput);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOverrideClutchActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideClutchActionWriter> overrideClutchActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kActive = overrideClutchActionWriter->GetActive();
            if (overrideClutchActionWriter->IsActiveParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), overrideClutchActionWriter->GetParameterFromActive().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActive).c_str());
            }
            const auto kMaxRate = overrideClutchActionWriter->GetMaxRate();
            if (!( kMaxRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxRate).c_str());
            }
			else if (overrideClutchActionWriter->IsMaxRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), overrideClutchActionWriter->GetParameterFromMaxRate().c_str());
            }
            const auto kValue = overrideClutchActionWriter->GetValue();
            if (overrideClutchActionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), overrideClutchActionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOverrideControllerValueActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideControllerValueActionWriter> overrideControllerValueActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kThrottle = overrideControllerValueActionWriter->GetWriterThrottle();
            if (kThrottle)
            {
                tinyxml2::XMLNode* throttleElement = document->NewElement(OSC_CONSTANTS::ELEMENT__THROTTLE.c_str());
                elementNode->InsertEndChild(throttleElement);
                FillOverrideThrottleActionNode(document, throttleElement, kThrottle);
            }
            const auto kBrake = overrideControllerValueActionWriter->GetWriterBrake();
            if (kBrake)
            {
                tinyxml2::XMLNode* brakeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BRAKE.c_str());
                elementNode->InsertEndChild(brakeElement);
                FillOverrideBrakeActionNode(document, brakeElement, kBrake);
            }
            const auto kClutch = overrideControllerValueActionWriter->GetWriterClutch();
            if (kClutch)
            {
                tinyxml2::XMLNode* clutchElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CLUTCH.c_str());
                elementNode->InsertEndChild(clutchElement);
                FillOverrideClutchActionNode(document, clutchElement, kClutch);
            }
            const auto kParkingBrake = overrideControllerValueActionWriter->GetWriterParkingBrake();
            if (kParkingBrake)
            {
                tinyxml2::XMLNode* parkingBrakeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARKING_BRAKE.c_str());
                elementNode->InsertEndChild(parkingBrakeElement);
                FillOverrideParkingBrakeActionNode(document, parkingBrakeElement, kParkingBrake);
            }
            const auto kSteeringWheel = overrideControllerValueActionWriter->GetWriterSteeringWheel();
            if (kSteeringWheel)
            {
                tinyxml2::XMLNode* steeringWheelElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STEERING_WHEEL.c_str());
                elementNode->InsertEndChild(steeringWheelElement);
                FillOverrideSteeringWheelActionNode(document, steeringWheelElement, kSteeringWheel);
            }
            const auto kGear = overrideControllerValueActionWriter->GetWriterGear();
            if (kGear)
            {
                tinyxml2::XMLNode* gearElement = document->NewElement(OSC_CONSTANTS::ELEMENT__GEAR.c_str());
                elementNode->InsertEndChild(gearElement);
                FillOverrideGearActionNode(document, gearElement, kGear);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOverrideGearActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideGearActionWriter> overrideGearActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kActive = overrideGearActionWriter->GetActive();
            if (overrideGearActionWriter->IsActiveParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), overrideGearActionWriter->GetParameterFromActive().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActive).c_str());
            }
            const auto kNumber = overrideGearActionWriter->GetNumber();
            if (!( kNumber == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER.c_str(), XmlExportHelper::ToXmlStringFromDouble( kNumber).c_str());
            }
			else if (overrideGearActionWriter->IsNumberParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER.c_str(), overrideGearActionWriter->GetParameterFromNumber().c_str());
            }
            const auto kGear = overrideGearActionWriter->GetWriterGear();
            if (kGear)
            {
				FillGearNode(document, elementNode, kGear);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOverrideParkingBrakeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideParkingBrakeActionWriter> overrideParkingBrakeActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kActive = overrideParkingBrakeActionWriter->GetActive();
            if (overrideParkingBrakeActionWriter->IsActiveParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), overrideParkingBrakeActionWriter->GetParameterFromActive().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActive).c_str());
            }
            const auto kValue = overrideParkingBrakeActionWriter->GetValue();
            if (!( kValue == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
			else if (overrideParkingBrakeActionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), overrideParkingBrakeActionWriter->GetParameterFromValue().c_str());
            }
            const auto kBrakeInput = overrideParkingBrakeActionWriter->GetWriterBrakeInput();
            if (kBrakeInput)
            {
				FillBrakeInputNode(document, elementNode, kBrakeInput);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOverrideSteeringWheelActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideSteeringWheelActionWriter> overrideSteeringWheelActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kActive = overrideSteeringWheelActionWriter->GetActive();
            if (overrideSteeringWheelActionWriter->IsActiveParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), overrideSteeringWheelActionWriter->GetParameterFromActive().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActive).c_str());
            }
            const auto kMaxRate = overrideSteeringWheelActionWriter->GetMaxRate();
            if (!( kMaxRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxRate).c_str());
            }
			else if (overrideSteeringWheelActionWriter->IsMaxRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), overrideSteeringWheelActionWriter->GetParameterFromMaxRate().c_str());
            }
            const auto kMaxTorque = overrideSteeringWheelActionWriter->GetMaxTorque();
            if (!( kMaxTorque == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_TORQUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxTorque).c_str());
            }
			else if (overrideSteeringWheelActionWriter->IsMaxTorqueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_TORQUE.c_str(), overrideSteeringWheelActionWriter->GetParameterFromMaxTorque().c_str());
            }
            const auto kValue = overrideSteeringWheelActionWriter->GetValue();
            if (overrideSteeringWheelActionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), overrideSteeringWheelActionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillOverrideThrottleActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideThrottleActionWriter> overrideThrottleActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kActive = overrideThrottleActionWriter->GetActive();
            if (overrideThrottleActionWriter->IsActiveParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), overrideThrottleActionWriter->GetParameterFromActive().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ACTIVE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kActive).c_str());
            }
            const auto kMaxRate = overrideThrottleActionWriter->GetMaxRate();
            if (!( kMaxRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxRate).c_str());
            }
			else if (overrideThrottleActionWriter->IsMaxRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_RATE.c_str(), overrideThrottleActionWriter->GetParameterFromMaxRate().c_str());
            }
            const auto kValue = overrideThrottleActionWriter->GetValue();
            if (overrideThrottleActionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), overrideThrottleActionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterActionWriter> parameterActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterRef = parameterActionWriter->GetParameterRef();
            if (kParameterRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kParameterRef->GetNameRef()).c_str());
            }
            const auto kSetAction = parameterActionWriter->GetWriterSetAction();
            if (kSetAction)
            {
                tinyxml2::XMLNode* setActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SET_ACTION.c_str());
                elementNode->InsertEndChild(setActionElement);
                FillParameterSetActionNode(document, setActionElement, kSetAction);
            }
            const auto kModifyAction = parameterActionWriter->GetWriterModifyAction();
            if (kModifyAction)
            {
                tinyxml2::XMLNode* modifyActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MODIFY_ACTION.c_str());
                elementNode->InsertEndChild(modifyActionElement);
                FillParameterModifyActionNode(document, modifyActionElement, kModifyAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterAddValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterAddValueRuleWriter> parameterAddValueRuleWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = parameterAddValueRuleWriter->GetValue();
            if (parameterAddValueRuleWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), parameterAddValueRuleWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterAssignmentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterAssignmentWriter> parameterAssignmentWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterRef = parameterAssignmentWriter->GetParameterRef();
            if (kParameterRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kParameterRef->GetNameRef()).c_str());
            }
            const auto kValue = parameterAssignmentWriter->GetValue();
            if (parameterAssignmentWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), parameterAssignmentWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterConditionWriter> parameterConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterRef = parameterConditionWriter->GetParameterRef();
            if (kParameterRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kParameterRef->GetNameRef()).c_str());
            }
            const auto kRule = parameterConditionWriter->GetRule();
            if (parameterConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), parameterConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = parameterConditionWriter->GetValue();
            if (parameterConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), parameterConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterDeclarationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterDeclarationWriter> parameterDeclarationWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = parameterDeclarationWriter->GetName();
            if (!(kName.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString(kName).c_str());
            }
            const auto kParameterType = parameterDeclarationWriter->GetParameterType();
            if (parameterDeclarationWriter->IsParameterTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE.c_str(), parameterDeclarationWriter->GetParameterFromParameterType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE.c_str(), kParameterType.GetLiteral().c_str());
            }
            const auto kValue = parameterDeclarationWriter->GetValue();
            if (parameterDeclarationWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), parameterDeclarationWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
            const auto kConstraintGroups = parameterDeclarationWriter->GetWriterConstraintGroups();
            if (!kConstraintGroups.empty())
            {
                for (auto constraintGroupsWriterItem : kConstraintGroups)
                {
                    tinyxml2::XMLNode* constraintGroupsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONSTRAINT_GROUP.c_str());
                    elementNode->InsertEndChild(constraintGroupsElement);
                    FillValueConstraintGroupNode(document, constraintGroupsElement, constraintGroupsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterModifyActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterModifyActionWriter> parameterModifyActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRule = parameterModifyActionWriter->GetWriterRule();
            if (kRule)
            {
                tinyxml2::XMLNode* ruleElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RULE.c_str());
                elementNode->InsertEndChild(ruleElement);
                FillModifyRuleNode(document, ruleElement, kRule);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterMultiplyByValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterMultiplyByValueRuleWriter> parameterMultiplyByValueRuleWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = parameterMultiplyByValueRuleWriter->GetValue();
            if (parameterMultiplyByValueRuleWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), parameterMultiplyByValueRuleWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterSetActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterSetActionWriter> parameterSetActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = parameterSetActionWriter->GetValue();
            if (parameterSetActionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), parameterSetActionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterValueDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterValueDistributionWriter> parameterValueDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kScenarioFile = parameterValueDistributionWriter->GetWriterScenarioFile();
            if (kScenarioFile)
            {
                tinyxml2::XMLNode* scenarioFileElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SCENARIO_FILE.c_str());
                elementNode->InsertEndChild(scenarioFileElement);
                FillFileNode(document, scenarioFileElement, kScenarioFile);
            }
            const auto kDistributionDefinition = parameterValueDistributionWriter->GetWriterDistributionDefinition();
            if (kDistributionDefinition)
            {
				FillDistributionDefinitionNode(document, elementNode, kDistributionDefinition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterValueDistributionDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterValueDistributionDefinitionWriter> parameterValueDistributionDefinitionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterValueDistribution = parameterValueDistributionDefinitionWriter->GetWriterParameterValueDistribution();
            if (kParameterValueDistribution)
            {
                tinyxml2::XMLNode* parameterValueDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(parameterValueDistributionElement);
                FillParameterValueDistributionNode(document, parameterValueDistributionElement, kParameterValueDistribution);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillParameterValueSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterValueSetWriter> parameterValueSetWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterAssignments = parameterValueSetWriter->GetWriterParameterAssignments();
            if (!kParameterAssignments.empty())
            {
                for (auto parameterAssignmentsWriterItem : kParameterAssignments)
                {
                    tinyxml2::XMLNode* parameterAssignmentsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT.c_str());
                    elementNode->InsertEndChild(parameterAssignmentsElement);
                    FillParameterAssignmentNode(document, parameterAssignmentsElement, parameterAssignmentsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPedestrianNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianWriter> pedestrianWriter)
        {
            // Add Attributes (Parameters)
            const auto kMass = pedestrianWriter->GetMass();
            if (pedestrianWriter->IsMassParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MASS.c_str(), pedestrianWriter->GetParameterFromMass().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MASS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMass).c_str());
            }
            const auto kModel = pedestrianWriter->GetModel();
            if (!( kModel.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL.c_str(), XmlExportHelper::ToXmlStringFromString( kModel).c_str());
            }
			else if (pedestrianWriter->IsModelParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL.c_str(), pedestrianWriter->GetParameterFromModel().c_str());
            }
            const auto kModel3d = pedestrianWriter->GetModel3d();
            if (!( kModel3d.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL3D.c_str(), XmlExportHelper::ToXmlStringFromString( kModel3d).c_str());
            }
			else if (pedestrianWriter->IsModel3dParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL3D.c_str(), pedestrianWriter->GetParameterFromModel3d().c_str());
            }
            const auto kName = pedestrianWriter->GetName();
            if (pedestrianWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), pedestrianWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kPedestrianCategory = pedestrianWriter->GetPedestrianCategory();
            if (pedestrianWriter->IsPedestrianCategoryParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY.c_str(), pedestrianWriter->GetParameterFromPedestrianCategory().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY.c_str(), kPedestrianCategory.GetLiteral().c_str());
            }
            const auto kRole = pedestrianWriter->GetRole();
            if (!( kRole == Role::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROLE.c_str(), kRole.GetLiteral().c_str());
            }
			else if (pedestrianWriter->IsRoleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROLE.c_str(), pedestrianWriter->GetParameterFromRole().c_str());
            }
            const auto kParameterDeclarations = pedestrianWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kBoundingBox = pedestrianWriter->GetWriterBoundingBox();
            if (kBoundingBox)
            {
                tinyxml2::XMLNode* boundingBoxElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX.c_str());
                elementNode->InsertEndChild(boundingBoxElement);
                FillBoundingBoxNode(document, boundingBoxElement, kBoundingBox);
            }
            const auto kProperties = pedestrianWriter->GetWriterProperties();
            if (kProperties)
            {
                tinyxml2::XMLNode* propertiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROPERTIES.c_str());
                elementNode->InsertEndChild(propertiesElement);
                FillPropertiesNode(document, propertiesElement, kProperties);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPedestrianAnimationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianAnimationWriter> pedestrianAnimationWriter)
        {
            // Add Attributes (Parameters)
            const auto kMotion = pedestrianAnimationWriter->GetMotion();
            if (!( kMotion == PedestrianMotionType::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MOTION.c_str(), kMotion.GetLiteral().c_str());
            }
			else if (pedestrianAnimationWriter->IsMotionParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MOTION.c_str(), pedestrianAnimationWriter->GetParameterFromMotion().c_str());
            }
            const auto kUserDefinedPedestrianAnimation = pedestrianAnimationWriter->GetUserDefinedPedestrianAnimation();
            if (!( kUserDefinedPedestrianAnimation.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_PEDESTRIAN_ANIMATION.c_str(), XmlExportHelper::ToXmlStringFromString( kUserDefinedPedestrianAnimation).c_str());
            }
			else if (pedestrianAnimationWriter->IsUserDefinedPedestrianAnimationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_PEDESTRIAN_ANIMATION.c_str(), pedestrianAnimationWriter->GetParameterFromUserDefinedPedestrianAnimation().c_str());
            }
            const auto kGestures = pedestrianAnimationWriter->GetWriterGestures();
            if (!kGestures.empty())
            {
                for (auto gesturesWriterItem : kGestures)
                {
                    tinyxml2::XMLNode* gesturesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PEDESTRIAN_GESTURE.c_str());
                    elementNode->InsertEndChild(gesturesElement);
                    FillPedestrianGestureNode(document, gesturesElement, gesturesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPedestrianCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianCatalogLocationWriter> pedestrianCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = pedestrianCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPedestrianGestureNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianGestureWriter> pedestrianGestureWriter)
        {
            // Add Attributes (Parameters)
            const auto kGesture = pedestrianGestureWriter->GetGesture();
            if (pedestrianGestureWriter->IsGestureParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GESTURE.c_str(), pedestrianGestureWriter->GetParameterFromGesture().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GESTURE.c_str(), kGesture.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPerformanceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPerformanceWriter> performanceWriter)
        {
            // Add Attributes (Parameters)
            const auto kMaxAcceleration = performanceWriter->GetMaxAcceleration();
            if (performanceWriter->IsMaxAccelerationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION.c_str(), performanceWriter->GetParameterFromMaxAcceleration().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxAcceleration).c_str());
            }
            const auto kMaxAccelerationRate = performanceWriter->GetMaxAccelerationRate();
            if (!( kMaxAccelerationRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxAccelerationRate).c_str());
            }
			else if (performanceWriter->IsMaxAccelerationRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE.c_str(), performanceWriter->GetParameterFromMaxAccelerationRate().c_str());
            }
            const auto kMaxDeceleration = performanceWriter->GetMaxDeceleration();
            if (performanceWriter->IsMaxDecelerationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION.c_str(), performanceWriter->GetParameterFromMaxDeceleration().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxDeceleration).c_str());
            }
            const auto kMaxDecelerationRate = performanceWriter->GetMaxDecelerationRate();
            if (!( kMaxDecelerationRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxDecelerationRate).c_str());
            }
			else if (performanceWriter->IsMaxDecelerationRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE.c_str(), performanceWriter->GetParameterFromMaxDecelerationRate().c_str());
            }
            const auto kMaxSpeed = performanceWriter->GetMaxSpeed();
            if (performanceWriter->IsMaxSpeedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED.c_str(), performanceWriter->GetParameterFromMaxSpeed().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMaxSpeed).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPhaseNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPhaseWriter> phaseWriter)
        {
            // Add Attributes (Parameters)
            const auto kDuration = phaseWriter->GetDuration();
            if (phaseWriter->IsDurationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), phaseWriter->GetParameterFromDuration().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDuration).c_str());
            }
            const auto kName = phaseWriter->GetName();
            if (phaseWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), phaseWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kTrafficSignalStates = phaseWriter->GetWriterTrafficSignalStates();
            if (!kTrafficSignalStates.empty())
            {
                for (auto trafficSignalStatesWriterItem : kTrafficSignalStates)
                {
                    tinyxml2::XMLNode* trafficSignalStatesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE.c_str());
                    elementNode->InsertEndChild(trafficSignalStatesElement);
                    FillTrafficSignalStateNode(document, trafficSignalStatesElement, trafficSignalStatesWriterItem);
                    
                }
            }
            const auto kTrafficeSignalGroupState = phaseWriter->GetWriterTrafficeSignalGroupState();
            if (kTrafficeSignalGroupState)
            {
                tinyxml2::XMLNode* trafficeSignalGroupStateElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFICE_SIGNAL_GROUP_STATE.c_str());
                elementNode->InsertEndChild(trafficeSignalGroupStateElement);
                FillTrafficSignalGroupStateNode(document, trafficeSignalGroupStateElement, kTrafficeSignalGroupState);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPoissonDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPoissonDistributionWriter> poissonDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kExpectedValue = poissonDistributionWriter->GetExpectedValue();
            if (poissonDistributionWriter->IsExpectedValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE.c_str(), poissonDistributionWriter->GetParameterFromExpectedValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kExpectedValue).c_str());
            }
            const auto kRange = poissonDistributionWriter->GetWriterRange();
            if (kRange)
            {
                tinyxml2::XMLNode* rangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RANGE.c_str());
                elementNode->InsertEndChild(rangeElement);
                FillRangeNode(document, rangeElement, kRange);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPolylineNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPolylineWriter> polylineWriter)
        {
            // Add Attributes (Parameters)
            const auto kVertices = polylineWriter->GetWriterVertices();
            if (!kVertices.empty())
            {
                for (auto verticesWriterItem : kVertices)
                {
                    tinyxml2::XMLNode* verticesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VERTEX.c_str());
                    elementNode->InsertEndChild(verticesElement);
                    FillVertexNode(document, verticesElement, verticesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionWriter> positionWriter)
        {
            // Add Attributes (Parameters)
            const auto kWorldPosition = positionWriter->GetWriterWorldPosition();
            if (kWorldPosition)
            {
                tinyxml2::XMLNode* worldPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__WORLD_POSITION.c_str());
                elementNode->InsertEndChild(worldPositionElement);
                FillWorldPositionNode(document, worldPositionElement, kWorldPosition);
            }
            const auto kRelativeWorldPosition = positionWriter->GetWriterRelativeWorldPosition();
            if (kRelativeWorldPosition)
            {
                tinyxml2::XMLNode* relativeWorldPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_WORLD_POSITION.c_str());
                elementNode->InsertEndChild(relativeWorldPositionElement);
                FillRelativeWorldPositionNode(document, relativeWorldPositionElement, kRelativeWorldPosition);
            }
            const auto kRelativeObjectPosition = positionWriter->GetWriterRelativeObjectPosition();
            if (kRelativeObjectPosition)
            {
                tinyxml2::XMLNode* relativeObjectPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_OBJECT_POSITION.c_str());
                elementNode->InsertEndChild(relativeObjectPositionElement);
                FillRelativeObjectPositionNode(document, relativeObjectPositionElement, kRelativeObjectPosition);
            }
            const auto kRoadPosition = positionWriter->GetWriterRoadPosition();
            if (kRoadPosition)
            {
                tinyxml2::XMLNode* roadPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROAD_POSITION.c_str());
                elementNode->InsertEndChild(roadPositionElement);
                FillRoadPositionNode(document, roadPositionElement, kRoadPosition);
            }
            const auto kRelativeRoadPosition = positionWriter->GetWriterRelativeRoadPosition();
            if (kRelativeRoadPosition)
            {
                tinyxml2::XMLNode* relativeRoadPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_ROAD_POSITION.c_str());
                elementNode->InsertEndChild(relativeRoadPositionElement);
                FillRelativeRoadPositionNode(document, relativeRoadPositionElement, kRelativeRoadPosition);
            }
            const auto kLanePosition = positionWriter->GetWriterLanePosition();
            if (kLanePosition)
            {
                tinyxml2::XMLNode* lanePositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LANE_POSITION.c_str());
                elementNode->InsertEndChild(lanePositionElement);
                FillLanePositionNode(document, lanePositionElement, kLanePosition);
            }
            const auto kRelativeLanePosition = positionWriter->GetWriterRelativeLanePosition();
            if (kRelativeLanePosition)
            {
                tinyxml2::XMLNode* relativeLanePositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_POSITION.c_str());
                elementNode->InsertEndChild(relativeLanePositionElement);
                FillRelativeLanePositionNode(document, relativeLanePositionElement, kRelativeLanePosition);
            }
            const auto kRoutePosition = positionWriter->GetWriterRoutePosition();
            if (kRoutePosition)
            {
                tinyxml2::XMLNode* routePositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROUTE_POSITION.c_str());
                elementNode->InsertEndChild(routePositionElement);
                FillRoutePositionNode(document, routePositionElement, kRoutePosition);
            }
            const auto kGeoPosition = positionWriter->GetWriterGeoPosition();
            if (kGeoPosition)
            {
                tinyxml2::XMLNode* geoPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__GEO_POSITION.c_str());
                elementNode->InsertEndChild(geoPositionElement);
                FillGeoPositionNode(document, geoPositionElement, kGeoPosition);
            }
            const auto kTrajectoryPosition = positionWriter->GetWriterTrajectoryPosition();
            if (kTrajectoryPosition)
            {
                tinyxml2::XMLNode* trajectoryPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY_POSITION.c_str());
                elementNode->InsertEndChild(trajectoryPositionElement);
                FillTrajectoryPositionNode(document, trajectoryPositionElement, kTrajectoryPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPositionInLaneCoordinatesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionInLaneCoordinatesWriter> positionInLaneCoordinatesWriter)
        {
            // Add Attributes (Parameters)
            const auto kLaneId = positionInLaneCoordinatesWriter->GetLaneId();
            if (positionInLaneCoordinatesWriter->IsLaneIdParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LANE_ID.c_str(), positionInLaneCoordinatesWriter->GetParameterFromLaneId().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LANE_ID.c_str(), XmlExportHelper::ToXmlStringFromString( kLaneId).c_str());
            }
            const auto kLaneOffset = positionInLaneCoordinatesWriter->GetLaneOffset();
            if (!( kLaneOffset == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLaneOffset).c_str());
            }
			else if (positionInLaneCoordinatesWriter->IsLaneOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET.c_str(), positionInLaneCoordinatesWriter->GetParameterFromLaneOffset().c_str());
            }
            const auto kPathS = positionInLaneCoordinatesWriter->GetPathS();
            if (positionInLaneCoordinatesWriter->IsPathSParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PATH_S.c_str(), positionInLaneCoordinatesWriter->GetParameterFromPathS().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PATH_S.c_str(), XmlExportHelper::ToXmlStringFromDouble( kPathS).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPositionInRoadCoordinatesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionInRoadCoordinatesWriter> positionInRoadCoordinatesWriter)
        {
            // Add Attributes (Parameters)
            const auto kPathS = positionInRoadCoordinatesWriter->GetPathS();
            if (positionInRoadCoordinatesWriter->IsPathSParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PATH_S.c_str(), positionInRoadCoordinatesWriter->GetParameterFromPathS().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PATH_S.c_str(), XmlExportHelper::ToXmlStringFromDouble( kPathS).c_str());
            }
            const auto kT = positionInRoadCoordinatesWriter->GetT();
            if (positionInRoadCoordinatesWriter->IsTParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__T.c_str(), positionInRoadCoordinatesWriter->GetParameterFromT().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__T.c_str(), XmlExportHelper::ToXmlStringFromDouble( kT).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPositionOfCurrentEntityNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionOfCurrentEntityWriter> positionOfCurrentEntityWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = positionOfCurrentEntityWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPrecipitationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPrecipitationWriter> precipitationWriter)
        {
            // Add Attributes (Parameters)
            const auto kIntensity = precipitationWriter->GetIntensity();
            if (!( kIntensity == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INTENSITY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kIntensity).c_str());
            }
			else if (precipitationWriter->IsIntensityParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INTENSITY.c_str(), precipitationWriter->GetParameterFromIntensity().c_str());
            }
            const auto kPrecipitationIntensity = precipitationWriter->GetPrecipitationIntensity();
            if (!( kPrecipitationIntensity == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kPrecipitationIntensity).c_str());
            }
			else if (precipitationWriter->IsPrecipitationIntensityParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY.c_str(), precipitationWriter->GetParameterFromPrecipitationIntensity().c_str());
            }
            const auto kPrecipitationType = precipitationWriter->GetPrecipitationType();
            if (precipitationWriter->IsPrecipitationTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE.c_str(), precipitationWriter->GetParameterFromPrecipitationType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE.c_str(), kPrecipitationType.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPrivateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPrivateWriter> privateWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = privateWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kPrivateActions = privateWriter->GetWriterPrivateActions();
            if (!kPrivateActions.empty())
            {
                for (auto privateActionsWriterItem : kPrivateActions)
                {
                    tinyxml2::XMLNode* privateActionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION.c_str());
                    elementNode->InsertEndChild(privateActionsElement);
                    FillPrivateActionNode(document, privateActionsElement, privateActionsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPrivateActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPrivateActionWriter> privateActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kLongitudinalAction = privateActionWriter->GetWriterLongitudinalAction();
            if (kLongitudinalAction)
            {
                tinyxml2::XMLNode* longitudinalActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LONGITUDINAL_ACTION.c_str());
                elementNode->InsertEndChild(longitudinalActionElement);
                FillLongitudinalActionNode(document, longitudinalActionElement, kLongitudinalAction);
            }
            const auto kLateralAction = privateActionWriter->GetWriterLateralAction();
            if (kLateralAction)
            {
                tinyxml2::XMLNode* lateralActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LATERAL_ACTION.c_str());
                elementNode->InsertEndChild(lateralActionElement);
                FillLateralActionNode(document, lateralActionElement, kLateralAction);
            }
            const auto kVisibilityAction = privateActionWriter->GetWriterVisibilityAction();
            if (kVisibilityAction)
            {
                tinyxml2::XMLNode* visibilityActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VISIBILITY_ACTION.c_str());
                elementNode->InsertEndChild(visibilityActionElement);
                FillVisibilityActionNode(document, visibilityActionElement, kVisibilityAction);
            }
            const auto kSynchronizeAction = privateActionWriter->GetWriterSynchronizeAction();
            if (kSynchronizeAction)
            {
                tinyxml2::XMLNode* synchronizeActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SYNCHRONIZE_ACTION.c_str());
                elementNode->InsertEndChild(synchronizeActionElement);
                FillSynchronizeActionNode(document, synchronizeActionElement, kSynchronizeAction);
            }
            const auto kActivateControllerAction = privateActionWriter->GetWriterActivateControllerAction();
            if (kActivateControllerAction)
            {
                tinyxml2::XMLNode* activateControllerActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION.c_str());
                elementNode->InsertEndChild(activateControllerActionElement);
                FillActivateControllerActionNode(document, activateControllerActionElement, kActivateControllerAction);
            }
            const auto kControllerAction = privateActionWriter->GetWriterControllerAction();
            if (kControllerAction)
            {
                tinyxml2::XMLNode* controllerActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER_ACTION.c_str());
                elementNode->InsertEndChild(controllerActionElement);
                FillControllerActionNode(document, controllerActionElement, kControllerAction);
            }
            const auto kTeleportAction = privateActionWriter->GetWriterTeleportAction();
            if (kTeleportAction)
            {
                tinyxml2::XMLNode* teleportActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TELEPORT_ACTION.c_str());
                elementNode->InsertEndChild(teleportActionElement);
                FillTeleportActionNode(document, teleportActionElement, kTeleportAction);
            }
            const auto kRoutingAction = privateActionWriter->GetWriterRoutingAction();
            if (kRoutingAction)
            {
                tinyxml2::XMLNode* routingActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROUTING_ACTION.c_str());
                elementNode->InsertEndChild(routingActionElement);
                FillRoutingActionNode(document, routingActionElement, kRoutingAction);
            }
            const auto kAppearanceAction = privateActionWriter->GetWriterAppearanceAction();
            if (kAppearanceAction)
            {
                tinyxml2::XMLNode* appearanceActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__APPEARANCE_ACTION.c_str());
                elementNode->InsertEndChild(appearanceActionElement);
                FillAppearanceActionNode(document, appearanceActionElement, kAppearanceAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillProbabilityDistributionSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IProbabilityDistributionSetWriter> probabilityDistributionSetWriter)
        {
            // Add Attributes (Parameters)
            const auto kElements = probabilityDistributionSetWriter->GetWriterElements();
            if (!kElements.empty())
            {
                for (auto elementsWriterItem : kElements)
                {
                    tinyxml2::XMLNode* elementsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ELEMENT.c_str());
                    elementNode->InsertEndChild(elementsElement);
                    FillProbabilityDistributionSetElementNode(document, elementsElement, elementsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillProbabilityDistributionSetElementNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IProbabilityDistributionSetElementWriter> probabilityDistributionSetElementWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = probabilityDistributionSetElementWriter->GetValue();
            if (probabilityDistributionSetElementWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), probabilityDistributionSetElementWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
            const auto kWeight = probabilityDistributionSetElementWriter->GetWeight();
            if (probabilityDistributionSetElementWriter->IsWeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), probabilityDistributionSetElementWriter->GetParameterFromWeight().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWeight).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPropertiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPropertiesWriter> propertiesWriter)
        {
            // Add Attributes (Parameters)
            const auto kProperties = propertiesWriter->GetWriterProperties();
            if (!kProperties.empty())
            {
                for (auto propertiesWriterItem : kProperties)
                {
                    tinyxml2::XMLNode* propertiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROPERTY.c_str());
                    elementNode->InsertEndChild(propertiesElement);
                    FillPropertyNode(document, propertiesElement, propertiesWriterItem);
                    
                }
            }
            const auto kFiles = propertiesWriter->GetWriterFiles();
            if (!kFiles.empty())
            {
                for (auto filesWriterItem : kFiles)
                {
                    tinyxml2::XMLNode* filesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FILE.c_str());
                    elementNode->InsertEndChild(filesElement);
                    FillFileNode(document, filesElement, filesWriterItem);
                    
                }
            }
            const auto kCustomContent = propertiesWriter->GetWriterCustomContent();
            if (!kCustomContent.empty())
            {
                for (auto customContentWriterItem : kCustomContent)
                {
                    tinyxml2::XMLNode* customContentElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CUSTOM_CONTENT.c_str());
                    elementNode->InsertEndChild(customContentElement);
                    FillCustomContentNode(document, customContentElement, customContentWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillPropertyNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPropertyWriter> propertyWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = propertyWriter->GetName();
            if (propertyWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), propertyWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kValue = propertyWriter->GetValue();
            if (propertyWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), propertyWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRangeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRangeWriter> rangeWriter)
        {
            // Add Attributes (Parameters)
            const auto kLowerLimit = rangeWriter->GetLowerLimit();
            if (rangeWriter->IsLowerLimitParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT.c_str(), rangeWriter->GetParameterFromLowerLimit().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kLowerLimit).c_str());
            }
            const auto kUpperLimit = rangeWriter->GetUpperLimit();
            if (rangeWriter->IsUpperLimitParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT.c_str(), rangeWriter->GetParameterFromUpperLimit().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kUpperLimit).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillReachPositionConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IReachPositionConditionWriter> reachPositionConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kTolerance = reachPositionConditionWriter->GetTolerance();
            if (reachPositionConditionWriter->IsToleranceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE.c_str(), reachPositionConditionWriter->GetParameterFromTolerance().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTolerance).c_str());
            }
            const auto kPosition = reachPositionConditionWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeClearanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeClearanceConditionWriter> relativeClearanceConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDistanceBackward = relativeClearanceConditionWriter->GetDistanceBackward();
            if (!( kDistanceBackward == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDistanceBackward).c_str());
            }
			else if (relativeClearanceConditionWriter->IsDistanceBackwardParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD.c_str(), relativeClearanceConditionWriter->GetParameterFromDistanceBackward().c_str());
            }
            const auto kDistanceForward = relativeClearanceConditionWriter->GetDistanceForward();
            if (!( kDistanceForward == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDistanceForward).c_str());
            }
			else if (relativeClearanceConditionWriter->IsDistanceForwardParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD.c_str(), relativeClearanceConditionWriter->GetParameterFromDistanceForward().c_str());
            }
            const auto kFreeSpace = relativeClearanceConditionWriter->GetFreeSpace();
            if (relativeClearanceConditionWriter->IsFreeSpaceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREE_SPACE.c_str(), relativeClearanceConditionWriter->GetParameterFromFreeSpace().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREE_SPACE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kFreeSpace).c_str());
            }
            const auto kOppositeLanes = relativeClearanceConditionWriter->GetOppositeLanes();
            if (relativeClearanceConditionWriter->IsOppositeLanesParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE_LANES.c_str(), relativeClearanceConditionWriter->GetParameterFromOppositeLanes().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE_LANES.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kOppositeLanes).c_str());
            }
            const auto kRelativeLaneRange = relativeClearanceConditionWriter->GetWriterRelativeLaneRange();
            if (!kRelativeLaneRange.empty())
            {
                for (auto relativeLaneRangeWriterItem : kRelativeLaneRange)
                {
                    tinyxml2::XMLNode* relativeLaneRangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_RANGE.c_str());
                    elementNode->InsertEndChild(relativeLaneRangeElement);
                    FillRelativeLaneRangeNode(document, relativeLaneRangeElement, relativeLaneRangeWriterItem);
                    
                }
            }
            const auto kEntityRef = relativeClearanceConditionWriter->GetWriterEntityRef();
            if (!kEntityRef.empty())
            {
                for (auto entityRefWriterItem : kEntityRef)
                {
                    tinyxml2::XMLNode* entityRefElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_REF.c_str());
                    elementNode->InsertEndChild(entityRefElement);
                    FillEntityRefNode(document, entityRefElement, entityRefWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeDistanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeDistanceConditionWriter> relativeDistanceConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kCoordinateSystem = relativeDistanceConditionWriter->GetCoordinateSystem();
            if (!( kCoordinateSystem == CoordinateSystem::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), kCoordinateSystem.GetLiteral().c_str());
            }
			else if (relativeDistanceConditionWriter->IsCoordinateSystemParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), relativeDistanceConditionWriter->GetParameterFromCoordinateSystem().c_str());
            }
            const auto kEntityRef = relativeDistanceConditionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kFreespace = relativeDistanceConditionWriter->GetFreespace();
            if (relativeDistanceConditionWriter->IsFreespaceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), relativeDistanceConditionWriter->GetParameterFromFreespace().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kFreespace).c_str());
            }
            const auto kRelativeDistanceType = relativeDistanceConditionWriter->GetRelativeDistanceType();
            if (relativeDistanceConditionWriter->IsRelativeDistanceTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), relativeDistanceConditionWriter->GetParameterFromRelativeDistanceType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), kRelativeDistanceType.GetLiteral().c_str());
            }
            const auto kRoutingAlgorithm = relativeDistanceConditionWriter->GetRoutingAlgorithm();
            if (!( kRoutingAlgorithm == RoutingAlgorithm::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), kRoutingAlgorithm.GetLiteral().c_str());
            }
			else if (relativeDistanceConditionWriter->IsRoutingAlgorithmParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), relativeDistanceConditionWriter->GetParameterFromRoutingAlgorithm().c_str());
            }
            const auto kRule = relativeDistanceConditionWriter->GetRule();
            if (relativeDistanceConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), relativeDistanceConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = relativeDistanceConditionWriter->GetValue();
            if (relativeDistanceConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), relativeDistanceConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeLanePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeLanePositionWriter> relativeLanePositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDLane = relativeLanePositionWriter->GetDLane();
            if (relativeLanePositionWriter->IsDLaneParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__D_LANE.c_str(), relativeLanePositionWriter->GetParameterFromDLane().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__D_LANE.c_str(), XmlExportHelper::ToXmlStringFromInt( kDLane).c_str());
            }
            const auto kDs = relativeLanePositionWriter->GetDs();
            if (!( kDs == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDs).c_str());
            }
			else if (relativeLanePositionWriter->IsDsParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DS.c_str(), relativeLanePositionWriter->GetParameterFromDs().c_str());
            }
            const auto kDsLane = relativeLanePositionWriter->GetDsLane();
            if (!( kDsLane == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DS_LANE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDsLane).c_str());
            }
			else if (relativeLanePositionWriter->IsDsLaneParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DS_LANE.c_str(), relativeLanePositionWriter->GetParameterFromDsLane().c_str());
            }
            const auto kEntityRef = relativeLanePositionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kOffset = relativeLanePositionWriter->GetOffset();
            if (!( kOffset == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kOffset).c_str());
            }
			else if (relativeLanePositionWriter->IsOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), relativeLanePositionWriter->GetParameterFromOffset().c_str());
            }
            const auto kOrientation = relativeLanePositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeLaneRangeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeLaneRangeWriter> relativeLaneRangeWriter)
        {
            // Add Attributes (Parameters)
            const auto kFrom = relativeLaneRangeWriter->GetFrom();
            if (!( kFrom == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FROM.c_str(), XmlExportHelper::ToXmlStringFromInt( kFrom).c_str());
            }
			else if (relativeLaneRangeWriter->IsFromParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FROM.c_str(), relativeLaneRangeWriter->GetParameterFromFrom().c_str());
            }
            const auto kTo = relativeLaneRangeWriter->GetTo();
            if (!( kTo == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TO.c_str(), XmlExportHelper::ToXmlStringFromInt( kTo).c_str());
            }
			else if (relativeLaneRangeWriter->IsToParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TO.c_str(), relativeLaneRangeWriter->GetParameterFromTo().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeObjectPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeObjectPositionWriter> relativeObjectPositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDx = relativeObjectPositionWriter->GetDx();
            if (relativeObjectPositionWriter->IsDxParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DX.c_str(), relativeObjectPositionWriter->GetParameterFromDx().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DX.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDx).c_str());
            }
            const auto kDy = relativeObjectPositionWriter->GetDy();
            if (relativeObjectPositionWriter->IsDyParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DY.c_str(), relativeObjectPositionWriter->GetParameterFromDy().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDy).c_str());
            }
            const auto kDz = relativeObjectPositionWriter->GetDz();
            if (!( kDz == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DZ.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDz).c_str());
            }
			else if (relativeObjectPositionWriter->IsDzParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DZ.c_str(), relativeObjectPositionWriter->GetParameterFromDz().c_str());
            }
            const auto kEntityRef = relativeObjectPositionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kOrientation = relativeObjectPositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeRoadPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeRoadPositionWriter> relativeRoadPositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDs = relativeRoadPositionWriter->GetDs();
            if (relativeRoadPositionWriter->IsDsParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DS.c_str(), relativeRoadPositionWriter->GetParameterFromDs().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDs).c_str());
            }
            const auto kDt = relativeRoadPositionWriter->GetDt();
            if (relativeRoadPositionWriter->IsDtParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DT.c_str(), relativeRoadPositionWriter->GetParameterFromDt().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDt).c_str());
            }
            const auto kEntityRef = relativeRoadPositionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kOrientation = relativeRoadPositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeSpeedConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeSpeedConditionWriter> relativeSpeedConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirection = relativeSpeedConditionWriter->GetDirection();
            if (!( kDirection == DirectionalDimension::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), kDirection.GetLiteral().c_str());
            }
			else if (relativeSpeedConditionWriter->IsDirectionParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), relativeSpeedConditionWriter->GetParameterFromDirection().c_str());
            }
            const auto kEntityRef = relativeSpeedConditionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kRule = relativeSpeedConditionWriter->GetRule();
            if (relativeSpeedConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), relativeSpeedConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = relativeSpeedConditionWriter->GetValue();
            if (relativeSpeedConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), relativeSpeedConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeSpeedToMasterNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeSpeedToMasterWriter> relativeSpeedToMasterWriter)
        {
            // Add Attributes (Parameters)
            const auto kSpeedTargetValueType = relativeSpeedToMasterWriter->GetSpeedTargetValueType();
            if (relativeSpeedToMasterWriter->IsSpeedTargetValueTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE.c_str(), relativeSpeedToMasterWriter->GetParameterFromSpeedTargetValueType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE.c_str(), kSpeedTargetValueType.GetLiteral().c_str());
            }
            const auto kValue = relativeSpeedToMasterWriter->GetValue();
            if (relativeSpeedToMasterWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), relativeSpeedToMasterWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
            const auto kSteadyState = relativeSpeedToMasterWriter->GetWriterSteadyState();
            if (kSteadyState)
            {
				FillSteadyStateNode(document, elementNode, kSteadyState);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeTargetLaneNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeTargetLaneWriter> relativeTargetLaneWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = relativeTargetLaneWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kValue = relativeTargetLaneWriter->GetValue();
            if (relativeTargetLaneWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), relativeTargetLaneWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromInt( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeTargetLaneOffsetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeTargetLaneOffsetWriter> relativeTargetLaneOffsetWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = relativeTargetLaneOffsetWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kValue = relativeTargetLaneOffsetWriter->GetValue();
            if (relativeTargetLaneOffsetWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), relativeTargetLaneOffsetWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeTargetSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeTargetSpeedWriter> relativeTargetSpeedWriter)
        {
            // Add Attributes (Parameters)
            const auto kContinuous = relativeTargetSpeedWriter->GetContinuous();
            if (relativeTargetSpeedWriter->IsContinuousParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), relativeTargetSpeedWriter->GetParameterFromContinuous().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kContinuous).c_str());
            }
            const auto kEntityRef = relativeTargetSpeedWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kSpeedTargetValueType = relativeTargetSpeedWriter->GetSpeedTargetValueType();
            if (relativeTargetSpeedWriter->IsSpeedTargetValueTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE.c_str(), relativeTargetSpeedWriter->GetParameterFromSpeedTargetValueType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE.c_str(), kSpeedTargetValueType.GetLiteral().c_str());
            }
            const auto kValue = relativeTargetSpeedWriter->GetValue();
            if (relativeTargetSpeedWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), relativeTargetSpeedWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRelativeWorldPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeWorldPositionWriter> relativeWorldPositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDx = relativeWorldPositionWriter->GetDx();
            if (relativeWorldPositionWriter->IsDxParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DX.c_str(), relativeWorldPositionWriter->GetParameterFromDx().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DX.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDx).c_str());
            }
            const auto kDy = relativeWorldPositionWriter->GetDy();
            if (relativeWorldPositionWriter->IsDyParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DY.c_str(), relativeWorldPositionWriter->GetParameterFromDy().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDy).c_str());
            }
            const auto kDz = relativeWorldPositionWriter->GetDz();
            if (!( kDz == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DZ.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDz).c_str());
            }
			else if (relativeWorldPositionWriter->IsDzParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DZ.c_str(), relativeWorldPositionWriter->GetParameterFromDz().c_str());
            }
            const auto kEntityRef = relativeWorldPositionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kOrientation = relativeWorldPositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRoadConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoadConditionWriter> roadConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kFrictionScaleFactor = roadConditionWriter->GetFrictionScaleFactor();
            if (roadConditionWriter->IsFrictionScaleFactorParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR.c_str(), roadConditionWriter->GetParameterFromFrictionScaleFactor().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR.c_str(), XmlExportHelper::ToXmlStringFromDouble( kFrictionScaleFactor).c_str());
            }
            const auto kWetness = roadConditionWriter->GetWetness();
            if (!( kWetness == Wetness::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WETNESS.c_str(), kWetness.GetLiteral().c_str());
            }
			else if (roadConditionWriter->IsWetnessParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WETNESS.c_str(), roadConditionWriter->GetParameterFromWetness().c_str());
            }
            const auto kProperties = roadConditionWriter->GetWriterProperties();
            if (kProperties)
            {
                tinyxml2::XMLNode* propertiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROPERTIES.c_str());
                elementNode->InsertEndChild(propertiesElement);
                FillPropertiesNode(document, propertiesElement, kProperties);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRoadNetworkNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoadNetworkWriter> roadNetworkWriter)
        {
            // Add Attributes (Parameters)
            const auto kLogicFile = roadNetworkWriter->GetWriterLogicFile();
            if (kLogicFile)
            {
                tinyxml2::XMLNode* logicFileElement = document->NewElement(OSC_CONSTANTS::ELEMENT__LOGIC_FILE.c_str());
                elementNode->InsertEndChild(logicFileElement);
                FillFileNode(document, logicFileElement, kLogicFile);
            }
            const auto kSceneGraphFile = roadNetworkWriter->GetWriterSceneGraphFile();
            if (kSceneGraphFile)
            {
                tinyxml2::XMLNode* sceneGraphFileElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SCENE_GRAPH_FILE.c_str());
                elementNode->InsertEndChild(sceneGraphFileElement);
                FillFileNode(document, sceneGraphFileElement, kSceneGraphFile);
            }
            const auto kTrafficSignals = roadNetworkWriter->GetWriterTrafficSignals();
            if (!kTrafficSignals.empty())
            {
                tinyxml2::XMLNode* trafficSignalsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER.c_str());
                elementNode->InsertEndChild(trafficSignalsWrapperElement);
                for (auto trafficSignalsWriterItem : kTrafficSignals)
                {
                    tinyxml2::XMLNode* trafficSignalsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNALS.c_str());
                    trafficSignalsWrapperElement->InsertEndChild(trafficSignalsElement);
                    FillTrafficSignalControllerNode(document, trafficSignalsElement, trafficSignalsWriterItem);
                }
            }
            const auto kUsedArea = roadNetworkWriter->GetWriterUsedArea();
            if (kUsedArea)
            {
                tinyxml2::XMLNode* usedAreaElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USED_AREA.c_str());
                elementNode->InsertEndChild(usedAreaElement);
                FillUsedAreaNode(document, usedAreaElement, kUsedArea);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRoadPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoadPositionWriter> roadPositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRoadId = roadPositionWriter->GetRoadId();
            if (roadPositionWriter->IsRoadIdParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID.c_str(), roadPositionWriter->GetParameterFromRoadId().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID.c_str(), XmlExportHelper::ToXmlStringFromString( kRoadId).c_str());
            }
            const auto kS = roadPositionWriter->GetS();
            if (roadPositionWriter->IsSParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__S.c_str(), roadPositionWriter->GetParameterFromS().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__S.c_str(), XmlExportHelper::ToXmlStringFromDouble( kS).c_str());
            }
            const auto kT = roadPositionWriter->GetT();
            if (roadPositionWriter->IsTParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__T.c_str(), roadPositionWriter->GetParameterFromT().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__T.c_str(), XmlExportHelper::ToXmlStringFromDouble( kT).c_str());
            }
            const auto kOrientation = roadPositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRouteNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRouteWriter> routeWriter)
        {
            // Add Attributes (Parameters)
            const auto kClosed = routeWriter->GetClosed();
            if (routeWriter->IsClosedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CLOSED.c_str(), routeWriter->GetParameterFromClosed().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CLOSED.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kClosed).c_str());
            }
            const auto kName = routeWriter->GetName();
            if (routeWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), routeWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kParameterDeclarations = routeWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kWaypoints = routeWriter->GetWriterWaypoints();
            if (!kWaypoints.empty())
            {
                for (auto waypointsWriterItem : kWaypoints)
                {
                    tinyxml2::XMLNode* waypointsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__WAYPOINT.c_str());
                    elementNode->InsertEndChild(waypointsElement);
                    FillWaypointNode(document, waypointsElement, waypointsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRouteCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRouteCatalogLocationWriter> routeCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = routeCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRoutePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoutePositionWriter> routePositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRouteRef = routePositionWriter->GetWriterRouteRef();
            if (kRouteRef)
            {
                tinyxml2::XMLNode* routeRefElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROUTE_REF.c_str());
                elementNode->InsertEndChild(routeRefElement);
                FillRouteRefNode(document, routeRefElement, kRouteRef);
            }
            const auto kOrientation = routePositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
            const auto kInRoutePosition = routePositionWriter->GetWriterInRoutePosition();
            if (kInRoutePosition)
            {
                tinyxml2::XMLNode* inRoutePositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__IN_ROUTE_POSITION.c_str());
                elementNode->InsertEndChild(inRoutePositionElement);
                FillInRoutePositionNode(document, inRoutePositionElement, kInRoutePosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRouteRefNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRouteRefWriter> routeRefWriter)
        {
            // Add Attributes (Parameters)
            const auto kRoute = routeRefWriter->GetWriterRoute();
            if (kRoute)
            {
                tinyxml2::XMLNode* routeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROUTE.c_str());
                elementNode->InsertEndChild(routeElement);
                FillRouteNode(document, routeElement, kRoute);
            }
            const auto kCatalogReference = routeRefWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillRoutingActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoutingActionWriter> routingActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAssignRouteAction = routingActionWriter->GetWriterAssignRouteAction();
            if (kAssignRouteAction)
            {
                tinyxml2::XMLNode* assignRouteActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ASSIGN_ROUTE_ACTION.c_str());
                elementNode->InsertEndChild(assignRouteActionElement);
                FillAssignRouteActionNode(document, assignRouteActionElement, kAssignRouteAction);
            }
            const auto kFollowTrajectoryAction = routingActionWriter->GetWriterFollowTrajectoryAction();
            if (kFollowTrajectoryAction)
            {
                tinyxml2::XMLNode* followTrajectoryActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FOLLOW_TRAJECTORY_ACTION.c_str());
                elementNode->InsertEndChild(followTrajectoryActionElement);
                FillFollowTrajectoryActionNode(document, followTrajectoryActionElement, kFollowTrajectoryAction);
            }
            const auto kAcquirePositionAction = routingActionWriter->GetWriterAcquirePositionAction();
            if (kAcquirePositionAction)
            {
                tinyxml2::XMLNode* acquirePositionActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACQUIRE_POSITION_ACTION.c_str());
                elementNode->InsertEndChild(acquirePositionActionElement);
                FillAcquirePositionActionNode(document, acquirePositionActionElement, kAcquirePositionAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillScenarioDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IScenarioDefinitionWriter> scenarioDefinitionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterDeclarations = scenarioDefinitionWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kVariableDeclarations = scenarioDefinitionWriter->GetWriterVariableDeclarations();
            if (!kVariableDeclarations.empty())
            {
                tinyxml2::XMLNode* variableDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VARIABLE_DECLARATION.c_str());
                elementNode->InsertEndChild(variableDeclarationsWrapperElement);
                for (auto variableDeclarationsWriterItem : kVariableDeclarations)
                {
                    tinyxml2::XMLNode* variableDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VARIABLE_DECLARATIONS.c_str());
                    variableDeclarationsWrapperElement->InsertEndChild(variableDeclarationsElement);
                    FillVariableDeclarationNode(document, variableDeclarationsElement, variableDeclarationsWriterItem);
                }
            }
            const auto kCatalogLocations = scenarioDefinitionWriter->GetWriterCatalogLocations();
            if (kCatalogLocations)
            {
                tinyxml2::XMLNode* catalogLocationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS.c_str());
                elementNode->InsertEndChild(catalogLocationsElement);
                FillCatalogLocationsNode(document, catalogLocationsElement, kCatalogLocations);
            }
            const auto kRoadNetwork = scenarioDefinitionWriter->GetWriterRoadNetwork();
            if (kRoadNetwork)
            {
                tinyxml2::XMLNode* roadNetworkElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ROAD_NETWORK.c_str());
                elementNode->InsertEndChild(roadNetworkElement);
                FillRoadNetworkNode(document, roadNetworkElement, kRoadNetwork);
            }
            const auto kEntities = scenarioDefinitionWriter->GetWriterEntities();
            if (kEntities)
            {
                tinyxml2::XMLNode* entitiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITIES.c_str());
                elementNode->InsertEndChild(entitiesElement);
                FillEntitiesNode(document, entitiesElement, kEntities);
            }
            const auto kStoryboard = scenarioDefinitionWriter->GetWriterStoryboard();
            if (kStoryboard)
            {
                tinyxml2::XMLNode* storyboardElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STORYBOARD.c_str());
                elementNode->InsertEndChild(storyboardElement);
                FillStoryboardNode(document, storyboardElement, kStoryboard);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillScenarioObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IScenarioObjectWriter> scenarioObjectWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = scenarioObjectWriter->GetName();
            if (scenarioObjectWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), scenarioObjectWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kEntityObject = scenarioObjectWriter->GetWriterEntityObject();
            if (kEntityObject)
            {
				FillEntityObjectNode(document, elementNode, kEntityObject);
            }
            const auto kObjectController = scenarioObjectWriter->GetWriterObjectController();
            if (!kObjectController.empty())
            {
                for (auto objectControllerWriterItem : kObjectController)
                {
                    tinyxml2::XMLNode* objectControllerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__OBJECT_CONTROLLER.c_str());
                    elementNode->InsertEndChild(objectControllerElement);
                    FillObjectControllerNode(document, objectControllerElement, objectControllerWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSelectedEntitiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISelectedEntitiesWriter> selectedEntitiesWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = selectedEntitiesWriter->GetWriterEntityRef();
            if (!kEntityRef.empty())
            {
                for (auto entityRefWriterItem : kEntityRef)
                {
                    tinyxml2::XMLNode* entityRefElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_REF.c_str());
                    elementNode->InsertEndChild(entityRefElement);
                    FillEntityRefNode(document, entityRefElement, entityRefWriterItem);
                    
                }
            }
            const auto kByType = selectedEntitiesWriter->GetWriterByType();
            if (!kByType.empty())
            {
                for (auto byTypeWriterItem : kByType)
                {
                    tinyxml2::XMLNode* byTypeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BY_TYPE.c_str());
                    elementNode->InsertEndChild(byTypeElement);
                    FillByTypeNode(document, byTypeElement, byTypeWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSensorReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISensorReferenceWriter> sensorReferenceWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = sensorReferenceWriter->GetName();
            if (sensorReferenceWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), sensorReferenceWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSensorReferenceSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISensorReferenceSetWriter> sensorReferenceSetWriter)
        {
            // Add Attributes (Parameters)
            const auto kSensorReferences = sensorReferenceSetWriter->GetWriterSensorReferences();
            if (!kSensorReferences.empty())
            {
                for (auto sensorReferencesWriterItem : kSensorReferences)
                {
                    tinyxml2::XMLNode* sensorReferencesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SENSOR_REFERENCE.c_str());
                    elementNode->InsertEndChild(sensorReferencesElement);
                    FillSensorReferenceNode(document, sensorReferencesElement, sensorReferencesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillShapeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IShapeWriter> shapeWriter)
        {
            // Add Attributes (Parameters)
            const auto kPolyline = shapeWriter->GetWriterPolyline();
            if (kPolyline)
            {
                tinyxml2::XMLNode* polylineElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POLYLINE.c_str());
                elementNode->InsertEndChild(polylineElement);
                FillPolylineNode(document, polylineElement, kPolyline);
            }
            const auto kClothoid = shapeWriter->GetWriterClothoid();
            if (kClothoid)
            {
                tinyxml2::XMLNode* clothoidElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CLOTHOID.c_str());
                elementNode->InsertEndChild(clothoidElement);
                FillClothoidNode(document, clothoidElement, kClothoid);
            }
            const auto kNurbs = shapeWriter->GetWriterNurbs();
            if (kNurbs)
            {
                tinyxml2::XMLNode* nurbsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__NURBS.c_str());
                elementNode->InsertEndChild(nurbsElement);
                FillNurbsNode(document, nurbsElement, kNurbs);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSimulationTimeConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISimulationTimeConditionWriter> simulationTimeConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRule = simulationTimeConditionWriter->GetRule();
            if (simulationTimeConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), simulationTimeConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = simulationTimeConditionWriter->GetValue();
            if (simulationTimeConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), simulationTimeConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSpeedActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedActionWriter> speedActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kSpeedActionDynamics = speedActionWriter->GetWriterSpeedActionDynamics();
            if (kSpeedActionDynamics)
            {
                tinyxml2::XMLNode* speedActionDynamicsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SPEED_ACTION_DYNAMICS.c_str());
                elementNode->InsertEndChild(speedActionDynamicsElement);
                FillTransitionDynamicsNode(document, speedActionDynamicsElement, kSpeedActionDynamics);
            }
            const auto kSpeedActionTarget = speedActionWriter->GetWriterSpeedActionTarget();
            if (kSpeedActionTarget)
            {
                tinyxml2::XMLNode* speedActionTargetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SPEED_ACTION_TARGET.c_str());
                elementNode->InsertEndChild(speedActionTargetElement);
                FillSpeedActionTargetNode(document, speedActionTargetElement, kSpeedActionTarget);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSpeedActionTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedActionTargetWriter> speedActionTargetWriter)
        {
            // Add Attributes (Parameters)
            const auto kRelativeTargetSpeed = speedActionTargetWriter->GetWriterRelativeTargetSpeed();
            if (kRelativeTargetSpeed)
            {
                tinyxml2::XMLNode* relativeTargetSpeedElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED.c_str());
                elementNode->InsertEndChild(relativeTargetSpeedElement);
                FillRelativeTargetSpeedNode(document, relativeTargetSpeedElement, kRelativeTargetSpeed);
            }
            const auto kAbsoluteTargetSpeed = speedActionTargetWriter->GetWriterAbsoluteTargetSpeed();
            if (kAbsoluteTargetSpeed)
            {
                tinyxml2::XMLNode* absoluteTargetSpeedElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED.c_str());
                elementNode->InsertEndChild(absoluteTargetSpeedElement);
                FillAbsoluteTargetSpeedNode(document, absoluteTargetSpeedElement, kAbsoluteTargetSpeed);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSpeedConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedConditionWriter> speedConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirection = speedConditionWriter->GetDirection();
            if (!( kDirection == DirectionalDimension::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), kDirection.GetLiteral().c_str());
            }
			else if (speedConditionWriter->IsDirectionParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), speedConditionWriter->GetParameterFromDirection().c_str());
            }
            const auto kRule = speedConditionWriter->GetRule();
            if (speedConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), speedConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = speedConditionWriter->GetValue();
            if (speedConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), speedConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSpeedProfileActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedProfileActionWriter> speedProfileActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kEntityRef = speedProfileActionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kFollowingMode = speedProfileActionWriter->GetFollowingMode();
            if (speedProfileActionWriter->IsFollowingModeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE.c_str(), speedProfileActionWriter->GetParameterFromFollowingMode().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE.c_str(), kFollowingMode.GetLiteral().c_str());
            }
            const auto kDynamicConstraints = speedProfileActionWriter->GetWriterDynamicConstraints();
            if (kDynamicConstraints)
            {
                tinyxml2::XMLNode* dynamicConstraintsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS.c_str());
                elementNode->InsertEndChild(dynamicConstraintsElement);
                FillDynamicConstraintsNode(document, dynamicConstraintsElement, kDynamicConstraints);
            }
            const auto kSpeedProfileEntry = speedProfileActionWriter->GetWriterSpeedProfileEntry();
            if (!kSpeedProfileEntry.empty())
            {
                for (auto speedProfileEntryWriterItem : kSpeedProfileEntry)
                {
                    tinyxml2::XMLNode* speedProfileEntryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SPEED_PROFILE_ENTRY.c_str());
                    elementNode->InsertEndChild(speedProfileEntryElement);
                    FillSpeedProfileEntryNode(document, speedProfileEntryElement, speedProfileEntryWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSpeedProfileEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedProfileEntryWriter> speedProfileEntryWriter)
        {
            // Add Attributes (Parameters)
            const auto kSpeed = speedProfileEntryWriter->GetSpeed();
            if (speedProfileEntryWriter->IsSpeedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED.c_str(), speedProfileEntryWriter->GetParameterFromSpeed().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED.c_str(), XmlExportHelper::ToXmlStringFromDouble( kSpeed).c_str());
            }
            const auto kTime = speedProfileEntryWriter->GetTime();
            if (!( kTime == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTime).c_str());
            }
			else if (speedProfileEntryWriter->IsTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), speedProfileEntryWriter->GetParameterFromTime().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillStandStillConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStandStillConditionWriter> standStillConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDuration = standStillConditionWriter->GetDuration();
            if (standStillConditionWriter->IsDurationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), standStillConditionWriter->GetParameterFromDuration().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DURATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDuration).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSteadyStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISteadyStateWriter> steadyStateWriter)
        {
            // Add Attributes (Parameters)
            const auto kTargetDistanceSteadyState = steadyStateWriter->GetWriterTargetDistanceSteadyState();
            if (kTargetDistanceSteadyState)
            {
                tinyxml2::XMLNode* targetDistanceSteadyStateElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE.c_str());
                elementNode->InsertEndChild(targetDistanceSteadyStateElement);
                FillTargetDistanceSteadyStateNode(document, targetDistanceSteadyStateElement, kTargetDistanceSteadyState);
            }
            const auto kTargetTimeSteadyState = steadyStateWriter->GetWriterTargetTimeSteadyState();
            if (kTargetTimeSteadyState)
            {
                tinyxml2::XMLNode* targetTimeSteadyStateElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE.c_str());
                elementNode->InsertEndChild(targetTimeSteadyStateElement);
                FillTargetTimeSteadyStateNode(document, targetTimeSteadyStateElement, kTargetTimeSteadyState);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillStochasticNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStochasticWriter> stochasticWriter)
        {
            // Add Attributes (Parameters)
            const auto kNumberOfTestRuns = stochasticWriter->GetNumberOfTestRuns();
            if (stochasticWriter->IsNumberOfTestRunsParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS.c_str(), stochasticWriter->GetParameterFromNumberOfTestRuns().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS.c_str(), XmlExportHelper::ToXmlStringFromUnsignedInt( kNumberOfTestRuns).c_str());
            }
            const auto kRandomSeed = stochasticWriter->GetRandomSeed();
            if (!( kRandomSeed == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED.c_str(), XmlExportHelper::ToXmlStringFromDouble( kRandomSeed).c_str());
            }
			else if (stochasticWriter->IsRandomSeedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED.c_str(), stochasticWriter->GetParameterFromRandomSeed().c_str());
            }
            const auto kStochasticDistributions = stochasticWriter->GetWriterStochasticDistributions();
            if (!kStochasticDistributions.empty())
            {
                for (auto stochasticDistributionsWriterItem : kStochasticDistributions)
                {
                    tinyxml2::XMLNode* stochasticDistributionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STOCHASTIC_DISTRIBUTION.c_str());
                    elementNode->InsertEndChild(stochasticDistributionsElement);
                    FillStochasticDistributionNode(document, stochasticDistributionsElement, stochasticDistributionsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillStochasticDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStochasticDistributionWriter> stochasticDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterName = stochasticDistributionWriter->GetParameterName();
            if (stochasticDistributionWriter->IsParameterNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME.c_str(), stochasticDistributionWriter->GetParameterFromParameterName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kParameterName).c_str());
            }
            const auto kStochasticDistributionType = stochasticDistributionWriter->GetWriterStochasticDistributionType();
            if (kStochasticDistributionType)
            {
				FillStochasticDistributionTypeNode(document, elementNode, kStochasticDistributionType);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillStochasticDistributionTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStochasticDistributionTypeWriter> stochasticDistributionTypeWriter)
        {
            // Add Attributes (Parameters)
            const auto kProbabilityDistributionSet = stochasticDistributionTypeWriter->GetWriterProbabilityDistributionSet();
            if (kProbabilityDistributionSet)
            {
                tinyxml2::XMLNode* probabilityDistributionSetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET.c_str());
                elementNode->InsertEndChild(probabilityDistributionSetElement);
                FillProbabilityDistributionSetNode(document, probabilityDistributionSetElement, kProbabilityDistributionSet);
            }
            const auto kNormalDistribution = stochasticDistributionTypeWriter->GetWriterNormalDistribution();
            if (kNormalDistribution)
            {
                tinyxml2::XMLNode* normalDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(normalDistributionElement);
                FillNormalDistributionNode(document, normalDistributionElement, kNormalDistribution);
            }
            const auto kUniformDistribution = stochasticDistributionTypeWriter->GetWriterUniformDistribution();
            if (kUniformDistribution)
            {
                tinyxml2::XMLNode* uniformDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(uniformDistributionElement);
                FillUniformDistributionNode(document, uniformDistributionElement, kUniformDistribution);
            }
            const auto kPoissonDistribution = stochasticDistributionTypeWriter->GetWriterPoissonDistribution();
            if (kPoissonDistribution)
            {
                tinyxml2::XMLNode* poissonDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(poissonDistributionElement);
                FillPoissonDistributionNode(document, poissonDistributionElement, kPoissonDistribution);
            }
            const auto kHistogram = stochasticDistributionTypeWriter->GetWriterHistogram();
            if (kHistogram)
            {
                tinyxml2::XMLNode* histogramElement = document->NewElement(OSC_CONSTANTS::ELEMENT__HISTOGRAM.c_str());
                elementNode->InsertEndChild(histogramElement);
                FillHistogramNode(document, histogramElement, kHistogram);
            }
            const auto kUserDefinedDistribution = stochasticDistributionTypeWriter->GetWriterUserDefinedDistribution();
            if (kUserDefinedDistribution)
            {
                tinyxml2::XMLNode* userDefinedDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(userDefinedDistributionElement);
                FillUserDefinedDistributionNode(document, userDefinedDistributionElement, kUserDefinedDistribution);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillStoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStoryWriter> storyWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = storyWriter->GetName();
            if (storyWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), storyWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kParameterDeclarations = storyWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kActs = storyWriter->GetWriterActs();
            if (!kActs.empty())
            {
                for (auto actsWriterItem : kActs)
                {
                    tinyxml2::XMLNode* actsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ACT.c_str());
                    elementNode->InsertEndChild(actsElement);
                    FillActNode(document, actsElement, actsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillStoryboardNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStoryboardWriter> storyboardWriter)
        {
            // Add Attributes (Parameters)
            const auto kInit = storyboardWriter->GetWriterInit();
            if (kInit)
            {
                tinyxml2::XMLNode* initElement = document->NewElement(OSC_CONSTANTS::ELEMENT__INIT.c_str());
                elementNode->InsertEndChild(initElement);
                FillInitNode(document, initElement, kInit);
            }
            const auto kStories = storyboardWriter->GetWriterStories();
            if (!kStories.empty())
            {
                for (auto storiesWriterItem : kStories)
                {
                    tinyxml2::XMLNode* storiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STORY.c_str());
                    elementNode->InsertEndChild(storiesElement);
                    FillStoryNode(document, storiesElement, storiesWriterItem);
                    
                }
            }
            const auto kStopTrigger = storyboardWriter->GetWriterStopTrigger();
            if (kStopTrigger)
            {
                tinyxml2::XMLNode* stopTriggerElement = document->NewElement(OSC_CONSTANTS::ELEMENT__STOP_TRIGGER.c_str());
                elementNode->InsertEndChild(stopTriggerElement);
                FillTriggerNode(document, stopTriggerElement, kStopTrigger);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillStoryboardElementStateConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStoryboardElementStateConditionWriter> storyboardElementStateConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kState = storyboardElementStateConditionWriter->GetState();
            if (storyboardElementStateConditionWriter->IsStateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), storyboardElementStateConditionWriter->GetParameterFromState().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), kState.GetLiteral().c_str());
            }
            const auto kStoryboardElementRef = storyboardElementStateConditionWriter->GetStoryboardElementRef();
            if (kStoryboardElementRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kStoryboardElementRef->GetNameRef()).c_str());
            }
            const auto kStoryboardElementType = storyboardElementStateConditionWriter->GetStoryboardElementType();
            if (storyboardElementStateConditionWriter->IsStoryboardElementTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE.c_str(), storyboardElementStateConditionWriter->GetParameterFromStoryboardElementType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE.c_str(), kStoryboardElementType.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSunNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISunWriter> sunWriter)
        {
            // Add Attributes (Parameters)
            const auto kAzimuth = sunWriter->GetAzimuth();
            if (sunWriter->IsAzimuthParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH.c_str(), sunWriter->GetParameterFromAzimuth().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH.c_str(), XmlExportHelper::ToXmlStringFromDouble( kAzimuth).c_str());
            }
            const auto kElevation = sunWriter->GetElevation();
            if (sunWriter->IsElevationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ELEVATION.c_str(), sunWriter->GetParameterFromElevation().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ELEVATION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kElevation).c_str());
            }
            const auto kIlluminance = sunWriter->GetIlluminance();
            if (!( kIlluminance == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kIlluminance).c_str());
            }
			else if (sunWriter->IsIlluminanceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE.c_str(), sunWriter->GetParameterFromIlluminance().c_str());
            }
            const auto kIntensity = sunWriter->GetIntensity();
            if (!( kIntensity == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INTENSITY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kIntensity).c_str());
            }
			else if (sunWriter->IsIntensityParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INTENSITY.c_str(), sunWriter->GetParameterFromIntensity().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillSynchronizeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISynchronizeActionWriter> synchronizeActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kMasterEntityRef = synchronizeActionWriter->GetMasterEntityRef();
            if (kMasterEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kMasterEntityRef->GetNameRef()).c_str());
            }
            const auto kTargetTolerance = synchronizeActionWriter->GetTargetTolerance();
            if (!( kTargetTolerance == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTargetTolerance).c_str());
            }
			else if (synchronizeActionWriter->IsTargetToleranceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE.c_str(), synchronizeActionWriter->GetParameterFromTargetTolerance().c_str());
            }
            const auto kTargetToleranceMaster = synchronizeActionWriter->GetTargetToleranceMaster();
            if (!( kTargetToleranceMaster == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTargetToleranceMaster).c_str());
            }
			else if (synchronizeActionWriter->IsTargetToleranceMasterParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER.c_str(), synchronizeActionWriter->GetParameterFromTargetToleranceMaster().c_str());
            }
            const auto kTargetPositionMaster = synchronizeActionWriter->GetWriterTargetPositionMaster();
            if (kTargetPositionMaster)
            {
                tinyxml2::XMLNode* targetPositionMasterElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER.c_str());
                elementNode->InsertEndChild(targetPositionMasterElement);
                FillPositionNode(document, targetPositionMasterElement, kTargetPositionMaster);
            }
            const auto kTargetPosition = synchronizeActionWriter->GetWriterTargetPosition();
            if (kTargetPosition)
            {
                tinyxml2::XMLNode* targetPositionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TARGET_POSITION.c_str());
                elementNode->InsertEndChild(targetPositionElement);
                FillPositionNode(document, targetPositionElement, kTargetPosition);
            }
            const auto kFinalSpeed = synchronizeActionWriter->GetWriterFinalSpeed();
            if (kFinalSpeed)
            {
                tinyxml2::XMLNode* finalSpeedElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FINAL_SPEED.c_str());
                elementNode->InsertEndChild(finalSpeedElement);
                FillFinalSpeedNode(document, finalSpeedElement, kFinalSpeed);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTargetDistanceSteadyStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITargetDistanceSteadyStateWriter> targetDistanceSteadyStateWriter)
        {
            // Add Attributes (Parameters)
            const auto kDistance = targetDistanceSteadyStateWriter->GetDistance();
            if (targetDistanceSteadyStateWriter->IsDistanceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE.c_str(), targetDistanceSteadyStateWriter->GetParameterFromDistance().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DISTANCE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDistance).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTargetTimeSteadyStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITargetTimeSteadyStateWriter> targetTimeSteadyStateWriter)
        {
            // Add Attributes (Parameters)
            const auto kTime = targetTimeSteadyStateWriter->GetTime();
            if (targetTimeSteadyStateWriter->IsTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), targetTimeSteadyStateWriter->GetParameterFromTime().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTime).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTeleportActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITeleportActionWriter> teleportActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kPosition = teleportActionWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTimeHeadwayConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeHeadwayConditionWriter> timeHeadwayConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAlongRoute = timeHeadwayConditionWriter->GetAlongRoute();
            if (!( kAlongRoute == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kAlongRoute).c_str());
            }
			else if (timeHeadwayConditionWriter->IsAlongRouteParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE.c_str(), timeHeadwayConditionWriter->GetParameterFromAlongRoute().c_str());
            }
            const auto kCoordinateSystem = timeHeadwayConditionWriter->GetCoordinateSystem();
            if (!( kCoordinateSystem == CoordinateSystem::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), kCoordinateSystem.GetLiteral().c_str());
            }
			else if (timeHeadwayConditionWriter->IsCoordinateSystemParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), timeHeadwayConditionWriter->GetParameterFromCoordinateSystem().c_str());
            }
            const auto kEntityRef = timeHeadwayConditionWriter->GetEntityRef();
            if (kEntityRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kEntityRef->GetNameRef()).c_str());
            }
            const auto kFreespace = timeHeadwayConditionWriter->GetFreespace();
            if (timeHeadwayConditionWriter->IsFreespaceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), timeHeadwayConditionWriter->GetParameterFromFreespace().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kFreespace).c_str());
            }
            const auto kRelativeDistanceType = timeHeadwayConditionWriter->GetRelativeDistanceType();
            if (!( kRelativeDistanceType == RelativeDistanceType::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), kRelativeDistanceType.GetLiteral().c_str());
            }
			else if (timeHeadwayConditionWriter->IsRelativeDistanceTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), timeHeadwayConditionWriter->GetParameterFromRelativeDistanceType().c_str());
            }
            const auto kRoutingAlgorithm = timeHeadwayConditionWriter->GetRoutingAlgorithm();
            if (!( kRoutingAlgorithm == RoutingAlgorithm::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), kRoutingAlgorithm.GetLiteral().c_str());
            }
			else if (timeHeadwayConditionWriter->IsRoutingAlgorithmParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), timeHeadwayConditionWriter->GetParameterFromRoutingAlgorithm().c_str());
            }
            const auto kRule = timeHeadwayConditionWriter->GetRule();
            if (timeHeadwayConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), timeHeadwayConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = timeHeadwayConditionWriter->GetValue();
            if (timeHeadwayConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), timeHeadwayConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTimeOfDayNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeOfDayWriter> timeOfDayWriter)
        {
            // Add Attributes (Parameters)
            const auto kAnimation = timeOfDayWriter->GetAnimation();
            if (timeOfDayWriter->IsAnimationParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ANIMATION.c_str(), timeOfDayWriter->GetParameterFromAnimation().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ANIMATION.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kAnimation).c_str());
            }
            const auto kDateTime = timeOfDayWriter->GetDateTime();
            if (timeOfDayWriter->IsDateTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME.c_str(), timeOfDayWriter->GetParameterFromDateTime().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME.c_str(), XmlExportHelper::ToXmlStringFromDateTime( kDateTime).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTimeOfDayConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeOfDayConditionWriter> timeOfDayConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kDateTime = timeOfDayConditionWriter->GetDateTime();
            if (timeOfDayConditionWriter->IsDateTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME.c_str(), timeOfDayConditionWriter->GetParameterFromDateTime().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME.c_str(), XmlExportHelper::ToXmlStringFromDateTime( kDateTime).c_str());
            }
            const auto kRule = timeOfDayConditionWriter->GetRule();
            if (timeOfDayConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), timeOfDayConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTimeReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeReferenceWriter> timeReferenceWriter)
        {
            // Add Attributes (Parameters)
            const auto kNone = timeReferenceWriter->GetWriterNone();
            if (kNone)
            {
                tinyxml2::XMLNode* noneElement = document->NewElement(OSC_CONSTANTS::ELEMENT__NONE.c_str());
                elementNode->InsertEndChild(noneElement);
                FillNoneNode(document, noneElement, kNone);
            }
            const auto kTiming = timeReferenceWriter->GetWriterTiming();
            if (kTiming)
            {
                tinyxml2::XMLNode* timingElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TIMING.c_str());
                elementNode->InsertEndChild(timingElement);
                FillTimingNode(document, timingElement, kTiming);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTimeToCollisionConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeToCollisionConditionWriter> timeToCollisionConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kAlongRoute = timeToCollisionConditionWriter->GetAlongRoute();
            if (!( kAlongRoute == false))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kAlongRoute).c_str());
            }
			else if (timeToCollisionConditionWriter->IsAlongRouteParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE.c_str(), timeToCollisionConditionWriter->GetParameterFromAlongRoute().c_str());
            }
            const auto kCoordinateSystem = timeToCollisionConditionWriter->GetCoordinateSystem();
            if (!( kCoordinateSystem == CoordinateSystem::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), kCoordinateSystem.GetLiteral().c_str());
            }
			else if (timeToCollisionConditionWriter->IsCoordinateSystemParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM.c_str(), timeToCollisionConditionWriter->GetParameterFromCoordinateSystem().c_str());
            }
            const auto kFreespace = timeToCollisionConditionWriter->GetFreespace();
            if (timeToCollisionConditionWriter->IsFreespaceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), timeToCollisionConditionWriter->GetParameterFromFreespace().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FREESPACE.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kFreespace).c_str());
            }
            const auto kRelativeDistanceType = timeToCollisionConditionWriter->GetRelativeDistanceType();
            if (!( kRelativeDistanceType == RelativeDistanceType::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), kRelativeDistanceType.GetLiteral().c_str());
            }
			else if (timeToCollisionConditionWriter->IsRelativeDistanceTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE.c_str(), timeToCollisionConditionWriter->GetParameterFromRelativeDistanceType().c_str());
            }
            const auto kRoutingAlgorithm = timeToCollisionConditionWriter->GetRoutingAlgorithm();
            if (!( kRoutingAlgorithm == RoutingAlgorithm::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), kRoutingAlgorithm.GetLiteral().c_str());
            }
			else if (timeToCollisionConditionWriter->IsRoutingAlgorithmParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM.c_str(), timeToCollisionConditionWriter->GetParameterFromRoutingAlgorithm().c_str());
            }
            const auto kRule = timeToCollisionConditionWriter->GetRule();
            if (timeToCollisionConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), timeToCollisionConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = timeToCollisionConditionWriter->GetValue();
            if (timeToCollisionConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), timeToCollisionConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
            const auto kTimeToCollisionConditionTarget = timeToCollisionConditionWriter->GetWriterTimeToCollisionConditionTarget();
            if (kTimeToCollisionConditionTarget)
            {
                tinyxml2::XMLNode* timeToCollisionConditionTargetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET.c_str());
                elementNode->InsertEndChild(timeToCollisionConditionTargetElement);
                FillTimeToCollisionConditionTargetNode(document, timeToCollisionConditionTargetElement, kTimeToCollisionConditionTarget);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTimeToCollisionConditionTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeToCollisionConditionTargetWriter> timeToCollisionConditionTargetWriter)
        {
            // Add Attributes (Parameters)
            const auto kPosition = timeToCollisionConditionTargetWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
            const auto kEntityRef = timeToCollisionConditionTargetWriter->GetWriterEntityRef();
            if (kEntityRef)
            {
                tinyxml2::XMLNode* entityRefElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_REF.c_str());
                elementNode->InsertEndChild(entityRefElement);
                FillEntityRefNode(document, entityRefElement, kEntityRef);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTimingNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimingWriter> timingWriter)
        {
            // Add Attributes (Parameters)
            const auto kDomainAbsoluteRelative = timingWriter->GetDomainAbsoluteRelative();
            if (timingWriter->IsDomainAbsoluteRelativeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE.c_str(), timingWriter->GetParameterFromDomainAbsoluteRelative().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE.c_str(), kDomainAbsoluteRelative.GetLiteral().c_str());
            }
            const auto kOffset = timingWriter->GetOffset();
            if (timingWriter->IsOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), timingWriter->GetParameterFromOffset().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kOffset).c_str());
            }
            const auto kScale = timingWriter->GetScale();
            if (timingWriter->IsScaleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SCALE.c_str(), timingWriter->GetParameterFromScale().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SCALE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kScale).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficActionWriter> trafficActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kTrafficName = trafficActionWriter->GetTrafficName();
            if (!( kTrafficName.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kTrafficName).c_str());
            }
			else if (trafficActionWriter->IsTrafficNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_NAME.c_str(), trafficActionWriter->GetParameterFromTrafficName().c_str());
            }
            const auto kTrafficSourceAction = trafficActionWriter->GetWriterTrafficSourceAction();
            if (kTrafficSourceAction)
            {
                tinyxml2::XMLNode* trafficSourceActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION.c_str());
                elementNode->InsertEndChild(trafficSourceActionElement);
                FillTrafficSourceActionNode(document, trafficSourceActionElement, kTrafficSourceAction);
            }
            const auto kTrafficSinkAction = trafficActionWriter->GetWriterTrafficSinkAction();
            if (kTrafficSinkAction)
            {
                tinyxml2::XMLNode* trafficSinkActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION.c_str());
                elementNode->InsertEndChild(trafficSinkActionElement);
                FillTrafficSinkActionNode(document, trafficSinkActionElement, kTrafficSinkAction);
            }
            const auto kTrafficSwarmAction = trafficActionWriter->GetWriterTrafficSwarmAction();
            if (kTrafficSwarmAction)
            {
                tinyxml2::XMLNode* trafficSwarmActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION.c_str());
                elementNode->InsertEndChild(trafficSwarmActionElement);
                FillTrafficSwarmActionNode(document, trafficSwarmActionElement, kTrafficSwarmAction);
            }
            const auto kTrafficStopAction = trafficActionWriter->GetWriterTrafficStopAction();
            if (kTrafficStopAction)
            {
                tinyxml2::XMLNode* trafficStopActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_STOP_ACTION.c_str());
                elementNode->InsertEndChild(trafficStopActionElement);
                FillTrafficStopActionNode(document, trafficStopActionElement, kTrafficStopAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficDefinitionWriter> trafficDefinitionWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = trafficDefinitionWriter->GetName();
            if (trafficDefinitionWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), trafficDefinitionWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kVehicleCategoryDistribution = trafficDefinitionWriter->GetWriterVehicleCategoryDistribution();
            if (kVehicleCategoryDistribution)
            {
                tinyxml2::XMLNode* vehicleCategoryDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(vehicleCategoryDistributionElement);
                FillVehicleCategoryDistributionNode(document, vehicleCategoryDistributionElement, kVehicleCategoryDistribution);
            }
            const auto kVehicleRoleDistribution = trafficDefinitionWriter->GetWriterVehicleRoleDistribution();
            if (kVehicleRoleDistribution)
            {
                tinyxml2::XMLNode* vehicleRoleDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE_ROLE_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(vehicleRoleDistributionElement);
                FillVehicleRoleDistributionNode(document, vehicleRoleDistributionElement, kVehicleRoleDistribution);
            }
            const auto kControllerDistribution = trafficDefinitionWriter->GetWriterControllerDistribution();
            if (kControllerDistribution)
            {
                tinyxml2::XMLNode* controllerDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(controllerDistributionElement);
                FillControllerDistributionNode(document, controllerDistributionElement, kControllerDistribution);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalActionWriter> trafficSignalActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kTrafficSignalControllerAction = trafficSignalActionWriter->GetWriterTrafficSignalControllerAction();
            if (kTrafficSignalControllerAction)
            {
                tinyxml2::XMLNode* trafficSignalControllerActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION.c_str());
                elementNode->InsertEndChild(trafficSignalControllerActionElement);
                FillTrafficSignalControllerActionNode(document, trafficSignalControllerActionElement, kTrafficSignalControllerAction);
            }
            const auto kTrafficSignalStateAction = trafficSignalActionWriter->GetWriterTrafficSignalStateAction();
            if (kTrafficSignalStateAction)
            {
                tinyxml2::XMLNode* trafficSignalStateActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION.c_str());
                elementNode->InsertEndChild(trafficSignalStateActionElement);
                FillTrafficSignalStateActionNode(document, trafficSignalStateActionElement, kTrafficSignalStateAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalConditionWriter> trafficSignalConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = trafficSignalConditionWriter->GetName();
            if (trafficSignalConditionWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), trafficSignalConditionWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kState = trafficSignalConditionWriter->GetState();
            if (trafficSignalConditionWriter->IsStateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), trafficSignalConditionWriter->GetParameterFromState().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), XmlExportHelper::ToXmlStringFromString( kState).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalControllerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalControllerWriter> trafficSignalControllerWriter)
        {
            // Add Attributes (Parameters)
            const auto kDelay = trafficSignalControllerWriter->GetDelay();
            if (!( kDelay == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DELAY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDelay).c_str());
            }
			else if (trafficSignalControllerWriter->IsDelayParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DELAY.c_str(), trafficSignalControllerWriter->GetParameterFromDelay().c_str());
            }
            const auto kName = trafficSignalControllerWriter->GetName();
            if (trafficSignalControllerWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), trafficSignalControllerWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kReference = trafficSignalControllerWriter->GetReference();
            if (!( kReference.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__REFERENCE.c_str(), XmlExportHelper::ToXmlStringFromString( kReference).c_str());
            }
			else if (trafficSignalControllerWriter->IsReferenceParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__REFERENCE.c_str(), trafficSignalControllerWriter->GetParameterFromReference().c_str());
            }
            const auto kPhases = trafficSignalControllerWriter->GetWriterPhases();
            if (!kPhases.empty())
            {
                for (auto phasesWriterItem : kPhases)
                {
                    tinyxml2::XMLNode* phasesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PHASE.c_str());
                    elementNode->InsertEndChild(phasesElement);
                    FillPhaseNode(document, phasesElement, phasesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalControllerActionWriter> trafficSignalControllerActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kPhase = trafficSignalControllerActionWriter->GetPhase();
            if (trafficSignalControllerActionWriter->IsPhaseParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PHASE.c_str(), trafficSignalControllerActionWriter->GetParameterFromPhase().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PHASE.c_str(), XmlExportHelper::ToXmlStringFromString( kPhase).c_str());
            }
            const auto kTrafficSignalControllerRef = trafficSignalControllerActionWriter->GetTrafficSignalControllerRef();
            if (kTrafficSignalControllerRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kTrafficSignalControllerRef->GetNameRef()).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalControllerConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalControllerConditionWriter> trafficSignalControllerConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kPhase = trafficSignalControllerConditionWriter->GetPhase();
            if (trafficSignalControllerConditionWriter->IsPhaseParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PHASE.c_str(), trafficSignalControllerConditionWriter->GetParameterFromPhase().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__PHASE.c_str(), XmlExportHelper::ToXmlStringFromString( kPhase).c_str());
            }
            const auto kTrafficSignalControllerRef = trafficSignalControllerConditionWriter->GetTrafficSignalControllerRef();
            if (kTrafficSignalControllerRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kTrafficSignalControllerRef->GetNameRef()).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalGroupStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalGroupStateWriter> trafficSignalGroupStateWriter)
        {
            // Add Attributes (Parameters)
            const auto kState = trafficSignalGroupStateWriter->GetState();
            if (trafficSignalGroupStateWriter->IsStateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), trafficSignalGroupStateWriter->GetParameterFromState().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), XmlExportHelper::ToXmlStringFromString( kState).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalStateWriter> trafficSignalStateWriter)
        {
            // Add Attributes (Parameters)
            const auto kState = trafficSignalStateWriter->GetState();
            if (trafficSignalStateWriter->IsStateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), trafficSignalStateWriter->GetParameterFromState().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), XmlExportHelper::ToXmlStringFromString( kState).c_str());
            }
            const auto kTrafficSignalId = trafficSignalStateWriter->GetTrafficSignalId();
            if (trafficSignalStateWriter->IsTrafficSignalIdParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID.c_str(), trafficSignalStateWriter->GetParameterFromTrafficSignalId().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID.c_str(), XmlExportHelper::ToXmlStringFromString( kTrafficSignalId).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSignalStateActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalStateActionWriter> trafficSignalStateActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = trafficSignalStateActionWriter->GetName();
            if (trafficSignalStateActionWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), trafficSignalStateActionWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kState = trafficSignalStateActionWriter->GetState();
            if (trafficSignalStateActionWriter->IsStateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), trafficSignalStateActionWriter->GetParameterFromState().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__STATE.c_str(), XmlExportHelper::ToXmlStringFromString( kState).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSinkActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSinkActionWriter> trafficSinkActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRadius = trafficSinkActionWriter->GetRadius();
            if (trafficSinkActionWriter->IsRadiusParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RADIUS.c_str(), trafficSinkActionWriter->GetParameterFromRadius().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RADIUS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kRadius).c_str());
            }
            const auto kRate = trafficSinkActionWriter->GetRate();
            if (!( kRate == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kRate).c_str());
            }
			else if (trafficSinkActionWriter->IsRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RATE.c_str(), trafficSinkActionWriter->GetParameterFromRate().c_str());
            }
            const auto kPosition = trafficSinkActionWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
            const auto kTrafficDefinition = trafficSinkActionWriter->GetWriterTrafficDefinition();
            if (kTrafficDefinition)
            {
                tinyxml2::XMLNode* trafficDefinitionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION.c_str());
                elementNode->InsertEndChild(trafficDefinitionElement);
                FillTrafficDefinitionNode(document, trafficDefinitionElement, kTrafficDefinition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSourceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSourceActionWriter> trafficSourceActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRadius = trafficSourceActionWriter->GetRadius();
            if (trafficSourceActionWriter->IsRadiusParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RADIUS.c_str(), trafficSourceActionWriter->GetParameterFromRadius().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RADIUS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kRadius).c_str());
            }
            const auto kRate = trafficSourceActionWriter->GetRate();
            if (trafficSourceActionWriter->IsRateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RATE.c_str(), trafficSourceActionWriter->GetParameterFromRate().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RATE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kRate).c_str());
            }
            const auto kSpeed = trafficSourceActionWriter->GetSpeed();
            if (!( kSpeed == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED.c_str(), XmlExportHelper::ToXmlStringFromDouble( kSpeed).c_str());
            }
			else if (trafficSourceActionWriter->IsSpeedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED.c_str(), trafficSourceActionWriter->GetParameterFromSpeed().c_str());
            }
            const auto kVelocity = trafficSourceActionWriter->GetVelocity();
            if (!( kVelocity == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VELOCITY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kVelocity).c_str());
            }
			else if (trafficSourceActionWriter->IsVelocityParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VELOCITY.c_str(), trafficSourceActionWriter->GetParameterFromVelocity().c_str());
            }
            const auto kPosition = trafficSourceActionWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
            const auto kTrafficDefinition = trafficSourceActionWriter->GetWriterTrafficDefinition();
            if (kTrafficDefinition)
            {
                tinyxml2::XMLNode* trafficDefinitionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION.c_str());
                elementNode->InsertEndChild(trafficDefinitionElement);
                FillTrafficDefinitionNode(document, trafficDefinitionElement, kTrafficDefinition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficStopActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficStopActionWriter> trafficStopActionWriter)
        {
            // Add Attributes (Parameters)
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrafficSwarmActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSwarmActionWriter> trafficSwarmActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kInnerRadius = trafficSwarmActionWriter->GetInnerRadius();
            if (trafficSwarmActionWriter->IsInnerRadiusParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS.c_str(), trafficSwarmActionWriter->GetParameterFromInnerRadius().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kInnerRadius).c_str());
            }
            const auto kNumberOfVehicles = trafficSwarmActionWriter->GetNumberOfVehicles();
            if (trafficSwarmActionWriter->IsNumberOfVehiclesParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES.c_str(), trafficSwarmActionWriter->GetParameterFromNumberOfVehicles().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES.c_str(), XmlExportHelper::ToXmlStringFromUnsignedInt( kNumberOfVehicles).c_str());
            }
            const auto kOffset = trafficSwarmActionWriter->GetOffset();
            if (trafficSwarmActionWriter->IsOffsetParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), trafficSwarmActionWriter->GetParameterFromOffset().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__OFFSET.c_str(), XmlExportHelper::ToXmlStringFromDouble( kOffset).c_str());
            }
            const auto kSemiMajorAxis = trafficSwarmActionWriter->GetSemiMajorAxis();
            if (trafficSwarmActionWriter->IsSemiMajorAxisParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS.c_str(), trafficSwarmActionWriter->GetParameterFromSemiMajorAxis().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kSemiMajorAxis).c_str());
            }
            const auto kSemiMinorAxis = trafficSwarmActionWriter->GetSemiMinorAxis();
            if (trafficSwarmActionWriter->IsSemiMinorAxisParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS.c_str(), trafficSwarmActionWriter->GetParameterFromSemiMinorAxis().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kSemiMinorAxis).c_str());
            }
            const auto kVelocity = trafficSwarmActionWriter->GetVelocity();
            if (!( kVelocity == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VELOCITY.c_str(), XmlExportHelper::ToXmlStringFromDouble( kVelocity).c_str());
            }
			else if (trafficSwarmActionWriter->IsVelocityParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VELOCITY.c_str(), trafficSwarmActionWriter->GetParameterFromVelocity().c_str());
            }
            const auto kCentralObject = trafficSwarmActionWriter->GetWriterCentralObject();
            if (kCentralObject)
            {
                tinyxml2::XMLNode* centralObjectElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT.c_str());
                elementNode->InsertEndChild(centralObjectElement);
                FillCentralSwarmObjectNode(document, centralObjectElement, kCentralObject);
            }
            const auto kTrafficDefinition = trafficSwarmActionWriter->GetWriterTrafficDefinition();
            if (kTrafficDefinition)
            {
                tinyxml2::XMLNode* trafficDefinitionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION.c_str());
                elementNode->InsertEndChild(trafficDefinitionElement);
                FillTrafficDefinitionNode(document, trafficDefinitionElement, kTrafficDefinition);
            }
            const auto kInitialSpeedRange = trafficSwarmActionWriter->GetWriterInitialSpeedRange();
            if (kInitialSpeedRange)
            {
                tinyxml2::XMLNode* initialSpeedRangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__INITIAL_SPEED_RANGE.c_str());
                elementNode->InsertEndChild(initialSpeedRangeElement);
                FillRangeNode(document, initialSpeedRangeElement, kInitialSpeedRange);
            }
            const auto kDirectionOfTravelDistribution = trafficSwarmActionWriter->GetWriterDirectionOfTravelDistribution();
            if (kDirectionOfTravelDistribution)
            {
                tinyxml2::XMLNode* directionOfTravelDistributionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTION_OF_TRAVEL_DISTRIBUTION.c_str());
                elementNode->InsertEndChild(directionOfTravelDistributionElement);
                FillDirectionOfTravelDistributionNode(document, directionOfTravelDistributionElement, kDirectionOfTravelDistribution);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrajectoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryWriter> trajectoryWriter)
        {
            // Add Attributes (Parameters)
            const auto kClosed = trajectoryWriter->GetClosed();
            if (trajectoryWriter->IsClosedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CLOSED.c_str(), trajectoryWriter->GetParameterFromClosed().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CLOSED.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kClosed).c_str());
            }
            const auto kName = trajectoryWriter->GetName();
            if (trajectoryWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), trajectoryWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kParameterDeclarations = trajectoryWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kShape = trajectoryWriter->GetWriterShape();
            if (kShape)
            {
                tinyxml2::XMLNode* shapeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SHAPE.c_str());
                elementNode->InsertEndChild(shapeElement);
                FillShapeNode(document, shapeElement, kShape);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrajectoryCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryCatalogLocationWriter> trajectoryCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = trajectoryCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrajectoryFollowingModeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryFollowingModeWriter> trajectoryFollowingModeWriter)
        {
            // Add Attributes (Parameters)
            const auto kFollowingMode = trajectoryFollowingModeWriter->GetFollowingMode();
            if (trajectoryFollowingModeWriter->IsFollowingModeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE.c_str(), trajectoryFollowingModeWriter->GetParameterFromFollowingMode().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE.c_str(), kFollowingMode.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrajectoryPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryPositionWriter> trajectoryPositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kS = trajectoryPositionWriter->GetS();
            if (trajectoryPositionWriter->IsSParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__S.c_str(), trajectoryPositionWriter->GetParameterFromS().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__S.c_str(), XmlExportHelper::ToXmlStringFromDouble( kS).c_str());
            }
            const auto kT = trajectoryPositionWriter->GetT();
            if (!( kT == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__T.c_str(), XmlExportHelper::ToXmlStringFromDouble( kT).c_str());
            }
			else if (trajectoryPositionWriter->IsTParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__T.c_str(), trajectoryPositionWriter->GetParameterFromT().c_str());
            }
            const auto kOrientation = trajectoryPositionWriter->GetWriterOrientation();
            if (kOrientation)
            {
                tinyxml2::XMLNode* orientationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ORIENTATION.c_str());
                elementNode->InsertEndChild(orientationElement);
                FillOrientationNode(document, orientationElement, kOrientation);
            }
            const auto kTrajectoryRef = trajectoryPositionWriter->GetWriterTrajectoryRef();
            if (kTrajectoryRef)
            {
                tinyxml2::XMLNode* trajectoryRefElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY_REF.c_str());
                elementNode->InsertEndChild(trajectoryRefElement);
                FillTrajectoryRefNode(document, trajectoryRefElement, kTrajectoryRef);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTrajectoryRefNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryRefWriter> trajectoryRefWriter)
        {
            // Add Attributes (Parameters)
            const auto kTrajectory = trajectoryRefWriter->GetWriterTrajectory();
            if (kTrajectory)
            {
                tinyxml2::XMLNode* trajectoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__TRAJECTORY.c_str());
                elementNode->InsertEndChild(trajectoryElement);
                FillTrajectoryNode(document, trajectoryElement, kTrajectory);
            }
            const auto kCatalogReference = trajectoryRefWriter->GetWriterCatalogReference();
            if (kCatalogReference)
            {
                tinyxml2::XMLNode* catalogReferenceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE.c_str());
                elementNode->InsertEndChild(catalogReferenceElement);
                FillCatalogReferenceNode(document, catalogReferenceElement, kCatalogReference);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTransitionDynamicsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITransitionDynamicsWriter> transitionDynamicsWriter)
        {
            // Add Attributes (Parameters)
            const auto kDynamicsDimension = transitionDynamicsWriter->GetDynamicsDimension();
            if (transitionDynamicsWriter->IsDynamicsDimensionParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION.c_str(), transitionDynamicsWriter->GetParameterFromDynamicsDimension().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION.c_str(), kDynamicsDimension.GetLiteral().c_str());
            }
            const auto kDynamicsShape = transitionDynamicsWriter->GetDynamicsShape();
            if (transitionDynamicsWriter->IsDynamicsShapeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE.c_str(), transitionDynamicsWriter->GetParameterFromDynamicsShape().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE.c_str(), kDynamicsShape.GetLiteral().c_str());
            }
            const auto kFollowingMode = transitionDynamicsWriter->GetFollowingMode();
            if (!( kFollowingMode == FollowingMode::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE.c_str(), kFollowingMode.GetLiteral().c_str());
            }
			else if (transitionDynamicsWriter->IsFollowingModeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE.c_str(), transitionDynamicsWriter->GetParameterFromFollowingMode().c_str());
            }
            const auto kValue = transitionDynamicsWriter->GetValue();
            if (transitionDynamicsWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), transitionDynamicsWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTraveledDistanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITraveledDistanceConditionWriter> traveledDistanceConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = traveledDistanceConditionWriter->GetValue();
            if (traveledDistanceConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), traveledDistanceConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTriggerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITriggerWriter> triggerWriter)
        {
            // Add Attributes (Parameters)
            const auto kConditionGroups = triggerWriter->GetWriterConditionGroups();
            if (!kConditionGroups.empty())
            {
                for (auto conditionGroupsWriterItem : kConditionGroups)
                {
                    tinyxml2::XMLNode* conditionGroupsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CONDITION_GROUP.c_str());
                    elementNode->InsertEndChild(conditionGroupsElement);
                    FillConditionGroupNode(document, conditionGroupsElement, conditionGroupsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillTriggeringEntitiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITriggeringEntitiesWriter> triggeringEntitiesWriter)
        {
            // Add Attributes (Parameters)
            const auto kTriggeringEntitiesRule = triggeringEntitiesWriter->GetTriggeringEntitiesRule();
            if (triggeringEntitiesWriter->IsTriggeringEntitiesRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE.c_str(), triggeringEntitiesWriter->GetParameterFromTriggeringEntitiesRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE.c_str(), kTriggeringEntitiesRule.GetLiteral().c_str());
            }
            const auto kEntityRefs = triggeringEntitiesWriter->GetWriterEntityRefs();
            if (!kEntityRefs.empty())
            {
                for (auto entityRefsWriterItem : kEntityRefs)
                {
                    tinyxml2::XMLNode* entityRefsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ENTITY_REF.c_str());
                    elementNode->InsertEndChild(entityRefsElement);
                    FillEntityRefNode(document, entityRefsElement, entityRefsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUniformDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUniformDistributionWriter> uniformDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRange = uniformDistributionWriter->GetWriterRange();
            if (kRange)
            {
                tinyxml2::XMLNode* rangeElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RANGE.c_str());
                elementNode->InsertEndChild(rangeElement);
                FillRangeNode(document, rangeElement, kRange);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUsedAreaNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUsedAreaWriter> usedAreaWriter)
        {
            // Add Attributes (Parameters)
            const auto kPositions = usedAreaWriter->GetWriterPositions();
            if (!kPositions.empty())
            {
                for (auto positionsWriterItem : kPositions)
                {
                    tinyxml2::XMLNode* positionsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                    elementNode->InsertEndChild(positionsElement);
                    FillPositionNode(document, positionsElement, positionsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUserDefinedActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedActionWriter> userDefinedActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kCustomCommandAction = userDefinedActionWriter->GetWriterCustomCommandAction();
            if (kCustomCommandAction)
            {
                tinyxml2::XMLNode* customCommandActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION.c_str());
                elementNode->InsertEndChild(customCommandActionElement);
                FillCustomCommandActionNode(document, customCommandActionElement, kCustomCommandAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUserDefinedAnimationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedAnimationWriter> userDefinedAnimationWriter)
        {
            // Add Attributes (Parameters)
            const auto kUserDefinedAnimationType = userDefinedAnimationWriter->GetUserDefinedAnimationType();
            if (userDefinedAnimationWriter->IsUserDefinedAnimationTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_ANIMATION_TYPE.c_str(), userDefinedAnimationWriter->GetParameterFromUserDefinedAnimationType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_ANIMATION_TYPE.c_str(), XmlExportHelper::ToXmlStringFromString( kUserDefinedAnimationType).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUserDefinedComponentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedComponentWriter> userDefinedComponentWriter)
        {
            // Add Attributes (Parameters)
            const auto kUserDefinedComponentType = userDefinedComponentWriter->GetUserDefinedComponentType();
            if (userDefinedComponentWriter->IsUserDefinedComponentTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_COMPONENT_TYPE.c_str(), userDefinedComponentWriter->GetParameterFromUserDefinedComponentType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_COMPONENT_TYPE.c_str(), XmlExportHelper::ToXmlStringFromString( kUserDefinedComponentType).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUserDefinedDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedDistributionWriter> userDefinedDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kContent = userDefinedDistributionWriter->GetContent();
            if (userDefinedDistributionWriter->IsContentParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTENT.c_str(), userDefinedDistributionWriter->GetParameterFromContent().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CONTENT.c_str(), XmlExportHelper::ToXmlStringFromString( kContent).c_str());
            }
            const auto kType = userDefinedDistributionWriter->GetType();
            if (userDefinedDistributionWriter->IsTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), userDefinedDistributionWriter->GetParameterFromType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TYPE.c_str(), XmlExportHelper::ToXmlStringFromString( kType).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUserDefinedLightNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedLightWriter> userDefinedLightWriter)
        {
            // Add Attributes (Parameters)
            const auto kUserDefinedLightType = userDefinedLightWriter->GetUserDefinedLightType();
            if (userDefinedLightWriter->IsUserDefinedLightTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_LIGHT_TYPE.c_str(), userDefinedLightWriter->GetParameterFromUserDefinedLightType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_LIGHT_TYPE.c_str(), XmlExportHelper::ToXmlStringFromString( kUserDefinedLightType).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillUserDefinedValueConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedValueConditionWriter> userDefinedValueConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = userDefinedValueConditionWriter->GetName();
            if (userDefinedValueConditionWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), userDefinedValueConditionWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kRule = userDefinedValueConditionWriter->GetRule();
            if (userDefinedValueConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), userDefinedValueConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = userDefinedValueConditionWriter->GetValue();
            if (userDefinedValueConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), userDefinedValueConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillValueConstraintNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IValueConstraintWriter> valueConstraintWriter)
        {
            // Add Attributes (Parameters)
            const auto kRule = valueConstraintWriter->GetRule();
            if (valueConstraintWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), valueConstraintWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = valueConstraintWriter->GetValue();
            if (valueConstraintWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), valueConstraintWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillValueConstraintGroupNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IValueConstraintGroupWriter> valueConstraintGroupWriter)
        {
            // Add Attributes (Parameters)
            const auto kConstraints = valueConstraintGroupWriter->GetWriterConstraints();
            if (!kConstraints.empty())
            {
                for (auto constraintsWriterItem : kConstraints)
                {
                    tinyxml2::XMLNode* constraintsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VALUE_CONSTRAINT.c_str());
                    elementNode->InsertEndChild(constraintsElement);
                    FillValueConstraintNode(document, constraintsElement, constraintsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillValueSetDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IValueSetDistributionWriter> valueSetDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kParameterValueSets = valueSetDistributionWriter->GetWriterParameterValueSets();
            if (!kParameterValueSets.empty())
            {
                for (auto parameterValueSetsWriterItem : kParameterValueSets)
                {
                    tinyxml2::XMLNode* parameterValueSetsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_SET.c_str());
                    elementNode->InsertEndChild(parameterValueSetsElement);
                    FillParameterValueSetNode(document, parameterValueSetsElement, parameterValueSetsWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableActionWriter> variableActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kVariableRef = variableActionWriter->GetVariableRef();
            if (kVariableRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kVariableRef->GetNameRef()).c_str());
            }
            const auto kSetAction = variableActionWriter->GetWriterSetAction();
            if (kSetAction)
            {
                tinyxml2::XMLNode* setActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SET_ACTION.c_str());
                elementNode->InsertEndChild(setActionElement);
                FillVariableSetActionNode(document, setActionElement, kSetAction);
            }
            const auto kModifyAction = variableActionWriter->GetWriterModifyAction();
            if (kModifyAction)
            {
                tinyxml2::XMLNode* modifyActionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MODIFY_ACTION.c_str());
                elementNode->InsertEndChild(modifyActionElement);
                FillVariableModifyActionNode(document, modifyActionElement, kModifyAction);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableAddValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableAddValueRuleWriter> variableAddValueRuleWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = variableAddValueRuleWriter->GetValue();
            if (variableAddValueRuleWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), variableAddValueRuleWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableConditionWriter> variableConditionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRule = variableConditionWriter->GetRule();
            if (variableConditionWriter->IsRuleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), variableConditionWriter->GetParameterFromRule().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__RULE.c_str(), kRule.GetLiteral().c_str());
            }
            const auto kValue = variableConditionWriter->GetValue();
            if (variableConditionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), variableConditionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
            const auto kVariableRef = variableConditionWriter->GetVariableRef();
            if (kVariableRef)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_REF.c_str(), XmlExportHelper::ToXmlStringFromString(kVariableRef->GetNameRef()).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableDeclarationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableDeclarationWriter> variableDeclarationWriter)
        {
            // Add Attributes (Parameters)
            const auto kName = variableDeclarationWriter->GetName();
            if (variableDeclarationWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), variableDeclarationWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kValue = variableDeclarationWriter->GetValue();
            if (variableDeclarationWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), variableDeclarationWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
            const auto kVariableType = variableDeclarationWriter->GetVariableType();
            if (variableDeclarationWriter->IsVariableTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_TYPE.c_str(), variableDeclarationWriter->GetParameterFromVariableType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_TYPE.c_str(), kVariableType.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableModifyActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableModifyActionWriter> variableModifyActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kRule = variableModifyActionWriter->GetWriterRule();
            if (kRule)
            {
                tinyxml2::XMLNode* ruleElement = document->NewElement(OSC_CONSTANTS::ELEMENT__RULE.c_str());
                elementNode->InsertEndChild(ruleElement);
                FillVariableModifyRuleNode(document, ruleElement, kRule);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableModifyRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableModifyRuleWriter> variableModifyRuleWriter)
        {
            // Add Attributes (Parameters)
            const auto kAddValue = variableModifyRuleWriter->GetWriterAddValue();
            if (kAddValue)
            {
                tinyxml2::XMLNode* addValueElement = document->NewElement(OSC_CONSTANTS::ELEMENT__ADD_VALUE.c_str());
                elementNode->InsertEndChild(addValueElement);
                FillVariableAddValueRuleNode(document, addValueElement, kAddValue);
            }
            const auto kMultiplyByValue = variableModifyRuleWriter->GetWriterMultiplyByValue();
            if (kMultiplyByValue)
            {
                tinyxml2::XMLNode* multiplyByValueElement = document->NewElement(OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE.c_str());
                elementNode->InsertEndChild(multiplyByValueElement);
                FillVariableMultiplyByValueRuleNode(document, multiplyByValueElement, kMultiplyByValue);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableMultiplyByValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableMultiplyByValueRuleWriter> variableMultiplyByValueRuleWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = variableMultiplyByValueRuleWriter->GetValue();
            if (variableMultiplyByValueRuleWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), variableMultiplyByValueRuleWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVariableSetActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableSetActionWriter> variableSetActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kValue = variableSetActionWriter->GetValue();
            if (variableSetActionWriter->IsValueParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), variableSetActionWriter->GetParameterFromValue().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VALUE.c_str(), XmlExportHelper::ToXmlStringFromString( kValue).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleWriter> vehicleWriter)
        {
            // Add Attributes (Parameters)
            const auto kMass = vehicleWriter->GetMass();
            if (!( kMass == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MASS.c_str(), XmlExportHelper::ToXmlStringFromDouble( kMass).c_str());
            }
			else if (vehicleWriter->IsMassParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MASS.c_str(), vehicleWriter->GetParameterFromMass().c_str());
            }
            const auto kModel3d = vehicleWriter->GetModel3d();
            if (!( kModel3d.empty()))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL3D.c_str(), XmlExportHelper::ToXmlStringFromString( kModel3d).c_str());
            }
			else if (vehicleWriter->IsModel3dParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__MODEL3D.c_str(), vehicleWriter->GetParameterFromModel3d().c_str());
            }
            const auto kName = vehicleWriter->GetName();
            if (vehicleWriter->IsNameParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), vehicleWriter->GetParameterFromName().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__NAME.c_str(), XmlExportHelper::ToXmlStringFromString( kName).c_str());
            }
            const auto kRole = vehicleWriter->GetRole();
            if (!( kRole == Role::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROLE.c_str(), kRole.GetLiteral().c_str());
            }
			else if (vehicleWriter->IsRoleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROLE.c_str(), vehicleWriter->GetParameterFromRole().c_str());
            }
            const auto kVehicleCategory = vehicleWriter->GetVehicleCategory();
            if (vehicleWriter->IsVehicleCategoryParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY.c_str(), vehicleWriter->GetParameterFromVehicleCategory().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY.c_str(), kVehicleCategory.GetLiteral().c_str());
            }
            const auto kParameterDeclarations = vehicleWriter->GetWriterParameterDeclarations();
            if (!kParameterDeclarations.empty())
            {
                tinyxml2::XMLNode* parameterDeclarationsWrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION.c_str());
                elementNode->InsertEndChild(parameterDeclarationsWrapperElement);
                for (auto parameterDeclarationsWriterItem : kParameterDeclarations)
                {
                    tinyxml2::XMLNode* parameterDeclarationsElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS.c_str());
                    parameterDeclarationsWrapperElement->InsertEndChild(parameterDeclarationsElement);
                    FillParameterDeclarationNode(document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
                }
            }
            const auto kBoundingBox = vehicleWriter->GetWriterBoundingBox();
            if (kBoundingBox)
            {
                tinyxml2::XMLNode* boundingBoxElement = document->NewElement(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX.c_str());
                elementNode->InsertEndChild(boundingBoxElement);
                FillBoundingBoxNode(document, boundingBoxElement, kBoundingBox);
            }
            const auto kPerformance = vehicleWriter->GetWriterPerformance();
            if (kPerformance)
            {
                tinyxml2::XMLNode* performanceElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PERFORMANCE.c_str());
                elementNode->InsertEndChild(performanceElement);
                FillPerformanceNode(document, performanceElement, kPerformance);
            }
            const auto kAxles = vehicleWriter->GetWriterAxles();
            if (kAxles)
            {
                tinyxml2::XMLNode* axlesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__AXLES.c_str());
                elementNode->InsertEndChild(axlesElement);
                FillAxlesNode(document, axlesElement, kAxles);
            }
            const auto kProperties = vehicleWriter->GetWriterProperties();
            if (kProperties)
            {
                tinyxml2::XMLNode* propertiesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PROPERTIES.c_str());
                elementNode->InsertEndChild(propertiesElement);
                FillPropertiesNode(document, propertiesElement, kProperties);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleCatalogLocationWriter> vehicleCatalogLocationWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirectory = vehicleCatalogLocationWriter->GetWriterDirectory();
            if (kDirectory)
            {
                tinyxml2::XMLNode* directoryElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DIRECTORY.c_str());
                elementNode->InsertEndChild(directoryElement);
                FillDirectoryNode(document, directoryElement, kDirectory);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleCategoryDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleCategoryDistributionWriter> vehicleCategoryDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kVehicleCategoryDistributionEntries = vehicleCategoryDistributionWriter->GetWriterVehicleCategoryDistributionEntries();
            if (!kVehicleCategoryDistributionEntries.empty())
            {
                for (auto vehicleCategoryDistributionEntriesWriterItem : kVehicleCategoryDistributionEntries)
                {
                    tinyxml2::XMLNode* vehicleCategoryDistributionEntriesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY.c_str());
                    elementNode->InsertEndChild(vehicleCategoryDistributionEntriesElement);
                    FillVehicleCategoryDistributionEntryNode(document, vehicleCategoryDistributionEntriesElement, vehicleCategoryDistributionEntriesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleCategoryDistributionEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleCategoryDistributionEntryWriter> vehicleCategoryDistributionEntryWriter)
        {
            // Add Attributes (Parameters)
            const auto kCategory = vehicleCategoryDistributionEntryWriter->GetCategory();
            if (vehicleCategoryDistributionEntryWriter->IsCategoryParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CATEGORY.c_str(), vehicleCategoryDistributionEntryWriter->GetParameterFromCategory().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CATEGORY.c_str(), kCategory.GetLiteral().c_str());
            }
            const auto kWeight = vehicleCategoryDistributionEntryWriter->GetWeight();
            if (vehicleCategoryDistributionEntryWriter->IsWeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), vehicleCategoryDistributionEntryWriter->GetParameterFromWeight().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWeight).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleComponentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleComponentWriter> vehicleComponentWriter)
        {
            // Add Attributes (Parameters)
            const auto kVehicleComponentType = vehicleComponentWriter->GetVehicleComponentType();
            if (vehicleComponentWriter->IsVehicleComponentTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_COMPONENT_TYPE.c_str(), vehicleComponentWriter->GetParameterFromVehicleComponentType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_COMPONENT_TYPE.c_str(), kVehicleComponentType.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleLightNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleLightWriter> vehicleLightWriter)
        {
            // Add Attributes (Parameters)
            const auto kVehicleLightType = vehicleLightWriter->GetVehicleLightType();
            if (vehicleLightWriter->IsVehicleLightTypeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_LIGHT_TYPE.c_str(), vehicleLightWriter->GetParameterFromVehicleLightType().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_LIGHT_TYPE.c_str(), kVehicleLightType.GetLiteral().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleRoleDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleRoleDistributionWriter> vehicleRoleDistributionWriter)
        {
            // Add Attributes (Parameters)
            const auto kVehicleRoleDistributionEntries = vehicleRoleDistributionWriter->GetWriterVehicleRoleDistributionEntries();
            if (!kVehicleRoleDistributionEntries.empty())
            {
                for (auto vehicleRoleDistributionEntriesWriterItem : kVehicleRoleDistributionEntries)
                {
                    tinyxml2::XMLNode* vehicleRoleDistributionEntriesElement = document->NewElement(OSC_CONSTANTS::ELEMENT__VEHICLE_ROLE_DISTRIBUTION_ENTRY.c_str());
                    elementNode->InsertEndChild(vehicleRoleDistributionEntriesElement);
                    FillVehicleRoleDistributionEntryNode(document, vehicleRoleDistributionEntriesElement, vehicleRoleDistributionEntriesWriterItem);
                    
                }
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVehicleRoleDistributionEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleRoleDistributionEntryWriter> vehicleRoleDistributionEntryWriter)
        {
            // Add Attributes (Parameters)
            const auto kRole = vehicleRoleDistributionEntryWriter->GetRole();
            if (vehicleRoleDistributionEntryWriter->IsRoleParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROLE.c_str(), vehicleRoleDistributionEntryWriter->GetParameterFromRole().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROLE.c_str(), kRole.GetLiteral().c_str());
            }
            const auto kWeight = vehicleRoleDistributionEntryWriter->GetWeight();
            if (vehicleRoleDistributionEntryWriter->IsWeightParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), vehicleRoleDistributionEntryWriter->GetParameterFromWeight().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__WEIGHT.c_str(), XmlExportHelper::ToXmlStringFromDouble( kWeight).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVertexNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVertexWriter> vertexWriter)
        {
            // Add Attributes (Parameters)
            const auto kTime = vertexWriter->GetTime();
            if (!( kTime == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTime).c_str());
            }
			else if (vertexWriter->IsTimeParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TIME.c_str(), vertexWriter->GetParameterFromTime().c_str());
            }
            const auto kPosition = vertexWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillVisibilityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVisibilityActionWriter> visibilityActionWriter)
        {
            // Add Attributes (Parameters)
            const auto kGraphics = visibilityActionWriter->GetGraphics();
            if (visibilityActionWriter->IsGraphicsParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS.c_str(), visibilityActionWriter->GetParameterFromGraphics().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kGraphics).c_str());
            }
            const auto kSensors = visibilityActionWriter->GetSensors();
            if (visibilityActionWriter->IsSensorsParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SENSORS.c_str(), visibilityActionWriter->GetParameterFromSensors().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SENSORS.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kSensors).c_str());
            }
            const auto kTraffic = visibilityActionWriter->GetTraffic();
            if (visibilityActionWriter->IsTrafficParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC.c_str(), visibilityActionWriter->GetParameterFromTraffic().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC.c_str(), XmlExportHelper::ToXmlStringFromBoolean( kTraffic).c_str());
            }
            const auto kSensorReferenceSet = visibilityActionWriter->GetWriterSensorReferenceSet();
            if (kSensorReferenceSet)
            {
                tinyxml2::XMLNode* sensorReferenceSetElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SENSOR_REFERENCE_SET.c_str());
                elementNode->InsertEndChild(sensorReferenceSetElement);
                FillSensorReferenceSetNode(document, sensorReferenceSetElement, kSensorReferenceSet);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillWaypointNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWaypointWriter> waypointWriter)
        {
            // Add Attributes (Parameters)
            const auto kRouteStrategy = waypointWriter->GetRouteStrategy();
            if (waypointWriter->IsRouteStrategyParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY.c_str(), waypointWriter->GetParameterFromRouteStrategy().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY.c_str(), kRouteStrategy.GetLiteral().c_str());
            }
            const auto kPosition = waypointWriter->GetWriterPosition();
            if (kPosition)
            {
                tinyxml2::XMLNode* positionElement = document->NewElement(OSC_CONSTANTS::ELEMENT__POSITION.c_str());
                elementNode->InsertEndChild(positionElement);
                FillPositionNode(document, positionElement, kPosition);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillWeatherNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWeatherWriter> weatherWriter)
        {
            // Add Attributes (Parameters)
            const auto kAtmosphericPressure = weatherWriter->GetAtmosphericPressure();
            if (!( kAtmosphericPressure == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kAtmosphericPressure).c_str());
            }
			else if (weatherWriter->IsAtmosphericPressureParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE.c_str(), weatherWriter->GetParameterFromAtmosphericPressure().c_str());
            }
            const auto kCloudState = weatherWriter->GetCloudState();
            if (!( kCloudState == CloudState::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE.c_str(), kCloudState.GetLiteral().c_str());
            }
			else if (weatherWriter->IsCloudStateParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE.c_str(), weatherWriter->GetParameterFromCloudState().c_str());
            }
            const auto kFractionalCloudCover = weatherWriter->GetFractionalCloudCover();
            if (!( kFractionalCloudCover == FractionalCloudCover::UNKNOWN))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FRACTIONAL_CLOUD_COVER.c_str(), kFractionalCloudCover.GetLiteral().c_str());
            }
			else if (weatherWriter->IsFractionalCloudCoverParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__FRACTIONAL_CLOUD_COVER.c_str(), weatherWriter->GetParameterFromFractionalCloudCover().c_str());
            }
            const auto kTemperature = weatherWriter->GetTemperature();
            if (!( kTemperature == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE.c_str(), XmlExportHelper::ToXmlStringFromDouble( kTemperature).c_str());
            }
			else if (weatherWriter->IsTemperatureParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE.c_str(), weatherWriter->GetParameterFromTemperature().c_str());
            }
            const auto kSun = weatherWriter->GetWriterSun();
            if (kSun)
            {
                tinyxml2::XMLNode* sunElement = document->NewElement(OSC_CONSTANTS::ELEMENT__SUN.c_str());
                elementNode->InsertEndChild(sunElement);
                FillSunNode(document, sunElement, kSun);
            }
            const auto kFog = weatherWriter->GetWriterFog();
            if (kFog)
            {
                tinyxml2::XMLNode* fogElement = document->NewElement(OSC_CONSTANTS::ELEMENT__FOG.c_str());
                elementNode->InsertEndChild(fogElement);
                FillFogNode(document, fogElement, kFog);
            }
            const auto kPrecipitation = weatherWriter->GetWriterPrecipitation();
            if (kPrecipitation)
            {
                tinyxml2::XMLNode* precipitationElement = document->NewElement(OSC_CONSTANTS::ELEMENT__PRECIPITATION.c_str());
                elementNode->InsertEndChild(precipitationElement);
                FillPrecipitationNode(document, precipitationElement, kPrecipitation);
            }
            const auto kWind = weatherWriter->GetWriterWind();
            if (kWind)
            {
                tinyxml2::XMLNode* windElement = document->NewElement(OSC_CONSTANTS::ELEMENT__WIND.c_str());
                elementNode->InsertEndChild(windElement);
                FillWindNode(document, windElement, kWind);
            }
            const auto kDomeImage = weatherWriter->GetWriterDomeImage();
            if (kDomeImage)
            {
                tinyxml2::XMLNode* domeImageElement = document->NewElement(OSC_CONSTANTS::ELEMENT__DOME_IMAGE.c_str());
                elementNode->InsertEndChild(domeImageElement);
                FillDomeImageNode(document, domeImageElement, kDomeImage);
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillWindNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWindWriter> windWriter)
        {
            // Add Attributes (Parameters)
            const auto kDirection = windWriter->GetDirection();
            if (windWriter->IsDirectionParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), windWriter->GetParameterFromDirection().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__DIRECTION.c_str(), XmlExportHelper::ToXmlStringFromDouble( kDirection).c_str());
            }
            const auto kSpeed = windWriter->GetSpeed();
            if (windWriter->IsSpeedParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED.c_str(), windWriter->GetParameterFromSpeed().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__SPEED.c_str(), XmlExportHelper::ToXmlStringFromDouble( kSpeed).c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
        void OpenScenarioXmlExporter::FillWorldPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWorldPositionWriter> worldPositionWriter)
        {
            // Add Attributes (Parameters)
            const auto kH = worldPositionWriter->GetH();
            if (!( kH == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__H.c_str(), XmlExportHelper::ToXmlStringFromDouble( kH).c_str());
            }
			else if (worldPositionWriter->IsHParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__H.c_str(), worldPositionWriter->GetParameterFromH().c_str());
            }
            const auto kP = worldPositionWriter->GetP();
            if (!( kP == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__P.c_str(), XmlExportHelper::ToXmlStringFromDouble( kP).c_str());
            }
			else if (worldPositionWriter->IsPParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__P.c_str(), worldPositionWriter->GetParameterFromP().c_str());
            }
            const auto kR = worldPositionWriter->GetR();
            if (!( kR == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__R.c_str(), XmlExportHelper::ToXmlStringFromDouble( kR).c_str());
            }
			else if (worldPositionWriter->IsRParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__R.c_str(), worldPositionWriter->GetParameterFromR().c_str());
            }
            const auto kX = worldPositionWriter->GetX();
            if (worldPositionWriter->IsXParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__X.c_str(), worldPositionWriter->GetParameterFromX().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__X.c_str(), XmlExportHelper::ToXmlStringFromDouble( kX).c_str());
            }
            const auto kY = worldPositionWriter->GetY();
            if (worldPositionWriter->IsYParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Y.c_str(), worldPositionWriter->GetParameterFromY().c_str());
            }
            else
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Y.c_str(), XmlExportHelper::ToXmlStringFromDouble( kY).c_str());
            }
            const auto kZ = worldPositionWriter->GetZ();
            if (!( kZ == 0))
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Z.c_str(), XmlExportHelper::ToXmlStringFromDouble( kZ).c_str());
            }
			else if (worldPositionWriter->IsZParameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__Z.c_str(), worldPositionWriter->GetParameterFromZ().c_str());
            }
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }

    }
}

