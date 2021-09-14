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
#include "ApiClassWriterInterfacesV1_0.h"
#include "MemLeakDetection.h"
#include "tinyxml2.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
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
            * Fills a dom element of type DeleteEntityAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param deleteEntityActionWriter the writer the element is filled from.
            */
            void FillDeleteEntityActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDeleteEntityActionWriter> deleteEntityActionWriter);

            /**
            * Fills a dom element of type Dimensions
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param dimensionsWriter the writer the element is filled from.
            */
            void FillDimensionsNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IDimensionsWriter> dimensionsWriter);

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
            * Fills a dom element of type GlobalAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param globalActionWriter the writer the element is filled from.
            */
            void FillGlobalActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IGlobalActionWriter> globalActionWriter);

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
            * Fills a dom element of type Pedestrian
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param pedestrianWriter the writer the element is filled from.
            */
            void FillPedestrianNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianWriter> pedestrianWriter);

            /**
            * Fills a dom element of type PedestrianCatalogLocation
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param pedestrianCatalogLocationWriter the writer the element is filled from.
            */
            void FillPedestrianCatalogLocationNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IPedestrianCatalogLocationWriter> pedestrianCatalogLocationWriter);

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
            * Fills a dom element of type ReachPositionCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param reachPositionConditionWriter the writer the element is filled from.
            */
            void FillReachPositionConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IReachPositionConditionWriter> reachPositionConditionWriter);

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
            * Fills a dom element of type StandStillCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param standStillConditionWriter the writer the element is filled from.
            */
            void FillStandStillConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IStandStillConditionWriter> standStillConditionWriter);

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
            * Fills a dom element of type UserDefinedAction
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedActionWriter the writer the element is filled from.
            */
            void FillUserDefinedActionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedActionWriter> userDefinedActionWriter);

            /**
            * Fills a dom element of type UserDefinedValueCondition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param userDefinedValueConditionWriter the writer the element is filled from.
            */
            void FillUserDefinedValueConditionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IUserDefinedValueConditionWriter> userDefinedValueConditionWriter);

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
            * Fills a dom element of type WorldPosition
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param worldPositionWriter the writer the element is filled from.
            */
            void FillWorldPositionNode(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<IWorldPositionWriter> worldPositionWriter);
        };

    }
}

