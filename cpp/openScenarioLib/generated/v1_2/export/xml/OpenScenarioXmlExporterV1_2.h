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
#include "ApiClassWriterInterfacesV1_2.h"
#include "MemLeakDetection.h"
#include "tinyxml2.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Exporting an XML document form a scenario tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */

        class OpenScenarioXmlExporter  
        {

        public:
            OPENSCENARIOLIB_EXP std::shared_ptr<tinyxml2::XMLDocument> CreateXmlDocument(std::shared_ptr<IOpenScenarioWriter> openScenarioWriter);
        private:

            /**
            * Fills a dom element of type AbsoluteSpeed
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param absoluteSpeedWriter the writer the element is filled from.
            */
            void FillAbsoluteSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteSpeedWriter> absoluteSpeedWriter);

            /**
            * Fills a dom element of type AbsoluteTargetLane
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param absoluteTargetLaneWriter the writer the element is filled from.
            */
            void FillAbsoluteTargetLaneNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteTargetLaneWriter> absoluteTargetLaneWriter);

            /**
            * Fills a dom element of type AbsoluteTargetLaneOffset
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param absoluteTargetLaneOffsetWriter the writer the element is filled from.
            */
            void FillAbsoluteTargetLaneOffsetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> absoluteTargetLaneOffsetWriter);

            /**
            * Fills a dom element of type AbsoluteTargetSpeed
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param absoluteTargetSpeedWriter the writer the element is filled from.
            */
            void FillAbsoluteTargetSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAbsoluteTargetSpeedWriter> absoluteTargetSpeedWriter);

            /**
            * Fills a dom element of type AccelerationCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param accelerationConditionWriter the writer the element is filled from.
            */
            void FillAccelerationConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAccelerationConditionWriter> accelerationConditionWriter);

            /**
            * Fills a dom element of type AcquirePositionAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param acquirePositionActionWriter the writer the element is filled from.
            */
            void FillAcquirePositionActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAcquirePositionActionWriter> acquirePositionActionWriter);

            /**
            * Fills a dom element of type Act
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param actWriter the writer the element is filled from.
            */
            void FillActNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActWriter> actWriter);

            /**
            * Fills a dom element of type Action
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param actionWriter the writer the element is filled from.
            */
            void FillActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActionWriter> actionWriter);

            /**
            * Fills a dom element of type ActivateControllerAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param activateControllerActionWriter the writer the element is filled from.
            */
            void FillActivateControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActivateControllerActionWriter> activateControllerActionWriter);

            /**
            * Fills a dom element of type Actors
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param actorsWriter the writer the element is filled from.
            */
            void FillActorsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IActorsWriter> actorsWriter);

            /**
            * Fills a dom element of type AddEntityAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param addEntityActionWriter the writer the element is filled from.
            */
            void FillAddEntityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAddEntityActionWriter> addEntityActionWriter);

            /**
            * Fills a dom element of type AnimationAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param animationActionWriter the writer the element is filled from.
            */
            void FillAnimationActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationActionWriter> animationActionWriter);

            /**
            * Fills a dom element of type AnimationFile
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param animationFileWriter the writer the element is filled from.
            */
            void FillAnimationFileNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationFileWriter> animationFileWriter);

            /**
            * Fills a dom element of type AnimationState
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param animationStateWriter the writer the element is filled from.
            */
            void FillAnimationStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationStateWriter> animationStateWriter);

            /**
            * Fills a dom element of type AnimationType
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param animationTypeWriter the writer the element is filled from.
            */
            void FillAnimationTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAnimationTypeWriter> animationTypeWriter);

            /**
            * Fills a dom element of type AppearanceAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param appearanceActionWriter the writer the element is filled from.
            */
            void FillAppearanceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAppearanceActionWriter> appearanceActionWriter);

            /**
            * Fills a dom element of type AssignControllerAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param assignControllerActionWriter the writer the element is filled from.
            */
            void FillAssignControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAssignControllerActionWriter> assignControllerActionWriter);

            /**
            * Fills a dom element of type AssignRouteAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param assignRouteActionWriter the writer the element is filled from.
            */
            void FillAssignRouteActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAssignRouteActionWriter> assignRouteActionWriter);

            /**
            * Fills a dom element of type AutomaticGear
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param automaticGearWriter the writer the element is filled from.
            */
            void FillAutomaticGearNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAutomaticGearWriter> automaticGearWriter);

            /**
            * Fills a dom element of type Axle
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param axleWriter the writer the element is filled from.
            */
            void FillAxleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAxleWriter> axleWriter);

            /**
            * Fills a dom element of type Axles
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param axlesWriter the writer the element is filled from.
            */
            void FillAxlesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IAxlesWriter> axlesWriter);

            /**
            * Fills a dom element of type BoundingBox
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param boundingBoxWriter the writer the element is filled from.
            */
            void FillBoundingBoxNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IBoundingBoxWriter> boundingBoxWriter);

            /**
            * Fills a dom element of type Brake
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param brakeWriter the writer the element is filled from.
            */
            void FillBrakeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IBrakeWriter> brakeWriter);

            /**
            * Fills a dom element of type BrakeInput
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param brakeInputWriter the writer the element is filled from.
            */
            void FillBrakeInputNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IBrakeInputWriter> brakeInputWriter);

            /**
            * Fills a dom element of type ByEntityCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param byEntityConditionWriter the writer the element is filled from.
            */
            void FillByEntityConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByEntityConditionWriter> byEntityConditionWriter);

            /**
            * Fills a dom element of type ByObjectType
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param byObjectTypeWriter the writer the element is filled from.
            */
            void FillByObjectTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByObjectTypeWriter> byObjectTypeWriter);

            /**
            * Fills a dom element of type ByType
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param byTypeWriter the writer the element is filled from.
            */
            void FillByTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByTypeWriter> byTypeWriter);

            /**
            * Fills a dom element of type ByValueCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param byValueConditionWriter the writer the element is filled from.
            */
            void FillByValueConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IByValueConditionWriter> byValueConditionWriter);

            /**
            * Fills a dom element of type Catalog
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param catalogWriter the writer the element is filled from.
            */
            void FillCatalogNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogWriter> catalogWriter);

            /**
            * Fills a dom element of type CatalogDefinition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param catalogDefinitionWriter the writer the element is filled from.
            */
            void FillCatalogDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogDefinitionWriter> catalogDefinitionWriter);

            /**
            * Fills a dom element of type CatalogLocations
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param catalogLocationsWriter the writer the element is filled from.
            */
            void FillCatalogLocationsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogLocationsWriter> catalogLocationsWriter);

            /**
            * Fills a dom element of type CatalogReference
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param catalogReferenceWriter the writer the element is filled from.
            */
            void FillCatalogReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICatalogReferenceWriter> catalogReferenceWriter);

            /**
            * Fills a dom element of type Center
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param centerWriter the writer the element is filled from.
            */
            void FillCenterNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICenterWriter> centerWriter);

            /**
            * Fills a dom element of type CentralSwarmObject
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param centralSwarmObjectWriter the writer the element is filled from.
            */
            void FillCentralSwarmObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICentralSwarmObjectWriter> centralSwarmObjectWriter);

            /**
            * Fills a dom element of type Clothoid
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param clothoidWriter the writer the element is filled from.
            */
            void FillClothoidNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IClothoidWriter> clothoidWriter);

            /**
            * Fills a dom element of type CollisionCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param collisionConditionWriter the writer the element is filled from.
            */
            void FillCollisionConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICollisionConditionWriter> collisionConditionWriter);

            /**
            * Fills a dom element of type Color
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param colorWriter the writer the element is filled from.
            */
            void FillColorNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IColorWriter> colorWriter);

            /**
            * Fills a dom element of type ColorCmyk
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param colorCmykWriter the writer the element is filled from.
            */
            void FillColorCmykNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IColorCmykWriter> colorCmykWriter);

            /**
            * Fills a dom element of type ColorRgb
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param colorRgbWriter the writer the element is filled from.
            */
            void FillColorRgbNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IColorRgbWriter> colorRgbWriter);

            /**
            * Fills a dom element of type ComponentAnimation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param componentAnimationWriter the writer the element is filled from.
            */
            void FillComponentAnimationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IComponentAnimationWriter> componentAnimationWriter);

            /**
            * Fills a dom element of type Condition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param conditionWriter the writer the element is filled from.
            */
            void FillConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IConditionWriter> conditionWriter);

            /**
            * Fills a dom element of type ConditionGroup
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param conditionGroupWriter the writer the element is filled from.
            */
            void FillConditionGroupNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IConditionGroupWriter> conditionGroupWriter);

            /**
            * Fills a dom element of type ControlPoint
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param controlPointWriter the writer the element is filled from.
            */
            void FillControlPointNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControlPointWriter> controlPointWriter);

            /**
            * Fills a dom element of type Controller
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param controllerWriter the writer the element is filled from.
            */
            void FillControllerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerWriter> controllerWriter);

            /**
            * Fills a dom element of type ControllerAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param controllerActionWriter the writer the element is filled from.
            */
            void FillControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerActionWriter> controllerActionWriter);

            /**
            * Fills a dom element of type ControllerCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param controllerCatalogLocationWriter the writer the element is filled from.
            */
            void FillControllerCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerCatalogLocationWriter> controllerCatalogLocationWriter);

            /**
            * Fills a dom element of type ControllerDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param controllerDistributionWriter the writer the element is filled from.
            */
            void FillControllerDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerDistributionWriter> controllerDistributionWriter);

            /**
            * Fills a dom element of type ControllerDistributionEntry
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param controllerDistributionEntryWriter the writer the element is filled from.
            */
            void FillControllerDistributionEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IControllerDistributionEntryWriter> controllerDistributionEntryWriter);

            /**
            * Fills a dom element of type CustomCommandAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param customCommandActionWriter the writer the element is filled from.
            */
            void FillCustomCommandActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICustomCommandActionWriter> customCommandActionWriter);

            /**
            * Fills a dom element of type CustomContent
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param customContentWriter the writer the element is filled from.
            */
            void FillCustomContentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ICustomContentWriter> customContentWriter);

            /**
            * Fills a dom element of type DeleteEntityAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deleteEntityActionWriter the writer the element is filled from.
            */
            void FillDeleteEntityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeleteEntityActionWriter> deleteEntityActionWriter);

            /**
            * Fills a dom element of type Deterministic
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deterministicWriter the writer the element is filled from.
            */
            void FillDeterministicNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicWriter> deterministicWriter);

            /**
            * Fills a dom element of type DeterministicMultiParameterDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deterministicMultiParameterDistributionWriter the writer the element is filled from.
            */
            void FillDeterministicMultiParameterDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicMultiParameterDistributionWriter> deterministicMultiParameterDistributionWriter);

            /**
            * Fills a dom element of type DeterministicMultiParameterDistributionType
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deterministicMultiParameterDistributionTypeWriter the writer the element is filled from.
            */
            void FillDeterministicMultiParameterDistributionTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicMultiParameterDistributionTypeWriter> deterministicMultiParameterDistributionTypeWriter);

            /**
            * Fills a dom element of type DeterministicParameterDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deterministicParameterDistributionWriter the writer the element is filled from.
            */
            void FillDeterministicParameterDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicParameterDistributionWriter> deterministicParameterDistributionWriter);

            /**
            * Fills a dom element of type DeterministicSingleParameterDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deterministicSingleParameterDistributionWriter the writer the element is filled from.
            */
            void FillDeterministicSingleParameterDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicSingleParameterDistributionWriter> deterministicSingleParameterDistributionWriter);

            /**
            * Fills a dom element of type DeterministicSingleParameterDistributionType
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deterministicSingleParameterDistributionTypeWriter the writer the element is filled from.
            */
            void FillDeterministicSingleParameterDistributionTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeterministicSingleParameterDistributionTypeWriter> deterministicSingleParameterDistributionTypeWriter);

            /**
            * Fills a dom element of type Dimensions
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param dimensionsWriter the writer the element is filled from.
            */
            void FillDimensionsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDimensionsWriter> dimensionsWriter);

            /**
            * Fills a dom element of type DirectionOfTravelDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param directionOfTravelDistributionWriter the writer the element is filled from.
            */
            void FillDirectionOfTravelDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDirectionOfTravelDistributionWriter> directionOfTravelDistributionWriter);

            /**
            * Fills a dom element of type Directory
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param directoryWriter the writer the element is filled from.
            */
            void FillDirectoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDirectoryWriter> directoryWriter);

            /**
            * Fills a dom element of type DistanceCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param distanceConditionWriter the writer the element is filled from.
            */
            void FillDistanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistanceConditionWriter> distanceConditionWriter);

            /**
            * Fills a dom element of type DistributionDefinition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param distributionDefinitionWriter the writer the element is filled from.
            */
            void FillDistributionDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionDefinitionWriter> distributionDefinitionWriter);

            /**
            * Fills a dom element of type DistributionRange
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param distributionRangeWriter the writer the element is filled from.
            */
            void FillDistributionRangeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionRangeWriter> distributionRangeWriter);

            /**
            * Fills a dom element of type DistributionSet
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param distributionSetWriter the writer the element is filled from.
            */
            void FillDistributionSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionSetWriter> distributionSetWriter);

            /**
            * Fills a dom element of type DistributionSetElement
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param distributionSetElementWriter the writer the element is filled from.
            */
            void FillDistributionSetElementNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDistributionSetElementWriter> distributionSetElementWriter);

            /**
            * Fills a dom element of type DomeImage
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param domeImageWriter the writer the element is filled from.
            */
            void FillDomeImageNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDomeImageWriter> domeImageWriter);

            /**
            * Fills a dom element of type DynamicConstraints
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param dynamicConstraintsWriter the writer the element is filled from.
            */
            void FillDynamicConstraintsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDynamicConstraintsWriter> dynamicConstraintsWriter);

            /**
            * Fills a dom element of type EndOfRoadCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param endOfRoadConditionWriter the writer the element is filled from.
            */
            void FillEndOfRoadConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEndOfRoadConditionWriter> endOfRoadConditionWriter);

            /**
            * Fills a dom element of type Entities
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param entitiesWriter the writer the element is filled from.
            */
            void FillEntitiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntitiesWriter> entitiesWriter);

            /**
            * Fills a dom element of type EntityAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param entityActionWriter the writer the element is filled from.
            */
            void FillEntityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityActionWriter> entityActionWriter);

            /**
            * Fills a dom element of type EntityCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param entityConditionWriter the writer the element is filled from.
            */
            void FillEntityConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityConditionWriter> entityConditionWriter);

            /**
            * Fills a dom element of type EntityObject
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param entityObjectWriter the writer the element is filled from.
            */
            void FillEntityObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityObjectWriter> entityObjectWriter);

            /**
            * Fills a dom element of type EntityRef
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param entityRefWriter the writer the element is filled from.
            */
            void FillEntityRefNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntityRefWriter> entityRefWriter);

            /**
            * Fills a dom element of type EntitySelection
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param entitySelectionWriter the writer the element is filled from.
            */
            void FillEntitySelectionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEntitySelectionWriter> entitySelectionWriter);

            /**
            * Fills a dom element of type Environment
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param environmentWriter the writer the element is filled from.
            */
            void FillEnvironmentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEnvironmentWriter> environmentWriter);

            /**
            * Fills a dom element of type EnvironmentAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param environmentActionWriter the writer the element is filled from.
            */
            void FillEnvironmentActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEnvironmentActionWriter> environmentActionWriter);

            /**
            * Fills a dom element of type EnvironmentCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param environmentCatalogLocationWriter the writer the element is filled from.
            */
            void FillEnvironmentCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEnvironmentCatalogLocationWriter> environmentCatalogLocationWriter);

            /**
            * Fills a dom element of type Event
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param eventWriter the writer the element is filled from.
            */
            void FillEventNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IEventWriter> eventWriter);

            /**
            * Fills a dom element of type ExternalObjectReference
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param externalObjectReferenceWriter the writer the element is filled from.
            */
            void FillExternalObjectReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IExternalObjectReferenceWriter> externalObjectReferenceWriter);

            /**
            * Fills a dom element of type File
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param fileWriter the writer the element is filled from.
            */
            void FillFileNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFileWriter> fileWriter);

            /**
            * Fills a dom element of type FileHeader
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param fileHeaderWriter the writer the element is filled from.
            */
            void FillFileHeaderNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFileHeaderWriter> fileHeaderWriter);

            /**
            * Fills a dom element of type FinalSpeed
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param finalSpeedWriter the writer the element is filled from.
            */
            void FillFinalSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFinalSpeedWriter> finalSpeedWriter);

            /**
            * Fills a dom element of type Fog
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param fogWriter the writer the element is filled from.
            */
            void FillFogNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFogWriter> fogWriter);

            /**
            * Fills a dom element of type FollowTrajectoryAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param followTrajectoryActionWriter the writer the element is filled from.
            */
            void FillFollowTrajectoryActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IFollowTrajectoryActionWriter> followTrajectoryActionWriter);

            /**
            * Fills a dom element of type Gear
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param gearWriter the writer the element is filled from.
            */
            void FillGearNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IGearWriter> gearWriter);

            /**
            * Fills a dom element of type GeoPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param geoPositionWriter the writer the element is filled from.
            */
            void FillGeoPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IGeoPositionWriter> geoPositionWriter);

            /**
            * Fills a dom element of type GlobalAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param globalActionWriter the writer the element is filled from.
            */
            void FillGlobalActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IGlobalActionWriter> globalActionWriter);

            /**
            * Fills a dom element of type Histogram
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param histogramWriter the writer the element is filled from.
            */
            void FillHistogramNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IHistogramWriter> histogramWriter);

            /**
            * Fills a dom element of type HistogramBin
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param histogramBinWriter the writer the element is filled from.
            */
            void FillHistogramBinNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IHistogramBinWriter> histogramBinWriter);

            /**
            * Fills a dom element of type InRoutePosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param inRoutePositionWriter the writer the element is filled from.
            */
            void FillInRoutePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInRoutePositionWriter> inRoutePositionWriter);

            /**
            * Fills a dom element of type InfrastructureAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param infrastructureActionWriter the writer the element is filled from.
            */
            void FillInfrastructureActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInfrastructureActionWriter> infrastructureActionWriter);

            /**
            * Fills a dom element of type Init
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param initWriter the writer the element is filled from.
            */
            void FillInitNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInitWriter> initWriter);

            /**
            * Fills a dom element of type InitActions
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param initActionsWriter the writer the element is filled from.
            */
            void FillInitActionsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IInitActionsWriter> initActionsWriter);

            /**
            * Fills a dom element of type Knot
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param knotWriter the writer the element is filled from.
            */
            void FillKnotNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IKnotWriter> knotWriter);

            /**
            * Fills a dom element of type LaneChangeAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param laneChangeActionWriter the writer the element is filled from.
            */
            void FillLaneChangeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneChangeActionWriter> laneChangeActionWriter);

            /**
            * Fills a dom element of type LaneChangeTarget
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param laneChangeTargetWriter the writer the element is filled from.
            */
            void FillLaneChangeTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneChangeTargetWriter> laneChangeTargetWriter);

            /**
            * Fills a dom element of type LaneOffsetAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param laneOffsetActionWriter the writer the element is filled from.
            */
            void FillLaneOffsetActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneOffsetActionWriter> laneOffsetActionWriter);

            /**
            * Fills a dom element of type LaneOffsetActionDynamics
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param laneOffsetActionDynamicsWriter the writer the element is filled from.
            */
            void FillLaneOffsetActionDynamicsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneOffsetActionDynamicsWriter> laneOffsetActionDynamicsWriter);

            /**
            * Fills a dom element of type LaneOffsetTarget
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param laneOffsetTargetWriter the writer the element is filled from.
            */
            void FillLaneOffsetTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILaneOffsetTargetWriter> laneOffsetTargetWriter);

            /**
            * Fills a dom element of type LanePosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param lanePositionWriter the writer the element is filled from.
            */
            void FillLanePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILanePositionWriter> lanePositionWriter);

            /**
            * Fills a dom element of type LateralAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param lateralActionWriter the writer the element is filled from.
            */
            void FillLateralActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILateralActionWriter> lateralActionWriter);

            /**
            * Fills a dom element of type LateralDistanceAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param lateralDistanceActionWriter the writer the element is filled from.
            */
            void FillLateralDistanceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILateralDistanceActionWriter> lateralDistanceActionWriter);

            /**
            * Fills a dom element of type License
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param licenseWriter the writer the element is filled from.
            */
            void FillLicenseNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILicenseWriter> licenseWriter);

            /**
            * Fills a dom element of type LightState
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param lightStateWriter the writer the element is filled from.
            */
            void FillLightStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILightStateWriter> lightStateWriter);

            /**
            * Fills a dom element of type LightStateAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param lightStateActionWriter the writer the element is filled from.
            */
            void FillLightStateActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILightStateActionWriter> lightStateActionWriter);

            /**
            * Fills a dom element of type LightType
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param lightTypeWriter the writer the element is filled from.
            */
            void FillLightTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILightTypeWriter> lightTypeWriter);

            /**
            * Fills a dom element of type LongitudinalAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param longitudinalActionWriter the writer the element is filled from.
            */
            void FillLongitudinalActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILongitudinalActionWriter> longitudinalActionWriter);

            /**
            * Fills a dom element of type LongitudinalDistanceAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param longitudinalDistanceActionWriter the writer the element is filled from.
            */
            void FillLongitudinalDistanceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ILongitudinalDistanceActionWriter> longitudinalDistanceActionWriter);

            /**
            * Fills a dom element of type Maneuver
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param maneuverWriter the writer the element is filled from.
            */
            void FillManeuverNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManeuverWriter> maneuverWriter);

            /**
            * Fills a dom element of type ManeuverCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param maneuverCatalogLocationWriter the writer the element is filled from.
            */
            void FillManeuverCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManeuverCatalogLocationWriter> maneuverCatalogLocationWriter);

            /**
            * Fills a dom element of type ManeuverGroup
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param maneuverGroupWriter the writer the element is filled from.
            */
            void FillManeuverGroupNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManeuverGroupWriter> maneuverGroupWriter);

            /**
            * Fills a dom element of type ManualGear
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param manualGearWriter the writer the element is filled from.
            */
            void FillManualGearNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IManualGearWriter> manualGearWriter);

            /**
            * Fills a dom element of type MiscObject
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param miscObjectWriter the writer the element is filled from.
            */
            void FillMiscObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IMiscObjectWriter> miscObjectWriter);

            /**
            * Fills a dom element of type MiscObjectCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param miscObjectCatalogLocationWriter the writer the element is filled from.
            */
            void FillMiscObjectCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IMiscObjectCatalogLocationWriter> miscObjectCatalogLocationWriter);

            /**
            * Fills a dom element of type ModifyRule
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param modifyRuleWriter the writer the element is filled from.
            */
            void FillModifyRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IModifyRuleWriter> modifyRuleWriter);

            /**
            * Fills a dom element of type None
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param noneWriter the writer the element is filled from.
            */
            void FillNoneNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<INoneWriter> noneWriter);

            /**
            * Fills a dom element of type NormalDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param normalDistributionWriter the writer the element is filled from.
            */
            void FillNormalDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<INormalDistributionWriter> normalDistributionWriter);

            /**
            * Fills a dom element of type Nurbs
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param nurbsWriter the writer the element is filled from.
            */
            void FillNurbsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<INurbsWriter> nurbsWriter);

            /**
            * Fills a dom element of type ObjectController
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param objectControllerWriter the writer the element is filled from.
            */
            void FillObjectControllerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IObjectControllerWriter> objectControllerWriter);

            /**
            * Fills a dom element of type OffroadCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param offroadConditionWriter the writer the element is filled from.
            */
            void FillOffroadConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOffroadConditionWriter> offroadConditionWriter);

            /**
            * Fills a dom element of type OpenScenario
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param openScenarioWriter the writer the element is filled from.
            */
            void FillOpenScenarioNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOpenScenarioWriter> openScenarioWriter);

            /**
            * Fills a dom element of type OpenScenarioCategory
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param openScenarioCategoryWriter the writer the element is filled from.
            */
            void FillOpenScenarioCategoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOpenScenarioCategoryWriter> openScenarioCategoryWriter);

            /**
            * Fills a dom element of type Orientation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param orientationWriter the writer the element is filled from.
            */
            void FillOrientationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOrientationWriter> orientationWriter);

            /**
            * Fills a dom element of type OverrideBrakeAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param overrideBrakeActionWriter the writer the element is filled from.
            */
            void FillOverrideBrakeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideBrakeActionWriter> overrideBrakeActionWriter);

            /**
            * Fills a dom element of type OverrideClutchAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param overrideClutchActionWriter the writer the element is filled from.
            */
            void FillOverrideClutchActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideClutchActionWriter> overrideClutchActionWriter);

            /**
            * Fills a dom element of type OverrideControllerValueAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param overrideControllerValueActionWriter the writer the element is filled from.
            */
            void FillOverrideControllerValueActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideControllerValueActionWriter> overrideControllerValueActionWriter);

            /**
            * Fills a dom element of type OverrideGearAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param overrideGearActionWriter the writer the element is filled from.
            */
            void FillOverrideGearActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideGearActionWriter> overrideGearActionWriter);

            /**
            * Fills a dom element of type OverrideParkingBrakeAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param overrideParkingBrakeActionWriter the writer the element is filled from.
            */
            void FillOverrideParkingBrakeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideParkingBrakeActionWriter> overrideParkingBrakeActionWriter);

            /**
            * Fills a dom element of type OverrideSteeringWheelAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param overrideSteeringWheelActionWriter the writer the element is filled from.
            */
            void FillOverrideSteeringWheelActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideSteeringWheelActionWriter> overrideSteeringWheelActionWriter);

            /**
            * Fills a dom element of type OverrideThrottleAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param overrideThrottleActionWriter the writer the element is filled from.
            */
            void FillOverrideThrottleActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IOverrideThrottleActionWriter> overrideThrottleActionWriter);

            /**
            * Fills a dom element of type ParameterAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterActionWriter the writer the element is filled from.
            */
            void FillParameterActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterActionWriter> parameterActionWriter);

            /**
            * Fills a dom element of type ParameterAddValueRule
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterAddValueRuleWriter the writer the element is filled from.
            */
            void FillParameterAddValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterAddValueRuleWriter> parameterAddValueRuleWriter);

            /**
            * Fills a dom element of type ParameterAssignment
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterAssignmentWriter the writer the element is filled from.
            */
            void FillParameterAssignmentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterAssignmentWriter> parameterAssignmentWriter);

            /**
            * Fills a dom element of type ParameterCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterConditionWriter the writer the element is filled from.
            */
            void FillParameterConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterConditionWriter> parameterConditionWriter);

            /**
            * Fills a dom element of type ParameterDeclaration
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterDeclarationWriter the writer the element is filled from.
            */
            void FillParameterDeclarationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterDeclarationWriter> parameterDeclarationWriter);

            /**
            * Fills a dom element of type ParameterModifyAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterModifyActionWriter the writer the element is filled from.
            */
            void FillParameterModifyActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterModifyActionWriter> parameterModifyActionWriter);

            /**
            * Fills a dom element of type ParameterMultiplyByValueRule
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterMultiplyByValueRuleWriter the writer the element is filled from.
            */
            void FillParameterMultiplyByValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterMultiplyByValueRuleWriter> parameterMultiplyByValueRuleWriter);

            /**
            * Fills a dom element of type ParameterSetAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterSetActionWriter the writer the element is filled from.
            */
            void FillParameterSetActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterSetActionWriter> parameterSetActionWriter);

            /**
            * Fills a dom element of type ParameterValueDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterValueDistributionWriter the writer the element is filled from.
            */
            void FillParameterValueDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterValueDistributionWriter> parameterValueDistributionWriter);

            /**
            * Fills a dom element of type ParameterValueDistributionDefinition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterValueDistributionDefinitionWriter the writer the element is filled from.
            */
            void FillParameterValueDistributionDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterValueDistributionDefinitionWriter> parameterValueDistributionDefinitionWriter);

            /**
            * Fills a dom element of type ParameterValueSet
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param parameterValueSetWriter the writer the element is filled from.
            */
            void FillParameterValueSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IParameterValueSetWriter> parameterValueSetWriter);

            /**
            * Fills a dom element of type Pedestrian
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param pedestrianWriter the writer the element is filled from.
            */
            void FillPedestrianNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianWriter> pedestrianWriter);

            /**
            * Fills a dom element of type PedestrianAnimation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param pedestrianAnimationWriter the writer the element is filled from.
            */
            void FillPedestrianAnimationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianAnimationWriter> pedestrianAnimationWriter);

            /**
            * Fills a dom element of type PedestrianCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param pedestrianCatalogLocationWriter the writer the element is filled from.
            */
            void FillPedestrianCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianCatalogLocationWriter> pedestrianCatalogLocationWriter);

            /**
            * Fills a dom element of type PedestrianGesture
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param pedestrianGestureWriter the writer the element is filled from.
            */
            void FillPedestrianGestureNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianGestureWriter> pedestrianGestureWriter);

            /**
            * Fills a dom element of type Performance
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param performanceWriter the writer the element is filled from.
            */
            void FillPerformanceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPerformanceWriter> performanceWriter);

            /**
            * Fills a dom element of type Phase
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param phaseWriter the writer the element is filled from.
            */
            void FillPhaseNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPhaseWriter> phaseWriter);

            /**
            * Fills a dom element of type PoissonDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param poissonDistributionWriter the writer the element is filled from.
            */
            void FillPoissonDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPoissonDistributionWriter> poissonDistributionWriter);

            /**
            * Fills a dom element of type Polyline
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param polylineWriter the writer the element is filled from.
            */
            void FillPolylineNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPolylineWriter> polylineWriter);

            /**
            * Fills a dom element of type Position
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param positionWriter the writer the element is filled from.
            */
            void FillPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionWriter> positionWriter);

            /**
            * Fills a dom element of type PositionInLaneCoordinates
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param positionInLaneCoordinatesWriter the writer the element is filled from.
            */
            void FillPositionInLaneCoordinatesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionInLaneCoordinatesWriter> positionInLaneCoordinatesWriter);

            /**
            * Fills a dom element of type PositionInRoadCoordinates
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param positionInRoadCoordinatesWriter the writer the element is filled from.
            */
            void FillPositionInRoadCoordinatesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionInRoadCoordinatesWriter> positionInRoadCoordinatesWriter);

            /**
            * Fills a dom element of type PositionOfCurrentEntity
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param positionOfCurrentEntityWriter the writer the element is filled from.
            */
            void FillPositionOfCurrentEntityNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPositionOfCurrentEntityWriter> positionOfCurrentEntityWriter);

            /**
            * Fills a dom element of type Precipitation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param precipitationWriter the writer the element is filled from.
            */
            void FillPrecipitationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPrecipitationWriter> precipitationWriter);

            /**
            * Fills a dom element of type Private
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param privateWriter the writer the element is filled from.
            */
            void FillPrivateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPrivateWriter> privateWriter);

            /**
            * Fills a dom element of type PrivateAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param privateActionWriter the writer the element is filled from.
            */
            void FillPrivateActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPrivateActionWriter> privateActionWriter);

            /**
            * Fills a dom element of type ProbabilityDistributionSet
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param probabilityDistributionSetWriter the writer the element is filled from.
            */
            void FillProbabilityDistributionSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IProbabilityDistributionSetWriter> probabilityDistributionSetWriter);

            /**
            * Fills a dom element of type ProbabilityDistributionSetElement
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param probabilityDistributionSetElementWriter the writer the element is filled from.
            */
            void FillProbabilityDistributionSetElementNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IProbabilityDistributionSetElementWriter> probabilityDistributionSetElementWriter);

            /**
            * Fills a dom element of type Properties
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param propertiesWriter the writer the element is filled from.
            */
            void FillPropertiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPropertiesWriter> propertiesWriter);

            /**
            * Fills a dom element of type Property
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param propertyWriter the writer the element is filled from.
            */
            void FillPropertyNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPropertyWriter> propertyWriter);

            /**
            * Fills a dom element of type Range
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param rangeWriter the writer the element is filled from.
            */
            void FillRangeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRangeWriter> rangeWriter);

            /**
            * Fills a dom element of type ReachPositionCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param reachPositionConditionWriter the writer the element is filled from.
            */
            void FillReachPositionConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IReachPositionConditionWriter> reachPositionConditionWriter);

            /**
            * Fills a dom element of type RelativeClearanceCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeClearanceConditionWriter the writer the element is filled from.
            */
            void FillRelativeClearanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeClearanceConditionWriter> relativeClearanceConditionWriter);

            /**
            * Fills a dom element of type RelativeDistanceCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeDistanceConditionWriter the writer the element is filled from.
            */
            void FillRelativeDistanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeDistanceConditionWriter> relativeDistanceConditionWriter);

            /**
            * Fills a dom element of type RelativeLanePosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeLanePositionWriter the writer the element is filled from.
            */
            void FillRelativeLanePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeLanePositionWriter> relativeLanePositionWriter);

            /**
            * Fills a dom element of type RelativeLaneRange
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeLaneRangeWriter the writer the element is filled from.
            */
            void FillRelativeLaneRangeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeLaneRangeWriter> relativeLaneRangeWriter);

            /**
            * Fills a dom element of type RelativeObjectPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeObjectPositionWriter the writer the element is filled from.
            */
            void FillRelativeObjectPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeObjectPositionWriter> relativeObjectPositionWriter);

            /**
            * Fills a dom element of type RelativeRoadPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeRoadPositionWriter the writer the element is filled from.
            */
            void FillRelativeRoadPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeRoadPositionWriter> relativeRoadPositionWriter);

            /**
            * Fills a dom element of type RelativeSpeedCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeSpeedConditionWriter the writer the element is filled from.
            */
            void FillRelativeSpeedConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeSpeedConditionWriter> relativeSpeedConditionWriter);

            /**
            * Fills a dom element of type RelativeSpeedToMaster
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeSpeedToMasterWriter the writer the element is filled from.
            */
            void FillRelativeSpeedToMasterNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeSpeedToMasterWriter> relativeSpeedToMasterWriter);

            /**
            * Fills a dom element of type RelativeTargetLane
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeTargetLaneWriter the writer the element is filled from.
            */
            void FillRelativeTargetLaneNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeTargetLaneWriter> relativeTargetLaneWriter);

            /**
            * Fills a dom element of type RelativeTargetLaneOffset
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeTargetLaneOffsetWriter the writer the element is filled from.
            */
            void FillRelativeTargetLaneOffsetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeTargetLaneOffsetWriter> relativeTargetLaneOffsetWriter);

            /**
            * Fills a dom element of type RelativeTargetSpeed
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeTargetSpeedWriter the writer the element is filled from.
            */
            void FillRelativeTargetSpeedNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeTargetSpeedWriter> relativeTargetSpeedWriter);

            /**
            * Fills a dom element of type RelativeWorldPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param relativeWorldPositionWriter the writer the element is filled from.
            */
            void FillRelativeWorldPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRelativeWorldPositionWriter> relativeWorldPositionWriter);

            /**
            * Fills a dom element of type RoadCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param roadConditionWriter the writer the element is filled from.
            */
            void FillRoadConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoadConditionWriter> roadConditionWriter);

            /**
            * Fills a dom element of type RoadNetwork
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param roadNetworkWriter the writer the element is filled from.
            */
            void FillRoadNetworkNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoadNetworkWriter> roadNetworkWriter);

            /**
            * Fills a dom element of type RoadPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param roadPositionWriter the writer the element is filled from.
            */
            void FillRoadPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoadPositionWriter> roadPositionWriter);

            /**
            * Fills a dom element of type Route
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param routeWriter the writer the element is filled from.
            */
            void FillRouteNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRouteWriter> routeWriter);

            /**
            * Fills a dom element of type RouteCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param routeCatalogLocationWriter the writer the element is filled from.
            */
            void FillRouteCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRouteCatalogLocationWriter> routeCatalogLocationWriter);

            /**
            * Fills a dom element of type RoutePosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param routePositionWriter the writer the element is filled from.
            */
            void FillRoutePositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoutePositionWriter> routePositionWriter);

            /**
            * Fills a dom element of type RouteRef
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param routeRefWriter the writer the element is filled from.
            */
            void FillRouteRefNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRouteRefWriter> routeRefWriter);

            /**
            * Fills a dom element of type RoutingAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param routingActionWriter the writer the element is filled from.
            */
            void FillRoutingActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IRoutingActionWriter> routingActionWriter);

            /**
            * Fills a dom element of type ScenarioDefinition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param scenarioDefinitionWriter the writer the element is filled from.
            */
            void FillScenarioDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IScenarioDefinitionWriter> scenarioDefinitionWriter);

            /**
            * Fills a dom element of type ScenarioObject
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param scenarioObjectWriter the writer the element is filled from.
            */
            void FillScenarioObjectNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IScenarioObjectWriter> scenarioObjectWriter);

            /**
            * Fills a dom element of type SelectedEntities
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param selectedEntitiesWriter the writer the element is filled from.
            */
            void FillSelectedEntitiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISelectedEntitiesWriter> selectedEntitiesWriter);

            /**
            * Fills a dom element of type SensorReference
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param sensorReferenceWriter the writer the element is filled from.
            */
            void FillSensorReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISensorReferenceWriter> sensorReferenceWriter);

            /**
            * Fills a dom element of type SensorReferenceSet
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param sensorReferenceSetWriter the writer the element is filled from.
            */
            void FillSensorReferenceSetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISensorReferenceSetWriter> sensorReferenceSetWriter);

            /**
            * Fills a dom element of type Shape
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param shapeWriter the writer the element is filled from.
            */
            void FillShapeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IShapeWriter> shapeWriter);

            /**
            * Fills a dom element of type SimulationTimeCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param simulationTimeConditionWriter the writer the element is filled from.
            */
            void FillSimulationTimeConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISimulationTimeConditionWriter> simulationTimeConditionWriter);

            /**
            * Fills a dom element of type SpeedAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param speedActionWriter the writer the element is filled from.
            */
            void FillSpeedActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedActionWriter> speedActionWriter);

            /**
            * Fills a dom element of type SpeedActionTarget
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param speedActionTargetWriter the writer the element is filled from.
            */
            void FillSpeedActionTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedActionTargetWriter> speedActionTargetWriter);

            /**
            * Fills a dom element of type SpeedCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param speedConditionWriter the writer the element is filled from.
            */
            void FillSpeedConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedConditionWriter> speedConditionWriter);

            /**
            * Fills a dom element of type SpeedProfileAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param speedProfileActionWriter the writer the element is filled from.
            */
            void FillSpeedProfileActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedProfileActionWriter> speedProfileActionWriter);

            /**
            * Fills a dom element of type SpeedProfileEntry
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param speedProfileEntryWriter the writer the element is filled from.
            */
            void FillSpeedProfileEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISpeedProfileEntryWriter> speedProfileEntryWriter);

            /**
            * Fills a dom element of type StandStillCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param standStillConditionWriter the writer the element is filled from.
            */
            void FillStandStillConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStandStillConditionWriter> standStillConditionWriter);

            /**
            * Fills a dom element of type SteadyState
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param steadyStateWriter the writer the element is filled from.
            */
            void FillSteadyStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISteadyStateWriter> steadyStateWriter);

            /**
            * Fills a dom element of type Stochastic
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param stochasticWriter the writer the element is filled from.
            */
            void FillStochasticNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStochasticWriter> stochasticWriter);

            /**
            * Fills a dom element of type StochasticDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param stochasticDistributionWriter the writer the element is filled from.
            */
            void FillStochasticDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStochasticDistributionWriter> stochasticDistributionWriter);

            /**
            * Fills a dom element of type StochasticDistributionType
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param stochasticDistributionTypeWriter the writer the element is filled from.
            */
            void FillStochasticDistributionTypeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStochasticDistributionTypeWriter> stochasticDistributionTypeWriter);

            /**
            * Fills a dom element of type Story
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param storyWriter the writer the element is filled from.
            */
            void FillStoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStoryWriter> storyWriter);

            /**
            * Fills a dom element of type Storyboard
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param storyboardWriter the writer the element is filled from.
            */
            void FillStoryboardNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStoryboardWriter> storyboardWriter);

            /**
            * Fills a dom element of type StoryboardElementStateCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param storyboardElementStateConditionWriter the writer the element is filled from.
            */
            void FillStoryboardElementStateConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStoryboardElementStateConditionWriter> storyboardElementStateConditionWriter);

            /**
            * Fills a dom element of type Sun
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param sunWriter the writer the element is filled from.
            */
            void FillSunNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISunWriter> sunWriter);

            /**
            * Fills a dom element of type SynchronizeAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param synchronizeActionWriter the writer the element is filled from.
            */
            void FillSynchronizeActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ISynchronizeActionWriter> synchronizeActionWriter);

            /**
            * Fills a dom element of type TargetDistanceSteadyState
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param targetDistanceSteadyStateWriter the writer the element is filled from.
            */
            void FillTargetDistanceSteadyStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITargetDistanceSteadyStateWriter> targetDistanceSteadyStateWriter);

            /**
            * Fills a dom element of type TargetTimeSteadyState
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param targetTimeSteadyStateWriter the writer the element is filled from.
            */
            void FillTargetTimeSteadyStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITargetTimeSteadyStateWriter> targetTimeSteadyStateWriter);

            /**
            * Fills a dom element of type TeleportAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param teleportActionWriter the writer the element is filled from.
            */
            void FillTeleportActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITeleportActionWriter> teleportActionWriter);

            /**
            * Fills a dom element of type TimeHeadwayCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param timeHeadwayConditionWriter the writer the element is filled from.
            */
            void FillTimeHeadwayConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeHeadwayConditionWriter> timeHeadwayConditionWriter);

            /**
            * Fills a dom element of type TimeOfDay
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param timeOfDayWriter the writer the element is filled from.
            */
            void FillTimeOfDayNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeOfDayWriter> timeOfDayWriter);

            /**
            * Fills a dom element of type TimeOfDayCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param timeOfDayConditionWriter the writer the element is filled from.
            */
            void FillTimeOfDayConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeOfDayConditionWriter> timeOfDayConditionWriter);

            /**
            * Fills a dom element of type TimeReference
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param timeReferenceWriter the writer the element is filled from.
            */
            void FillTimeReferenceNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeReferenceWriter> timeReferenceWriter);

            /**
            * Fills a dom element of type TimeToCollisionCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param timeToCollisionConditionWriter the writer the element is filled from.
            */
            void FillTimeToCollisionConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeToCollisionConditionWriter> timeToCollisionConditionWriter);

            /**
            * Fills a dom element of type TimeToCollisionConditionTarget
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param timeToCollisionConditionTargetWriter the writer the element is filled from.
            */
            void FillTimeToCollisionConditionTargetNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimeToCollisionConditionTargetWriter> timeToCollisionConditionTargetWriter);

            /**
            * Fills a dom element of type Timing
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param timingWriter the writer the element is filled from.
            */
            void FillTimingNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITimingWriter> timingWriter);

            /**
            * Fills a dom element of type TrafficAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficActionWriter the writer the element is filled from.
            */
            void FillTrafficActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficActionWriter> trafficActionWriter);

            /**
            * Fills a dom element of type TrafficDefinition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficDefinitionWriter the writer the element is filled from.
            */
            void FillTrafficDefinitionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficDefinitionWriter> trafficDefinitionWriter);

            /**
            * Fills a dom element of type TrafficSignalAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalActionWriter the writer the element is filled from.
            */
            void FillTrafficSignalActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalActionWriter> trafficSignalActionWriter);

            /**
            * Fills a dom element of type TrafficSignalCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalConditionWriter the writer the element is filled from.
            */
            void FillTrafficSignalConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalConditionWriter> trafficSignalConditionWriter);

            /**
            * Fills a dom element of type TrafficSignalController
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalControllerWriter the writer the element is filled from.
            */
            void FillTrafficSignalControllerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalControllerWriter> trafficSignalControllerWriter);

            /**
            * Fills a dom element of type TrafficSignalControllerAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalControllerActionWriter the writer the element is filled from.
            */
            void FillTrafficSignalControllerActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalControllerActionWriter> trafficSignalControllerActionWriter);

            /**
            * Fills a dom element of type TrafficSignalControllerCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalControllerConditionWriter the writer the element is filled from.
            */
            void FillTrafficSignalControllerConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalControllerConditionWriter> trafficSignalControllerConditionWriter);

            /**
            * Fills a dom element of type TrafficSignalGroupState
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalGroupStateWriter the writer the element is filled from.
            */
            void FillTrafficSignalGroupStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalGroupStateWriter> trafficSignalGroupStateWriter);

            /**
            * Fills a dom element of type TrafficSignalState
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalStateWriter the writer the element is filled from.
            */
            void FillTrafficSignalStateNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalStateWriter> trafficSignalStateWriter);

            /**
            * Fills a dom element of type TrafficSignalStateAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSignalStateActionWriter the writer the element is filled from.
            */
            void FillTrafficSignalStateActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSignalStateActionWriter> trafficSignalStateActionWriter);

            /**
            * Fills a dom element of type TrafficSinkAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSinkActionWriter the writer the element is filled from.
            */
            void FillTrafficSinkActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSinkActionWriter> trafficSinkActionWriter);

            /**
            * Fills a dom element of type TrafficSourceAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSourceActionWriter the writer the element is filled from.
            */
            void FillTrafficSourceActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSourceActionWriter> trafficSourceActionWriter);

            /**
            * Fills a dom element of type TrafficStopAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficStopActionWriter the writer the element is filled from.
            */
            void FillTrafficStopActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficStopActionWriter> trafficStopActionWriter);

            /**
            * Fills a dom element of type TrafficSwarmAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trafficSwarmActionWriter the writer the element is filled from.
            */
            void FillTrafficSwarmActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrafficSwarmActionWriter> trafficSwarmActionWriter);

            /**
            * Fills a dom element of type Trajectory
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trajectoryWriter the writer the element is filled from.
            */
            void FillTrajectoryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryWriter> trajectoryWriter);

            /**
            * Fills a dom element of type TrajectoryCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trajectoryCatalogLocationWriter the writer the element is filled from.
            */
            void FillTrajectoryCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryCatalogLocationWriter> trajectoryCatalogLocationWriter);

            /**
            * Fills a dom element of type TrajectoryFollowingMode
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trajectoryFollowingModeWriter the writer the element is filled from.
            */
            void FillTrajectoryFollowingModeNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryFollowingModeWriter> trajectoryFollowingModeWriter);

            /**
            * Fills a dom element of type TrajectoryPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trajectoryPositionWriter the writer the element is filled from.
            */
            void FillTrajectoryPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryPositionWriter> trajectoryPositionWriter);

            /**
            * Fills a dom element of type TrajectoryRef
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param trajectoryRefWriter the writer the element is filled from.
            */
            void FillTrajectoryRefNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITrajectoryRefWriter> trajectoryRefWriter);

            /**
            * Fills a dom element of type TransitionDynamics
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param transitionDynamicsWriter the writer the element is filled from.
            */
            void FillTransitionDynamicsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITransitionDynamicsWriter> transitionDynamicsWriter);

            /**
            * Fills a dom element of type TraveledDistanceCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param traveledDistanceConditionWriter the writer the element is filled from.
            */
            void FillTraveledDistanceConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITraveledDistanceConditionWriter> traveledDistanceConditionWriter);

            /**
            * Fills a dom element of type Trigger
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param triggerWriter the writer the element is filled from.
            */
            void FillTriggerNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITriggerWriter> triggerWriter);

            /**
            * Fills a dom element of type TriggeringEntities
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param triggeringEntitiesWriter the writer the element is filled from.
            */
            void FillTriggeringEntitiesNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<ITriggeringEntitiesWriter> triggeringEntitiesWriter);

            /**
            * Fills a dom element of type UniformDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param uniformDistributionWriter the writer the element is filled from.
            */
            void FillUniformDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUniformDistributionWriter> uniformDistributionWriter);

            /**
            * Fills a dom element of type UsedArea
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param usedAreaWriter the writer the element is filled from.
            */
            void FillUsedAreaNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUsedAreaWriter> usedAreaWriter);

            /**
            * Fills a dom element of type UserDefinedAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedActionWriter the writer the element is filled from.
            */
            void FillUserDefinedActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedActionWriter> userDefinedActionWriter);

            /**
            * Fills a dom element of type UserDefinedAnimation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedAnimationWriter the writer the element is filled from.
            */
            void FillUserDefinedAnimationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedAnimationWriter> userDefinedAnimationWriter);

            /**
            * Fills a dom element of type UserDefinedComponent
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedComponentWriter the writer the element is filled from.
            */
            void FillUserDefinedComponentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedComponentWriter> userDefinedComponentWriter);

            /**
            * Fills a dom element of type UserDefinedDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedDistributionWriter the writer the element is filled from.
            */
            void FillUserDefinedDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedDistributionWriter> userDefinedDistributionWriter);

            /**
            * Fills a dom element of type UserDefinedLight
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedLightWriter the writer the element is filled from.
            */
            void FillUserDefinedLightNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedLightWriter> userDefinedLightWriter);

            /**
            * Fills a dom element of type UserDefinedValueCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedValueConditionWriter the writer the element is filled from.
            */
            void FillUserDefinedValueConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedValueConditionWriter> userDefinedValueConditionWriter);

            /**
            * Fills a dom element of type ValueConstraint
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param valueConstraintWriter the writer the element is filled from.
            */
            void FillValueConstraintNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IValueConstraintWriter> valueConstraintWriter);

            /**
            * Fills a dom element of type ValueConstraintGroup
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param valueConstraintGroupWriter the writer the element is filled from.
            */
            void FillValueConstraintGroupNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IValueConstraintGroupWriter> valueConstraintGroupWriter);

            /**
            * Fills a dom element of type ValueSetDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param valueSetDistributionWriter the writer the element is filled from.
            */
            void FillValueSetDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IValueSetDistributionWriter> valueSetDistributionWriter);

            /**
            * Fills a dom element of type VariableAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableActionWriter the writer the element is filled from.
            */
            void FillVariableActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableActionWriter> variableActionWriter);

            /**
            * Fills a dom element of type VariableAddValueRule
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableAddValueRuleWriter the writer the element is filled from.
            */
            void FillVariableAddValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableAddValueRuleWriter> variableAddValueRuleWriter);

            /**
            * Fills a dom element of type VariableCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableConditionWriter the writer the element is filled from.
            */
            void FillVariableConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableConditionWriter> variableConditionWriter);

            /**
            * Fills a dom element of type VariableDeclaration
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableDeclarationWriter the writer the element is filled from.
            */
            void FillVariableDeclarationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableDeclarationWriter> variableDeclarationWriter);

            /**
            * Fills a dom element of type VariableModifyAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableModifyActionWriter the writer the element is filled from.
            */
            void FillVariableModifyActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableModifyActionWriter> variableModifyActionWriter);

            /**
            * Fills a dom element of type VariableModifyRule
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableModifyRuleWriter the writer the element is filled from.
            */
            void FillVariableModifyRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableModifyRuleWriter> variableModifyRuleWriter);

            /**
            * Fills a dom element of type VariableMultiplyByValueRule
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableMultiplyByValueRuleWriter the writer the element is filled from.
            */
            void FillVariableMultiplyByValueRuleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableMultiplyByValueRuleWriter> variableMultiplyByValueRuleWriter);

            /**
            * Fills a dom element of type VariableSetAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param variableSetActionWriter the writer the element is filled from.
            */
            void FillVariableSetActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVariableSetActionWriter> variableSetActionWriter);

            /**
            * Fills a dom element of type Vehicle
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleWriter the writer the element is filled from.
            */
            void FillVehicleNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleWriter> vehicleWriter);

            /**
            * Fills a dom element of type VehicleCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleCatalogLocationWriter the writer the element is filled from.
            */
            void FillVehicleCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleCatalogLocationWriter> vehicleCatalogLocationWriter);

            /**
            * Fills a dom element of type VehicleCategoryDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleCategoryDistributionWriter the writer the element is filled from.
            */
            void FillVehicleCategoryDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleCategoryDistributionWriter> vehicleCategoryDistributionWriter);

            /**
            * Fills a dom element of type VehicleCategoryDistributionEntry
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleCategoryDistributionEntryWriter the writer the element is filled from.
            */
            void FillVehicleCategoryDistributionEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleCategoryDistributionEntryWriter> vehicleCategoryDistributionEntryWriter);

            /**
            * Fills a dom element of type VehicleComponent
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleComponentWriter the writer the element is filled from.
            */
            void FillVehicleComponentNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleComponentWriter> vehicleComponentWriter);

            /**
            * Fills a dom element of type VehicleLight
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleLightWriter the writer the element is filled from.
            */
            void FillVehicleLightNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleLightWriter> vehicleLightWriter);

            /**
            * Fills a dom element of type VehicleRoleDistribution
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleRoleDistributionWriter the writer the element is filled from.
            */
            void FillVehicleRoleDistributionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleRoleDistributionWriter> vehicleRoleDistributionWriter);

            /**
            * Fills a dom element of type VehicleRoleDistributionEntry
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vehicleRoleDistributionEntryWriter the writer the element is filled from.
            */
            void FillVehicleRoleDistributionEntryNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVehicleRoleDistributionEntryWriter> vehicleRoleDistributionEntryWriter);

            /**
            * Fills a dom element of type Vertex
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param vertexWriter the writer the element is filled from.
            */
            void FillVertexNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVertexWriter> vertexWriter);

            /**
            * Fills a dom element of type VisibilityAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param visibilityActionWriter the writer the element is filled from.
            */
            void FillVisibilityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IVisibilityActionWriter> visibilityActionWriter);

            /**
            * Fills a dom element of type Waypoint
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param waypointWriter the writer the element is filled from.
            */
            void FillWaypointNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWaypointWriter> waypointWriter);

            /**
            * Fills a dom element of type Weather
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param weatherWriter the writer the element is filled from.
            */
            void FillWeatherNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWeatherWriter> weatherWriter);

            /**
            * Fills a dom element of type Wind
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param windWriter the writer the element is filled from.
            */
            void FillWindNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWindWriter> windWriter);

            /**
            * Fills a dom element of type WorldPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param worldPositionWriter the writer the element is filled from.
            */
            void FillWorldPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWorldPositionWriter> worldPositionWriter);
        };

    }
}

