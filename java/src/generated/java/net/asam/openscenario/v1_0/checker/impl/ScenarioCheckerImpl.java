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
package net.asam.openscenario.v1_0.checker.impl;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.common.IContentMessageLogger;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.v1_0.api.IAbsoluteSpeed;
import net.asam.openscenario.v1_0.api.IAbsoluteTargetLane;
import net.asam.openscenario.v1_0.api.IAbsoluteTargetLaneOffset;
import net.asam.openscenario.v1_0.api.IAbsoluteTargetSpeed;
import net.asam.openscenario.v1_0.api.IAccelerationCondition;
import net.asam.openscenario.v1_0.api.IAcquirePositionAction;
import net.asam.openscenario.v1_0.api.IAct;
import net.asam.openscenario.v1_0.api.IAction;
import net.asam.openscenario.v1_0.api.IActivateControllerAction;
import net.asam.openscenario.v1_0.api.IActors;
import net.asam.openscenario.v1_0.api.IAddEntityAction;
import net.asam.openscenario.v1_0.api.IAssignControllerAction;
import net.asam.openscenario.v1_0.api.IAssignRouteAction;
import net.asam.openscenario.v1_0.api.IAxle;
import net.asam.openscenario.v1_0.api.IAxles;
import net.asam.openscenario.v1_0.api.IBoundingBox;
import net.asam.openscenario.v1_0.api.IByEntityCondition;
import net.asam.openscenario.v1_0.api.IByObjectType;
import net.asam.openscenario.v1_0.api.IByType;
import net.asam.openscenario.v1_0.api.IByValueCondition;
import net.asam.openscenario.v1_0.api.ICatalog;
import net.asam.openscenario.v1_0.api.ICatalogDefinition;
import net.asam.openscenario.v1_0.api.ICatalogLocations;
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.api.ICenter;
import net.asam.openscenario.v1_0.api.ICentralSwarmObject;
import net.asam.openscenario.v1_0.api.IClothoid;
import net.asam.openscenario.v1_0.api.ICollisionCondition;
import net.asam.openscenario.v1_0.api.ICondition;
import net.asam.openscenario.v1_0.api.IConditionGroup;
import net.asam.openscenario.v1_0.api.IControlPoint;
import net.asam.openscenario.v1_0.api.IController;
import net.asam.openscenario.v1_0.api.IControllerAction;
import net.asam.openscenario.v1_0.api.IControllerCatalogLocation;
import net.asam.openscenario.v1_0.api.IControllerDistribution;
import net.asam.openscenario.v1_0.api.IControllerDistributionEntry;
import net.asam.openscenario.v1_0.api.ICustomCommandAction;
import net.asam.openscenario.v1_0.api.IDeleteEntityAction;
import net.asam.openscenario.v1_0.api.IDimensions;
import net.asam.openscenario.v1_0.api.IDirectory;
import net.asam.openscenario.v1_0.api.IDistanceCondition;
import net.asam.openscenario.v1_0.api.IDynamicConstraints;
import net.asam.openscenario.v1_0.api.IEndOfRoadCondition;
import net.asam.openscenario.v1_0.api.IEntities;
import net.asam.openscenario.v1_0.api.IEntityAction;
import net.asam.openscenario.v1_0.api.IEntityCondition;
import net.asam.openscenario.v1_0.api.IEntityObject;
import net.asam.openscenario.v1_0.api.IEntityRef;
import net.asam.openscenario.v1_0.api.IEntitySelection;
import net.asam.openscenario.v1_0.api.IEnvironment;
import net.asam.openscenario.v1_0.api.IEnvironmentAction;
import net.asam.openscenario.v1_0.api.IEnvironmentCatalogLocation;
import net.asam.openscenario.v1_0.api.IEvent;
import net.asam.openscenario.v1_0.api.IFile;
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.api.IFinalSpeed;
import net.asam.openscenario.v1_0.api.IFog;
import net.asam.openscenario.v1_0.api.IFollowTrajectoryAction;
import net.asam.openscenario.v1_0.api.IGlobalAction;
import net.asam.openscenario.v1_0.api.IInRoutePosition;
import net.asam.openscenario.v1_0.api.IInfrastructureAction;
import net.asam.openscenario.v1_0.api.IInit;
import net.asam.openscenario.v1_0.api.IInitActions;
import net.asam.openscenario.v1_0.api.IKnot;
import net.asam.openscenario.v1_0.api.ILaneChangeAction;
import net.asam.openscenario.v1_0.api.ILaneChangeTarget;
import net.asam.openscenario.v1_0.api.ILaneOffsetAction;
import net.asam.openscenario.v1_0.api.ILaneOffsetActionDynamics;
import net.asam.openscenario.v1_0.api.ILaneOffsetTarget;
import net.asam.openscenario.v1_0.api.ILanePosition;
import net.asam.openscenario.v1_0.api.ILateralAction;
import net.asam.openscenario.v1_0.api.ILateralDistanceAction;
import net.asam.openscenario.v1_0.api.ILongitudinalAction;
import net.asam.openscenario.v1_0.api.ILongitudinalDistanceAction;
import net.asam.openscenario.v1_0.api.IManeuver;
import net.asam.openscenario.v1_0.api.IManeuverCatalogLocation;
import net.asam.openscenario.v1_0.api.IManeuverGroup;
import net.asam.openscenario.v1_0.api.IMiscObject;
import net.asam.openscenario.v1_0.api.IMiscObjectCatalogLocation;
import net.asam.openscenario.v1_0.api.IModifyRule;
import net.asam.openscenario.v1_0.api.INone;
import net.asam.openscenario.v1_0.api.INurbs;
import net.asam.openscenario.v1_0.api.IObjectController;
import net.asam.openscenario.v1_0.api.IOffroadCondition;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.api.IOpenScenarioCategory;
import net.asam.openscenario.v1_0.api.IOrientation;
import net.asam.openscenario.v1_0.api.IOverrideBrakeAction;
import net.asam.openscenario.v1_0.api.IOverrideClutchAction;
import net.asam.openscenario.v1_0.api.IOverrideControllerValueAction;
import net.asam.openscenario.v1_0.api.IOverrideGearAction;
import net.asam.openscenario.v1_0.api.IOverrideParkingBrakeAction;
import net.asam.openscenario.v1_0.api.IOverrideSteeringWheelAction;
import net.asam.openscenario.v1_0.api.IOverrideThrottleAction;
import net.asam.openscenario.v1_0.api.IParameterAction;
import net.asam.openscenario.v1_0.api.IParameterAddValueRule;
import net.asam.openscenario.v1_0.api.IParameterAssignment;
import net.asam.openscenario.v1_0.api.IParameterCondition;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IParameterModifyAction;
import net.asam.openscenario.v1_0.api.IParameterMultiplyByValueRule;
import net.asam.openscenario.v1_0.api.IParameterSetAction;
import net.asam.openscenario.v1_0.api.IPedestrian;
import net.asam.openscenario.v1_0.api.IPedestrianCatalogLocation;
import net.asam.openscenario.v1_0.api.IPerformance;
import net.asam.openscenario.v1_0.api.IPhase;
import net.asam.openscenario.v1_0.api.IPolyline;
import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.v1_0.api.IPositionInLaneCoordinates;
import net.asam.openscenario.v1_0.api.IPositionInRoadCoordinates;
import net.asam.openscenario.v1_0.api.IPositionOfCurrentEntity;
import net.asam.openscenario.v1_0.api.IPrecipitation;
import net.asam.openscenario.v1_0.api.IPrivate;
import net.asam.openscenario.v1_0.api.IPrivateAction;
import net.asam.openscenario.v1_0.api.IProperties;
import net.asam.openscenario.v1_0.api.IProperty;
import net.asam.openscenario.v1_0.api.IReachPositionCondition;
import net.asam.openscenario.v1_0.api.IRelativeDistanceCondition;
import net.asam.openscenario.v1_0.api.IRelativeLanePosition;
import net.asam.openscenario.v1_0.api.IRelativeObjectPosition;
import net.asam.openscenario.v1_0.api.IRelativeRoadPosition;
import net.asam.openscenario.v1_0.api.IRelativeSpeedCondition;
import net.asam.openscenario.v1_0.api.IRelativeSpeedToMaster;
import net.asam.openscenario.v1_0.api.IRelativeTargetLane;
import net.asam.openscenario.v1_0.api.IRelativeTargetLaneOffset;
import net.asam.openscenario.v1_0.api.IRelativeTargetSpeed;
import net.asam.openscenario.v1_0.api.IRelativeWorldPosition;
import net.asam.openscenario.v1_0.api.IRoadCondition;
import net.asam.openscenario.v1_0.api.IRoadNetwork;
import net.asam.openscenario.v1_0.api.IRoadPosition;
import net.asam.openscenario.v1_0.api.IRoute;
import net.asam.openscenario.v1_0.api.IRouteCatalogLocation;
import net.asam.openscenario.v1_0.api.IRoutePosition;
import net.asam.openscenario.v1_0.api.IRouteRef;
import net.asam.openscenario.v1_0.api.IRoutingAction;
import net.asam.openscenario.v1_0.api.IScenarioDefinition;
import net.asam.openscenario.v1_0.api.IScenarioObject;
import net.asam.openscenario.v1_0.api.ISelectedEntities;
import net.asam.openscenario.v1_0.api.IShape;
import net.asam.openscenario.v1_0.api.ISimulationTimeCondition;
import net.asam.openscenario.v1_0.api.ISpeedAction;
import net.asam.openscenario.v1_0.api.ISpeedActionTarget;
import net.asam.openscenario.v1_0.api.ISpeedCondition;
import net.asam.openscenario.v1_0.api.IStandStillCondition;
import net.asam.openscenario.v1_0.api.IStory;
import net.asam.openscenario.v1_0.api.IStoryboard;
import net.asam.openscenario.v1_0.api.IStoryboardElementStateCondition;
import net.asam.openscenario.v1_0.api.ISun;
import net.asam.openscenario.v1_0.api.ISynchronizeAction;
import net.asam.openscenario.v1_0.api.ITeleportAction;
import net.asam.openscenario.v1_0.api.ITimeHeadwayCondition;
import net.asam.openscenario.v1_0.api.ITimeOfDay;
import net.asam.openscenario.v1_0.api.ITimeOfDayCondition;
import net.asam.openscenario.v1_0.api.ITimeReference;
import net.asam.openscenario.v1_0.api.ITimeToCollisionCondition;
import net.asam.openscenario.v1_0.api.ITimeToCollisionConditionTarget;
import net.asam.openscenario.v1_0.api.ITiming;
import net.asam.openscenario.v1_0.api.ITrafficAction;
import net.asam.openscenario.v1_0.api.ITrafficDefinition;
import net.asam.openscenario.v1_0.api.ITrafficSignalAction;
import net.asam.openscenario.v1_0.api.ITrafficSignalCondition;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;
import net.asam.openscenario.v1_0.api.ITrafficSignalControllerAction;
import net.asam.openscenario.v1_0.api.ITrafficSignalControllerCondition;
import net.asam.openscenario.v1_0.api.ITrafficSignalState;
import net.asam.openscenario.v1_0.api.ITrafficSignalStateAction;
import net.asam.openscenario.v1_0.api.ITrafficSinkAction;
import net.asam.openscenario.v1_0.api.ITrafficSourceAction;
import net.asam.openscenario.v1_0.api.ITrafficSwarmAction;
import net.asam.openscenario.v1_0.api.ITrajectory;
import net.asam.openscenario.v1_0.api.ITrajectoryCatalogLocation;
import net.asam.openscenario.v1_0.api.ITrajectoryFollowingMode;
import net.asam.openscenario.v1_0.api.ITransitionDynamics;
import net.asam.openscenario.v1_0.api.ITraveledDistanceCondition;
import net.asam.openscenario.v1_0.api.ITrigger;
import net.asam.openscenario.v1_0.api.ITriggeringEntities;
import net.asam.openscenario.v1_0.api.IUserDefinedAction;
import net.asam.openscenario.v1_0.api.IUserDefinedValueCondition;
import net.asam.openscenario.v1_0.api.IVehicle;
import net.asam.openscenario.v1_0.api.IVehicleCatalogLocation;
import net.asam.openscenario.v1_0.api.IVehicleCategoryDistribution;
import net.asam.openscenario.v1_0.api.IVehicleCategoryDistributionEntry;
import net.asam.openscenario.v1_0.api.IVertex;
import net.asam.openscenario.v1_0.api.IVisibilityAction;
import net.asam.openscenario.v1_0.api.IWaypoint;
import net.asam.openscenario.v1_0.api.IWeather;
import net.asam.openscenario.v1_0.api.IWorldPosition;
import net.asam.openscenario.v1_0.checker.IScenarioChecker;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0 A
 * range checker rule class for the type
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ScenarioCheckerImpl implements IScenarioChecker {

  private Hashtable<Class<?>, List<ICheckerRule<?>>> typeToCheckerRuleList = new Hashtable<>();

  @Override
  public void checkScenarioInFileContext(
      IParserMessageLogger messageLogger, IOpenScenario openScenario) {
    applyOpenScenarioCheckerRules(messageLogger, openScenario, ContextMode.MODE_FILE);
  }

  @Override
  public void checkScenarioInTreeContext(
      ITreeMessageLogger messageLogger, IOpenScenario openScenario) {
    applyOpenScenarioCheckerRules(messageLogger, openScenario, ContextMode.MODE_TREE);
  }

  @Override
  public void addAbsoluteSpeedCheckerRule(ICheckerRule<IAbsoluteSpeed> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteSpeed.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAbsoluteSpeed.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAbsoluteTargetLaneCheckerRule(ICheckerRule<IAbsoluteTargetLane> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteTargetLane.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAbsoluteTargetLane.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAbsoluteTargetLaneOffsetCheckerRule(
      ICheckerRule<IAbsoluteTargetLaneOffset> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteTargetLaneOffset.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAbsoluteTargetLaneOffset.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAbsoluteTargetSpeedCheckerRule(ICheckerRule<IAbsoluteTargetSpeed> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteTargetSpeed.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAbsoluteTargetSpeed.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAccelerationConditionCheckerRule(
      ICheckerRule<IAccelerationCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAccelerationCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAccelerationCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAcquirePositionActionCheckerRule(
      ICheckerRule<IAcquirePositionAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAcquirePositionAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAcquirePositionAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addActCheckerRule(ICheckerRule<IAct> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAct.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAct.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addActionCheckerRule(ICheckerRule<IAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addActivateControllerActionCheckerRule(
      ICheckerRule<IActivateControllerAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IActivateControllerAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IActivateControllerAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addActorsCheckerRule(ICheckerRule<IActors> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IActors.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IActors.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAddEntityActionCheckerRule(ICheckerRule<IAddEntityAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAddEntityAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAddEntityAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAssignControllerActionCheckerRule(
      ICheckerRule<IAssignControllerAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAssignControllerAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAssignControllerAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAssignRouteActionCheckerRule(ICheckerRule<IAssignRouteAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAssignRouteAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAssignRouteAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAxleCheckerRule(ICheckerRule<IAxle> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAxle.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAxle.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addAxlesCheckerRule(ICheckerRule<IAxles> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAxles.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IAxles.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addBoundingBoxCheckerRule(ICheckerRule<IBoundingBox> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IBoundingBox.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IBoundingBox.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addByEntityConditionCheckerRule(ICheckerRule<IByEntityCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IByEntityCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IByEntityCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addByObjectTypeCheckerRule(ICheckerRule<IByObjectType> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IByObjectType.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IByObjectType.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addByTypeCheckerRule(ICheckerRule<IByType> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IByType.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IByType.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addByValueConditionCheckerRule(ICheckerRule<IByValueCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IByValueCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IByValueCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCatalogCheckerRule(ICheckerRule<ICatalog> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ICatalog.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICatalog.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCatalogDefinitionCheckerRule(ICheckerRule<ICatalogDefinition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICatalogDefinition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICatalogDefinition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCatalogLocationsCheckerRule(ICheckerRule<ICatalogLocations> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICatalogLocations.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICatalogLocations.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCatalogReferenceCheckerRule(ICheckerRule<ICatalogReference> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICatalogReference.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICatalogReference.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCenterCheckerRule(ICheckerRule<ICenter> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ICenter.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICenter.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCentralSwarmObjectCheckerRule(ICheckerRule<ICentralSwarmObject> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICentralSwarmObject.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICentralSwarmObject.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addClothoidCheckerRule(ICheckerRule<IClothoid> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IClothoid.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IClothoid.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCollisionConditionCheckerRule(ICheckerRule<ICollisionCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICollisionCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICollisionCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addConditionCheckerRule(ICheckerRule<ICondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ICondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addConditionGroupCheckerRule(ICheckerRule<IConditionGroup> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IConditionGroup.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IConditionGroup.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addControlPointCheckerRule(ICheckerRule<IControlPoint> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IControlPoint.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IControlPoint.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addControllerCheckerRule(ICheckerRule<IController> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IController.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IController.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addControllerActionCheckerRule(ICheckerRule<IControllerAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IControllerAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addControllerCatalogLocationCheckerRule(
      ICheckerRule<IControllerCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IControllerCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addControllerDistributionCheckerRule(
      ICheckerRule<IControllerDistribution> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerDistribution.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IControllerDistribution.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addControllerDistributionEntryCheckerRule(
      ICheckerRule<IControllerDistributionEntry> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerDistributionEntry.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IControllerDistributionEntry.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addCustomCommandActionCheckerRule(ICheckerRule<ICustomCommandAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICustomCommandAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ICustomCommandAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addDeleteEntityActionCheckerRule(ICheckerRule<IDeleteEntityAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IDeleteEntityAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IDeleteEntityAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addDimensionsCheckerRule(ICheckerRule<IDimensions> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IDimensions.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IDimensions.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addDirectoryCheckerRule(ICheckerRule<IDirectory> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IDirectory.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IDirectory.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addDistanceConditionCheckerRule(ICheckerRule<IDistanceCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IDistanceCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IDistanceCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addDynamicConstraintsCheckerRule(ICheckerRule<IDynamicConstraints> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IDynamicConstraints.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IDynamicConstraints.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEndOfRoadConditionCheckerRule(ICheckerRule<IEndOfRoadCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEndOfRoadCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEndOfRoadCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEntitiesCheckerRule(ICheckerRule<IEntities> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntities.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEntities.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEntityActionCheckerRule(ICheckerRule<IEntityAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntityAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEntityAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEntityConditionCheckerRule(ICheckerRule<IEntityCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEntityCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEntityCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEntityObjectCheckerRule(ICheckerRule<IEntityObject> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntityObject.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEntityObject.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEntityRefCheckerRule(ICheckerRule<IEntityRef> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntityRef.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEntityRef.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEntitySelectionCheckerRule(ICheckerRule<IEntitySelection> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEntitySelection.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEntitySelection.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEnvironmentCheckerRule(ICheckerRule<IEnvironment> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEnvironment.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEnvironment.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEnvironmentActionCheckerRule(ICheckerRule<IEnvironmentAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEnvironmentAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEnvironmentAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEnvironmentCatalogLocationCheckerRule(
      ICheckerRule<IEnvironmentCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEnvironmentCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEnvironmentCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addEventCheckerRule(ICheckerRule<IEvent> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEvent.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IEvent.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addFileCheckerRule(ICheckerRule<IFile> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFile.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IFile.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addFileHeaderCheckerRule(ICheckerRule<IFileHeader> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFileHeader.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IFileHeader.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addFinalSpeedCheckerRule(ICheckerRule<IFinalSpeed> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFinalSpeed.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IFinalSpeed.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addFogCheckerRule(ICheckerRule<IFog> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFog.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IFog.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addFollowTrajectoryActionCheckerRule(
      ICheckerRule<IFollowTrajectoryAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IFollowTrajectoryAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IFollowTrajectoryAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addGlobalActionCheckerRule(ICheckerRule<IGlobalAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IGlobalAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IGlobalAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addInRoutePositionCheckerRule(ICheckerRule<IInRoutePosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IInRoutePosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IInRoutePosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addInfrastructureActionCheckerRule(ICheckerRule<IInfrastructureAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IInfrastructureAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IInfrastructureAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addInitCheckerRule(ICheckerRule<IInit> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IInit.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IInit.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addInitActionsCheckerRule(ICheckerRule<IInitActions> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IInitActions.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IInitActions.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addKnotCheckerRule(ICheckerRule<IKnot> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IKnot.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IKnot.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLaneChangeActionCheckerRule(ICheckerRule<ILaneChangeAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneChangeAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILaneChangeAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLaneChangeTargetCheckerRule(ICheckerRule<ILaneChangeTarget> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneChangeTarget.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILaneChangeTarget.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLaneOffsetActionCheckerRule(ICheckerRule<ILaneOffsetAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneOffsetAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILaneOffsetAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLaneOffsetActionDynamicsCheckerRule(
      ICheckerRule<ILaneOffsetActionDynamics> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneOffsetActionDynamics.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILaneOffsetActionDynamics.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLaneOffsetTargetCheckerRule(ICheckerRule<ILaneOffsetTarget> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneOffsetTarget.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILaneOffsetTarget.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLanePositionCheckerRule(ICheckerRule<ILanePosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ILanePosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILanePosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLateralActionCheckerRule(ICheckerRule<ILateralAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILateralAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILateralAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLateralDistanceActionCheckerRule(
      ICheckerRule<ILateralDistanceAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILateralDistanceAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILateralDistanceAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLongitudinalActionCheckerRule(ICheckerRule<ILongitudinalAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILongitudinalAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILongitudinalAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addLongitudinalDistanceActionCheckerRule(
      ICheckerRule<ILongitudinalDistanceAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILongitudinalDistanceAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ILongitudinalDistanceAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addManeuverCheckerRule(ICheckerRule<IManeuver> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IManeuver.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IManeuver.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addManeuverCatalogLocationCheckerRule(
      ICheckerRule<IManeuverCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IManeuverCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IManeuverCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addManeuverGroupCheckerRule(ICheckerRule<IManeuverGroup> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IManeuverGroup.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IManeuverGroup.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addMiscObjectCheckerRule(ICheckerRule<IMiscObject> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IMiscObject.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IMiscObject.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addMiscObjectCatalogLocationCheckerRule(
      ICheckerRule<IMiscObjectCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IMiscObjectCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IMiscObjectCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addModifyRuleCheckerRule(ICheckerRule<IModifyRule> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IModifyRule.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IModifyRule.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addNoneCheckerRule(ICheckerRule<INone> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(INone.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(INone.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addNurbsCheckerRule(ICheckerRule<INurbs> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(INurbs.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(INurbs.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addObjectControllerCheckerRule(ICheckerRule<IObjectController> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IObjectController.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IObjectController.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOffroadConditionCheckerRule(ICheckerRule<IOffroadCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOffroadCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOffroadCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOpenScenarioCheckerRule(ICheckerRule<IOpenScenario> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IOpenScenario.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOpenScenario.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOpenScenarioCategoryCheckerRule(ICheckerRule<IOpenScenarioCategory> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOpenScenarioCategory.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOpenScenarioCategory.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOrientationCheckerRule(ICheckerRule<IOrientation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IOrientation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOrientation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOverrideBrakeActionCheckerRule(ICheckerRule<IOverrideBrakeAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideBrakeAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOverrideBrakeAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOverrideClutchActionCheckerRule(ICheckerRule<IOverrideClutchAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideClutchAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOverrideClutchAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOverrideControllerValueActionCheckerRule(
      ICheckerRule<IOverrideControllerValueAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideControllerValueAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOverrideControllerValueAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOverrideGearActionCheckerRule(ICheckerRule<IOverrideGearAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideGearAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOverrideGearAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOverrideParkingBrakeActionCheckerRule(
      ICheckerRule<IOverrideParkingBrakeAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideParkingBrakeAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOverrideParkingBrakeAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOverrideSteeringWheelActionCheckerRule(
      ICheckerRule<IOverrideSteeringWheelAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideSteeringWheelAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOverrideSteeringWheelAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addOverrideThrottleActionCheckerRule(
      ICheckerRule<IOverrideThrottleAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideThrottleAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IOverrideThrottleAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterActionCheckerRule(ICheckerRule<IParameterAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterAddValueRuleCheckerRule(
      ICheckerRule<IParameterAddValueRule> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterAddValueRule.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterAddValueRule.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterAssignmentCheckerRule(ICheckerRule<IParameterAssignment> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterAssignment.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterAssignment.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterConditionCheckerRule(ICheckerRule<IParameterCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterDeclarationCheckerRule(ICheckerRule<IParameterDeclaration> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterDeclaration.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterDeclaration.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterModifyActionCheckerRule(
      ICheckerRule<IParameterModifyAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterModifyAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterModifyAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterMultiplyByValueRuleCheckerRule(
      ICheckerRule<IParameterMultiplyByValueRule> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterMultiplyByValueRule.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterMultiplyByValueRule.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addParameterSetActionCheckerRule(ICheckerRule<IParameterSetAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterSetAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IParameterSetAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPedestrianCheckerRule(ICheckerRule<IPedestrian> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPedestrian.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPedestrian.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPedestrianCatalogLocationCheckerRule(
      ICheckerRule<IPedestrianCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPedestrianCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPedestrianCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPerformanceCheckerRule(ICheckerRule<IPerformance> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPerformance.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPerformance.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPhaseCheckerRule(ICheckerRule<IPhase> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPhase.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPhase.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPolylineCheckerRule(ICheckerRule<IPolyline> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPolyline.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPolyline.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPositionCheckerRule(ICheckerRule<IPosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPositionInLaneCoordinatesCheckerRule(
      ICheckerRule<IPositionInLaneCoordinates> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPositionInLaneCoordinates.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPositionInLaneCoordinates.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPositionInRoadCoordinatesCheckerRule(
      ICheckerRule<IPositionInRoadCoordinates> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPositionInRoadCoordinates.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPositionInRoadCoordinates.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPositionOfCurrentEntityCheckerRule(
      ICheckerRule<IPositionOfCurrentEntity> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPositionOfCurrentEntity.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPositionOfCurrentEntity.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPrecipitationCheckerRule(ICheckerRule<IPrecipitation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPrecipitation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPrecipitation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPrivateCheckerRule(ICheckerRule<IPrivate> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPrivate.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPrivate.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPrivateActionCheckerRule(ICheckerRule<IPrivateAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPrivateAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IPrivateAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPropertiesCheckerRule(ICheckerRule<IProperties> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IProperties.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IProperties.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addPropertyCheckerRule(ICheckerRule<IProperty> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IProperty.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IProperty.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addReachPositionConditionCheckerRule(
      ICheckerRule<IReachPositionCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IReachPositionCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IReachPositionCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeDistanceConditionCheckerRule(
      ICheckerRule<IRelativeDistanceCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeDistanceCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeDistanceCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeLanePositionCheckerRule(ICheckerRule<IRelativeLanePosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeLanePosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeLanePosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeObjectPositionCheckerRule(
      ICheckerRule<IRelativeObjectPosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeObjectPosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeObjectPosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeRoadPositionCheckerRule(ICheckerRule<IRelativeRoadPosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeRoadPosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeRoadPosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeSpeedConditionCheckerRule(
      ICheckerRule<IRelativeSpeedCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeSpeedCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeSpeedCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeSpeedToMasterCheckerRule(
      ICheckerRule<IRelativeSpeedToMaster> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeSpeedToMaster.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeSpeedToMaster.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeTargetLaneCheckerRule(ICheckerRule<IRelativeTargetLane> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeTargetLane.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeTargetLane.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeTargetLaneOffsetCheckerRule(
      ICheckerRule<IRelativeTargetLaneOffset> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeTargetLaneOffset.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeTargetLaneOffset.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeTargetSpeedCheckerRule(ICheckerRule<IRelativeTargetSpeed> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeTargetSpeed.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeTargetSpeed.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRelativeWorldPositionCheckerRule(
      ICheckerRule<IRelativeWorldPosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeWorldPosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRelativeWorldPosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRoadConditionCheckerRule(ICheckerRule<IRoadCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRoadCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRoadCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRoadNetworkCheckerRule(ICheckerRule<IRoadNetwork> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRoadNetwork.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRoadNetwork.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRoadPositionCheckerRule(ICheckerRule<IRoadPosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRoadPosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRoadPosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRouteCheckerRule(ICheckerRule<IRoute> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRoute.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRoute.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRouteCatalogLocationCheckerRule(ICheckerRule<IRouteCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRouteCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRouteCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRoutePositionCheckerRule(ICheckerRule<IRoutePosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRoutePosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRoutePosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRouteRefCheckerRule(ICheckerRule<IRouteRef> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRouteRef.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRouteRef.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addRoutingActionCheckerRule(ICheckerRule<IRoutingAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRoutingAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IRoutingAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addScenarioDefinitionCheckerRule(ICheckerRule<IScenarioDefinition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IScenarioDefinition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IScenarioDefinition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addScenarioObjectCheckerRule(ICheckerRule<IScenarioObject> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IScenarioObject.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IScenarioObject.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addSelectedEntitiesCheckerRule(ICheckerRule<ISelectedEntities> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISelectedEntities.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ISelectedEntities.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addShapeCheckerRule(ICheckerRule<IShape> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IShape.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IShape.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addSimulationTimeConditionCheckerRule(
      ICheckerRule<ISimulationTimeCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISimulationTimeCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ISimulationTimeCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addSpeedActionCheckerRule(ICheckerRule<ISpeedAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ISpeedAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ISpeedAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addSpeedActionTargetCheckerRule(ICheckerRule<ISpeedActionTarget> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISpeedActionTarget.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ISpeedActionTarget.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addSpeedConditionCheckerRule(ICheckerRule<ISpeedCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISpeedCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ISpeedCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addStandStillConditionCheckerRule(ICheckerRule<IStandStillCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IStandStillCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IStandStillCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addStoryCheckerRule(ICheckerRule<IStory> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IStory.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IStory.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addStoryboardCheckerRule(ICheckerRule<IStoryboard> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IStoryboard.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IStoryboard.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addStoryboardElementStateConditionCheckerRule(
      ICheckerRule<IStoryboardElementStateCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IStoryboardElementStateCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IStoryboardElementStateCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addSunCheckerRule(ICheckerRule<ISun> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ISun.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ISun.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addSynchronizeActionCheckerRule(ICheckerRule<ISynchronizeAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISynchronizeAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ISynchronizeAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTeleportActionCheckerRule(ICheckerRule<ITeleportAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITeleportAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITeleportAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTimeHeadwayConditionCheckerRule(ICheckerRule<ITimeHeadwayCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeHeadwayCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITimeHeadwayCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTimeOfDayCheckerRule(ICheckerRule<ITimeOfDay> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITimeOfDay.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITimeOfDay.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTimeOfDayConditionCheckerRule(ICheckerRule<ITimeOfDayCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeOfDayCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITimeOfDayCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTimeReferenceCheckerRule(ICheckerRule<ITimeReference> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeReference.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITimeReference.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTimeToCollisionConditionCheckerRule(
      ICheckerRule<ITimeToCollisionCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeToCollisionCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITimeToCollisionCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTimeToCollisionConditionTargetCheckerRule(
      ICheckerRule<ITimeToCollisionConditionTarget> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeToCollisionConditionTarget.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITimeToCollisionConditionTarget.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTimingCheckerRule(ICheckerRule<ITiming> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITiming.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITiming.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficActionCheckerRule(ICheckerRule<ITrafficAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficDefinitionCheckerRule(ICheckerRule<ITrafficDefinition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficDefinition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficDefinition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSignalActionCheckerRule(ICheckerRule<ITrafficSignalAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSignalAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSignalConditionCheckerRule(
      ICheckerRule<ITrafficSignalCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSignalCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSignalControllerCheckerRule(
      ICheckerRule<ITrafficSignalController> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalController.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSignalController.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSignalControllerActionCheckerRule(
      ICheckerRule<ITrafficSignalControllerAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalControllerAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSignalControllerAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSignalControllerConditionCheckerRule(
      ICheckerRule<ITrafficSignalControllerCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalControllerCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSignalControllerCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSignalStateCheckerRule(ICheckerRule<ITrafficSignalState> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalState.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSignalState.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSignalStateActionCheckerRule(
      ICheckerRule<ITrafficSignalStateAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalStateAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSignalStateAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSinkActionCheckerRule(ICheckerRule<ITrafficSinkAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSinkAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSinkAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSourceActionCheckerRule(ICheckerRule<ITrafficSourceAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSourceAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSourceAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrafficSwarmActionCheckerRule(ICheckerRule<ITrafficSwarmAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSwarmAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrafficSwarmAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrajectoryCheckerRule(ICheckerRule<ITrajectory> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITrajectory.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrajectory.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrajectoryCatalogLocationCheckerRule(
      ICheckerRule<ITrajectoryCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrajectoryCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrajectoryCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTrajectoryFollowingModeCheckerRule(
      ICheckerRule<ITrajectoryFollowingMode> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrajectoryFollowingMode.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrajectoryFollowingMode.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTransitionDynamicsCheckerRule(ICheckerRule<ITransitionDynamics> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITransitionDynamics.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITransitionDynamics.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTraveledDistanceConditionCheckerRule(
      ICheckerRule<ITraveledDistanceCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITraveledDistanceCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITraveledDistanceCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTriggerCheckerRule(ICheckerRule<ITrigger> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITrigger.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITrigger.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addTriggeringEntitiesCheckerRule(ICheckerRule<ITriggeringEntities> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITriggeringEntities.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(ITriggeringEntities.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addUserDefinedActionCheckerRule(ICheckerRule<IUserDefinedAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IUserDefinedAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IUserDefinedAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addUserDefinedValueConditionCheckerRule(
      ICheckerRule<IUserDefinedValueCondition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IUserDefinedValueCondition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IUserDefinedValueCondition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addVehicleCheckerRule(ICheckerRule<IVehicle> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IVehicle.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IVehicle.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addVehicleCatalogLocationCheckerRule(
      ICheckerRule<IVehicleCatalogLocation> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVehicleCatalogLocation.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IVehicleCatalogLocation.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addVehicleCategoryDistributionCheckerRule(
      ICheckerRule<IVehicleCategoryDistribution> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVehicleCategoryDistribution.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IVehicleCategoryDistribution.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addVehicleCategoryDistributionEntryCheckerRule(
      ICheckerRule<IVehicleCategoryDistributionEntry> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVehicleCategoryDistributionEntry.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IVehicleCategoryDistributionEntry.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addVertexCheckerRule(ICheckerRule<IVertex> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IVertex.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IVertex.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addVisibilityActionCheckerRule(ICheckerRule<IVisibilityAction> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVisibilityAction.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IVisibilityAction.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addWaypointCheckerRule(ICheckerRule<IWaypoint> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IWaypoint.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IWaypoint.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addWeatherCheckerRule(ICheckerRule<IWeather> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IWeather.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IWeather.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  @Override
  public void addWorldPositionCheckerRule(ICheckerRule<IWorldPosition> checkerRule) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IWorldPosition.class);
    if (checkerRulesForType == null) {
      checkerRulesForType = new ArrayList<>();
      this.typeToCheckerRuleList.put(IWorldPosition.class, checkerRulesForType);
    }
    checkerRulesForType.add(checkerRule);
  }

  private void applyAbsoluteSpeedCheckerRules(
      IContentMessageLogger<?> messageLogger, IAbsoluteSpeed object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteSpeed.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAbsoluteSpeed> typedCheckerRule = (ICheckerRule<IAbsoluteSpeed>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyAbsoluteTargetLaneCheckerRules(
      IContentMessageLogger<?> messageLogger, IAbsoluteTargetLane object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteTargetLane.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAbsoluteTargetLane> typedCheckerRule =
            (ICheckerRule<IAbsoluteTargetLane>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyAbsoluteTargetLaneOffsetCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IAbsoluteTargetLaneOffset object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteTargetLaneOffset.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAbsoluteTargetLaneOffset> typedCheckerRule =
            (ICheckerRule<IAbsoluteTargetLaneOffset>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyAbsoluteTargetSpeedCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IAbsoluteTargetSpeed object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAbsoluteTargetSpeed.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAbsoluteTargetSpeed> typedCheckerRule =
            (ICheckerRule<IAbsoluteTargetSpeed>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyAccelerationConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IAccelerationCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAccelerationCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAccelerationCondition> typedCheckerRule =
            (ICheckerRule<IAccelerationCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyAcquirePositionActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IAcquirePositionAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAcquirePositionAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAcquirePositionAction> typedCheckerRule =
            (ICheckerRule<IAcquirePositionAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyActCheckerRules(
      IContentMessageLogger<?> messageLogger, IAct object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAct.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAct> typedCheckerRule = (ICheckerRule<IAct>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IManeuverGroup> maneuverGroups = object.getManeuverGroups();
    if (maneuverGroups != null) {
      for (IManeuverGroup listItem : maneuverGroups) {
        applyManeuverGroupCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    ITrigger startTrigger = object.getStartTrigger();
    if (startTrigger != null) {
      applyTriggerCheckerRules(messageLogger, startTrigger, contextMode);
    }
    ITrigger stopTrigger = object.getStopTrigger();
    if (stopTrigger != null) {
      applyTriggerCheckerRules(messageLogger, stopTrigger, contextMode);
    }
  }

  private void applyActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAction> typedCheckerRule = (ICheckerRule<IAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IGlobalAction globalAction = object.getGlobalAction();
    if (globalAction != null) {
      applyGlobalActionCheckerRules(messageLogger, globalAction, contextMode);
    }
    IUserDefinedAction userDefinedAction = object.getUserDefinedAction();
    if (userDefinedAction != null) {
      applyUserDefinedActionCheckerRules(messageLogger, userDefinedAction, contextMode);
    }
    IPrivateAction privateAction = object.getPrivateAction();
    if (privateAction != null) {
      applyPrivateActionCheckerRules(messageLogger, privateAction, contextMode);
    }
  }

  private void applyActivateControllerActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IActivateControllerAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IActivateControllerAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IActivateControllerAction> typedCheckerRule =
            (ICheckerRule<IActivateControllerAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyActorsCheckerRules(
      IContentMessageLogger<?> messageLogger, IActors object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IActors.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IActors> typedCheckerRule = (ICheckerRule<IActors>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IEntityRef> entityRefs = object.getEntityRefs();
    if (entityRefs != null) {
      for (IEntityRef listItem : entityRefs) {
        applyEntityRefCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyAddEntityActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IAddEntityAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAddEntityAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAddEntityAction> typedCheckerRule =
            (ICheckerRule<IAddEntityAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyAssignControllerActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IAssignControllerAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAssignControllerAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAssignControllerAction> typedCheckerRule =
            (ICheckerRule<IAssignControllerAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IController controller = object.getController();
    if (controller != null) {
      applyControllerCheckerRules(messageLogger, controller, contextMode);
    }
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
  }

  private void applyAssignRouteActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IAssignRouteAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IAssignRouteAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAssignRouteAction> typedCheckerRule =
            (ICheckerRule<IAssignRouteAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IRoute route = object.getRoute();
    if (route != null) {
      applyRouteCheckerRules(messageLogger, route, contextMode);
    }
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
  }

  private void applyAxleCheckerRules(
      IContentMessageLogger<?> messageLogger, IAxle object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAxle.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAxle> typedCheckerRule = (ICheckerRule<IAxle>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyAxlesCheckerRules(
      IContentMessageLogger<?> messageLogger, IAxles object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IAxles.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IAxles> typedCheckerRule = (ICheckerRule<IAxles>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IAxle frontAxle = object.getFrontAxle();
    if (frontAxle != null) {
      applyAxleCheckerRules(messageLogger, frontAxle, contextMode);
    }
    IAxle rearAxle = object.getRearAxle();
    if (rearAxle != null) {
      applyAxleCheckerRules(messageLogger, rearAxle, contextMode);
    }
    List<IAxle> additionalAxles = object.getAdditionalAxles();
    if (additionalAxles != null) {
      for (IAxle listItem : additionalAxles) {
        applyAxleCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyBoundingBoxCheckerRules(
      IContentMessageLogger<?> messageLogger, IBoundingBox object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IBoundingBox.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IBoundingBox> typedCheckerRule = (ICheckerRule<IBoundingBox>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ICenter center = object.getCenter();
    if (center != null) {
      applyCenterCheckerRules(messageLogger, center, contextMode);
    }
    IDimensions dimensions = object.getDimensions();
    if (dimensions != null) {
      applyDimensionsCheckerRules(messageLogger, dimensions, contextMode);
    }
  }

  private void applyByEntityConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IByEntityCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IByEntityCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IByEntityCondition> typedCheckerRule =
            (ICheckerRule<IByEntityCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITriggeringEntities triggeringEntities = object.getTriggeringEntities();
    if (triggeringEntities != null) {
      applyTriggeringEntitiesCheckerRules(messageLogger, triggeringEntities, contextMode);
    }
    IEntityCondition entityCondition = object.getEntityCondition();
    if (entityCondition != null) {
      applyEntityConditionCheckerRules(messageLogger, entityCondition, contextMode);
    }
  }

  private void applyByObjectTypeCheckerRules(
      IContentMessageLogger<?> messageLogger, IByObjectType object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IByObjectType.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IByObjectType> typedCheckerRule = (ICheckerRule<IByObjectType>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyByTypeCheckerRules(
      IContentMessageLogger<?> messageLogger, IByType object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IByType.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IByType> typedCheckerRule = (ICheckerRule<IByType>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyByValueConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IByValueCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IByValueCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IByValueCondition> typedCheckerRule =
            (ICheckerRule<IByValueCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IParameterCondition parameterCondition = object.getParameterCondition();
    if (parameterCondition != null) {
      applyParameterConditionCheckerRules(messageLogger, parameterCondition, contextMode);
    }
    ITimeOfDayCondition timeOfDayCondition = object.getTimeOfDayCondition();
    if (timeOfDayCondition != null) {
      applyTimeOfDayConditionCheckerRules(messageLogger, timeOfDayCondition, contextMode);
    }
    ISimulationTimeCondition simulationTimeCondition = object.getSimulationTimeCondition();
    if (simulationTimeCondition != null) {
      applySimulationTimeConditionCheckerRules(messageLogger, simulationTimeCondition, contextMode);
    }
    IStoryboardElementStateCondition storyboardElementStateCondition =
        object.getStoryboardElementStateCondition();
    if (storyboardElementStateCondition != null) {
      applyStoryboardElementStateConditionCheckerRules(
          messageLogger, storyboardElementStateCondition, contextMode);
    }
    IUserDefinedValueCondition userDefinedValueCondition = object.getUserDefinedValueCondition();
    if (userDefinedValueCondition != null) {
      applyUserDefinedValueConditionCheckerRules(
          messageLogger, userDefinedValueCondition, contextMode);
    }
    ITrafficSignalCondition trafficSignalCondition = object.getTrafficSignalCondition();
    if (trafficSignalCondition != null) {
      applyTrafficSignalConditionCheckerRules(messageLogger, trafficSignalCondition, contextMode);
    }
    ITrafficSignalControllerCondition trafficSignalControllerCondition =
        object.getTrafficSignalControllerCondition();
    if (trafficSignalControllerCondition != null) {
      applyTrafficSignalControllerConditionCheckerRules(
          messageLogger, trafficSignalControllerCondition, contextMode);
    }
  }

  private void applyCatalogCheckerRules(
      IContentMessageLogger<?> messageLogger, ICatalog object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ICatalog.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICatalog> typedCheckerRule = (ICheckerRule<ICatalog>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IVehicle> vehicles = object.getVehicles();
    if (vehicles != null) {
      for (IVehicle listItem : vehicles) {
        applyVehicleCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IController> controllers = object.getControllers();
    if (controllers != null) {
      for (IController listItem : controllers) {
        applyControllerCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IPedestrian> pedestrians = object.getPedestrians();
    if (pedestrians != null) {
      for (IPedestrian listItem : pedestrians) {
        applyPedestrianCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IMiscObject> miscObjects = object.getMiscObjects();
    if (miscObjects != null) {
      for (IMiscObject listItem : miscObjects) {
        applyMiscObjectCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IEnvironment> environments = object.getEnvironments();
    if (environments != null) {
      for (IEnvironment listItem : environments) {
        applyEnvironmentCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IManeuver> maneuvers = object.getManeuvers();
    if (maneuvers != null) {
      for (IManeuver listItem : maneuvers) {
        applyManeuverCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<ITrajectory> trajectories = object.getTrajectories();
    if (trajectories != null) {
      for (ITrajectory listItem : trajectories) {
        applyTrajectoryCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IRoute> routes = object.getRoutes();
    if (routes != null) {
      for (IRoute listItem : routes) {
        applyRouteCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyCatalogDefinitionCheckerRules(
      IContentMessageLogger<?> messageLogger, ICatalogDefinition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICatalogDefinition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICatalogDefinition> typedCheckerRule =
            (ICheckerRule<ICatalogDefinition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ICatalog catalog = object.getCatalog();
    if (catalog != null) {
      applyCatalogCheckerRules(messageLogger, catalog, contextMode);
    }
  }

  private void applyCatalogLocationsCheckerRules(
      IContentMessageLogger<?> messageLogger, ICatalogLocations object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICatalogLocations.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICatalogLocations> typedCheckerRule =
            (ICheckerRule<ICatalogLocations>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IVehicleCatalogLocation vehicleCatalog = object.getVehicleCatalog();
    if (vehicleCatalog != null) {
      applyVehicleCatalogLocationCheckerRules(messageLogger, vehicleCatalog, contextMode);
    }
    IControllerCatalogLocation controllerCatalog = object.getControllerCatalog();
    if (controllerCatalog != null) {
      applyControllerCatalogLocationCheckerRules(messageLogger, controllerCatalog, contextMode);
    }
    IPedestrianCatalogLocation pedestrianCatalog = object.getPedestrianCatalog();
    if (pedestrianCatalog != null) {
      applyPedestrianCatalogLocationCheckerRules(messageLogger, pedestrianCatalog, contextMode);
    }
    IMiscObjectCatalogLocation miscObjectCatalog = object.getMiscObjectCatalog();
    if (miscObjectCatalog != null) {
      applyMiscObjectCatalogLocationCheckerRules(messageLogger, miscObjectCatalog, contextMode);
    }
    IEnvironmentCatalogLocation environmentCatalog = object.getEnvironmentCatalog();
    if (environmentCatalog != null) {
      applyEnvironmentCatalogLocationCheckerRules(messageLogger, environmentCatalog, contextMode);
    }
    IManeuverCatalogLocation maneuverCatalog = object.getManeuverCatalog();
    if (maneuverCatalog != null) {
      applyManeuverCatalogLocationCheckerRules(messageLogger, maneuverCatalog, contextMode);
    }
    ITrajectoryCatalogLocation trajectoryCatalog = object.getTrajectoryCatalog();
    if (trajectoryCatalog != null) {
      applyTrajectoryCatalogLocationCheckerRules(messageLogger, trajectoryCatalog, contextMode);
    }
    IRouteCatalogLocation routeCatalog = object.getRouteCatalog();
    if (routeCatalog != null) {
      applyRouteCatalogLocationCheckerRules(messageLogger, routeCatalog, contextMode);
    }
  }

  private void applyCatalogReferenceCheckerRules(
      IContentMessageLogger<?> messageLogger, ICatalogReference object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICatalogReference.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICatalogReference> typedCheckerRule =
            (ICheckerRule<ICatalogReference>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterAssignment> parameterAssignments = object.getParameterAssignments();
    if (parameterAssignments != null) {
      for (IParameterAssignment listItem : parameterAssignments) {
        applyParameterAssignmentCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyCenterCheckerRules(
      IContentMessageLogger<?> messageLogger, ICenter object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ICenter.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICenter> typedCheckerRule = (ICheckerRule<ICenter>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyCentralSwarmObjectCheckerRules(
      IContentMessageLogger<?> messageLogger, ICentralSwarmObject object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICentralSwarmObject.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICentralSwarmObject> typedCheckerRule =
            (ICheckerRule<ICentralSwarmObject>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyClothoidCheckerRules(
      IContentMessageLogger<?> messageLogger, IClothoid object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IClothoid.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IClothoid> typedCheckerRule = (ICheckerRule<IClothoid>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyCollisionConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, ICollisionCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICollisionCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICollisionCondition> typedCheckerRule =
            (ICheckerRule<ICollisionCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IEntityRef entityRef = object.getEntityRef();
    if (entityRef != null) {
      applyEntityRefCheckerRules(messageLogger, entityRef, contextMode);
    }
    IByObjectType byType = object.getByType();
    if (byType != null) {
      applyByObjectTypeCheckerRules(messageLogger, byType, contextMode);
    }
  }

  private void applyConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, ICondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ICondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICondition> typedCheckerRule = (ICheckerRule<ICondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IByEntityCondition byEntityCondition = object.getByEntityCondition();
    if (byEntityCondition != null) {
      applyByEntityConditionCheckerRules(messageLogger, byEntityCondition, contextMode);
    }
    IByValueCondition byValueCondition = object.getByValueCondition();
    if (byValueCondition != null) {
      applyByValueConditionCheckerRules(messageLogger, byValueCondition, contextMode);
    }
  }

  private void applyConditionGroupCheckerRules(
      IContentMessageLogger<?> messageLogger, IConditionGroup object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IConditionGroup.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IConditionGroup> typedCheckerRule =
            (ICheckerRule<IConditionGroup>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<ICondition> conditions = object.getConditions();
    if (conditions != null) {
      for (ICondition listItem : conditions) {
        applyConditionCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyControlPointCheckerRules(
      IContentMessageLogger<?> messageLogger, IControlPoint object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IControlPoint.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IControlPoint> typedCheckerRule = (ICheckerRule<IControlPoint>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyControllerCheckerRules(
      IContentMessageLogger<?> messageLogger, IController object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IController.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IController> typedCheckerRule = (ICheckerRule<IController>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    IProperties properties = object.getProperties();
    if (properties != null) {
      applyPropertiesCheckerRules(messageLogger, properties, contextMode);
    }
  }

  private void applyControllerActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IControllerAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IControllerAction> typedCheckerRule =
            (ICheckerRule<IControllerAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IAssignControllerAction assignControllerAction = object.getAssignControllerAction();
    if (assignControllerAction != null) {
      applyAssignControllerActionCheckerRules(messageLogger, assignControllerAction, contextMode);
    }
    IOverrideControllerValueAction overrideControllerValueAction =
        object.getOverrideControllerValueAction();
    if (overrideControllerValueAction != null) {
      applyOverrideControllerValueActionCheckerRules(
          messageLogger, overrideControllerValueAction, contextMode);
    }
  }

  private void applyControllerCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IControllerCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IControllerCatalogLocation> typedCheckerRule =
            (ICheckerRule<IControllerCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyControllerDistributionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IControllerDistribution object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerDistribution.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IControllerDistribution> typedCheckerRule =
            (ICheckerRule<IControllerDistribution>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IControllerDistributionEntry> controllerDistributionEntries =
        object.getControllerDistributionEntries();
    if (controllerDistributionEntries != null) {
      for (IControllerDistributionEntry listItem : controllerDistributionEntries) {
        applyControllerDistributionEntryCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyControllerDistributionEntryCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IControllerDistributionEntry object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IControllerDistributionEntry.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IControllerDistributionEntry> typedCheckerRule =
            (ICheckerRule<IControllerDistributionEntry>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IController controller = object.getController();
    if (controller != null) {
      applyControllerCheckerRules(messageLogger, controller, contextMode);
    }
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
  }

  private void applyCustomCommandActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ICustomCommandAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ICustomCommandAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ICustomCommandAction> typedCheckerRule =
            (ICheckerRule<ICustomCommandAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyDeleteEntityActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IDeleteEntityAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IDeleteEntityAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IDeleteEntityAction> typedCheckerRule =
            (ICheckerRule<IDeleteEntityAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyDimensionsCheckerRules(
      IContentMessageLogger<?> messageLogger, IDimensions object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IDimensions.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IDimensions> typedCheckerRule = (ICheckerRule<IDimensions>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyDirectoryCheckerRules(
      IContentMessageLogger<?> messageLogger, IDirectory object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IDirectory.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IDirectory> typedCheckerRule = (ICheckerRule<IDirectory>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyDistanceConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IDistanceCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IDistanceCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IDistanceCondition> typedCheckerRule =
            (ICheckerRule<IDistanceCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyDynamicConstraintsCheckerRules(
      IContentMessageLogger<?> messageLogger, IDynamicConstraints object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IDynamicConstraints.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IDynamicConstraints> typedCheckerRule =
            (ICheckerRule<IDynamicConstraints>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyEndOfRoadConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IEndOfRoadCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEndOfRoadCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEndOfRoadCondition> typedCheckerRule =
            (ICheckerRule<IEndOfRoadCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyEntitiesCheckerRules(
      IContentMessageLogger<?> messageLogger, IEntities object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntities.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEntities> typedCheckerRule = (ICheckerRule<IEntities>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IScenarioObject> scenarioObjects = object.getScenarioObjects();
    if (scenarioObjects != null) {
      for (IScenarioObject listItem : scenarioObjects) {
        applyScenarioObjectCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IEntitySelection> entitySelections = object.getEntitySelections();
    if (entitySelections != null) {
      for (IEntitySelection listItem : entitySelections) {
        applyEntitySelectionCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyEntityActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IEntityAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntityAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEntityAction> typedCheckerRule = (ICheckerRule<IEntityAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IAddEntityAction addEntityAction = object.getAddEntityAction();
    if (addEntityAction != null) {
      applyAddEntityActionCheckerRules(messageLogger, addEntityAction, contextMode);
    }
    IDeleteEntityAction deleteEntityAction = object.getDeleteEntityAction();
    if (deleteEntityAction != null) {
      applyDeleteEntityActionCheckerRules(messageLogger, deleteEntityAction, contextMode);
    }
  }

  private void applyEntityConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IEntityCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEntityCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEntityCondition> typedCheckerRule =
            (ICheckerRule<IEntityCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IEndOfRoadCondition endOfRoadCondition = object.getEndOfRoadCondition();
    if (endOfRoadCondition != null) {
      applyEndOfRoadConditionCheckerRules(messageLogger, endOfRoadCondition, contextMode);
    }
    ICollisionCondition collisionCondition = object.getCollisionCondition();
    if (collisionCondition != null) {
      applyCollisionConditionCheckerRules(messageLogger, collisionCondition, contextMode);
    }
    IOffroadCondition offroadCondition = object.getOffroadCondition();
    if (offroadCondition != null) {
      applyOffroadConditionCheckerRules(messageLogger, offroadCondition, contextMode);
    }
    ITimeHeadwayCondition timeHeadwayCondition = object.getTimeHeadwayCondition();
    if (timeHeadwayCondition != null) {
      applyTimeHeadwayConditionCheckerRules(messageLogger, timeHeadwayCondition, contextMode);
    }
    ITimeToCollisionCondition timeToCollisionCondition = object.getTimeToCollisionCondition();
    if (timeToCollisionCondition != null) {
      applyTimeToCollisionConditionCheckerRules(
          messageLogger, timeToCollisionCondition, contextMode);
    }
    IAccelerationCondition accelerationCondition = object.getAccelerationCondition();
    if (accelerationCondition != null) {
      applyAccelerationConditionCheckerRules(messageLogger, accelerationCondition, contextMode);
    }
    IStandStillCondition standStillCondition = object.getStandStillCondition();
    if (standStillCondition != null) {
      applyStandStillConditionCheckerRules(messageLogger, standStillCondition, contextMode);
    }
    ISpeedCondition speedCondition = object.getSpeedCondition();
    if (speedCondition != null) {
      applySpeedConditionCheckerRules(messageLogger, speedCondition, contextMode);
    }
    IRelativeSpeedCondition relativeSpeedCondition = object.getRelativeSpeedCondition();
    if (relativeSpeedCondition != null) {
      applyRelativeSpeedConditionCheckerRules(messageLogger, relativeSpeedCondition, contextMode);
    }
    ITraveledDistanceCondition traveledDistanceCondition = object.getTraveledDistanceCondition();
    if (traveledDistanceCondition != null) {
      applyTraveledDistanceConditionCheckerRules(
          messageLogger, traveledDistanceCondition, contextMode);
    }
    IReachPositionCondition reachPositionCondition = object.getReachPositionCondition();
    if (reachPositionCondition != null) {
      applyReachPositionConditionCheckerRules(messageLogger, reachPositionCondition, contextMode);
    }
    IDistanceCondition distanceCondition = object.getDistanceCondition();
    if (distanceCondition != null) {
      applyDistanceConditionCheckerRules(messageLogger, distanceCondition, contextMode);
    }
    IRelativeDistanceCondition relativeDistanceCondition = object.getRelativeDistanceCondition();
    if (relativeDistanceCondition != null) {
      applyRelativeDistanceConditionCheckerRules(
          messageLogger, relativeDistanceCondition, contextMode);
    }
  }

  private void applyEntityObjectCheckerRules(
      IContentMessageLogger<?> messageLogger, IEntityObject object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntityObject.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEntityObject> typedCheckerRule = (ICheckerRule<IEntityObject>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
    IVehicle vehicle = object.getVehicle();
    if (vehicle != null) {
      applyVehicleCheckerRules(messageLogger, vehicle, contextMode);
    }
    IPedestrian pedestrian = object.getPedestrian();
    if (pedestrian != null) {
      applyPedestrianCheckerRules(messageLogger, pedestrian, contextMode);
    }
    IMiscObject miscObject = object.getMiscObject();
    if (miscObject != null) {
      applyMiscObjectCheckerRules(messageLogger, miscObject, contextMode);
    }
  }

  private void applyEntityRefCheckerRules(
      IContentMessageLogger<?> messageLogger, IEntityRef object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEntityRef.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEntityRef> typedCheckerRule = (ICheckerRule<IEntityRef>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyEntitySelectionCheckerRules(
      IContentMessageLogger<?> messageLogger, IEntitySelection object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEntitySelection.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEntitySelection> typedCheckerRule =
            (ICheckerRule<IEntitySelection>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ISelectedEntities members = object.getMembers();
    if (members != null) {
      applySelectedEntitiesCheckerRules(messageLogger, members, contextMode);
    }
  }

  private void applyEnvironmentCheckerRules(
      IContentMessageLogger<?> messageLogger, IEnvironment object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEnvironment.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEnvironment> typedCheckerRule = (ICheckerRule<IEnvironment>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    ITimeOfDay timeOfDay = object.getTimeOfDay();
    if (timeOfDay != null) {
      applyTimeOfDayCheckerRules(messageLogger, timeOfDay, contextMode);
    }
    IWeather weather = object.getWeather();
    if (weather != null) {
      applyWeatherCheckerRules(messageLogger, weather, contextMode);
    }
    IRoadCondition roadCondition = object.getRoadCondition();
    if (roadCondition != null) {
      applyRoadConditionCheckerRules(messageLogger, roadCondition, contextMode);
    }
  }

  private void applyEnvironmentActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IEnvironmentAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEnvironmentAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEnvironmentAction> typedCheckerRule =
            (ICheckerRule<IEnvironmentAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IEnvironment environment = object.getEnvironment();
    if (environment != null) {
      applyEnvironmentCheckerRules(messageLogger, environment, contextMode);
    }
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
  }

  private void applyEnvironmentCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IEnvironmentCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IEnvironmentCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEnvironmentCatalogLocation> typedCheckerRule =
            (ICheckerRule<IEnvironmentCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyEventCheckerRules(
      IContentMessageLogger<?> messageLogger, IEvent object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IEvent.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IEvent> typedCheckerRule = (ICheckerRule<IEvent>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IAction> actions = object.getActions();
    if (actions != null) {
      for (IAction listItem : actions) {
        applyActionCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    ITrigger startTrigger = object.getStartTrigger();
    if (startTrigger != null) {
      applyTriggerCheckerRules(messageLogger, startTrigger, contextMode);
    }
  }

  private void applyFileCheckerRules(
      IContentMessageLogger<?> messageLogger, IFile object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFile.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IFile> typedCheckerRule = (ICheckerRule<IFile>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyFileHeaderCheckerRules(
      IContentMessageLogger<?> messageLogger, IFileHeader object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFileHeader.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IFileHeader> typedCheckerRule = (ICheckerRule<IFileHeader>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyFinalSpeedCheckerRules(
      IContentMessageLogger<?> messageLogger, IFinalSpeed object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFinalSpeed.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IFinalSpeed> typedCheckerRule = (ICheckerRule<IFinalSpeed>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IAbsoluteSpeed absoluteSpeed = object.getAbsoluteSpeed();
    if (absoluteSpeed != null) {
      applyAbsoluteSpeedCheckerRules(messageLogger, absoluteSpeed, contextMode);
    }
    IRelativeSpeedToMaster relativeSpeedToMaster = object.getRelativeSpeedToMaster();
    if (relativeSpeedToMaster != null) {
      applyRelativeSpeedToMasterCheckerRules(messageLogger, relativeSpeedToMaster, contextMode);
    }
  }

  private void applyFogCheckerRules(
      IContentMessageLogger<?> messageLogger, IFog object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IFog.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IFog> typedCheckerRule = (ICheckerRule<IFog>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IBoundingBox boundingBox = object.getBoundingBox();
    if (boundingBox != null) {
      applyBoundingBoxCheckerRules(messageLogger, boundingBox, contextMode);
    }
  }

  private void applyFollowTrajectoryActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IFollowTrajectoryAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IFollowTrajectoryAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IFollowTrajectoryAction> typedCheckerRule =
            (ICheckerRule<IFollowTrajectoryAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITrajectory trajectory = object.getTrajectory();
    if (trajectory != null) {
      applyTrajectoryCheckerRules(messageLogger, trajectory, contextMode);
    }
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
    ITimeReference timeReference = object.getTimeReference();
    if (timeReference != null) {
      applyTimeReferenceCheckerRules(messageLogger, timeReference, contextMode);
    }
    ITrajectoryFollowingMode trajectoryFollowingMode = object.getTrajectoryFollowingMode();
    if (trajectoryFollowingMode != null) {
      applyTrajectoryFollowingModeCheckerRules(messageLogger, trajectoryFollowingMode, contextMode);
    }
  }

  private void applyGlobalActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IGlobalAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IGlobalAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IGlobalAction> typedCheckerRule = (ICheckerRule<IGlobalAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IEnvironmentAction environmentAction = object.getEnvironmentAction();
    if (environmentAction != null) {
      applyEnvironmentActionCheckerRules(messageLogger, environmentAction, contextMode);
    }
    IEntityAction entityAction = object.getEntityAction();
    if (entityAction != null) {
      applyEntityActionCheckerRules(messageLogger, entityAction, contextMode);
    }
    IParameterAction parameterAction = object.getParameterAction();
    if (parameterAction != null) {
      applyParameterActionCheckerRules(messageLogger, parameterAction, contextMode);
    }
    IInfrastructureAction infrastructureAction = object.getInfrastructureAction();
    if (infrastructureAction != null) {
      applyInfrastructureActionCheckerRules(messageLogger, infrastructureAction, contextMode);
    }
    ITrafficAction trafficAction = object.getTrafficAction();
    if (trafficAction != null) {
      applyTrafficActionCheckerRules(messageLogger, trafficAction, contextMode);
    }
  }

  private void applyInRoutePositionCheckerRules(
      IContentMessageLogger<?> messageLogger, IInRoutePosition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IInRoutePosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IInRoutePosition> typedCheckerRule =
            (ICheckerRule<IInRoutePosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPositionOfCurrentEntity fromCurrentEntity = object.getFromCurrentEntity();
    if (fromCurrentEntity != null) {
      applyPositionOfCurrentEntityCheckerRules(messageLogger, fromCurrentEntity, contextMode);
    }
    IPositionInRoadCoordinates fromRoadCoordinates = object.getFromRoadCoordinates();
    if (fromRoadCoordinates != null) {
      applyPositionInRoadCoordinatesCheckerRules(messageLogger, fromRoadCoordinates, contextMode);
    }
    IPositionInLaneCoordinates fromLaneCoordinates = object.getFromLaneCoordinates();
    if (fromLaneCoordinates != null) {
      applyPositionInLaneCoordinatesCheckerRules(messageLogger, fromLaneCoordinates, contextMode);
    }
  }

  private void applyInfrastructureActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IInfrastructureAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IInfrastructureAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IInfrastructureAction> typedCheckerRule =
            (ICheckerRule<IInfrastructureAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITrafficSignalAction trafficSignalAction = object.getTrafficSignalAction();
    if (trafficSignalAction != null) {
      applyTrafficSignalActionCheckerRules(messageLogger, trafficSignalAction, contextMode);
    }
  }

  private void applyInitCheckerRules(
      IContentMessageLogger<?> messageLogger, IInit object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IInit.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IInit> typedCheckerRule = (ICheckerRule<IInit>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IInitActions actions = object.getActions();
    if (actions != null) {
      applyInitActionsCheckerRules(messageLogger, actions, contextMode);
    }
  }

  private void applyInitActionsCheckerRules(
      IContentMessageLogger<?> messageLogger, IInitActions object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IInitActions.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IInitActions> typedCheckerRule = (ICheckerRule<IInitActions>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IGlobalAction> globalActions = object.getGlobalActions();
    if (globalActions != null) {
      for (IGlobalAction listItem : globalActions) {
        applyGlobalActionCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IUserDefinedAction> userDefinedActions = object.getUserDefinedActions();
    if (userDefinedActions != null) {
      for (IUserDefinedAction listItem : userDefinedActions) {
        applyUserDefinedActionCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IPrivate> privates = object.getPrivates();
    if (privates != null) {
      for (IPrivate listItem : privates) {
        applyPrivateCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyKnotCheckerRules(
      IContentMessageLogger<?> messageLogger, IKnot object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IKnot.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IKnot> typedCheckerRule = (ICheckerRule<IKnot>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyLaneChangeActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ILaneChangeAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneChangeAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILaneChangeAction> typedCheckerRule =
            (ICheckerRule<ILaneChangeAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITransitionDynamics laneChangeActionDynamics = object.getLaneChangeActionDynamics();
    if (laneChangeActionDynamics != null) {
      applyTransitionDynamicsCheckerRules(messageLogger, laneChangeActionDynamics, contextMode);
    }
    ILaneChangeTarget laneChangeTarget = object.getLaneChangeTarget();
    if (laneChangeTarget != null) {
      applyLaneChangeTargetCheckerRules(messageLogger, laneChangeTarget, contextMode);
    }
  }

  private void applyLaneChangeTargetCheckerRules(
      IContentMessageLogger<?> messageLogger, ILaneChangeTarget object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneChangeTarget.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILaneChangeTarget> typedCheckerRule =
            (ICheckerRule<ILaneChangeTarget>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IRelativeTargetLane relativeTargetLane = object.getRelativeTargetLane();
    if (relativeTargetLane != null) {
      applyRelativeTargetLaneCheckerRules(messageLogger, relativeTargetLane, contextMode);
    }
    IAbsoluteTargetLane absoluteTargetLane = object.getAbsoluteTargetLane();
    if (absoluteTargetLane != null) {
      applyAbsoluteTargetLaneCheckerRules(messageLogger, absoluteTargetLane, contextMode);
    }
  }

  private void applyLaneOffsetActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ILaneOffsetAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneOffsetAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILaneOffsetAction> typedCheckerRule =
            (ICheckerRule<ILaneOffsetAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ILaneOffsetActionDynamics laneOffsetActionDynamics = object.getLaneOffsetActionDynamics();
    if (laneOffsetActionDynamics != null) {
      applyLaneOffsetActionDynamicsCheckerRules(
          messageLogger, laneOffsetActionDynamics, contextMode);
    }
    ILaneOffsetTarget laneOffsetTarget = object.getLaneOffsetTarget();
    if (laneOffsetTarget != null) {
      applyLaneOffsetTargetCheckerRules(messageLogger, laneOffsetTarget, contextMode);
    }
  }

  private void applyLaneOffsetActionDynamicsCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ILaneOffsetActionDynamics object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneOffsetActionDynamics.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILaneOffsetActionDynamics> typedCheckerRule =
            (ICheckerRule<ILaneOffsetActionDynamics>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyLaneOffsetTargetCheckerRules(
      IContentMessageLogger<?> messageLogger, ILaneOffsetTarget object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILaneOffsetTarget.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILaneOffsetTarget> typedCheckerRule =
            (ICheckerRule<ILaneOffsetTarget>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IRelativeTargetLaneOffset relativeTargetLaneOffset = object.getRelativeTargetLaneOffset();
    if (relativeTargetLaneOffset != null) {
      applyRelativeTargetLaneOffsetCheckerRules(
          messageLogger, relativeTargetLaneOffset, contextMode);
    }
    IAbsoluteTargetLaneOffset absoluteTargetLaneOffset = object.getAbsoluteTargetLaneOffset();
    if (absoluteTargetLaneOffset != null) {
      applyAbsoluteTargetLaneOffsetCheckerRules(
          messageLogger, absoluteTargetLaneOffset, contextMode);
    }
  }

  private void applyLanePositionCheckerRules(
      IContentMessageLogger<?> messageLogger, ILanePosition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ILanePosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILanePosition> typedCheckerRule = (ICheckerRule<ILanePosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IOrientation orientation = object.getOrientation();
    if (orientation != null) {
      applyOrientationCheckerRules(messageLogger, orientation, contextMode);
    }
  }

  private void applyLateralActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ILateralAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILateralAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILateralAction> typedCheckerRule = (ICheckerRule<ILateralAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ILaneChangeAction laneChangeAction = object.getLaneChangeAction();
    if (laneChangeAction != null) {
      applyLaneChangeActionCheckerRules(messageLogger, laneChangeAction, contextMode);
    }
    ILaneOffsetAction laneOffsetAction = object.getLaneOffsetAction();
    if (laneOffsetAction != null) {
      applyLaneOffsetActionCheckerRules(messageLogger, laneOffsetAction, contextMode);
    }
    ILateralDistanceAction lateralDistanceAction = object.getLateralDistanceAction();
    if (lateralDistanceAction != null) {
      applyLateralDistanceActionCheckerRules(messageLogger, lateralDistanceAction, contextMode);
    }
  }

  private void applyLateralDistanceActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ILateralDistanceAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILateralDistanceAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILateralDistanceAction> typedCheckerRule =
            (ICheckerRule<ILateralDistanceAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDynamicConstraints dynamicConstraints = object.getDynamicConstraints();
    if (dynamicConstraints != null) {
      applyDynamicConstraintsCheckerRules(messageLogger, dynamicConstraints, contextMode);
    }
  }

  private void applyLongitudinalActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ILongitudinalAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILongitudinalAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILongitudinalAction> typedCheckerRule =
            (ICheckerRule<ILongitudinalAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ISpeedAction speedAction = object.getSpeedAction();
    if (speedAction != null) {
      applySpeedActionCheckerRules(messageLogger, speedAction, contextMode);
    }
    ILongitudinalDistanceAction longitudinalDistanceAction = object.getLongitudinalDistanceAction();
    if (longitudinalDistanceAction != null) {
      applyLongitudinalDistanceActionCheckerRules(
          messageLogger, longitudinalDistanceAction, contextMode);
    }
  }

  private void applyLongitudinalDistanceActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ILongitudinalDistanceAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ILongitudinalDistanceAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ILongitudinalDistanceAction> typedCheckerRule =
            (ICheckerRule<ILongitudinalDistanceAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDynamicConstraints dynamicConstraints = object.getDynamicConstraints();
    if (dynamicConstraints != null) {
      applyDynamicConstraintsCheckerRules(messageLogger, dynamicConstraints, contextMode);
    }
  }

  private void applyManeuverCheckerRules(
      IContentMessageLogger<?> messageLogger, IManeuver object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IManeuver.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IManeuver> typedCheckerRule = (ICheckerRule<IManeuver>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IEvent> events = object.getEvents();
    if (events != null) {
      for (IEvent listItem : events) {
        applyEventCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyManeuverCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IManeuverCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IManeuverCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IManeuverCatalogLocation> typedCheckerRule =
            (ICheckerRule<IManeuverCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyManeuverGroupCheckerRules(
      IContentMessageLogger<?> messageLogger, IManeuverGroup object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IManeuverGroup.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IManeuverGroup> typedCheckerRule = (ICheckerRule<IManeuverGroup>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IActors actors = object.getActors();
    if (actors != null) {
      applyActorsCheckerRules(messageLogger, actors, contextMode);
    }
    List<ICatalogReference> catalogReferences = object.getCatalogReferences();
    if (catalogReferences != null) {
      for (ICatalogReference listItem : catalogReferences) {
        applyCatalogReferenceCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IManeuver> maneuvers = object.getManeuvers();
    if (maneuvers != null) {
      for (IManeuver listItem : maneuvers) {
        applyManeuverCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyMiscObjectCheckerRules(
      IContentMessageLogger<?> messageLogger, IMiscObject object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IMiscObject.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IMiscObject> typedCheckerRule = (ICheckerRule<IMiscObject>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    IBoundingBox boundingBox = object.getBoundingBox();
    if (boundingBox != null) {
      applyBoundingBoxCheckerRules(messageLogger, boundingBox, contextMode);
    }
    IProperties properties = object.getProperties();
    if (properties != null) {
      applyPropertiesCheckerRules(messageLogger, properties, contextMode);
    }
  }

  private void applyMiscObjectCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IMiscObjectCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IMiscObjectCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IMiscObjectCatalogLocation> typedCheckerRule =
            (ICheckerRule<IMiscObjectCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyModifyRuleCheckerRules(
      IContentMessageLogger<?> messageLogger, IModifyRule object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IModifyRule.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IModifyRule> typedCheckerRule = (ICheckerRule<IModifyRule>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IParameterAddValueRule addValue = object.getAddValue();
    if (addValue != null) {
      applyParameterAddValueRuleCheckerRules(messageLogger, addValue, contextMode);
    }
    IParameterMultiplyByValueRule multiplyByValue = object.getMultiplyByValue();
    if (multiplyByValue != null) {
      applyParameterMultiplyByValueRuleCheckerRules(messageLogger, multiplyByValue, contextMode);
    }
  }

  private void applyNoneCheckerRules(
      IContentMessageLogger<?> messageLogger, INone object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(INone.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<INone> typedCheckerRule = (ICheckerRule<INone>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyNurbsCheckerRules(
      IContentMessageLogger<?> messageLogger, INurbs object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(INurbs.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<INurbs> typedCheckerRule = (ICheckerRule<INurbs>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IControlPoint> controlPoints = object.getControlPoints();
    if (controlPoints != null) {
      for (IControlPoint listItem : controlPoints) {
        applyControlPointCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IKnot> knots = object.getKnots();
    if (knots != null) {
      for (IKnot listItem : knots) {
        applyKnotCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyObjectControllerCheckerRules(
      IContentMessageLogger<?> messageLogger, IObjectController object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IObjectController.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IObjectController> typedCheckerRule =
            (ICheckerRule<IObjectController>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
    IController controller = object.getController();
    if (controller != null) {
      applyControllerCheckerRules(messageLogger, controller, contextMode);
    }
  }

  private void applyOffroadConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IOffroadCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOffroadCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOffroadCondition> typedCheckerRule =
            (ICheckerRule<IOffroadCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyOpenScenarioCheckerRules(
      IContentMessageLogger<?> messageLogger, IOpenScenario object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IOpenScenario.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOpenScenario> typedCheckerRule = (ICheckerRule<IOpenScenario>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IFileHeader fileHeader = object.getFileHeader();
    if (fileHeader != null) {
      applyFileHeaderCheckerRules(messageLogger, fileHeader, contextMode);
    }
    IOpenScenarioCategory openScenarioCategory = object.getOpenScenarioCategory();
    if (openScenarioCategory != null) {
      applyOpenScenarioCategoryCheckerRules(messageLogger, openScenarioCategory, contextMode);
    }
  }

  private void applyOpenScenarioCategoryCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IOpenScenarioCategory object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOpenScenarioCategory.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOpenScenarioCategory> typedCheckerRule =
            (ICheckerRule<IOpenScenarioCategory>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IScenarioDefinition scenarioDefinition = object.getScenarioDefinition();
    if (scenarioDefinition != null) {
      applyScenarioDefinitionCheckerRules(messageLogger, scenarioDefinition, contextMode);
    }
    ICatalogDefinition catalogDefinition = object.getCatalogDefinition();
    if (catalogDefinition != null) {
      applyCatalogDefinitionCheckerRules(messageLogger, catalogDefinition, contextMode);
    }
  }

  private void applyOrientationCheckerRules(
      IContentMessageLogger<?> messageLogger, IOrientation object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IOrientation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOrientation> typedCheckerRule = (ICheckerRule<IOrientation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyOverrideBrakeActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IOverrideBrakeAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideBrakeAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOverrideBrakeAction> typedCheckerRule =
            (ICheckerRule<IOverrideBrakeAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyOverrideClutchActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IOverrideClutchAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideClutchAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOverrideClutchAction> typedCheckerRule =
            (ICheckerRule<IOverrideClutchAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyOverrideControllerValueActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IOverrideControllerValueAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideControllerValueAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOverrideControllerValueAction> typedCheckerRule =
            (ICheckerRule<IOverrideControllerValueAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IOverrideThrottleAction throttle = object.getThrottle();
    if (throttle != null) {
      applyOverrideThrottleActionCheckerRules(messageLogger, throttle, contextMode);
    }
    IOverrideBrakeAction brake = object.getBrake();
    if (brake != null) {
      applyOverrideBrakeActionCheckerRules(messageLogger, brake, contextMode);
    }
    IOverrideClutchAction clutch = object.getClutch();
    if (clutch != null) {
      applyOverrideClutchActionCheckerRules(messageLogger, clutch, contextMode);
    }
    IOverrideParkingBrakeAction parkingBrake = object.getParkingBrake();
    if (parkingBrake != null) {
      applyOverrideParkingBrakeActionCheckerRules(messageLogger, parkingBrake, contextMode);
    }
    IOverrideSteeringWheelAction steeringWheel = object.getSteeringWheel();
    if (steeringWheel != null) {
      applyOverrideSteeringWheelActionCheckerRules(messageLogger, steeringWheel, contextMode);
    }
    IOverrideGearAction gear = object.getGear();
    if (gear != null) {
      applyOverrideGearActionCheckerRules(messageLogger, gear, contextMode);
    }
  }

  private void applyOverrideGearActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IOverrideGearAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideGearAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOverrideGearAction> typedCheckerRule =
            (ICheckerRule<IOverrideGearAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyOverrideParkingBrakeActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IOverrideParkingBrakeAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideParkingBrakeAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOverrideParkingBrakeAction> typedCheckerRule =
            (ICheckerRule<IOverrideParkingBrakeAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyOverrideSteeringWheelActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IOverrideSteeringWheelAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideSteeringWheelAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOverrideSteeringWheelAction> typedCheckerRule =
            (ICheckerRule<IOverrideSteeringWheelAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyOverrideThrottleActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IOverrideThrottleAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IOverrideThrottleAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IOverrideThrottleAction> typedCheckerRule =
            (ICheckerRule<IOverrideThrottleAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyParameterActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IParameterAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterAction> typedCheckerRule =
            (ICheckerRule<IParameterAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IParameterSetAction setAction = object.getSetAction();
    if (setAction != null) {
      applyParameterSetActionCheckerRules(messageLogger, setAction, contextMode);
    }
    IParameterModifyAction modifyAction = object.getModifyAction();
    if (modifyAction != null) {
      applyParameterModifyActionCheckerRules(messageLogger, modifyAction, contextMode);
    }
  }

  private void applyParameterAddValueRuleCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IParameterAddValueRule object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterAddValueRule.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterAddValueRule> typedCheckerRule =
            (ICheckerRule<IParameterAddValueRule>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyParameterAssignmentCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IParameterAssignment object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterAssignment.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterAssignment> typedCheckerRule =
            (ICheckerRule<IParameterAssignment>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyParameterConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IParameterCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterCondition> typedCheckerRule =
            (ICheckerRule<IParameterCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyParameterDeclarationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IParameterDeclaration object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterDeclaration.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterDeclaration> typedCheckerRule =
            (ICheckerRule<IParameterDeclaration>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyParameterModifyActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IParameterModifyAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterModifyAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterModifyAction> typedCheckerRule =
            (ICheckerRule<IParameterModifyAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IModifyRule rule = object.getRule();
    if (rule != null) {
      applyModifyRuleCheckerRules(messageLogger, rule, contextMode);
    }
  }

  private void applyParameterMultiplyByValueRuleCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IParameterMultiplyByValueRule object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterMultiplyByValueRule.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterMultiplyByValueRule> typedCheckerRule =
            (ICheckerRule<IParameterMultiplyByValueRule>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyParameterSetActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IParameterSetAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IParameterSetAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IParameterSetAction> typedCheckerRule =
            (ICheckerRule<IParameterSetAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyPedestrianCheckerRules(
      IContentMessageLogger<?> messageLogger, IPedestrian object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPedestrian.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPedestrian> typedCheckerRule = (ICheckerRule<IPedestrian>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    IBoundingBox boundingBox = object.getBoundingBox();
    if (boundingBox != null) {
      applyBoundingBoxCheckerRules(messageLogger, boundingBox, contextMode);
    }
    IProperties properties = object.getProperties();
    if (properties != null) {
      applyPropertiesCheckerRules(messageLogger, properties, contextMode);
    }
  }

  private void applyPedestrianCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IPedestrianCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPedestrianCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPedestrianCatalogLocation> typedCheckerRule =
            (ICheckerRule<IPedestrianCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyPerformanceCheckerRules(
      IContentMessageLogger<?> messageLogger, IPerformance object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPerformance.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPerformance> typedCheckerRule = (ICheckerRule<IPerformance>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyPhaseCheckerRules(
      IContentMessageLogger<?> messageLogger, IPhase object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPhase.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPhase> typedCheckerRule = (ICheckerRule<IPhase>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<ITrafficSignalState> trafficSignalStates = object.getTrafficSignalStates();
    if (trafficSignalStates != null) {
      for (ITrafficSignalState listItem : trafficSignalStates) {
        applyTrafficSignalStateCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyPolylineCheckerRules(
      IContentMessageLogger<?> messageLogger, IPolyline object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPolyline.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPolyline> typedCheckerRule = (ICheckerRule<IPolyline>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IVertex> vertices = object.getVertices();
    if (vertices != null) {
      for (IVertex listItem : vertices) {
        applyVertexCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyPositionCheckerRules(
      IContentMessageLogger<?> messageLogger, IPosition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPosition> typedCheckerRule = (ICheckerRule<IPosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IWorldPosition worldPosition = object.getWorldPosition();
    if (worldPosition != null) {
      applyWorldPositionCheckerRules(messageLogger, worldPosition, contextMode);
    }
    IRelativeWorldPosition relativeWorldPosition = object.getRelativeWorldPosition();
    if (relativeWorldPosition != null) {
      applyRelativeWorldPositionCheckerRules(messageLogger, relativeWorldPosition, contextMode);
    }
    IRelativeObjectPosition relativeObjectPosition = object.getRelativeObjectPosition();
    if (relativeObjectPosition != null) {
      applyRelativeObjectPositionCheckerRules(messageLogger, relativeObjectPosition, contextMode);
    }
    IRoadPosition roadPosition = object.getRoadPosition();
    if (roadPosition != null) {
      applyRoadPositionCheckerRules(messageLogger, roadPosition, contextMode);
    }
    IRelativeRoadPosition relativeRoadPosition = object.getRelativeRoadPosition();
    if (relativeRoadPosition != null) {
      applyRelativeRoadPositionCheckerRules(messageLogger, relativeRoadPosition, contextMode);
    }
    ILanePosition lanePosition = object.getLanePosition();
    if (lanePosition != null) {
      applyLanePositionCheckerRules(messageLogger, lanePosition, contextMode);
    }
    IRelativeLanePosition relativeLanePosition = object.getRelativeLanePosition();
    if (relativeLanePosition != null) {
      applyRelativeLanePositionCheckerRules(messageLogger, relativeLanePosition, contextMode);
    }
    IRoutePosition routePosition = object.getRoutePosition();
    if (routePosition != null) {
      applyRoutePositionCheckerRules(messageLogger, routePosition, contextMode);
    }
  }

  private void applyPositionInLaneCoordinatesCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IPositionInLaneCoordinates object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPositionInLaneCoordinates.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPositionInLaneCoordinates> typedCheckerRule =
            (ICheckerRule<IPositionInLaneCoordinates>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyPositionInRoadCoordinatesCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IPositionInRoadCoordinates object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPositionInRoadCoordinates.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPositionInRoadCoordinates> typedCheckerRule =
            (ICheckerRule<IPositionInRoadCoordinates>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyPositionOfCurrentEntityCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IPositionOfCurrentEntity object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPositionOfCurrentEntity.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPositionOfCurrentEntity> typedCheckerRule =
            (ICheckerRule<IPositionOfCurrentEntity>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyPrecipitationCheckerRules(
      IContentMessageLogger<?> messageLogger, IPrecipitation object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPrecipitation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPrecipitation> typedCheckerRule = (ICheckerRule<IPrecipitation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyPrivateCheckerRules(
      IContentMessageLogger<?> messageLogger, IPrivate object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IPrivate.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPrivate> typedCheckerRule = (ICheckerRule<IPrivate>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IPrivateAction> privateActions = object.getPrivateActions();
    if (privateActions != null) {
      for (IPrivateAction listItem : privateActions) {
        applyPrivateActionCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyPrivateActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IPrivateAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IPrivateAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IPrivateAction> typedCheckerRule = (ICheckerRule<IPrivateAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ILongitudinalAction longitudinalAction = object.getLongitudinalAction();
    if (longitudinalAction != null) {
      applyLongitudinalActionCheckerRules(messageLogger, longitudinalAction, contextMode);
    }
    ILateralAction lateralAction = object.getLateralAction();
    if (lateralAction != null) {
      applyLateralActionCheckerRules(messageLogger, lateralAction, contextMode);
    }
    IVisibilityAction visibilityAction = object.getVisibilityAction();
    if (visibilityAction != null) {
      applyVisibilityActionCheckerRules(messageLogger, visibilityAction, contextMode);
    }
    ISynchronizeAction synchronizeAction = object.getSynchronizeAction();
    if (synchronizeAction != null) {
      applySynchronizeActionCheckerRules(messageLogger, synchronizeAction, contextMode);
    }
    IActivateControllerAction activateControllerAction = object.getActivateControllerAction();
    if (activateControllerAction != null) {
      applyActivateControllerActionCheckerRules(
          messageLogger, activateControllerAction, contextMode);
    }
    IControllerAction controllerAction = object.getControllerAction();
    if (controllerAction != null) {
      applyControllerActionCheckerRules(messageLogger, controllerAction, contextMode);
    }
    ITeleportAction teleportAction = object.getTeleportAction();
    if (teleportAction != null) {
      applyTeleportActionCheckerRules(messageLogger, teleportAction, contextMode);
    }
    IRoutingAction routingAction = object.getRoutingAction();
    if (routingAction != null) {
      applyRoutingActionCheckerRules(messageLogger, routingAction, contextMode);
    }
  }

  private void applyPropertiesCheckerRules(
      IContentMessageLogger<?> messageLogger, IProperties object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IProperties.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IProperties> typedCheckerRule = (ICheckerRule<IProperties>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IProperty> properties = object.getProperties();
    if (properties != null) {
      for (IProperty listItem : properties) {
        applyPropertyCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IFile> files = object.getFiles();
    if (files != null) {
      for (IFile listItem : files) {
        applyFileCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyPropertyCheckerRules(
      IContentMessageLogger<?> messageLogger, IProperty object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IProperty.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IProperty> typedCheckerRule = (ICheckerRule<IProperty>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyReachPositionConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IReachPositionCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IReachPositionCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IReachPositionCondition> typedCheckerRule =
            (ICheckerRule<IReachPositionCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyRelativeDistanceConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeDistanceCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeDistanceCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeDistanceCondition> typedCheckerRule =
            (ICheckerRule<IRelativeDistanceCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyRelativeLanePositionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeLanePosition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeLanePosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeLanePosition> typedCheckerRule =
            (ICheckerRule<IRelativeLanePosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IOrientation orientation = object.getOrientation();
    if (orientation != null) {
      applyOrientationCheckerRules(messageLogger, orientation, contextMode);
    }
  }

  private void applyRelativeObjectPositionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeObjectPosition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeObjectPosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeObjectPosition> typedCheckerRule =
            (ICheckerRule<IRelativeObjectPosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IOrientation orientation = object.getOrientation();
    if (orientation != null) {
      applyOrientationCheckerRules(messageLogger, orientation, contextMode);
    }
  }

  private void applyRelativeRoadPositionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeRoadPosition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeRoadPosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeRoadPosition> typedCheckerRule =
            (ICheckerRule<IRelativeRoadPosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IOrientation orientation = object.getOrientation();
    if (orientation != null) {
      applyOrientationCheckerRules(messageLogger, orientation, contextMode);
    }
  }

  private void applyRelativeSpeedConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeSpeedCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeSpeedCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeSpeedCondition> typedCheckerRule =
            (ICheckerRule<IRelativeSpeedCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyRelativeSpeedToMasterCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeSpeedToMaster object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeSpeedToMaster.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeSpeedToMaster> typedCheckerRule =
            (ICheckerRule<IRelativeSpeedToMaster>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyRelativeTargetLaneCheckerRules(
      IContentMessageLogger<?> messageLogger, IRelativeTargetLane object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeTargetLane.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeTargetLane> typedCheckerRule =
            (ICheckerRule<IRelativeTargetLane>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyRelativeTargetLaneOffsetCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeTargetLaneOffset object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeTargetLaneOffset.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeTargetLaneOffset> typedCheckerRule =
            (ICheckerRule<IRelativeTargetLaneOffset>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyRelativeTargetSpeedCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeTargetSpeed object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeTargetSpeed.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeTargetSpeed> typedCheckerRule =
            (ICheckerRule<IRelativeTargetSpeed>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyRelativeWorldPositionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRelativeWorldPosition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRelativeWorldPosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRelativeWorldPosition> typedCheckerRule =
            (ICheckerRule<IRelativeWorldPosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IOrientation orientation = object.getOrientation();
    if (orientation != null) {
      applyOrientationCheckerRules(messageLogger, orientation, contextMode);
    }
  }

  private void applyRoadConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, IRoadCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRoadCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRoadCondition> typedCheckerRule = (ICheckerRule<IRoadCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IProperties properties = object.getProperties();
    if (properties != null) {
      applyPropertiesCheckerRules(messageLogger, properties, contextMode);
    }
  }

  private void applyRoadNetworkCheckerRules(
      IContentMessageLogger<?> messageLogger, IRoadNetwork object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRoadNetwork.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRoadNetwork> typedCheckerRule = (ICheckerRule<IRoadNetwork>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IFile logicFile = object.getLogicFile();
    if (logicFile != null) {
      applyFileCheckerRules(messageLogger, logicFile, contextMode);
    }
    IFile sceneGraphFile = object.getSceneGraphFile();
    if (sceneGraphFile != null) {
      applyFileCheckerRules(messageLogger, sceneGraphFile, contextMode);
    }
    List<ITrafficSignalController> trafficSignals = object.getTrafficSignals();
    if (trafficSignals != null) {
      for (ITrafficSignalController listItem : trafficSignals) {
        applyTrafficSignalControllerCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyRoadPositionCheckerRules(
      IContentMessageLogger<?> messageLogger, IRoadPosition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRoadPosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRoadPosition> typedCheckerRule = (ICheckerRule<IRoadPosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IOrientation orientation = object.getOrientation();
    if (orientation != null) {
      applyOrientationCheckerRules(messageLogger, orientation, contextMode);
    }
  }

  private void applyRouteCheckerRules(
      IContentMessageLogger<?> messageLogger, IRoute object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRoute.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRoute> typedCheckerRule = (ICheckerRule<IRoute>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IWaypoint> waypoints = object.getWaypoints();
    if (waypoints != null) {
      for (IWaypoint listItem : waypoints) {
        applyWaypointCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyRouteCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IRouteCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRouteCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRouteCatalogLocation> typedCheckerRule =
            (ICheckerRule<IRouteCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyRoutePositionCheckerRules(
      IContentMessageLogger<?> messageLogger, IRoutePosition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRoutePosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRoutePosition> typedCheckerRule = (ICheckerRule<IRoutePosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IRouteRef routeRef = object.getRouteRef();
    if (routeRef != null) {
      applyRouteRefCheckerRules(messageLogger, routeRef, contextMode);
    }
    IOrientation orientation = object.getOrientation();
    if (orientation != null) {
      applyOrientationCheckerRules(messageLogger, orientation, contextMode);
    }
    IInRoutePosition inRoutePosition = object.getInRoutePosition();
    if (inRoutePosition != null) {
      applyInRoutePositionCheckerRules(messageLogger, inRoutePosition, contextMode);
    }
  }

  private void applyRouteRefCheckerRules(
      IContentMessageLogger<?> messageLogger, IRouteRef object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IRouteRef.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRouteRef> typedCheckerRule = (ICheckerRule<IRouteRef>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IRoute route = object.getRoute();
    if (route != null) {
      applyRouteCheckerRules(messageLogger, route, contextMode);
    }
    ICatalogReference catalogReference = object.getCatalogReference();
    if (catalogReference != null) {
      applyCatalogReferenceCheckerRules(messageLogger, catalogReference, contextMode);
    }
  }

  private void applyRoutingActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IRoutingAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IRoutingAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IRoutingAction> typedCheckerRule = (ICheckerRule<IRoutingAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IAssignRouteAction assignRouteAction = object.getAssignRouteAction();
    if (assignRouteAction != null) {
      applyAssignRouteActionCheckerRules(messageLogger, assignRouteAction, contextMode);
    }
    IFollowTrajectoryAction followTrajectoryAction = object.getFollowTrajectoryAction();
    if (followTrajectoryAction != null) {
      applyFollowTrajectoryActionCheckerRules(messageLogger, followTrajectoryAction, contextMode);
    }
    IAcquirePositionAction acquirePositionAction = object.getAcquirePositionAction();
    if (acquirePositionAction != null) {
      applyAcquirePositionActionCheckerRules(messageLogger, acquirePositionAction, contextMode);
    }
  }

  private void applyScenarioDefinitionCheckerRules(
      IContentMessageLogger<?> messageLogger, IScenarioDefinition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IScenarioDefinition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IScenarioDefinition> typedCheckerRule =
            (ICheckerRule<IScenarioDefinition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    ICatalogLocations catalogLocations = object.getCatalogLocations();
    if (catalogLocations != null) {
      applyCatalogLocationsCheckerRules(messageLogger, catalogLocations, contextMode);
    }
    IRoadNetwork roadNetwork = object.getRoadNetwork();
    if (roadNetwork != null) {
      applyRoadNetworkCheckerRules(messageLogger, roadNetwork, contextMode);
    }
    IEntities entities = object.getEntities();
    if (entities != null) {
      applyEntitiesCheckerRules(messageLogger, entities, contextMode);
    }
    IStoryboard storyboard = object.getStoryboard();
    if (storyboard != null) {
      applyStoryboardCheckerRules(messageLogger, storyboard, contextMode);
    }
  }

  private void applyScenarioObjectCheckerRules(
      IContentMessageLogger<?> messageLogger, IScenarioObject object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IScenarioObject.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IScenarioObject> typedCheckerRule =
            (ICheckerRule<IScenarioObject>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IEntityObject entityObject = object.getEntityObject();
    if (entityObject != null) {
      applyEntityObjectCheckerRules(messageLogger, entityObject, contextMode);
    }
    IObjectController objectController = object.getObjectController();
    if (objectController != null) {
      applyObjectControllerCheckerRules(messageLogger, objectController, contextMode);
    }
  }

  private void applySelectedEntitiesCheckerRules(
      IContentMessageLogger<?> messageLogger, ISelectedEntities object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISelectedEntities.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ISelectedEntities> typedCheckerRule =
            (ICheckerRule<ISelectedEntities>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IEntityRef> entityRef = object.getEntityRef();
    if (entityRef != null) {
      for (IEntityRef listItem : entityRef) {
        applyEntityRefCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IByType> byType = object.getByType();
    if (byType != null) {
      for (IByType listItem : byType) {
        applyByTypeCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyShapeCheckerRules(
      IContentMessageLogger<?> messageLogger, IShape object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IShape.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IShape> typedCheckerRule = (ICheckerRule<IShape>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPolyline polyline = object.getPolyline();
    if (polyline != null) {
      applyPolylineCheckerRules(messageLogger, polyline, contextMode);
    }
    IClothoid clothoid = object.getClothoid();
    if (clothoid != null) {
      applyClothoidCheckerRules(messageLogger, clothoid, contextMode);
    }
    INurbs nurbs = object.getNurbs();
    if (nurbs != null) {
      applyNurbsCheckerRules(messageLogger, nurbs, contextMode);
    }
  }

  private void applySimulationTimeConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ISimulationTimeCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISimulationTimeCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ISimulationTimeCondition> typedCheckerRule =
            (ICheckerRule<ISimulationTimeCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applySpeedActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ISpeedAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ISpeedAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ISpeedAction> typedCheckerRule = (ICheckerRule<ISpeedAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITransitionDynamics speedActionDynamics = object.getSpeedActionDynamics();
    if (speedActionDynamics != null) {
      applyTransitionDynamicsCheckerRules(messageLogger, speedActionDynamics, contextMode);
    }
    ISpeedActionTarget speedActionTarget = object.getSpeedActionTarget();
    if (speedActionTarget != null) {
      applySpeedActionTargetCheckerRules(messageLogger, speedActionTarget, contextMode);
    }
  }

  private void applySpeedActionTargetCheckerRules(
      IContentMessageLogger<?> messageLogger, ISpeedActionTarget object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISpeedActionTarget.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ISpeedActionTarget> typedCheckerRule =
            (ICheckerRule<ISpeedActionTarget>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IRelativeTargetSpeed relativeTargetSpeed = object.getRelativeTargetSpeed();
    if (relativeTargetSpeed != null) {
      applyRelativeTargetSpeedCheckerRules(messageLogger, relativeTargetSpeed, contextMode);
    }
    IAbsoluteTargetSpeed absoluteTargetSpeed = object.getAbsoluteTargetSpeed();
    if (absoluteTargetSpeed != null) {
      applyAbsoluteTargetSpeedCheckerRules(messageLogger, absoluteTargetSpeed, contextMode);
    }
  }

  private void applySpeedConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, ISpeedCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISpeedCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ISpeedCondition> typedCheckerRule =
            (ICheckerRule<ISpeedCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyStandStillConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IStandStillCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IStandStillCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IStandStillCondition> typedCheckerRule =
            (ICheckerRule<IStandStillCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyStoryCheckerRules(
      IContentMessageLogger<?> messageLogger, IStory object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IStory.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IStory> typedCheckerRule = (ICheckerRule<IStory>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    List<IAct> acts = object.getActs();
    if (acts != null) {
      for (IAct listItem : acts) {
        applyActCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyStoryboardCheckerRules(
      IContentMessageLogger<?> messageLogger, IStoryboard object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IStoryboard.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IStoryboard> typedCheckerRule = (ICheckerRule<IStoryboard>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IInit init = object.getInit();
    if (init != null) {
      applyInitCheckerRules(messageLogger, init, contextMode);
    }
    List<IStory> stories = object.getStories();
    if (stories != null) {
      for (IStory listItem : stories) {
        applyStoryCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    ITrigger stopTrigger = object.getStopTrigger();
    if (stopTrigger != null) {
      applyTriggerCheckerRules(messageLogger, stopTrigger, contextMode);
    }
  }

  private void applyStoryboardElementStateConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IStoryboardElementStateCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IStoryboardElementStateCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IStoryboardElementStateCondition> typedCheckerRule =
            (ICheckerRule<IStoryboardElementStateCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applySunCheckerRules(
      IContentMessageLogger<?> messageLogger, ISun object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ISun.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ISun> typedCheckerRule = (ICheckerRule<ISun>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applySynchronizeActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ISynchronizeAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ISynchronizeAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ISynchronizeAction> typedCheckerRule =
            (ICheckerRule<ISynchronizeAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition targetPositionMaster = object.getTargetPositionMaster();
    if (targetPositionMaster != null) {
      applyPositionCheckerRules(messageLogger, targetPositionMaster, contextMode);
    }
    IPosition targetPosition = object.getTargetPosition();
    if (targetPosition != null) {
      applyPositionCheckerRules(messageLogger, targetPosition, contextMode);
    }
    IFinalSpeed finalSpeed = object.getFinalSpeed();
    if (finalSpeed != null) {
      applyFinalSpeedCheckerRules(messageLogger, finalSpeed, contextMode);
    }
  }

  private void applyTeleportActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ITeleportAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITeleportAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITeleportAction> typedCheckerRule =
            (ICheckerRule<ITeleportAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyTimeHeadwayConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITimeHeadwayCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeHeadwayCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITimeHeadwayCondition> typedCheckerRule =
            (ICheckerRule<ITimeHeadwayCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTimeOfDayCheckerRules(
      IContentMessageLogger<?> messageLogger, ITimeOfDay object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITimeOfDay.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITimeOfDay> typedCheckerRule = (ICheckerRule<ITimeOfDay>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTimeOfDayConditionCheckerRules(
      IContentMessageLogger<?> messageLogger, ITimeOfDayCondition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeOfDayCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITimeOfDayCondition> typedCheckerRule =
            (ICheckerRule<ITimeOfDayCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTimeReferenceCheckerRules(
      IContentMessageLogger<?> messageLogger, ITimeReference object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeReference.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITimeReference> typedCheckerRule = (ICheckerRule<ITimeReference>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    INone none = object.getNone();
    if (none != null) {
      applyNoneCheckerRules(messageLogger, none, contextMode);
    }
    ITiming timing = object.getTiming();
    if (timing != null) {
      applyTimingCheckerRules(messageLogger, timing, contextMode);
    }
  }

  private void applyTimeToCollisionConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITimeToCollisionCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeToCollisionCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITimeToCollisionCondition> typedCheckerRule =
            (ICheckerRule<ITimeToCollisionCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITimeToCollisionConditionTarget timeToCollisionConditionTarget =
        object.getTimeToCollisionConditionTarget();
    if (timeToCollisionConditionTarget != null) {
      applyTimeToCollisionConditionTargetCheckerRules(
          messageLogger, timeToCollisionConditionTarget, contextMode);
    }
  }

  private void applyTimeToCollisionConditionTargetCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITimeToCollisionConditionTarget object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITimeToCollisionConditionTarget.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITimeToCollisionConditionTarget> typedCheckerRule =
            (ICheckerRule<ITimeToCollisionConditionTarget>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
    IEntityRef entityRef = object.getEntityRef();
    if (entityRef != null) {
      applyEntityRefCheckerRules(messageLogger, entityRef, contextMode);
    }
  }

  private void applyTimingCheckerRules(
      IContentMessageLogger<?> messageLogger, ITiming object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITiming.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITiming> typedCheckerRule = (ICheckerRule<ITiming>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTrafficActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ITrafficAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficAction> typedCheckerRule = (ICheckerRule<ITrafficAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITrafficSourceAction trafficSourceAction = object.getTrafficSourceAction();
    if (trafficSourceAction != null) {
      applyTrafficSourceActionCheckerRules(messageLogger, trafficSourceAction, contextMode);
    }
    ITrafficSinkAction trafficSinkAction = object.getTrafficSinkAction();
    if (trafficSinkAction != null) {
      applyTrafficSinkActionCheckerRules(messageLogger, trafficSinkAction, contextMode);
    }
    ITrafficSwarmAction trafficSwarmAction = object.getTrafficSwarmAction();
    if (trafficSwarmAction != null) {
      applyTrafficSwarmActionCheckerRules(messageLogger, trafficSwarmAction, contextMode);
    }
  }

  private void applyTrafficDefinitionCheckerRules(
      IContentMessageLogger<?> messageLogger, ITrafficDefinition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficDefinition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficDefinition> typedCheckerRule =
            (ICheckerRule<ITrafficDefinition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IVehicleCategoryDistribution vehicleCategoryDistribution =
        object.getVehicleCategoryDistribution();
    if (vehicleCategoryDistribution != null) {
      applyVehicleCategoryDistributionCheckerRules(
          messageLogger, vehicleCategoryDistribution, contextMode);
    }
    IControllerDistribution controllerDistribution = object.getControllerDistribution();
    if (controllerDistribution != null) {
      applyControllerDistributionCheckerRules(messageLogger, controllerDistribution, contextMode);
    }
  }

  private void applyTrafficSignalActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrafficSignalAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSignalAction> typedCheckerRule =
            (ICheckerRule<ITrafficSignalAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ITrafficSignalControllerAction trafficSignalControllerAction =
        object.getTrafficSignalControllerAction();
    if (trafficSignalControllerAction != null) {
      applyTrafficSignalControllerActionCheckerRules(
          messageLogger, trafficSignalControllerAction, contextMode);
    }
    ITrafficSignalStateAction trafficSignalStateAction = object.getTrafficSignalStateAction();
    if (trafficSignalStateAction != null) {
      applyTrafficSignalStateActionCheckerRules(
          messageLogger, trafficSignalStateAction, contextMode);
    }
  }

  private void applyTrafficSignalConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrafficSignalCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSignalCondition> typedCheckerRule =
            (ICheckerRule<ITrafficSignalCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTrafficSignalControllerCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrafficSignalController object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalController.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSignalController> typedCheckerRule =
            (ICheckerRule<ITrafficSignalController>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IPhase> phases = object.getPhases();
    if (phases != null) {
      for (IPhase listItem : phases) {
        applyPhaseCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyTrafficSignalControllerActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrafficSignalControllerAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalControllerAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSignalControllerAction> typedCheckerRule =
            (ICheckerRule<ITrafficSignalControllerAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTrafficSignalControllerConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrafficSignalControllerCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalControllerCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSignalControllerCondition> typedCheckerRule =
            (ICheckerRule<ITrafficSignalControllerCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTrafficSignalStateCheckerRules(
      IContentMessageLogger<?> messageLogger, ITrafficSignalState object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalState.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSignalState> typedCheckerRule =
            (ICheckerRule<ITrafficSignalState>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTrafficSignalStateActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrafficSignalStateAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSignalStateAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSignalStateAction> typedCheckerRule =
            (ICheckerRule<ITrafficSignalStateAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTrafficSinkActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ITrafficSinkAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSinkAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSinkAction> typedCheckerRule =
            (ICheckerRule<ITrafficSinkAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
    ITrafficDefinition trafficDefinition = object.getTrafficDefinition();
    if (trafficDefinition != null) {
      applyTrafficDefinitionCheckerRules(messageLogger, trafficDefinition, contextMode);
    }
  }

  private void applyTrafficSourceActionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrafficSourceAction object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSourceAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSourceAction> typedCheckerRule =
            (ICheckerRule<ITrafficSourceAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
    ITrafficDefinition trafficDefinition = object.getTrafficDefinition();
    if (trafficDefinition != null) {
      applyTrafficDefinitionCheckerRules(messageLogger, trafficDefinition, contextMode);
    }
  }

  private void applyTrafficSwarmActionCheckerRules(
      IContentMessageLogger<?> messageLogger, ITrafficSwarmAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrafficSwarmAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrafficSwarmAction> typedCheckerRule =
            (ICheckerRule<ITrafficSwarmAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ICentralSwarmObject centralObject = object.getCentralObject();
    if (centralObject != null) {
      applyCentralSwarmObjectCheckerRules(messageLogger, centralObject, contextMode);
    }
    ITrafficDefinition trafficDefinition = object.getTrafficDefinition();
    if (trafficDefinition != null) {
      applyTrafficDefinitionCheckerRules(messageLogger, trafficDefinition, contextMode);
    }
  }

  private void applyTrajectoryCheckerRules(
      IContentMessageLogger<?> messageLogger, ITrajectory object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITrajectory.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrajectory> typedCheckerRule = (ICheckerRule<ITrajectory>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    IShape shape = object.getShape();
    if (shape != null) {
      applyShapeCheckerRules(messageLogger, shape, contextMode);
    }
  }

  private void applyTrajectoryCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrajectoryCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrajectoryCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrajectoryCatalogLocation> typedCheckerRule =
            (ICheckerRule<ITrajectoryCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyTrajectoryFollowingModeCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITrajectoryFollowingMode object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITrajectoryFollowingMode.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrajectoryFollowingMode> typedCheckerRule =
            (ICheckerRule<ITrajectoryFollowingMode>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTransitionDynamicsCheckerRules(
      IContentMessageLogger<?> messageLogger, ITransitionDynamics object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITransitionDynamics.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITransitionDynamics> typedCheckerRule =
            (ICheckerRule<ITransitionDynamics>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTraveledDistanceConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      ITraveledDistanceCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITraveledDistanceCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITraveledDistanceCondition> typedCheckerRule =
            (ICheckerRule<ITraveledDistanceCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyTriggerCheckerRules(
      IContentMessageLogger<?> messageLogger, ITrigger object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(ITrigger.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITrigger> typedCheckerRule = (ICheckerRule<ITrigger>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IConditionGroup> conditionGroups = object.getConditionGroups();
    if (conditionGroups != null) {
      for (IConditionGroup listItem : conditionGroups) {
        applyConditionGroupCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyTriggeringEntitiesCheckerRules(
      IContentMessageLogger<?> messageLogger, ITriggeringEntities object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(ITriggeringEntities.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<ITriggeringEntities> typedCheckerRule =
            (ICheckerRule<ITriggeringEntities>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IEntityRef> entityRefs = object.getEntityRefs();
    if (entityRefs != null) {
      for (IEntityRef listItem : entityRefs) {
        applyEntityRefCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyUserDefinedActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IUserDefinedAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IUserDefinedAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IUserDefinedAction> typedCheckerRule =
            (ICheckerRule<IUserDefinedAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ICustomCommandAction customCommandAction = object.getCustomCommandAction();
    if (customCommandAction != null) {
      applyCustomCommandActionCheckerRules(messageLogger, customCommandAction, contextMode);
    }
  }

  private void applyUserDefinedValueConditionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IUserDefinedValueCondition object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IUserDefinedValueCondition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IUserDefinedValueCondition> typedCheckerRule =
            (ICheckerRule<IUserDefinedValueCondition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyVehicleCheckerRules(
      IContentMessageLogger<?> messageLogger, IVehicle object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IVehicle.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IVehicle> typedCheckerRule = (ICheckerRule<IVehicle>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IParameterDeclaration> parameterDeclarations = object.getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration listItem : parameterDeclarations) {
        applyParameterDeclarationCheckerRules(messageLogger, listItem, contextMode);
      }
    }
    IBoundingBox boundingBox = object.getBoundingBox();
    if (boundingBox != null) {
      applyBoundingBoxCheckerRules(messageLogger, boundingBox, contextMode);
    }
    IPerformance performance = object.getPerformance();
    if (performance != null) {
      applyPerformanceCheckerRules(messageLogger, performance, contextMode);
    }
    IAxles axles = object.getAxles();
    if (axles != null) {
      applyAxlesCheckerRules(messageLogger, axles, contextMode);
    }
    IProperties properties = object.getProperties();
    if (properties != null) {
      applyPropertiesCheckerRules(messageLogger, properties, contextMode);
    }
  }

  private void applyVehicleCatalogLocationCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IVehicleCatalogLocation object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVehicleCatalogLocation.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IVehicleCatalogLocation> typedCheckerRule =
            (ICheckerRule<IVehicleCatalogLocation>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IDirectory directory = object.getDirectory();
    if (directory != null) {
      applyDirectoryCheckerRules(messageLogger, directory, contextMode);
    }
  }

  private void applyVehicleCategoryDistributionCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IVehicleCategoryDistribution object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVehicleCategoryDistribution.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IVehicleCategoryDistribution> typedCheckerRule =
            (ICheckerRule<IVehicleCategoryDistribution>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    List<IVehicleCategoryDistributionEntry> vehicleCategoryDistributionEntries =
        object.getVehicleCategoryDistributionEntries();
    if (vehicleCategoryDistributionEntries != null) {
      for (IVehicleCategoryDistributionEntry listItem : vehicleCategoryDistributionEntries) {
        applyVehicleCategoryDistributionEntryCheckerRules(messageLogger, listItem, contextMode);
      }
    }
  }

  private void applyVehicleCategoryDistributionEntryCheckerRules(
      IContentMessageLogger<?> messageLogger,
      IVehicleCategoryDistributionEntry object,
      ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVehicleCategoryDistributionEntry.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IVehicleCategoryDistributionEntry> typedCheckerRule =
            (ICheckerRule<IVehicleCategoryDistributionEntry>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyVertexCheckerRules(
      IContentMessageLogger<?> messageLogger, IVertex object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IVertex.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IVertex> typedCheckerRule = (ICheckerRule<IVertex>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyVisibilityActionCheckerRules(
      IContentMessageLogger<?> messageLogger, IVisibilityAction object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IVisibilityAction.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IVisibilityAction> typedCheckerRule =
            (ICheckerRule<IVisibilityAction>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private void applyWaypointCheckerRules(
      IContentMessageLogger<?> messageLogger, IWaypoint object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IWaypoint.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IWaypoint> typedCheckerRule = (ICheckerRule<IWaypoint>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    IPosition position = object.getPosition();
    if (position != null) {
      applyPositionCheckerRules(messageLogger, position, contextMode);
    }
  }

  private void applyWeatherCheckerRules(
      IContentMessageLogger<?> messageLogger, IWeather object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(IWeather.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IWeather> typedCheckerRule = (ICheckerRule<IWeather>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
    ISun sun = object.getSun();
    if (sun != null) {
      applySunCheckerRules(messageLogger, sun, contextMode);
    }
    IFog fog = object.getFog();
    if (fog != null) {
      applyFogCheckerRules(messageLogger, fog, contextMode);
    }
    IPrecipitation precipitation = object.getPrecipitation();
    if (precipitation != null) {
      applyPrecipitationCheckerRules(messageLogger, precipitation, contextMode);
    }
  }

  private void applyWorldPositionCheckerRules(
      IContentMessageLogger<?> messageLogger, IWorldPosition object, ContextMode contextMode) {
    List<ICheckerRule<?>> checkerRulesForType =
        this.typeToCheckerRuleList.get(IWorldPosition.class);
    if (checkerRulesForType != null) {
      for (ICheckerRule<?> checkerRule : checkerRulesForType) {
        @SuppressWarnings("unchecked")
        ICheckerRule<IWorldPosition> typedCheckerRule = (ICheckerRule<IWorldPosition>) checkerRule;
        if (contextMode == ContextMode.MODE_FILE) {
          typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
        } else {
          typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
        }
      }
    }
    // getChildren
  }

  private enum ContextMode {
    MODE_TREE,
    MODE_FILE;
  }
}
