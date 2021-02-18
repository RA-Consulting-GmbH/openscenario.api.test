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
 
#include "ScenarioCheckerImpl.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        void ScenarioCheckerImpl::CheckScenarioInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, const std::shared_ptr<IOpenScenario> openScenario)
        {
            ApplyOpenScenarioCheckerRules(std::dynamic_pointer_cast<IContentMessageLogger<FileContentMessage>>(messageLogger), openScenario, MODE_FILE);
        }

        void ScenarioCheckerImpl::CheckScenarioInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, const std::shared_ptr<IOpenScenario> openScenario)
        {
            ApplyOpenScenarioCheckerRules(std::dynamic_pointer_cast<IContentMessageLogger<TreeContentMessage>>(messageLogger), openScenario, MODE_TREE);
        }

        void ScenarioCheckerImpl::AddAbsoluteSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteSpeed>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteSpeed).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAbsoluteSpeed).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAbsoluteTargetLaneCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteTargetLane>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLane).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAbsoluteTargetLane).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAbsoluteTargetLaneOffsetCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteTargetLaneOffset>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLaneOffset).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAbsoluteTargetLaneOffset).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAbsoluteTargetSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteTargetSpeed>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetSpeed).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAbsoluteTargetSpeed).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAccelerationConditionCheckerRule(const std::shared_ptr<ICheckerRule<IAccelerationCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAccelerationCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAccelerationCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAcquirePositionActionCheckerRule(const std::shared_ptr<ICheckerRule<IAcquirePositionAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAcquirePositionAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAcquirePositionAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddActCheckerRule(const std::shared_ptr<ICheckerRule<IAct>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAct).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAct).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddActionCheckerRule(const std::shared_ptr<ICheckerRule<IAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddActivateControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<IActivateControllerAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActivateControllerAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IActivateControllerAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddActorsCheckerRule(const std::shared_ptr<ICheckerRule<IActors>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActors).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IActors).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAddEntityActionCheckerRule(const std::shared_ptr<ICheckerRule<IAddEntityAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAddEntityAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAddEntityAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAssignControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<IAssignControllerAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignControllerAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAssignControllerAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAssignRouteActionCheckerRule(const std::shared_ptr<ICheckerRule<IAssignRouteAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignRouteAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAssignRouteAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAxleCheckerRule(const std::shared_ptr<ICheckerRule<IAxle>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxle).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAxle).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddAxlesCheckerRule(const std::shared_ptr<ICheckerRule<IAxles>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxles).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IAxles).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddBoundingBoxCheckerRule(const std::shared_ptr<ICheckerRule<IBoundingBox>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IBoundingBox).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IBoundingBox).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddByEntityConditionCheckerRule(const std::shared_ptr<ICheckerRule<IByEntityCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByEntityCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IByEntityCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddByObjectTypeCheckerRule(const std::shared_ptr<ICheckerRule<IByObjectType>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByObjectType).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IByObjectType).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddByTypeCheckerRule(const std::shared_ptr<ICheckerRule<IByType>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByType).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IByType).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddByValueConditionCheckerRule(const std::shared_ptr<ICheckerRule<IByValueCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByValueCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IByValueCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCatalogCheckerRule(const std::shared_ptr<ICheckerRule<ICatalog>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalog).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICatalog).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCatalogDefinitionCheckerRule(const std::shared_ptr<ICheckerRule<ICatalogDefinition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogDefinition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICatalogDefinition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCatalogLocationsCheckerRule(const std::shared_ptr<ICheckerRule<ICatalogLocations>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogLocations).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICatalogLocations).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCatalogReferenceCheckerRule(const std::shared_ptr<ICheckerRule<ICatalogReference>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogReference).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICatalogReference).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCenterCheckerRule(const std::shared_ptr<ICheckerRule<ICenter>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICenter).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICenter).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCentralSwarmObjectCheckerRule(const std::shared_ptr<ICheckerRule<ICentralSwarmObject>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICentralSwarmObject).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICentralSwarmObject).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddClothoidCheckerRule(const std::shared_ptr<ICheckerRule<IClothoid>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IClothoid).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IClothoid).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCollisionConditionCheckerRule(const std::shared_ptr<ICheckerRule<ICollisionCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICollisionCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICollisionCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddConditionCheckerRule(const std::shared_ptr<ICheckerRule<ICondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddConditionGroupCheckerRule(const std::shared_ptr<ICheckerRule<IConditionGroup>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IConditionGroup).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IConditionGroup).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddControlPointCheckerRule(const std::shared_ptr<ICheckerRule<IControlPoint>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControlPoint).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IControlPoint).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddControllerCheckerRule(const std::shared_ptr<ICheckerRule<IController>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IController).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IController).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<IControllerAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IControllerAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddControllerCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IControllerCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IControllerCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddControllerDistributionCheckerRule(const std::shared_ptr<ICheckerRule<IControllerDistribution>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistribution).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IControllerDistribution).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddControllerDistributionEntryCheckerRule(const std::shared_ptr<ICheckerRule<IControllerDistributionEntry>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistributionEntry).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IControllerDistributionEntry).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddCustomCommandActionCheckerRule(const std::shared_ptr<ICheckerRule<ICustomCommandAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICustomCommandAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ICustomCommandAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddDeleteEntityActionCheckerRule(const std::shared_ptr<ICheckerRule<IDeleteEntityAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeleteEntityAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IDeleteEntityAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddDimensionsCheckerRule(const std::shared_ptr<ICheckerRule<IDimensions>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDimensions).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IDimensions).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddDirectoryCheckerRule(const std::shared_ptr<ICheckerRule<IDirectory>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDirectory).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IDirectory).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddDistanceConditionCheckerRule(const std::shared_ptr<ICheckerRule<IDistanceCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistanceCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IDistanceCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddDynamicConstraintsCheckerRule(const std::shared_ptr<ICheckerRule<IDynamicConstraints>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDynamicConstraints).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IDynamicConstraints).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEndOfRoadConditionCheckerRule(const std::shared_ptr<ICheckerRule<IEndOfRoadCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEndOfRoadCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEndOfRoadCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEntitiesCheckerRule(const std::shared_ptr<ICheckerRule<IEntities>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntities).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEntities).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEntityActionCheckerRule(const std::shared_ptr<ICheckerRule<IEntityAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEntityAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEntityConditionCheckerRule(const std::shared_ptr<ICheckerRule<IEntityCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEntityCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEntityObjectCheckerRule(const std::shared_ptr<ICheckerRule<IEntityObject>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityObject).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEntityObject).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEntityRefCheckerRule(const std::shared_ptr<ICheckerRule<IEntityRef>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityRef).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEntityRef).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEntitySelectionCheckerRule(const std::shared_ptr<ICheckerRule<IEntitySelection>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntitySelection).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEntitySelection).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEnvironmentCheckerRule(const std::shared_ptr<ICheckerRule<IEnvironment>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironment).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEnvironment).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEnvironmentActionCheckerRule(const std::shared_ptr<ICheckerRule<IEnvironmentAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEnvironmentAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEnvironmentCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IEnvironmentCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEnvironmentCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddEventCheckerRule(const std::shared_ptr<ICheckerRule<IEvent>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEvent).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IEvent).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddFileCheckerRule(const std::shared_ptr<ICheckerRule<IFile>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFile).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IFile).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddFileHeaderCheckerRule(const std::shared_ptr<ICheckerRule<IFileHeader>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFileHeader).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IFileHeader).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddFinalSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IFinalSpeed>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFinalSpeed).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IFinalSpeed).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddFogCheckerRule(const std::shared_ptr<ICheckerRule<IFog>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFog).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IFog).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddFollowTrajectoryActionCheckerRule(const std::shared_ptr<ICheckerRule<IFollowTrajectoryAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFollowTrajectoryAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IFollowTrajectoryAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddGlobalActionCheckerRule(const std::shared_ptr<ICheckerRule<IGlobalAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IGlobalAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IGlobalAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddInRoutePositionCheckerRule(const std::shared_ptr<ICheckerRule<IInRoutePosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInRoutePosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IInRoutePosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddInfrastructureActionCheckerRule(const std::shared_ptr<ICheckerRule<IInfrastructureAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInfrastructureAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IInfrastructureAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddInitCheckerRule(const std::shared_ptr<ICheckerRule<IInit>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInit).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IInit).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddInitActionsCheckerRule(const std::shared_ptr<ICheckerRule<IInitActions>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInitActions).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IInitActions).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddKnotCheckerRule(const std::shared_ptr<ICheckerRule<IKnot>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IKnot).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IKnot).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLaneChangeActionCheckerRule(const std::shared_ptr<ICheckerRule<ILaneChangeAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILaneChangeAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLaneChangeTargetCheckerRule(const std::shared_ptr<ICheckerRule<ILaneChangeTarget>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeTarget).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILaneChangeTarget).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLaneOffsetActionCheckerRule(const std::shared_ptr<ICheckerRule<ILaneOffsetAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILaneOffsetAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLaneOffsetActionDynamicsCheckerRule(const std::shared_ptr<ICheckerRule<ILaneOffsetActionDynamics>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetActionDynamics).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILaneOffsetActionDynamics).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLaneOffsetTargetCheckerRule(const std::shared_ptr<ICheckerRule<ILaneOffsetTarget>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetTarget).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILaneOffsetTarget).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLanePositionCheckerRule(const std::shared_ptr<ICheckerRule<ILanePosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILanePosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILanePosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLateralActionCheckerRule(const std::shared_ptr<ICheckerRule<ILateralAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILateralAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLateralDistanceActionCheckerRule(const std::shared_ptr<ICheckerRule<ILateralDistanceAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralDistanceAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILateralDistanceAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLongitudinalActionCheckerRule(const std::shared_ptr<ICheckerRule<ILongitudinalAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILongitudinalAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddLongitudinalDistanceActionCheckerRule(const std::shared_ptr<ICheckerRule<ILongitudinalDistanceAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalDistanceAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ILongitudinalDistanceAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddManeuverCheckerRule(const std::shared_ptr<ICheckerRule<IManeuver>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuver).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IManeuver).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddManeuverCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IManeuverCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IManeuverCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddManeuverGroupCheckerRule(const std::shared_ptr<ICheckerRule<IManeuverGroup>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverGroup).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IManeuverGroup).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddMiscObjectCheckerRule(const std::shared_ptr<ICheckerRule<IMiscObject>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObject).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IMiscObject).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddMiscObjectCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IMiscObjectCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObjectCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IMiscObjectCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddModifyRuleCheckerRule(const std::shared_ptr<ICheckerRule<IModifyRule>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IModifyRule).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IModifyRule).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddNoneCheckerRule(const std::shared_ptr<ICheckerRule<INone>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(INone).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(INone).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddNurbsCheckerRule(const std::shared_ptr<ICheckerRule<INurbs>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(INurbs).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(INurbs).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddObjectControllerCheckerRule(const std::shared_ptr<ICheckerRule<IObjectController>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IObjectController).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IObjectController).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOffroadConditionCheckerRule(const std::shared_ptr<ICheckerRule<IOffroadCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOffroadCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOffroadCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOpenScenarioCheckerRule(const std::shared_ptr<ICheckerRule<IOpenScenario>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenario).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOpenScenario).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOpenScenarioCategoryCheckerRule(const std::shared_ptr<ICheckerRule<IOpenScenarioCategory>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenarioCategory).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOpenScenarioCategory).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOrientationCheckerRule(const std::shared_ptr<ICheckerRule<IOrientation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOrientation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOrientation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOverrideBrakeActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideBrakeAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideBrakeAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOverrideBrakeAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOverrideClutchActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideClutchAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideClutchAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOverrideClutchAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOverrideControllerValueActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideControllerValueAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideControllerValueAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOverrideControllerValueAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOverrideGearActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideGearAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideGearAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOverrideGearAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOverrideParkingBrakeActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideParkingBrakeAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideParkingBrakeAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOverrideParkingBrakeAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOverrideSteeringWheelActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideSteeringWheelAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideSteeringWheelAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOverrideSteeringWheelAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddOverrideThrottleActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideThrottleAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideThrottleAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IOverrideThrottleAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterActionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterAddValueRuleCheckerRule(const std::shared_ptr<ICheckerRule<IParameterAddValueRule>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAddValueRule).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterAddValueRule).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterAssignmentCheckerRule(const std::shared_ptr<ICheckerRule<IParameterAssignment>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAssignment).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterAssignment).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterConditionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterDeclarationCheckerRule(const std::shared_ptr<ICheckerRule<IParameterDeclaration>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterDeclaration).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterDeclaration).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterModifyActionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterModifyAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterModifyAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterModifyAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterMultiplyByValueRuleCheckerRule(const std::shared_ptr<ICheckerRule<IParameterMultiplyByValueRule>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterMultiplyByValueRule).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterMultiplyByValueRule).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddParameterSetActionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterSetAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterSetAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IParameterSetAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPedestrianCheckerRule(const std::shared_ptr<ICheckerRule<IPedestrian>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrian).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPedestrian).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPedestrianCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IPedestrianCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrianCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPedestrianCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPerformanceCheckerRule(const std::shared_ptr<ICheckerRule<IPerformance>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPerformance).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPerformance).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPhaseCheckerRule(const std::shared_ptr<ICheckerRule<IPhase>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPhase).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPhase).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPolylineCheckerRule(const std::shared_ptr<ICheckerRule<IPolyline>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPolyline).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPolyline).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPositionCheckerRule(const std::shared_ptr<ICheckerRule<IPosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPositionInLaneCoordinatesCheckerRule(const std::shared_ptr<ICheckerRule<IPositionInLaneCoordinates>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInLaneCoordinates).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPositionInLaneCoordinates).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPositionInRoadCoordinatesCheckerRule(const std::shared_ptr<ICheckerRule<IPositionInRoadCoordinates>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInRoadCoordinates).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPositionInRoadCoordinates).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPositionOfCurrentEntityCheckerRule(const std::shared_ptr<ICheckerRule<IPositionOfCurrentEntity>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionOfCurrentEntity).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPositionOfCurrentEntity).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPrecipitationCheckerRule(const std::shared_ptr<ICheckerRule<IPrecipitation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrecipitation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPrecipitation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPrivateCheckerRule(const std::shared_ptr<ICheckerRule<IPrivate>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivate).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPrivate).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPrivateActionCheckerRule(const std::shared_ptr<ICheckerRule<IPrivateAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivateAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IPrivateAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPropertiesCheckerRule(const std::shared_ptr<ICheckerRule<IProperties>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperties).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IProperties).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddPropertyCheckerRule(const std::shared_ptr<ICheckerRule<IProperty>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperty).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IProperty).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddReachPositionConditionCheckerRule(const std::shared_ptr<ICheckerRule<IReachPositionCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IReachPositionCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IReachPositionCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeDistanceConditionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeDistanceCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeDistanceCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeDistanceCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeLanePositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeLanePosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeLanePosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeLanePosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeObjectPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeObjectPosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeObjectPosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeObjectPosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeRoadPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeRoadPosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeRoadPosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeRoadPosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeSpeedConditionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeSpeedCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeSpeedCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeSpeedToMasterCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeSpeedToMaster>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedToMaster).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeSpeedToMaster).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeTargetLaneCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeTargetLane>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLane).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeTargetLane).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeTargetLaneOffsetCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeTargetLaneOffset>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLaneOffset).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeTargetLaneOffset).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeTargetSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeTargetSpeed>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetSpeed).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeTargetSpeed).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRelativeWorldPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeWorldPosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeWorldPosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRelativeWorldPosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRoadConditionCheckerRule(const std::shared_ptr<ICheckerRule<IRoadCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRoadCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRoadNetworkCheckerRule(const std::shared_ptr<ICheckerRule<IRoadNetwork>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadNetwork).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRoadNetwork).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRoadPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRoadPosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadPosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRoadPosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRouteCheckerRule(const std::shared_ptr<ICheckerRule<IRoute>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoute).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRoute).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRouteCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IRouteCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRouteCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRoutePositionCheckerRule(const std::shared_ptr<ICheckerRule<IRoutePosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutePosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRoutePosition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRouteRefCheckerRule(const std::shared_ptr<ICheckerRule<IRouteRef>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteRef).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRouteRef).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddRoutingActionCheckerRule(const std::shared_ptr<ICheckerRule<IRoutingAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutingAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IRoutingAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddScenarioDefinitionCheckerRule(const std::shared_ptr<ICheckerRule<IScenarioDefinition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioDefinition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IScenarioDefinition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddScenarioObjectCheckerRule(const std::shared_ptr<ICheckerRule<IScenarioObject>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioObject).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IScenarioObject).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddSelectedEntitiesCheckerRule(const std::shared_ptr<ICheckerRule<ISelectedEntities>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISelectedEntities).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ISelectedEntities).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddShapeCheckerRule(const std::shared_ptr<ICheckerRule<IShape>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IShape).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IShape).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddSimulationTimeConditionCheckerRule(const std::shared_ptr<ICheckerRule<ISimulationTimeCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISimulationTimeCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ISimulationTimeCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddSpeedActionCheckerRule(const std::shared_ptr<ICheckerRule<ISpeedAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ISpeedAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddSpeedActionTargetCheckerRule(const std::shared_ptr<ICheckerRule<ISpeedActionTarget>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedActionTarget).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ISpeedActionTarget).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddSpeedConditionCheckerRule(const std::shared_ptr<ICheckerRule<ISpeedCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ISpeedCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddStandStillConditionCheckerRule(const std::shared_ptr<ICheckerRule<IStandStillCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStandStillCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IStandStillCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddStoryCheckerRule(const std::shared_ptr<ICheckerRule<IStory>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStory).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IStory).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddStoryboardCheckerRule(const std::shared_ptr<ICheckerRule<IStoryboard>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboard).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IStoryboard).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddStoryboardElementStateConditionCheckerRule(const std::shared_ptr<ICheckerRule<IStoryboardElementStateCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboardElementStateCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IStoryboardElementStateCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddSunCheckerRule(const std::shared_ptr<ICheckerRule<ISun>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISun).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ISun).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddSynchronizeActionCheckerRule(const std::shared_ptr<ICheckerRule<ISynchronizeAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISynchronizeAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ISynchronizeAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTeleportActionCheckerRule(const std::shared_ptr<ICheckerRule<ITeleportAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITeleportAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITeleportAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTimeHeadwayConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITimeHeadwayCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeHeadwayCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITimeHeadwayCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTimeOfDayCheckerRule(const std::shared_ptr<ICheckerRule<ITimeOfDay>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDay).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITimeOfDay).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTimeOfDayConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITimeOfDayCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDayCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITimeOfDayCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTimeReferenceCheckerRule(const std::shared_ptr<ICheckerRule<ITimeReference>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeReference).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITimeReference).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTimeToCollisionConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITimeToCollisionCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITimeToCollisionCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTimeToCollisionConditionTargetCheckerRule(const std::shared_ptr<ICheckerRule<ITimeToCollisionConditionTarget>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionConditionTarget).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITimeToCollisionConditionTarget).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTimingCheckerRule(const std::shared_ptr<ICheckerRule<ITiming>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITiming).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITiming).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficDefinitionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficDefinition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficDefinition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficDefinition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSignalActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSignalAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSignalConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSignalCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSignalControllerCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalController>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalController).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSignalController).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSignalControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalControllerAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSignalControllerAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSignalControllerConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalControllerCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSignalControllerCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSignalStateCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalState>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalState).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSignalState).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSignalStateActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalStateAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalStateAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSignalStateAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSinkActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSinkAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSinkAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSinkAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSourceActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSourceAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSourceAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSourceAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrafficSwarmActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSwarmAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSwarmAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrafficSwarmAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrajectoryCheckerRule(const std::shared_ptr<ICheckerRule<ITrajectory>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectory).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrajectory).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrajectoryCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<ITrajectoryCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrajectoryCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTrajectoryFollowingModeCheckerRule(const std::shared_ptr<ICheckerRule<ITrajectoryFollowingMode>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryFollowingMode).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrajectoryFollowingMode).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTransitionDynamicsCheckerRule(const std::shared_ptr<ICheckerRule<ITransitionDynamics>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITransitionDynamics).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITransitionDynamics).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTraveledDistanceConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITraveledDistanceCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITraveledDistanceCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITraveledDistanceCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTriggerCheckerRule(const std::shared_ptr<ICheckerRule<ITrigger>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrigger).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITrigger).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddTriggeringEntitiesCheckerRule(const std::shared_ptr<ICheckerRule<ITriggeringEntities>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITriggeringEntities).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(ITriggeringEntities).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddUserDefinedActionCheckerRule(const std::shared_ptr<ICheckerRule<IUserDefinedAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IUserDefinedAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddUserDefinedValueConditionCheckerRule(const std::shared_ptr<ICheckerRule<IUserDefinedValueCondition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedValueCondition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IUserDefinedValueCondition).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddVehicleCheckerRule(const std::shared_ptr<ICheckerRule<IVehicle>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicle).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IVehicle).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddVehicleCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IVehicleCatalogLocation>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCatalogLocation).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IVehicleCatalogLocation).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddVehicleCategoryDistributionCheckerRule(const std::shared_ptr<ICheckerRule<IVehicleCategoryDistribution>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistribution).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IVehicleCategoryDistribution).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddVehicleCategoryDistributionEntryCheckerRule(const std::shared_ptr<ICheckerRule<IVehicleCategoryDistributionEntry>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistributionEntry).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IVehicleCategoryDistributionEntry).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddVertexCheckerRule(const std::shared_ptr<ICheckerRule<IVertex>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVertex).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IVertex).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddVisibilityActionCheckerRule(const std::shared_ptr<ICheckerRule<IVisibilityAction>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVisibilityAction).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IVisibilityAction).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddWaypointCheckerRule(const std::shared_ptr<ICheckerRule<IWaypoint>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWaypoint).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IWaypoint).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddWeatherCheckerRule(const std::shared_ptr<ICheckerRule<IWeather>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWeather).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IWeather).name()] = checkerRulesForType;
        }

        void ScenarioCheckerImpl::AddWorldPositionCheckerRule(const std::shared_ptr<ICheckerRule<IWorldPosition>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWorldPosition).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(IWorldPosition).name()] = checkerRulesForType;
        }

    }
}
