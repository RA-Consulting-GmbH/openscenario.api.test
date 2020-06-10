#include "ScenarioCheckerImpl.h"

namespace RAC_OPENSCENARIO
{
    void ScenarioCheckerImpl::CheckScenario(IParserMessageLogger& messageLogger, const std::shared_ptr<IOpenScenario> openScenario)
    {
        ApplyOpenScenarioCheckerRules(messageLogger, openScenario);
    }

    void ScenarioCheckerImpl::AddAbsoluteSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteSpeed>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteSpeed).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAbsoluteTargetLaneCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteTargetLane>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLane).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAbsoluteTargetLaneOffsetCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteTargetLaneOffset>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLaneOffset).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAbsoluteTargetSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IAbsoluteTargetSpeed>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetSpeed).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAccelerationConditionCheckerRule(const std::shared_ptr<ICheckerRule<IAccelerationCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAccelerationCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAcquirePositionActionCheckerRule(const std::shared_ptr<ICheckerRule<IAcquirePositionAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAcquirePositionAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddActCheckerRule(const std::shared_ptr<ICheckerRule<IAct>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAct).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddActionCheckerRule(const std::shared_ptr<ICheckerRule<IAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddActivateControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<IActivateControllerAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActivateControllerAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddActorsCheckerRule(const std::shared_ptr<ICheckerRule<IActors>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActors).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAddEntityActionCheckerRule(const std::shared_ptr<ICheckerRule<IAddEntityAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAddEntityAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAssignControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<IAssignControllerAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignControllerAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAssignRouteActionCheckerRule(const std::shared_ptr<ICheckerRule<IAssignRouteAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignRouteAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAxleCheckerRule(const std::shared_ptr<ICheckerRule<IAxle>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxle).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddAxlesCheckerRule(const std::shared_ptr<ICheckerRule<IAxles>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxles).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddBoundingBoxCheckerRule(const std::shared_ptr<ICheckerRule<IBoundingBox>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IBoundingBox).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddByEntityConditionCheckerRule(const std::shared_ptr<ICheckerRule<IByEntityCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByEntityCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddByObjectTypeCheckerRule(const std::shared_ptr<ICheckerRule<IByObjectType>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByObjectType).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddByTypeCheckerRule(const std::shared_ptr<ICheckerRule<IByType>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByType).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddByValueConditionCheckerRule(const std::shared_ptr<ICheckerRule<IByValueCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByValueCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCatalogCheckerRule(const std::shared_ptr<ICheckerRule<ICatalog>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalog).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCatalogDefinitionCheckerRule(const std::shared_ptr<ICheckerRule<ICatalogDefinition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogDefinition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCatalogLocationsCheckerRule(const std::shared_ptr<ICheckerRule<ICatalogLocations>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogLocations).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCatalogReferenceCheckerRule(const std::shared_ptr<ICheckerRule<ICatalogReference>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogReference).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCenterCheckerRule(const std::shared_ptr<ICheckerRule<ICenter>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICenter).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCentralSwarmObjectCheckerRule(const std::shared_ptr<ICheckerRule<ICentralSwarmObject>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICentralSwarmObject).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddClothoidCheckerRule(const std::shared_ptr<ICheckerRule<IClothoid>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IClothoid).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCollisionConditionCheckerRule(const std::shared_ptr<ICheckerRule<ICollisionCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICollisionCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddConditionCheckerRule(const std::shared_ptr<ICheckerRule<ICondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddConditionGroupCheckerRule(const std::shared_ptr<ICheckerRule<IConditionGroup>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IConditionGroup).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddControlPointCheckerRule(const std::shared_ptr<ICheckerRule<IControlPoint>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControlPoint).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddControllerCheckerRule(const std::shared_ptr<ICheckerRule<IController>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IController).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<IControllerAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddControllerCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IControllerCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddControllerDistributionCheckerRule(const std::shared_ptr<ICheckerRule<IControllerDistribution>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistribution).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddControllerDistributionEntryCheckerRule(const std::shared_ptr<ICheckerRule<IControllerDistributionEntry>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistributionEntry).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddCustomCommandActionCheckerRule(const std::shared_ptr<ICheckerRule<ICustomCommandAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICustomCommandAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddDeleteEntityActionCheckerRule(const std::shared_ptr<ICheckerRule<IDeleteEntityAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeleteEntityAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddDimensionsCheckerRule(const std::shared_ptr<ICheckerRule<IDimensions>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDimensions).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddDirectoryCheckerRule(const std::shared_ptr<ICheckerRule<IDirectory>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDirectory).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddDistanceConditionCheckerRule(const std::shared_ptr<ICheckerRule<IDistanceCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistanceCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddDynamicConstraintsCheckerRule(const std::shared_ptr<ICheckerRule<IDynamicConstraints>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDynamicConstraints).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEndOfRoadConditionCheckerRule(const std::shared_ptr<ICheckerRule<IEndOfRoadCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEndOfRoadCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEntitiesCheckerRule(const std::shared_ptr<ICheckerRule<IEntities>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntities).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEntityActionCheckerRule(const std::shared_ptr<ICheckerRule<IEntityAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEntityConditionCheckerRule(const std::shared_ptr<ICheckerRule<IEntityCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEntityObjectCheckerRule(const std::shared_ptr<ICheckerRule<IEntityObject>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityObject).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEntityRefCheckerRule(const std::shared_ptr<ICheckerRule<IEntityRef>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityRef).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEntitySelectionCheckerRule(const std::shared_ptr<ICheckerRule<IEntitySelection>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntitySelection).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEnvironmentCheckerRule(const std::shared_ptr<ICheckerRule<IEnvironment>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironment).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEnvironmentActionCheckerRule(const std::shared_ptr<ICheckerRule<IEnvironmentAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEnvironmentCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IEnvironmentCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddEventCheckerRule(const std::shared_ptr<ICheckerRule<IEvent>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEvent).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddFileCheckerRule(const std::shared_ptr<ICheckerRule<IFile>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFile).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddFileHeaderCheckerRule(const std::shared_ptr<ICheckerRule<IFileHeader>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFileHeader).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddFinalSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IFinalSpeed>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFinalSpeed).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddFogCheckerRule(const std::shared_ptr<ICheckerRule<IFog>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFog).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddFollowTrajectoryActionCheckerRule(const std::shared_ptr<ICheckerRule<IFollowTrajectoryAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFollowTrajectoryAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddGlobalActionCheckerRule(const std::shared_ptr<ICheckerRule<IGlobalAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IGlobalAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddInRoutePositionCheckerRule(const std::shared_ptr<ICheckerRule<IInRoutePosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInRoutePosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddInfrastructureActionCheckerRule(const std::shared_ptr<ICheckerRule<IInfrastructureAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInfrastructureAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddInitCheckerRule(const std::shared_ptr<ICheckerRule<IInit>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInit).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddInitActionsCheckerRule(const std::shared_ptr<ICheckerRule<IInitActions>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInitActions).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddKnotCheckerRule(const std::shared_ptr<ICheckerRule<IKnot>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IKnot).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLaneChangeActionCheckerRule(const std::shared_ptr<ICheckerRule<ILaneChangeAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLaneChangeTargetCheckerRule(const std::shared_ptr<ICheckerRule<ILaneChangeTarget>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeTarget).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLaneOffsetActionCheckerRule(const std::shared_ptr<ICheckerRule<ILaneOffsetAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLaneOffsetActionDynamicsCheckerRule(const std::shared_ptr<ICheckerRule<ILaneOffsetActionDynamics>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetActionDynamics).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLaneOffsetTargetCheckerRule(const std::shared_ptr<ICheckerRule<ILaneOffsetTarget>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetTarget).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLanePositionCheckerRule(const std::shared_ptr<ICheckerRule<ILanePosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILanePosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLateralActionCheckerRule(const std::shared_ptr<ICheckerRule<ILateralAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLateralDistanceActionCheckerRule(const std::shared_ptr<ICheckerRule<ILateralDistanceAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralDistanceAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLongitudinalActionCheckerRule(const std::shared_ptr<ICheckerRule<ILongitudinalAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddLongitudinalDistanceActionCheckerRule(const std::shared_ptr<ICheckerRule<ILongitudinalDistanceAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalDistanceAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddManeuverCheckerRule(const std::shared_ptr<ICheckerRule<IManeuver>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuver).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddManeuverCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IManeuverCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddManeuverGroupCheckerRule(const std::shared_ptr<ICheckerRule<IManeuverGroup>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverGroup).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddMiscObjectCheckerRule(const std::shared_ptr<ICheckerRule<IMiscObject>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObject).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddMiscObjectCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IMiscObjectCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObjectCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddModifyRuleCheckerRule(const std::shared_ptr<ICheckerRule<IModifyRule>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IModifyRule).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddNoneCheckerRule(const std::shared_ptr<ICheckerRule<INone>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(INone).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddNurbsCheckerRule(const std::shared_ptr<ICheckerRule<INurbs>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(INurbs).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddObjectControllerCheckerRule(const std::shared_ptr<ICheckerRule<IObjectController>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IObjectController).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOffroadConditionCheckerRule(const std::shared_ptr<ICheckerRule<IOffroadCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOffroadCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOpenScenarioCheckerRule(const std::shared_ptr<ICheckerRule<IOpenScenario>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenario).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOpenScenarioCategoryCheckerRule(const std::shared_ptr<ICheckerRule<IOpenScenarioCategory>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenarioCategory).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOrientationCheckerRule(const std::shared_ptr<ICheckerRule<IOrientation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOrientation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOverrideBrakeActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideBrakeAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideBrakeAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOverrideClutchActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideClutchAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideClutchAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOverrideControllerValueActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideControllerValueAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideControllerValueAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOverrideGearActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideGearAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideGearAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOverrideParkingBrakeActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideParkingBrakeAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideParkingBrakeAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOverrideSteeringWheelActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideSteeringWheelAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideSteeringWheelAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddOverrideThrottleActionCheckerRule(const std::shared_ptr<ICheckerRule<IOverrideThrottleAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideThrottleAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterActionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterAddValueRuleCheckerRule(const std::shared_ptr<ICheckerRule<IParameterAddValueRule>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAddValueRule).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterAssignmentCheckerRule(const std::shared_ptr<ICheckerRule<IParameterAssignment>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAssignment).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterConditionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterDeclarationCheckerRule(const std::shared_ptr<ICheckerRule<IParameterDeclaration>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterDeclaration).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterModifyActionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterModifyAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterModifyAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterMultiplyByValueRuleCheckerRule(const std::shared_ptr<ICheckerRule<IParameterMultiplyByValueRule>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterMultiplyByValueRule).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddParameterSetActionCheckerRule(const std::shared_ptr<ICheckerRule<IParameterSetAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterSetAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPedestrianCheckerRule(const std::shared_ptr<ICheckerRule<IPedestrian>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrian).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPedestrianCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IPedestrianCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrianCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPerformanceCheckerRule(const std::shared_ptr<ICheckerRule<IPerformance>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPerformance).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPhaseCheckerRule(const std::shared_ptr<ICheckerRule<IPhase>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPhase).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPolylineCheckerRule(const std::shared_ptr<ICheckerRule<IPolyline>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPolyline).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPositionCheckerRule(const std::shared_ptr<ICheckerRule<IPosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPositionInLaneCoordinatesCheckerRule(const std::shared_ptr<ICheckerRule<IPositionInLaneCoordinates>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInLaneCoordinates).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPositionInRoadCoordinatesCheckerRule(const std::shared_ptr<ICheckerRule<IPositionInRoadCoordinates>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInRoadCoordinates).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPositionOfCurrentEntityCheckerRule(const std::shared_ptr<ICheckerRule<IPositionOfCurrentEntity>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionOfCurrentEntity).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPrecipitationCheckerRule(const std::shared_ptr<ICheckerRule<IPrecipitation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrecipitation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPrivateCheckerRule(const std::shared_ptr<ICheckerRule<IPrivate>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivate).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPrivateActionCheckerRule(const std::shared_ptr<ICheckerRule<IPrivateAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivateAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPropertiesCheckerRule(const std::shared_ptr<ICheckerRule<IProperties>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperties).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddPropertyCheckerRule(const std::shared_ptr<ICheckerRule<IProperty>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperty).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddReachPositionConditionCheckerRule(const std::shared_ptr<ICheckerRule<IReachPositionCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IReachPositionCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeDistanceConditionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeDistanceCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeDistanceCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeLanePositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeLanePosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeLanePosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeObjectPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeObjectPosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeObjectPosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeRoadPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeRoadPosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeRoadPosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeSpeedConditionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeSpeedCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeSpeedToMasterCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeSpeedToMaster>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedToMaster).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeTargetLaneCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeTargetLane>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLane).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeTargetLaneOffsetCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeTargetLaneOffset>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLaneOffset).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeTargetSpeedCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeTargetSpeed>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetSpeed).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRelativeWorldPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRelativeWorldPosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeWorldPosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRoadConditionCheckerRule(const std::shared_ptr<ICheckerRule<IRoadCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRoadNetworkCheckerRule(const std::shared_ptr<ICheckerRule<IRoadNetwork>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadNetwork).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRoadPositionCheckerRule(const std::shared_ptr<ICheckerRule<IRoadPosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadPosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRouteCheckerRule(const std::shared_ptr<ICheckerRule<IRoute>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoute).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRouteCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IRouteCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRoutePositionCheckerRule(const std::shared_ptr<ICheckerRule<IRoutePosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutePosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRouteRefCheckerRule(const std::shared_ptr<ICheckerRule<IRouteRef>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteRef).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddRoutingActionCheckerRule(const std::shared_ptr<ICheckerRule<IRoutingAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutingAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddScenarioDefinitionCheckerRule(const std::shared_ptr<ICheckerRule<IScenarioDefinition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioDefinition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddScenarioObjectCheckerRule(const std::shared_ptr<ICheckerRule<IScenarioObject>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioObject).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddSelectedEntitiesCheckerRule(const std::shared_ptr<ICheckerRule<ISelectedEntities>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISelectedEntities).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddShapeCheckerRule(const std::shared_ptr<ICheckerRule<IShape>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IShape).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddSimulationTimeConditionCheckerRule(const std::shared_ptr<ICheckerRule<ISimulationTimeCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISimulationTimeCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddSpeedActionCheckerRule(const std::shared_ptr<ICheckerRule<ISpeedAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddSpeedActionTargetCheckerRule(const std::shared_ptr<ICheckerRule<ISpeedActionTarget>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedActionTarget).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddSpeedConditionCheckerRule(const std::shared_ptr<ICheckerRule<ISpeedCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddStandStillConditionCheckerRule(const std::shared_ptr<ICheckerRule<IStandStillCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStandStillCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddStoryCheckerRule(const std::shared_ptr<ICheckerRule<IStory>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStory).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddStoryboardCheckerRule(const std::shared_ptr<ICheckerRule<IStoryboard>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboard).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddStoryboardElementStateConditionCheckerRule(const std::shared_ptr<ICheckerRule<IStoryboardElementStateCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboardElementStateCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddSunCheckerRule(const std::shared_ptr<ICheckerRule<ISun>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISun).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddSynchronizeActionCheckerRule(const std::shared_ptr<ICheckerRule<ISynchronizeAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISynchronizeAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTeleportActionCheckerRule(const std::shared_ptr<ICheckerRule<ITeleportAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITeleportAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTimeHeadwayConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITimeHeadwayCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeHeadwayCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTimeOfDayCheckerRule(const std::shared_ptr<ICheckerRule<ITimeOfDay>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDay).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTimeOfDayConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITimeOfDayCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDayCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTimeReferenceCheckerRule(const std::shared_ptr<ICheckerRule<ITimeReference>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeReference).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTimeToCollisionConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITimeToCollisionCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTimeToCollisionConditionTargetCheckerRule(const std::shared_ptr<ICheckerRule<ITimeToCollisionConditionTarget>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionConditionTarget).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTimingCheckerRule(const std::shared_ptr<ICheckerRule<ITiming>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITiming).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficDefinitionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficDefinition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficDefinition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSignalActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSignalConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSignalControllerCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalController>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalController).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSignalControllerActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalControllerAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSignalControllerConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalControllerCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSignalStateCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalState>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalState).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSignalStateActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSignalStateAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalStateAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSinkActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSinkAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSinkAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSourceActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSourceAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSourceAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrafficSwarmActionCheckerRule(const std::shared_ptr<ICheckerRule<ITrafficSwarmAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSwarmAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrajectoryCheckerRule(const std::shared_ptr<ICheckerRule<ITrajectory>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectory).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrajectoryCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<ITrajectoryCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTrajectoryFollowingModeCheckerRule(const std::shared_ptr<ICheckerRule<ITrajectoryFollowingMode>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryFollowingMode).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTransitionDynamicsCheckerRule(const std::shared_ptr<ICheckerRule<ITransitionDynamics>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITransitionDynamics).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTraveledDistanceConditionCheckerRule(const std::shared_ptr<ICheckerRule<ITraveledDistanceCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITraveledDistanceCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTriggerCheckerRule(const std::shared_ptr<ICheckerRule<ITrigger>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrigger).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddTriggeringEntitiesCheckerRule(const std::shared_ptr<ICheckerRule<ITriggeringEntities>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITriggeringEntities).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddUserDefinedActionCheckerRule(const std::shared_ptr<ICheckerRule<IUserDefinedAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddUserDefinedValueConditionCheckerRule(const std::shared_ptr<ICheckerRule<IUserDefinedValueCondition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedValueCondition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddVehicleCheckerRule(const std::shared_ptr<ICheckerRule<IVehicle>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicle).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddVehicleCatalogLocationCheckerRule(const std::shared_ptr<ICheckerRule<IVehicleCatalogLocation>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCatalogLocation).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddVehicleCategoryDistributionCheckerRule(const std::shared_ptr<ICheckerRule<IVehicleCategoryDistribution>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistribution).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddVehicleCategoryDistributionEntryCheckerRule(const std::shared_ptr<ICheckerRule<IVehicleCategoryDistributionEntry>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistributionEntry).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddVertexCheckerRule(const std::shared_ptr<ICheckerRule<IVertex>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVertex).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddVisibilityActionCheckerRule(const std::shared_ptr<ICheckerRule<IVisibilityAction>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVisibilityAction).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddWaypointCheckerRule(const std::shared_ptr<ICheckerRule<IWaypoint>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWaypoint).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddWeatherCheckerRule(const std::shared_ptr<ICheckerRule<IWeather>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWeather).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::AddWorldPositionCheckerRule(const std::shared_ptr<ICheckerRule<IWorldPosition>> checkerRule)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWorldPosition).name()];
        checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
    }

    void ScenarioCheckerImpl::ApplyAbsoluteSpeedCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAbsoluteSpeed> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteSpeed).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteSpeed>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyAbsoluteTargetLaneCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAbsoluteTargetLane> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLane).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteTargetLane>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyAbsoluteTargetLaneOffsetCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAbsoluteTargetLaneOffset> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetLaneOffset).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteTargetLaneOffset>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyAbsoluteTargetSpeedCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAbsoluteTargetSpeed> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAbsoluteTargetSpeed).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAbsoluteTargetSpeed>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyAccelerationConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAccelerationCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAccelerationCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAccelerationCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyAcquirePositionActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAcquirePositionAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAcquirePositionAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAcquirePositionAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyActCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAct> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAct).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAct>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kManeuverGroups = object->GetManeuverGroups();
        for(auto& kListItem: kManeuverGroups)
        {
            if ( kListItem )
                ApplyManeuverGroupCheckerRules(messageLogger, kListItem);
        }
        const auto kStartTrigger = object->GetStartTrigger();
        if ( kStartTrigger)
        {
            ApplyTriggerCheckerRules(messageLogger, kStartTrigger);
        }
        const auto kStopTrigger = object->GetStopTrigger();
        if ( kStopTrigger)
        {
            ApplyTriggerCheckerRules(messageLogger, kStopTrigger);
        }
    }

    void ScenarioCheckerImpl::ApplyActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kGlobalAction = object->GetGlobalAction();
        if ( kGlobalAction)
        {
            ApplyGlobalActionCheckerRules(messageLogger, kGlobalAction);
        }
        const auto kUserDefinedAction = object->GetUserDefinedAction();
        if ( kUserDefinedAction)
        {
            ApplyUserDefinedActionCheckerRules(messageLogger, kUserDefinedAction);
        }
        const auto kPrivateAction = object->GetPrivateAction();
        if ( kPrivateAction)
        {
            ApplyPrivateActionCheckerRules(messageLogger, kPrivateAction);
        }
    }

    void ScenarioCheckerImpl::ApplyActivateControllerActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IActivateControllerAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActivateControllerAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IActivateControllerAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyActorsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IActors> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IActors).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IActors>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEntityRefs = object->GetEntityRefs();
        for(auto& kListItem: kEntityRefs)
        {
            if ( kListItem )
                ApplyEntityRefCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyAddEntityActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAddEntityAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAddEntityAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAddEntityAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyAssignControllerActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAssignControllerAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignControllerAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAssignControllerAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kController = object->GetController();
        if ( kController)
        {
            ApplyControllerCheckerRules(messageLogger, kController);
        }
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
    }

    void ScenarioCheckerImpl::ApplyAssignRouteActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAssignRouteAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAssignRouteAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAssignRouteAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kRoute = object->GetRoute();
        if ( kRoute)
        {
            ApplyRouteCheckerRules(messageLogger, kRoute);
        }
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
    }

    void ScenarioCheckerImpl::ApplyAxleCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAxle> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxle).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAxle>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyAxlesCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IAxles> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IAxles).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IAxles>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kFrontAxle = object->GetFrontAxle();
        if ( kFrontAxle)
        {
            ApplyAxleCheckerRules(messageLogger, kFrontAxle);
        }
        const auto kRearAxle = object->GetRearAxle();
        if ( kRearAxle)
        {
            ApplyAxleCheckerRules(messageLogger, kRearAxle);
        }
        const auto kAdditionalAxles = object->GetAdditionalAxles();
        for(auto& kListItem: kAdditionalAxles)
        {
            if ( kListItem )
                ApplyAxleCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyBoundingBoxCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IBoundingBox> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IBoundingBox).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IBoundingBox>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kCenter = object->GetCenter();
        if ( kCenter)
        {
            ApplyCenterCheckerRules(messageLogger, kCenter);
        }
        const auto kDimensions = object->GetDimensions();
        if ( kDimensions)
        {
            ApplyDimensionsCheckerRules(messageLogger, kDimensions);
        }
    }

    void ScenarioCheckerImpl::ApplyByEntityConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IByEntityCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByEntityCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByEntityCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTriggeringEntities = object->GetTriggeringEntities();
        if ( kTriggeringEntities)
        {
            ApplyTriggeringEntitiesCheckerRules(messageLogger, kTriggeringEntities);
        }
        const auto kEntityCondition = object->GetEntityCondition();
        if ( kEntityCondition)
        {
            ApplyEntityConditionCheckerRules(messageLogger, kEntityCondition);
        }
    }

    void ScenarioCheckerImpl::ApplyByObjectTypeCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IByObjectType> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByObjectType).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByObjectType>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyByTypeCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IByType> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByType).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByType>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyByValueConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IByValueCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IByValueCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IByValueCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterCondition = object->GetParameterCondition();
        if ( kParameterCondition)
        {
            ApplyParameterConditionCheckerRules(messageLogger, kParameterCondition);
        }
        const auto kTimeOfDayCondition = object->GetTimeOfDayCondition();
        if ( kTimeOfDayCondition)
        {
            ApplyTimeOfDayConditionCheckerRules(messageLogger, kTimeOfDayCondition);
        }
        const auto kSimulationTimeCondition = object->GetSimulationTimeCondition();
        if ( kSimulationTimeCondition)
        {
            ApplySimulationTimeConditionCheckerRules(messageLogger, kSimulationTimeCondition);
        }
        const auto kStoryboardElementStateCondition = object->GetStoryboardElementStateCondition();
        if ( kStoryboardElementStateCondition)
        {
            ApplyStoryboardElementStateConditionCheckerRules(messageLogger, kStoryboardElementStateCondition);
        }
        const auto kUserDefinedValueCondition = object->GetUserDefinedValueCondition();
        if ( kUserDefinedValueCondition)
        {
            ApplyUserDefinedValueConditionCheckerRules(messageLogger, kUserDefinedValueCondition);
        }
        const auto kTrafficSignalCondition = object->GetTrafficSignalCondition();
        if ( kTrafficSignalCondition)
        {
            ApplyTrafficSignalConditionCheckerRules(messageLogger, kTrafficSignalCondition);
        }
        const auto kTrafficSignalControllerCondition = object->GetTrafficSignalControllerCondition();
        if ( kTrafficSignalControllerCondition)
        {
            ApplyTrafficSignalControllerConditionCheckerRules(messageLogger, kTrafficSignalControllerCondition);
        }
    }

    void ScenarioCheckerImpl::ApplyCatalogCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICatalog> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalog).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalog>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kVehicles = object->GetVehicles();
        for(auto& kListItem: kVehicles)
        {
            if ( kListItem )
                ApplyVehicleCheckerRules(messageLogger, kListItem);
        }
        const auto kControllers = object->GetControllers();
        for(auto& kListItem: kControllers)
        {
            if ( kListItem )
                ApplyControllerCheckerRules(messageLogger, kListItem);
        }
        const auto kPedestrians = object->GetPedestrians();
        for(auto& kListItem: kPedestrians)
        {
            if ( kListItem )
                ApplyPedestrianCheckerRules(messageLogger, kListItem);
        }
        const auto kMiscObjects = object->GetMiscObjects();
        for(auto& kListItem: kMiscObjects)
        {
            if ( kListItem )
                ApplyMiscObjectCheckerRules(messageLogger, kListItem);
        }
        const auto kEnvironments = object->GetEnvironments();
        for(auto& kListItem: kEnvironments)
        {
            if ( kListItem )
                ApplyEnvironmentCheckerRules(messageLogger, kListItem);
        }
        const auto kManeuvers = object->GetManeuvers();
        for(auto& kListItem: kManeuvers)
        {
            if ( kListItem )
                ApplyManeuverCheckerRules(messageLogger, kListItem);
        }
        const auto kTrajectories = object->GetTrajectories();
        for(auto& kListItem: kTrajectories)
        {
            if ( kListItem )
                ApplyTrajectoryCheckerRules(messageLogger, kListItem);
        }
        const auto kRoutes = object->GetRoutes();
        for(auto& kListItem: kRoutes)
        {
            if ( kListItem )
                ApplyRouteCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyCatalogDefinitionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICatalogDefinition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogDefinition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalogDefinition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kCatalog = object->GetCatalog();
        if ( kCatalog)
        {
            ApplyCatalogCheckerRules(messageLogger, kCatalog);
        }
    }

    void ScenarioCheckerImpl::ApplyCatalogLocationsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICatalogLocations> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogLocations).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalogLocations>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kVehicleCatalog = object->GetVehicleCatalog();
        if ( kVehicleCatalog)
        {
            ApplyVehicleCatalogLocationCheckerRules(messageLogger, kVehicleCatalog);
        }
        const auto kControllerCatalog = object->GetControllerCatalog();
        if ( kControllerCatalog)
        {
            ApplyControllerCatalogLocationCheckerRules(messageLogger, kControllerCatalog);
        }
        const auto kPedestrianCatalog = object->GetPedestrianCatalog();
        if ( kPedestrianCatalog)
        {
            ApplyPedestrianCatalogLocationCheckerRules(messageLogger, kPedestrianCatalog);
        }
        const auto kMiscObjectCatalog = object->GetMiscObjectCatalog();
        if ( kMiscObjectCatalog)
        {
            ApplyMiscObjectCatalogLocationCheckerRules(messageLogger, kMiscObjectCatalog);
        }
        const auto kEnvironmentCatalog = object->GetEnvironmentCatalog();
        if ( kEnvironmentCatalog)
        {
            ApplyEnvironmentCatalogLocationCheckerRules(messageLogger, kEnvironmentCatalog);
        }
        const auto kManeuverCatalog = object->GetManeuverCatalog();
        if ( kManeuverCatalog)
        {
            ApplyManeuverCatalogLocationCheckerRules(messageLogger, kManeuverCatalog);
        }
        const auto kTrajectoryCatalog = object->GetTrajectoryCatalog();
        if ( kTrajectoryCatalog)
        {
            ApplyTrajectoryCatalogLocationCheckerRules(messageLogger, kTrajectoryCatalog);
        }
        const auto kRouteCatalog = object->GetRouteCatalog();
        if ( kRouteCatalog)
        {
            ApplyRouteCatalogLocationCheckerRules(messageLogger, kRouteCatalog);
        }
    }

    void ScenarioCheckerImpl::ApplyCatalogReferenceCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICatalogReference> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICatalogReference).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICatalogReference>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterAssignments = object->GetParameterAssignments();
        for(auto& kListItem: kParameterAssignments)
        {
            if ( kListItem )
                ApplyParameterAssignmentCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyCenterCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICenter> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICenter).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICenter>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyCentralSwarmObjectCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICentralSwarmObject> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICentralSwarmObject).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICentralSwarmObject>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyClothoidCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IClothoid> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IClothoid).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IClothoid>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyCollisionConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICollisionCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICollisionCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICollisionCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEntityRef = object->GetEntityRef();
        if ( kEntityRef)
        {
            ApplyEntityRefCheckerRules(messageLogger, kEntityRef);
        }
        const auto kByType = object->GetByType();
        if ( kByType)
        {
            ApplyByObjectTypeCheckerRules(messageLogger, kByType);
        }
    }

    void ScenarioCheckerImpl::ApplyConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kByEntityCondition = object->GetByEntityCondition();
        if ( kByEntityCondition)
        {
            ApplyByEntityConditionCheckerRules(messageLogger, kByEntityCondition);
        }
        const auto kByValueCondition = object->GetByValueCondition();
        if ( kByValueCondition)
        {
            ApplyByValueConditionCheckerRules(messageLogger, kByValueCondition);
        }
    }

    void ScenarioCheckerImpl::ApplyConditionGroupCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IConditionGroup> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IConditionGroup).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IConditionGroup>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kConditions = object->GetConditions();
        for(auto& kListItem: kConditions)
        {
            if ( kListItem )
                ApplyConditionCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyControlPointCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IControlPoint> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControlPoint).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControlPoint>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyControllerCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IController> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IController).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IController>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kProperties = object->GetProperties();
        if ( kProperties)
        {
            ApplyPropertiesCheckerRules(messageLogger, kProperties);
        }
    }

    void ScenarioCheckerImpl::ApplyControllerActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IControllerAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kAssignControllerAction = object->GetAssignControllerAction();
        if ( kAssignControllerAction)
        {
            ApplyAssignControllerActionCheckerRules(messageLogger, kAssignControllerAction);
        }
        const auto kOverrideControllerValueAction = object->GetOverrideControllerValueAction();
        if ( kOverrideControllerValueAction)
        {
            ApplyOverrideControllerValueActionCheckerRules(messageLogger, kOverrideControllerValueAction);
        }
    }

    void ScenarioCheckerImpl::ApplyControllerCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IControllerCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyControllerDistributionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IControllerDistribution> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistribution).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerDistribution>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kControllerDistributionEntries = object->GetControllerDistributionEntries();
        for(auto& kListItem: kControllerDistributionEntries)
        {
            if ( kListItem )
                ApplyControllerDistributionEntryCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyControllerDistributionEntryCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IControllerDistributionEntry> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IControllerDistributionEntry).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IControllerDistributionEntry>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kController = object->GetController();
        if ( kController)
        {
            ApplyControllerCheckerRules(messageLogger, kController);
        }
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
    }

    void ScenarioCheckerImpl::ApplyCustomCommandActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ICustomCommandAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ICustomCommandAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ICustomCommandAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyDeleteEntityActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IDeleteEntityAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDeleteEntityAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDeleteEntityAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyDimensionsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IDimensions> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDimensions).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDimensions>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyDirectoryCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IDirectory> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDirectory).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDirectory>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyDistanceConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IDistanceCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDistanceCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDistanceCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyDynamicConstraintsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IDynamicConstraints> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IDynamicConstraints).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IDynamicConstraints>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyEndOfRoadConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEndOfRoadCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEndOfRoadCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEndOfRoadCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyEntitiesCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEntities> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntities).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntities>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kScenarioObjects = object->GetScenarioObjects();
        for(auto& kListItem: kScenarioObjects)
        {
            if ( kListItem )
                ApplyScenarioObjectCheckerRules(messageLogger, kListItem);
        }
        const auto kEntitySelections = object->GetEntitySelections();
        for(auto& kListItem: kEntitySelections)
        {
            if ( kListItem )
                ApplyEntitySelectionCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyEntityActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEntityAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kAddEntityAction = object->GetAddEntityAction();
        if ( kAddEntityAction)
        {
            ApplyAddEntityActionCheckerRules(messageLogger, kAddEntityAction);
        }
        const auto kDeleteEntityAction = object->GetDeleteEntityAction();
        if ( kDeleteEntityAction)
        {
            ApplyDeleteEntityActionCheckerRules(messageLogger, kDeleteEntityAction);
        }
    }

    void ScenarioCheckerImpl::ApplyEntityConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEntityCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEndOfRoadCondition = object->GetEndOfRoadCondition();
        if ( kEndOfRoadCondition)
        {
            ApplyEndOfRoadConditionCheckerRules(messageLogger, kEndOfRoadCondition);
        }
        const auto kCollisionCondition = object->GetCollisionCondition();
        if ( kCollisionCondition)
        {
            ApplyCollisionConditionCheckerRules(messageLogger, kCollisionCondition);
        }
        const auto kOffroadCondition = object->GetOffroadCondition();
        if ( kOffroadCondition)
        {
            ApplyOffroadConditionCheckerRules(messageLogger, kOffroadCondition);
        }
        const auto kTimeHeadwayCondition = object->GetTimeHeadwayCondition();
        if ( kTimeHeadwayCondition)
        {
            ApplyTimeHeadwayConditionCheckerRules(messageLogger, kTimeHeadwayCondition);
        }
        const auto kTimeToCollisionCondition = object->GetTimeToCollisionCondition();
        if ( kTimeToCollisionCondition)
        {
            ApplyTimeToCollisionConditionCheckerRules(messageLogger, kTimeToCollisionCondition);
        }
        const auto kAccelerationCondition = object->GetAccelerationCondition();
        if ( kAccelerationCondition)
        {
            ApplyAccelerationConditionCheckerRules(messageLogger, kAccelerationCondition);
        }
        const auto kStandStillCondition = object->GetStandStillCondition();
        if ( kStandStillCondition)
        {
            ApplyStandStillConditionCheckerRules(messageLogger, kStandStillCondition);
        }
        const auto kSpeedCondition = object->GetSpeedCondition();
        if ( kSpeedCondition)
        {
            ApplySpeedConditionCheckerRules(messageLogger, kSpeedCondition);
        }
        const auto kRelativeSpeedCondition = object->GetRelativeSpeedCondition();
        if ( kRelativeSpeedCondition)
        {
            ApplyRelativeSpeedConditionCheckerRules(messageLogger, kRelativeSpeedCondition);
        }
        const auto kTraveledDistanceCondition = object->GetTraveledDistanceCondition();
        if ( kTraveledDistanceCondition)
        {
            ApplyTraveledDistanceConditionCheckerRules(messageLogger, kTraveledDistanceCondition);
        }
        const auto kReachPositionCondition = object->GetReachPositionCondition();
        if ( kReachPositionCondition)
        {
            ApplyReachPositionConditionCheckerRules(messageLogger, kReachPositionCondition);
        }
        const auto kDistanceCondition = object->GetDistanceCondition();
        if ( kDistanceCondition)
        {
            ApplyDistanceConditionCheckerRules(messageLogger, kDistanceCondition);
        }
        const auto kRelativeDistanceCondition = object->GetRelativeDistanceCondition();
        if ( kRelativeDistanceCondition)
        {
            ApplyRelativeDistanceConditionCheckerRules(messageLogger, kRelativeDistanceCondition);
        }
    }

    void ScenarioCheckerImpl::ApplyEntityObjectCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEntityObject> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityObject).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityObject>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
        const auto kVehicle = object->GetVehicle();
        if ( kVehicle)
        {
            ApplyVehicleCheckerRules(messageLogger, kVehicle);
        }
        const auto kPedestrian = object->GetPedestrian();
        if ( kPedestrian)
        {
            ApplyPedestrianCheckerRules(messageLogger, kPedestrian);
        }
        const auto kMiscObject = object->GetMiscObject();
        if ( kMiscObject)
        {
            ApplyMiscObjectCheckerRules(messageLogger, kMiscObject);
        }
    }

    void ScenarioCheckerImpl::ApplyEntityRefCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEntityRef> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntityRef).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntityRef>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyEntitySelectionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEntitySelection> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEntitySelection).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEntitySelection>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kMembers = object->GetMembers();
        if ( kMembers)
        {
            ApplySelectedEntitiesCheckerRules(messageLogger, kMembers);
        }
    }

    void ScenarioCheckerImpl::ApplyEnvironmentCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEnvironment> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironment).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEnvironment>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kTimeOfDay = object->GetTimeOfDay();
        if ( kTimeOfDay)
        {
            ApplyTimeOfDayCheckerRules(messageLogger, kTimeOfDay);
        }
        const auto kWeather = object->GetWeather();
        if ( kWeather)
        {
            ApplyWeatherCheckerRules(messageLogger, kWeather);
        }
        const auto kRoadCondition = object->GetRoadCondition();
        if ( kRoadCondition)
        {
            ApplyRoadConditionCheckerRules(messageLogger, kRoadCondition);
        }
    }

    void ScenarioCheckerImpl::ApplyEnvironmentActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEnvironmentAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEnvironmentAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEnvironment = object->GetEnvironment();
        if ( kEnvironment)
        {
            ApplyEnvironmentCheckerRules(messageLogger, kEnvironment);
        }
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
    }

    void ScenarioCheckerImpl::ApplyEnvironmentCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEnvironmentCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEnvironmentCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEnvironmentCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyEventCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IEvent> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IEvent).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IEvent>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kActions = object->GetActions();
        for(auto& kListItem: kActions)
        {
            if ( kListItem )
                ApplyActionCheckerRules(messageLogger, kListItem);
        }
        const auto kStartTrigger = object->GetStartTrigger();
        if ( kStartTrigger)
        {
            ApplyTriggerCheckerRules(messageLogger, kStartTrigger);
        }
    }

    void ScenarioCheckerImpl::ApplyFileCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IFile> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFile).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFile>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyFileHeaderCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IFileHeader> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFileHeader).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFileHeader>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyFinalSpeedCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IFinalSpeed> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFinalSpeed).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFinalSpeed>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kAbsoluteSpeed = object->GetAbsoluteSpeed();
        if ( kAbsoluteSpeed)
        {
            ApplyAbsoluteSpeedCheckerRules(messageLogger, kAbsoluteSpeed);
        }
        const auto kRelativeSpeedToMaster = object->GetRelativeSpeedToMaster();
        if ( kRelativeSpeedToMaster)
        {
            ApplyRelativeSpeedToMasterCheckerRules(messageLogger, kRelativeSpeedToMaster);
        }
    }

    void ScenarioCheckerImpl::ApplyFogCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IFog> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFog).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFog>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kBoundingBox = object->GetBoundingBox();
        if ( kBoundingBox)
        {
            ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox);
        }
    }

    void ScenarioCheckerImpl::ApplyFollowTrajectoryActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IFollowTrajectoryAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IFollowTrajectoryAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IFollowTrajectoryAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTrajectory = object->GetTrajectory();
        if ( kTrajectory)
        {
            ApplyTrajectoryCheckerRules(messageLogger, kTrajectory);
        }
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
        const auto kTimeReference = object->GetTimeReference();
        if ( kTimeReference)
        {
            ApplyTimeReferenceCheckerRules(messageLogger, kTimeReference);
        }
        const auto kTrajectoryFollowingMode = object->GetTrajectoryFollowingMode();
        if ( kTrajectoryFollowingMode)
        {
            ApplyTrajectoryFollowingModeCheckerRules(messageLogger, kTrajectoryFollowingMode);
        }
    }

    void ScenarioCheckerImpl::ApplyGlobalActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IGlobalAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IGlobalAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IGlobalAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEnvironmentAction = object->GetEnvironmentAction();
        if ( kEnvironmentAction)
        {
            ApplyEnvironmentActionCheckerRules(messageLogger, kEnvironmentAction);
        }
        const auto kEntityAction = object->GetEntityAction();
        if ( kEntityAction)
        {
            ApplyEntityActionCheckerRules(messageLogger, kEntityAction);
        }
        const auto kParameterAction = object->GetParameterAction();
        if ( kParameterAction)
        {
            ApplyParameterActionCheckerRules(messageLogger, kParameterAction);
        }
        const auto kInfrastructureAction = object->GetInfrastructureAction();
        if ( kInfrastructureAction)
        {
            ApplyInfrastructureActionCheckerRules(messageLogger, kInfrastructureAction);
        }
        const auto kTrafficAction = object->GetTrafficAction();
        if ( kTrafficAction)
        {
            ApplyTrafficActionCheckerRules(messageLogger, kTrafficAction);
        }
    }

    void ScenarioCheckerImpl::ApplyInRoutePositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IInRoutePosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInRoutePosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInRoutePosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kFromCurrentEntity = object->GetFromCurrentEntity();
        if ( kFromCurrentEntity)
        {
            ApplyPositionOfCurrentEntityCheckerRules(messageLogger, kFromCurrentEntity);
        }
        const auto kFromRoadCoordinates = object->GetFromRoadCoordinates();
        if ( kFromRoadCoordinates)
        {
            ApplyPositionInRoadCoordinatesCheckerRules(messageLogger, kFromRoadCoordinates);
        }
        const auto kFromLaneCoordinates = object->GetFromLaneCoordinates();
        if ( kFromLaneCoordinates)
        {
            ApplyPositionInLaneCoordinatesCheckerRules(messageLogger, kFromLaneCoordinates);
        }
    }

    void ScenarioCheckerImpl::ApplyInfrastructureActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IInfrastructureAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInfrastructureAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInfrastructureAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTrafficSignalAction = object->GetTrafficSignalAction();
        if ( kTrafficSignalAction)
        {
            ApplyTrafficSignalActionCheckerRules(messageLogger, kTrafficSignalAction);
        }
    }

    void ScenarioCheckerImpl::ApplyInitCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IInit> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInit).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInit>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kActions = object->GetActions();
        if ( kActions)
        {
            ApplyInitActionsCheckerRules(messageLogger, kActions);
        }
    }

    void ScenarioCheckerImpl::ApplyInitActionsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IInitActions> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IInitActions).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IInitActions>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kGlobalActions = object->GetGlobalActions();
        for(auto& kListItem: kGlobalActions)
        {
            if ( kListItem )
                ApplyGlobalActionCheckerRules(messageLogger, kListItem);
        }
        const auto kUserDefinedActions = object->GetUserDefinedActions();
        for(auto& kListItem: kUserDefinedActions)
        {
            if ( kListItem )
                ApplyUserDefinedActionCheckerRules(messageLogger, kListItem);
        }
        const auto kPrivates = object->GetPrivates();
        for(auto& kListItem: kPrivates)
        {
            if ( kListItem )
                ApplyPrivateCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyKnotCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IKnot> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IKnot).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IKnot>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyLaneChangeActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILaneChangeAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneChangeAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kLaneChangeActionDynamics = object->GetLaneChangeActionDynamics();
        if ( kLaneChangeActionDynamics)
        {
            ApplyTransitionDynamicsCheckerRules(messageLogger, kLaneChangeActionDynamics);
        }
        const auto kLaneChangeTarget = object->GetLaneChangeTarget();
        if ( kLaneChangeTarget)
        {
            ApplyLaneChangeTargetCheckerRules(messageLogger, kLaneChangeTarget);
        }
    }

    void ScenarioCheckerImpl::ApplyLaneChangeTargetCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILaneChangeTarget> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneChangeTarget).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneChangeTarget>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kRelativeTargetLane = object->GetRelativeTargetLane();
        if ( kRelativeTargetLane)
        {
            ApplyRelativeTargetLaneCheckerRules(messageLogger, kRelativeTargetLane);
        }
        const auto kAbsoluteTargetLane = object->GetAbsoluteTargetLane();
        if ( kAbsoluteTargetLane)
        {
            ApplyAbsoluteTargetLaneCheckerRules(messageLogger, kAbsoluteTargetLane);
        }
    }

    void ScenarioCheckerImpl::ApplyLaneOffsetActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILaneOffsetAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneOffsetAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kLaneOffsetActionDynamics = object->GetLaneOffsetActionDynamics();
        if ( kLaneOffsetActionDynamics)
        {
            ApplyLaneOffsetActionDynamicsCheckerRules(messageLogger, kLaneOffsetActionDynamics);
        }
        const auto kLaneOffsetTarget = object->GetLaneOffsetTarget();
        if ( kLaneOffsetTarget)
        {
            ApplyLaneOffsetTargetCheckerRules(messageLogger, kLaneOffsetTarget);
        }
    }

    void ScenarioCheckerImpl::ApplyLaneOffsetActionDynamicsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILaneOffsetActionDynamics> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetActionDynamics).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneOffsetActionDynamics>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyLaneOffsetTargetCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILaneOffsetTarget> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILaneOffsetTarget).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILaneOffsetTarget>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kRelativeTargetLaneOffset = object->GetRelativeTargetLaneOffset();
        if ( kRelativeTargetLaneOffset)
        {
            ApplyRelativeTargetLaneOffsetCheckerRules(messageLogger, kRelativeTargetLaneOffset);
        }
        const auto kAbsoluteTargetLaneOffset = object->GetAbsoluteTargetLaneOffset();
        if ( kAbsoluteTargetLaneOffset)
        {
            ApplyAbsoluteTargetLaneOffsetCheckerRules(messageLogger, kAbsoluteTargetLaneOffset);
        }
    }

    void ScenarioCheckerImpl::ApplyLanePositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILanePosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILanePosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILanePosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kOrientation = object->GetOrientation();
        if ( kOrientation)
        {
            ApplyOrientationCheckerRules(messageLogger, kOrientation);
        }
    }

    void ScenarioCheckerImpl::ApplyLateralActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILateralAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILateralAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kLaneChangeAction = object->GetLaneChangeAction();
        if ( kLaneChangeAction)
        {
            ApplyLaneChangeActionCheckerRules(messageLogger, kLaneChangeAction);
        }
        const auto kLaneOffsetAction = object->GetLaneOffsetAction();
        if ( kLaneOffsetAction)
        {
            ApplyLaneOffsetActionCheckerRules(messageLogger, kLaneOffsetAction);
        }
        const auto kLateralDistanceAction = object->GetLateralDistanceAction();
        if ( kLateralDistanceAction)
        {
            ApplyLateralDistanceActionCheckerRules(messageLogger, kLateralDistanceAction);
        }
    }

    void ScenarioCheckerImpl::ApplyLateralDistanceActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILateralDistanceAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILateralDistanceAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILateralDistanceAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDynamicConstraints = object->GetDynamicConstraints();
        if ( kDynamicConstraints)
        {
            ApplyDynamicConstraintsCheckerRules(messageLogger, kDynamicConstraints);
        }
    }

    void ScenarioCheckerImpl::ApplyLongitudinalActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILongitudinalAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILongitudinalAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kSpeedAction = object->GetSpeedAction();
        if ( kSpeedAction)
        {
            ApplySpeedActionCheckerRules(messageLogger, kSpeedAction);
        }
        const auto kLongitudinalDistanceAction = object->GetLongitudinalDistanceAction();
        if ( kLongitudinalDistanceAction)
        {
            ApplyLongitudinalDistanceActionCheckerRules(messageLogger, kLongitudinalDistanceAction);
        }
    }

    void ScenarioCheckerImpl::ApplyLongitudinalDistanceActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ILongitudinalDistanceAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ILongitudinalDistanceAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ILongitudinalDistanceAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDynamicConstraints = object->GetDynamicConstraints();
        if ( kDynamicConstraints)
        {
            ApplyDynamicConstraintsCheckerRules(messageLogger, kDynamicConstraints);
        }
    }

    void ScenarioCheckerImpl::ApplyManeuverCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IManeuver> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuver).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IManeuver>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kEvents = object->GetEvents();
        for(auto& kListItem: kEvents)
        {
            if ( kListItem )
                ApplyEventCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyManeuverCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IManeuverCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IManeuverCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyManeuverGroupCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IManeuverGroup> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IManeuverGroup).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IManeuverGroup>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kActors = object->GetActors();
        if ( kActors)
        {
            ApplyActorsCheckerRules(messageLogger, kActors);
        }
        const auto kCatalogReferences = object->GetCatalogReferences();
        for(auto& kListItem: kCatalogReferences)
        {
            if ( kListItem )
                ApplyCatalogReferenceCheckerRules(messageLogger, kListItem);
        }
        const auto kManeuvers = object->GetManeuvers();
        for(auto& kListItem: kManeuvers)
        {
            if ( kListItem )
                ApplyManeuverCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyMiscObjectCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IMiscObject> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObject).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IMiscObject>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kBoundingBox = object->GetBoundingBox();
        if ( kBoundingBox)
        {
            ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox);
        }
        const auto kProperties = object->GetProperties();
        if ( kProperties)
        {
            ApplyPropertiesCheckerRules(messageLogger, kProperties);
        }
    }

    void ScenarioCheckerImpl::ApplyMiscObjectCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IMiscObjectCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IMiscObjectCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IMiscObjectCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyModifyRuleCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IModifyRule> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IModifyRule).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IModifyRule>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kAddValue = object->GetAddValue();
        if ( kAddValue)
        {
            ApplyParameterAddValueRuleCheckerRules(messageLogger, kAddValue);
        }
        const auto kMultiplyByValue = object->GetMultiplyByValue();
        if ( kMultiplyByValue)
        {
            ApplyParameterMultiplyByValueRuleCheckerRules(messageLogger, kMultiplyByValue);
        }
    }

    void ScenarioCheckerImpl::ApplyNoneCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<INone> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(INone).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<INone>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyNurbsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<INurbs> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(INurbs).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<INurbs>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kControlPoints = object->GetControlPoints();
        for(auto& kListItem: kControlPoints)
        {
            if ( kListItem )
                ApplyControlPointCheckerRules(messageLogger, kListItem);
        }
        const auto kKnots = object->GetKnots();
        for(auto& kListItem: kKnots)
        {
            if ( kListItem )
                ApplyKnotCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyObjectControllerCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IObjectController> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IObjectController).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IObjectController>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
        const auto kController = object->GetController();
        if ( kController)
        {
            ApplyControllerCheckerRules(messageLogger, kController);
        }
    }

    void ScenarioCheckerImpl::ApplyOffroadConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOffroadCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOffroadCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOffroadCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyOpenScenarioCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOpenScenario> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenario).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOpenScenario>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kFileHeader = object->GetFileHeader();
        if ( kFileHeader)
        {
            ApplyFileHeaderCheckerRules(messageLogger, kFileHeader);
        }
        const auto kOpenScenarioCategory = object->GetOpenScenarioCategory();
        if ( kOpenScenarioCategory)
        {
            ApplyOpenScenarioCategoryCheckerRules(messageLogger, kOpenScenarioCategory);
        }
    }

    void ScenarioCheckerImpl::ApplyOpenScenarioCategoryCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOpenScenarioCategory> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOpenScenarioCategory).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOpenScenarioCategory>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kScenarioDefinition = object->GetScenarioDefinition();
        if ( kScenarioDefinition)
        {
            ApplyScenarioDefinitionCheckerRules(messageLogger, kScenarioDefinition);
        }
        const auto kCatalogDefinition = object->GetCatalogDefinition();
        if ( kCatalogDefinition)
        {
            ApplyCatalogDefinitionCheckerRules(messageLogger, kCatalogDefinition);
        }
    }

    void ScenarioCheckerImpl::ApplyOrientationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOrientation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOrientation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOrientation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyOverrideBrakeActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOverrideBrakeAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideBrakeAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideBrakeAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyOverrideClutchActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOverrideClutchAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideClutchAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideClutchAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyOverrideControllerValueActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOverrideControllerValueAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideControllerValueAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideControllerValueAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kThrottle = object->GetThrottle();
        if ( kThrottle)
        {
            ApplyOverrideThrottleActionCheckerRules(messageLogger, kThrottle);
        }
        const auto kBrake = object->GetBrake();
        if ( kBrake)
        {
            ApplyOverrideBrakeActionCheckerRules(messageLogger, kBrake);
        }
        const auto kClutch = object->GetClutch();
        if ( kClutch)
        {
            ApplyOverrideClutchActionCheckerRules(messageLogger, kClutch);
        }
        const auto kParkingBrake = object->GetParkingBrake();
        if ( kParkingBrake)
        {
            ApplyOverrideParkingBrakeActionCheckerRules(messageLogger, kParkingBrake);
        }
        const auto kSteeringWheel = object->GetSteeringWheel();
        if ( kSteeringWheel)
        {
            ApplyOverrideSteeringWheelActionCheckerRules(messageLogger, kSteeringWheel);
        }
        const auto kGear = object->GetGear();
        if ( kGear)
        {
            ApplyOverrideGearActionCheckerRules(messageLogger, kGear);
        }
    }

    void ScenarioCheckerImpl::ApplyOverrideGearActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOverrideGearAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideGearAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideGearAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyOverrideParkingBrakeActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOverrideParkingBrakeAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideParkingBrakeAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideParkingBrakeAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyOverrideSteeringWheelActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOverrideSteeringWheelAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideSteeringWheelAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideSteeringWheelAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyOverrideThrottleActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IOverrideThrottleAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IOverrideThrottleAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IOverrideThrottleAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyParameterActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kSetAction = object->GetSetAction();
        if ( kSetAction)
        {
            ApplyParameterSetActionCheckerRules(messageLogger, kSetAction);
        }
        const auto kModifyAction = object->GetModifyAction();
        if ( kModifyAction)
        {
            ApplyParameterModifyActionCheckerRules(messageLogger, kModifyAction);
        }
    }

    void ScenarioCheckerImpl::ApplyParameterAddValueRuleCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterAddValueRule> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAddValueRule).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterAddValueRule>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyParameterAssignmentCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterAssignment> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterAssignment).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterAssignment>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyParameterConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyParameterDeclarationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterDeclaration> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterDeclaration).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterDeclaration>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyParameterModifyActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterModifyAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterModifyAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterModifyAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kRule = object->GetRule();
        if ( kRule)
        {
            ApplyModifyRuleCheckerRules(messageLogger, kRule);
        }
    }

    void ScenarioCheckerImpl::ApplyParameterMultiplyByValueRuleCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterMultiplyByValueRule> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterMultiplyByValueRule).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterMultiplyByValueRule>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyParameterSetActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IParameterSetAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IParameterSetAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IParameterSetAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyPedestrianCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPedestrian> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrian).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPedestrian>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kBoundingBox = object->GetBoundingBox();
        if ( kBoundingBox)
        {
            ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox);
        }
        const auto kProperties = object->GetProperties();
        if ( kProperties)
        {
            ApplyPropertiesCheckerRules(messageLogger, kProperties);
        }
    }

    void ScenarioCheckerImpl::ApplyPedestrianCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPedestrianCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPedestrianCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPedestrianCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyPerformanceCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPerformance> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPerformance).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPerformance>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyPhaseCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPhase> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPhase).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPhase>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTrafficSignalStates = object->GetTrafficSignalStates();
        for(auto& kListItem: kTrafficSignalStates)
        {
            if ( kListItem )
                ApplyTrafficSignalStateCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyPolylineCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPolyline> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPolyline).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPolyline>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kVertices = object->GetVertices();
        for(auto& kListItem: kVertices)
        {
            if ( kListItem )
                ApplyVertexCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyPositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kWorldPosition = object->GetWorldPosition();
        if ( kWorldPosition)
        {
            ApplyWorldPositionCheckerRules(messageLogger, kWorldPosition);
        }
        const auto kRelativeWorldPosition = object->GetRelativeWorldPosition();
        if ( kRelativeWorldPosition)
        {
            ApplyRelativeWorldPositionCheckerRules(messageLogger, kRelativeWorldPosition);
        }
        const auto kRelativeObjectPosition = object->GetRelativeObjectPosition();
        if ( kRelativeObjectPosition)
        {
            ApplyRelativeObjectPositionCheckerRules(messageLogger, kRelativeObjectPosition);
        }
        const auto kRoadPosition = object->GetRoadPosition();
        if ( kRoadPosition)
        {
            ApplyRoadPositionCheckerRules(messageLogger, kRoadPosition);
        }
        const auto kRelativeRoadPosition = object->GetRelativeRoadPosition();
        if ( kRelativeRoadPosition)
        {
            ApplyRelativeRoadPositionCheckerRules(messageLogger, kRelativeRoadPosition);
        }
        const auto kLanePosition = object->GetLanePosition();
        if ( kLanePosition)
        {
            ApplyLanePositionCheckerRules(messageLogger, kLanePosition);
        }
        const auto kRelativeLanePosition = object->GetRelativeLanePosition();
        if ( kRelativeLanePosition)
        {
            ApplyRelativeLanePositionCheckerRules(messageLogger, kRelativeLanePosition);
        }
        const auto kRoutePosition = object->GetRoutePosition();
        if ( kRoutePosition)
        {
            ApplyRoutePositionCheckerRules(messageLogger, kRoutePosition);
        }
    }

    void ScenarioCheckerImpl::ApplyPositionInLaneCoordinatesCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPositionInLaneCoordinates> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInLaneCoordinates).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPositionInLaneCoordinates>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyPositionInRoadCoordinatesCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPositionInRoadCoordinates> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionInRoadCoordinates).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPositionInRoadCoordinates>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyPositionOfCurrentEntityCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPositionOfCurrentEntity> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPositionOfCurrentEntity).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPositionOfCurrentEntity>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyPrecipitationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPrecipitation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrecipitation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPrecipitation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyPrivateCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPrivate> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivate).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPrivate>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPrivateActions = object->GetPrivateActions();
        for(auto& kListItem: kPrivateActions)
        {
            if ( kListItem )
                ApplyPrivateActionCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyPrivateActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IPrivateAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IPrivateAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IPrivateAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kLongitudinalAction = object->GetLongitudinalAction();
        if ( kLongitudinalAction)
        {
            ApplyLongitudinalActionCheckerRules(messageLogger, kLongitudinalAction);
        }
        const auto kLateralAction = object->GetLateralAction();
        if ( kLateralAction)
        {
            ApplyLateralActionCheckerRules(messageLogger, kLateralAction);
        }
        const auto kVisibilityAction = object->GetVisibilityAction();
        if ( kVisibilityAction)
        {
            ApplyVisibilityActionCheckerRules(messageLogger, kVisibilityAction);
        }
        const auto kSynchronizeAction = object->GetSynchronizeAction();
        if ( kSynchronizeAction)
        {
            ApplySynchronizeActionCheckerRules(messageLogger, kSynchronizeAction);
        }
        const auto kActivateControllerAction = object->GetActivateControllerAction();
        if ( kActivateControllerAction)
        {
            ApplyActivateControllerActionCheckerRules(messageLogger, kActivateControllerAction);
        }
        const auto kControllerAction = object->GetControllerAction();
        if ( kControllerAction)
        {
            ApplyControllerActionCheckerRules(messageLogger, kControllerAction);
        }
        const auto kTeleportAction = object->GetTeleportAction();
        if ( kTeleportAction)
        {
            ApplyTeleportActionCheckerRules(messageLogger, kTeleportAction);
        }
        const auto kRoutingAction = object->GetRoutingAction();
        if ( kRoutingAction)
        {
            ApplyRoutingActionCheckerRules(messageLogger, kRoutingAction);
        }
    }

    void ScenarioCheckerImpl::ApplyPropertiesCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IProperties> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperties).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IProperties>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kProperties = object->GetProperties();
        for(auto& kListItem: kProperties)
        {
            if ( kListItem )
                ApplyPropertyCheckerRules(messageLogger, kListItem);
        }
        const auto kFiles = object->GetFiles();
        for(auto& kListItem: kFiles)
        {
            if ( kListItem )
                ApplyFileCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyPropertyCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IProperty> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IProperty).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IProperty>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyReachPositionConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IReachPositionCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IReachPositionCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IReachPositionCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyRelativeDistanceConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeDistanceCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeDistanceCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeDistanceCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyRelativeLanePositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeLanePosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeLanePosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeLanePosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kOrientation = object->GetOrientation();
        if ( kOrientation)
        {
            ApplyOrientationCheckerRules(messageLogger, kOrientation);
        }
    }

    void ScenarioCheckerImpl::ApplyRelativeObjectPositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeObjectPosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeObjectPosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeObjectPosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kOrientation = object->GetOrientation();
        if ( kOrientation)
        {
            ApplyOrientationCheckerRules(messageLogger, kOrientation);
        }
    }

    void ScenarioCheckerImpl::ApplyRelativeRoadPositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeRoadPosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeRoadPosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeRoadPosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kOrientation = object->GetOrientation();
        if ( kOrientation)
        {
            ApplyOrientationCheckerRules(messageLogger, kOrientation);
        }
    }

    void ScenarioCheckerImpl::ApplyRelativeSpeedConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeSpeedCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeSpeedCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyRelativeSpeedToMasterCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeSpeedToMaster> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeSpeedToMaster).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeSpeedToMaster>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyRelativeTargetLaneCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeTargetLane> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLane).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeTargetLane>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyRelativeTargetLaneOffsetCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeTargetLaneOffset> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetLaneOffset).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeTargetLaneOffset>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyRelativeTargetSpeedCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeTargetSpeed> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeTargetSpeed).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeTargetSpeed>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyRelativeWorldPositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRelativeWorldPosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRelativeWorldPosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRelativeWorldPosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kOrientation = object->GetOrientation();
        if ( kOrientation)
        {
            ApplyOrientationCheckerRules(messageLogger, kOrientation);
        }
    }

    void ScenarioCheckerImpl::ApplyRoadConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRoadCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoadCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kProperties = object->GetProperties();
        if ( kProperties)
        {
            ApplyPropertiesCheckerRules(messageLogger, kProperties);
        }
    }

    void ScenarioCheckerImpl::ApplyRoadNetworkCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRoadNetwork> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadNetwork).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoadNetwork>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kLogicFile = object->GetLogicFile();
        if ( kLogicFile)
        {
            ApplyFileCheckerRules(messageLogger, kLogicFile);
        }
        const auto kSceneGraphFile = object->GetSceneGraphFile();
        if ( kSceneGraphFile)
        {
            ApplyFileCheckerRules(messageLogger, kSceneGraphFile);
        }
        const auto kTrafficSignals = object->GetTrafficSignals();
        for(auto& kListItem: kTrafficSignals)
        {
            if ( kListItem )
                ApplyTrafficSignalControllerCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyRoadPositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRoadPosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoadPosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoadPosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kOrientation = object->GetOrientation();
        if ( kOrientation)
        {
            ApplyOrientationCheckerRules(messageLogger, kOrientation);
        }
    }

    void ScenarioCheckerImpl::ApplyRouteCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRoute> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoute).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoute>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kWaypoints = object->GetWaypoints();
        for(auto& kListItem: kWaypoints)
        {
            if ( kListItem )
                ApplyWaypointCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyRouteCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRouteCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRouteCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyRoutePositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRoutePosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutePosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoutePosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kRouteRef = object->GetRouteRef();
        if ( kRouteRef)
        {
            ApplyRouteRefCheckerRules(messageLogger, kRouteRef);
        }
        const auto kOrientation = object->GetOrientation();
        if ( kOrientation)
        {
            ApplyOrientationCheckerRules(messageLogger, kOrientation);
        }
        const auto kInRoutePosition = object->GetInRoutePosition();
        if ( kInRoutePosition)
        {
            ApplyInRoutePositionCheckerRules(messageLogger, kInRoutePosition);
        }
    }

    void ScenarioCheckerImpl::ApplyRouteRefCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRouteRef> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRouteRef).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRouteRef>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kRoute = object->GetRoute();
        if ( kRoute)
        {
            ApplyRouteCheckerRules(messageLogger, kRoute);
        }
        const auto kCatalogReference = object->GetCatalogReference();
        if ( kCatalogReference)
        {
            ApplyCatalogReferenceCheckerRules(messageLogger, kCatalogReference);
        }
    }

    void ScenarioCheckerImpl::ApplyRoutingActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IRoutingAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IRoutingAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IRoutingAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kAssignRouteAction = object->GetAssignRouteAction();
        if ( kAssignRouteAction)
        {
            ApplyAssignRouteActionCheckerRules(messageLogger, kAssignRouteAction);
        }
        const auto kFollowTrajectoryAction = object->GetFollowTrajectoryAction();
        if ( kFollowTrajectoryAction)
        {
            ApplyFollowTrajectoryActionCheckerRules(messageLogger, kFollowTrajectoryAction);
        }
        const auto kAcquirePositionAction = object->GetAcquirePositionAction();
        if ( kAcquirePositionAction)
        {
            ApplyAcquirePositionActionCheckerRules(messageLogger, kAcquirePositionAction);
        }
    }

    void ScenarioCheckerImpl::ApplyScenarioDefinitionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IScenarioDefinition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioDefinition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IScenarioDefinition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kCatalogLocations = object->GetCatalogLocations();
        if ( kCatalogLocations)
        {
            ApplyCatalogLocationsCheckerRules(messageLogger, kCatalogLocations);
        }
        const auto kRoadNetwork = object->GetRoadNetwork();
        if ( kRoadNetwork)
        {
            ApplyRoadNetworkCheckerRules(messageLogger, kRoadNetwork);
        }
        const auto kEntities = object->GetEntities();
        if ( kEntities)
        {
            ApplyEntitiesCheckerRules(messageLogger, kEntities);
        }
        const auto kStoryboard = object->GetStoryboard();
        if ( kStoryboard)
        {
            ApplyStoryboardCheckerRules(messageLogger, kStoryboard);
        }
    }

    void ScenarioCheckerImpl::ApplyScenarioObjectCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IScenarioObject> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IScenarioObject).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IScenarioObject>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEntityObject = object->GetEntityObject();
        if ( kEntityObject)
        {
            ApplyEntityObjectCheckerRules(messageLogger, kEntityObject);
        }
        const auto kObjectController = object->GetObjectController();
        if ( kObjectController)
        {
            ApplyObjectControllerCheckerRules(messageLogger, kObjectController);
        }
    }

    void ScenarioCheckerImpl::ApplySelectedEntitiesCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ISelectedEntities> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISelectedEntities).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISelectedEntities>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEntityRef = object->GetEntityRef();
        for(auto& kListItem: kEntityRef)
        {
            if ( kListItem )
                ApplyEntityRefCheckerRules(messageLogger, kListItem);
        }
        const auto kByType = object->GetByType();
        for(auto& kListItem: kByType)
        {
            if ( kListItem )
                ApplyByTypeCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyShapeCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IShape> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IShape).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IShape>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPolyline = object->GetPolyline();
        if ( kPolyline)
        {
            ApplyPolylineCheckerRules(messageLogger, kPolyline);
        }
        const auto kClothoid = object->GetClothoid();
        if ( kClothoid)
        {
            ApplyClothoidCheckerRules(messageLogger, kClothoid);
        }
        const auto kNurbs = object->GetNurbs();
        if ( kNurbs)
        {
            ApplyNurbsCheckerRules(messageLogger, kNurbs);
        }
    }

    void ScenarioCheckerImpl::ApplySimulationTimeConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ISimulationTimeCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISimulationTimeCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISimulationTimeCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplySpeedActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ISpeedAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISpeedAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kSpeedActionDynamics = object->GetSpeedActionDynamics();
        if ( kSpeedActionDynamics)
        {
            ApplyTransitionDynamicsCheckerRules(messageLogger, kSpeedActionDynamics);
        }
        const auto kSpeedActionTarget = object->GetSpeedActionTarget();
        if ( kSpeedActionTarget)
        {
            ApplySpeedActionTargetCheckerRules(messageLogger, kSpeedActionTarget);
        }
    }

    void ScenarioCheckerImpl::ApplySpeedActionTargetCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ISpeedActionTarget> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedActionTarget).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISpeedActionTarget>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kRelativeTargetSpeed = object->GetRelativeTargetSpeed();
        if ( kRelativeTargetSpeed)
        {
            ApplyRelativeTargetSpeedCheckerRules(messageLogger, kRelativeTargetSpeed);
        }
        const auto kAbsoluteTargetSpeed = object->GetAbsoluteTargetSpeed();
        if ( kAbsoluteTargetSpeed)
        {
            ApplyAbsoluteTargetSpeedCheckerRules(messageLogger, kAbsoluteTargetSpeed);
        }
    }

    void ScenarioCheckerImpl::ApplySpeedConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ISpeedCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISpeedCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISpeedCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyStandStillConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IStandStillCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStandStillCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStandStillCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyStoryCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IStory> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStory).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStory>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kActs = object->GetActs();
        for(auto& kListItem: kActs)
        {
            if ( kListItem )
                ApplyActCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyStoryboardCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IStoryboard> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboard).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStoryboard>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kInit = object->GetInit();
        if ( kInit)
        {
            ApplyInitCheckerRules(messageLogger, kInit);
        }
        const auto kStories = object->GetStories();
        for(auto& kListItem: kStories)
        {
            if ( kListItem )
                ApplyStoryCheckerRules(messageLogger, kListItem);
        }
        const auto kStopTrigger = object->GetStopTrigger();
        if ( kStopTrigger)
        {
            ApplyTriggerCheckerRules(messageLogger, kStopTrigger);
        }
    }

    void ScenarioCheckerImpl::ApplyStoryboardElementStateConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IStoryboardElementStateCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IStoryboardElementStateCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IStoryboardElementStateCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplySunCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ISun> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISun).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISun>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplySynchronizeActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ISynchronizeAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ISynchronizeAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ISynchronizeAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTargetPositionMaster = object->GetTargetPositionMaster();
        if ( kTargetPositionMaster)
        {
            ApplyPositionCheckerRules(messageLogger, kTargetPositionMaster);
        }
        const auto kTargetPosition = object->GetTargetPosition();
        if ( kTargetPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kTargetPosition);
        }
        const auto kFinalSpeed = object->GetFinalSpeed();
        if ( kFinalSpeed)
        {
            ApplyFinalSpeedCheckerRules(messageLogger, kFinalSpeed);
        }
    }

    void ScenarioCheckerImpl::ApplyTeleportActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITeleportAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITeleportAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITeleportAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyTimeHeadwayConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITimeHeadwayCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeHeadwayCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeHeadwayCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTimeOfDayCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITimeOfDay> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDay).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeOfDay>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTimeOfDayConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITimeOfDayCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeOfDayCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeOfDayCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTimeReferenceCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITimeReference> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeReference).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeReference>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kNone = object->GetNone();
        if ( kNone)
        {
            ApplyNoneCheckerRules(messageLogger, kNone);
        }
        const auto kTiming = object->GetTiming();
        if ( kTiming)
        {
            ApplyTimingCheckerRules(messageLogger, kTiming);
        }
    }

    void ScenarioCheckerImpl::ApplyTimeToCollisionConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITimeToCollisionCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeToCollisionCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTimeToCollisionConditionTarget = object->GetTimeToCollisionConditionTarget();
        if ( kTimeToCollisionConditionTarget)
        {
            ApplyTimeToCollisionConditionTargetCheckerRules(messageLogger, kTimeToCollisionConditionTarget);
        }
    }

    void ScenarioCheckerImpl::ApplyTimeToCollisionConditionTargetCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITimeToCollisionConditionTarget> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITimeToCollisionConditionTarget).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITimeToCollisionConditionTarget>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
        const auto kEntityRef = object->GetEntityRef();
        if ( kEntityRef)
        {
            ApplyEntityRefCheckerRules(messageLogger, kEntityRef);
        }
    }

    void ScenarioCheckerImpl::ApplyTimingCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITiming> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITiming).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITiming>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTrafficActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTrafficSourceAction = object->GetTrafficSourceAction();
        if ( kTrafficSourceAction)
        {
            ApplyTrafficSourceActionCheckerRules(messageLogger, kTrafficSourceAction);
        }
        const auto kTrafficSinkAction = object->GetTrafficSinkAction();
        if ( kTrafficSinkAction)
        {
            ApplyTrafficSinkActionCheckerRules(messageLogger, kTrafficSinkAction);
        }
        const auto kTrafficSwarmAction = object->GetTrafficSwarmAction();
        if ( kTrafficSwarmAction)
        {
            ApplyTrafficSwarmActionCheckerRules(messageLogger, kTrafficSwarmAction);
        }
    }

    void ScenarioCheckerImpl::ApplyTrafficDefinitionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficDefinition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficDefinition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficDefinition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kVehicleCategoryDistribution = object->GetVehicleCategoryDistribution();
        if ( kVehicleCategoryDistribution)
        {
            ApplyVehicleCategoryDistributionCheckerRules(messageLogger, kVehicleCategoryDistribution);
        }
        const auto kControllerDistribution = object->GetControllerDistribution();
        if ( kControllerDistribution)
        {
            ApplyControllerDistributionCheckerRules(messageLogger, kControllerDistribution);
        }
    }

    void ScenarioCheckerImpl::ApplyTrafficSignalActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSignalAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kTrafficSignalControllerAction = object->GetTrafficSignalControllerAction();
        if ( kTrafficSignalControllerAction)
        {
            ApplyTrafficSignalControllerActionCheckerRules(messageLogger, kTrafficSignalControllerAction);
        }
        const auto kTrafficSignalStateAction = object->GetTrafficSignalStateAction();
        if ( kTrafficSignalStateAction)
        {
            ApplyTrafficSignalStateActionCheckerRules(messageLogger, kTrafficSignalStateAction);
        }
    }

    void ScenarioCheckerImpl::ApplyTrafficSignalConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSignalCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTrafficSignalControllerCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSignalController> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalController).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalController>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPhases = object->GetPhases();
        for(auto& kListItem: kPhases)
        {
            if ( kListItem )
                ApplyPhaseCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyTrafficSignalControllerActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSignalControllerAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalControllerAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTrafficSignalControllerConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSignalControllerCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalControllerCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalControllerCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTrafficSignalStateCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSignalState> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalState).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalState>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTrafficSignalStateActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSignalStateAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSignalStateAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSignalStateAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTrafficSinkActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSinkAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSinkAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSinkAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
        const auto kTrafficDefinition = object->GetTrafficDefinition();
        if ( kTrafficDefinition)
        {
            ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition);
        }
    }

    void ScenarioCheckerImpl::ApplyTrafficSourceActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSourceAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSourceAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSourceAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
        const auto kTrafficDefinition = object->GetTrafficDefinition();
        if ( kTrafficDefinition)
        {
            ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition);
        }
    }

    void ScenarioCheckerImpl::ApplyTrafficSwarmActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrafficSwarmAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrafficSwarmAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrafficSwarmAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kCentralObject = object->GetCentralObject();
        if ( kCentralObject)
        {
            ApplyCentralSwarmObjectCheckerRules(messageLogger, kCentralObject);
        }
        const auto kTrafficDefinition = object->GetTrafficDefinition();
        if ( kTrafficDefinition)
        {
            ApplyTrafficDefinitionCheckerRules(messageLogger, kTrafficDefinition);
        }
    }

    void ScenarioCheckerImpl::ApplyTrajectoryCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrajectory> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectory).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrajectory>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kShape = object->GetShape();
        if ( kShape)
        {
            ApplyShapeCheckerRules(messageLogger, kShape);
        }
    }

    void ScenarioCheckerImpl::ApplyTrajectoryCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrajectoryCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrajectoryCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyTrajectoryFollowingModeCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrajectoryFollowingMode> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrajectoryFollowingMode).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrajectoryFollowingMode>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTransitionDynamicsCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITransitionDynamics> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITransitionDynamics).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITransitionDynamics>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTraveledDistanceConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITraveledDistanceCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITraveledDistanceCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITraveledDistanceCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyTriggerCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITrigger> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITrigger).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITrigger>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kConditionGroups = object->GetConditionGroups();
        for(auto& kListItem: kConditionGroups)
        {
            if ( kListItem )
                ApplyConditionGroupCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyTriggeringEntitiesCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<ITriggeringEntities> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(ITriggeringEntities).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<ITriggeringEntities>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kEntityRefs = object->GetEntityRefs();
        for(auto& kListItem: kEntityRefs)
        {
            if ( kListItem )
                ApplyEntityRefCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyUserDefinedActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IUserDefinedAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IUserDefinedAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kCustomCommandAction = object->GetCustomCommandAction();
        if ( kCustomCommandAction)
        {
            ApplyCustomCommandActionCheckerRules(messageLogger, kCustomCommandAction);
        }
    }

    void ScenarioCheckerImpl::ApplyUserDefinedValueConditionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IUserDefinedValueCondition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IUserDefinedValueCondition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IUserDefinedValueCondition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyVehicleCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IVehicle> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicle).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicle>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kParameterDeclarations = object->GetParameterDeclarations();
        for(auto& kListItem: kParameterDeclarations)
        {
            if ( kListItem )
                ApplyParameterDeclarationCheckerRules(messageLogger, kListItem);
        }
        const auto kBoundingBox = object->GetBoundingBox();
        if ( kBoundingBox)
        {
            ApplyBoundingBoxCheckerRules(messageLogger, kBoundingBox);
        }
        const auto kPerformance = object->GetPerformance();
        if ( kPerformance)
        {
            ApplyPerformanceCheckerRules(messageLogger, kPerformance);
        }
        const auto kAxles = object->GetAxles();
        if ( kAxles)
        {
            ApplyAxlesCheckerRules(messageLogger, kAxles);
        }
        const auto kProperties = object->GetProperties();
        if ( kProperties)
        {
            ApplyPropertiesCheckerRules(messageLogger, kProperties);
        }
    }

    void ScenarioCheckerImpl::ApplyVehicleCatalogLocationCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IVehicleCatalogLocation> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCatalogLocation).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicleCatalogLocation>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kDirectory = object->GetDirectory();
        if ( kDirectory)
        {
            ApplyDirectoryCheckerRules(messageLogger, kDirectory);
        }
    }

    void ScenarioCheckerImpl::ApplyVehicleCategoryDistributionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IVehicleCategoryDistribution> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistribution).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicleCategoryDistribution>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kVehicleCategoryDistributionEntries = object->GetVehicleCategoryDistributionEntries();
        for(auto& kListItem: kVehicleCategoryDistributionEntries)
        {
            if ( kListItem )
                ApplyVehicleCategoryDistributionEntryCheckerRules(messageLogger, kListItem);
        }
    }

    void ScenarioCheckerImpl::ApplyVehicleCategoryDistributionEntryCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IVehicleCategoryDistributionEntry> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVehicleCategoryDistributionEntry).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVehicleCategoryDistributionEntry>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyVertexCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IVertex> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVertex).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVertex>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyVisibilityActionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IVisibilityAction> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IVisibilityAction).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IVisibilityAction>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

    void ScenarioCheckerImpl::ApplyWaypointCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IWaypoint> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWaypoint).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IWaypoint>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kPosition = object->GetPosition();
        if ( kPosition)
        {
            ApplyPositionCheckerRules(messageLogger, kPosition);
        }
    }

    void ScenarioCheckerImpl::ApplyWeatherCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IWeather> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWeather).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IWeather>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
        const auto kSun = object->GetSun();
        if ( kSun)
        {
            ApplySunCheckerRules(messageLogger, kSun);
        }
        const auto kFog = object->GetFog();
        if ( kFog)
        {
            ApplyFogCheckerRules(messageLogger, kFog);
        }
        const auto kPrecipitation = object->GetPrecipitation();
        if ( kPrecipitation)
        {
            ApplyPrecipitationCheckerRules(messageLogger, kPrecipitation);
        }
    }

    void ScenarioCheckerImpl::ApplyWorldPositionCheckerRules(IParserMessageLogger& messageLogger, const std::shared_ptr<IWorldPosition> object)
    {
        auto checkerRulesForType = _typeToCheckerRuleList[typeid(IWorldPosition).name()];
        if ( !checkerRulesForType.empty() )
        {
            for (auto& checkerRule:checkerRulesForType)
            {
                auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<IWorldPosition>> (checkerRule);
                typedCheckerRule->ApplyRule(messageLogger, object);
            }
        }

        // getChildren
    }

}
