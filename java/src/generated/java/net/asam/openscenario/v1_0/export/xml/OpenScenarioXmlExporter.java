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
package net.asam.openscenario.v1_0.export.xml;

import java.util.List;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.export.XmlExportHelper;
import net.asam.openscenario.v1_0.api.CloudState;
import net.asam.openscenario.v1_0.api.ConditionEdge;
import net.asam.openscenario.v1_0.api.DynamicsDimension;
import net.asam.openscenario.v1_0.api.DynamicsShape;
import net.asam.openscenario.v1_0.api.FollowingMode;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IStoryboardElement;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;
import net.asam.openscenario.v1_0.api.MiscObjectCategory;
import net.asam.openscenario.v1_0.api.ObjectType;
import net.asam.openscenario.v1_0.api.ParameterType;
import net.asam.openscenario.v1_0.api.PedestrianCategory;
import net.asam.openscenario.v1_0.api.PrecipitationType;
import net.asam.openscenario.v1_0.api.Priority;
import net.asam.openscenario.v1_0.api.ReferenceContext;
import net.asam.openscenario.v1_0.api.RelativeDistanceType;
import net.asam.openscenario.v1_0.api.RouteStrategy;
import net.asam.openscenario.v1_0.api.Rule;
import net.asam.openscenario.v1_0.api.SpeedTargetValueType;
import net.asam.openscenario.v1_0.api.StoryboardElementState;
import net.asam.openscenario.v1_0.api.StoryboardElementType;
import net.asam.openscenario.v1_0.api.TriggeringEntitiesRule;
import net.asam.openscenario.v1_0.api.VehicleCategory;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteTargetLaneOffsetWriter;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteTargetLaneWriter;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteTargetSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IAccelerationConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IAcquirePositionActionWriter;
import net.asam.openscenario.v1_0.api.writer.IActWriter;
import net.asam.openscenario.v1_0.api.writer.IActionWriter;
import net.asam.openscenario.v1_0.api.writer.IActivateControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IActorsWriter;
import net.asam.openscenario.v1_0.api.writer.IAddEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IAssignControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IAssignRouteActionWriter;
import net.asam.openscenario.v1_0.api.writer.IAxleWriter;
import net.asam.openscenario.v1_0.api.writer.IAxlesWriter;
import net.asam.openscenario.v1_0.api.writer.IBoundingBoxWriter;
import net.asam.openscenario.v1_0.api.writer.IByEntityConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IByObjectTypeWriter;
import net.asam.openscenario.v1_0.api.writer.IByTypeWriter;
import net.asam.openscenario.v1_0.api.writer.IByValueConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogLocationsWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogWriter;
import net.asam.openscenario.v1_0.api.writer.ICenterWriter;
import net.asam.openscenario.v1_0.api.writer.ICentralSwarmObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IClothoidWriter;
import net.asam.openscenario.v1_0.api.writer.ICollisionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IConditionGroupWriter;
import net.asam.openscenario.v1_0.api.writer.IConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IControlPointWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerDistributionEntryWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerDistributionWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerWriter;
import net.asam.openscenario.v1_0.api.writer.ICustomCommandActionWriter;
import net.asam.openscenario.v1_0.api.writer.IDeleteEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IDimensionsWriter;
import net.asam.openscenario.v1_0.api.writer.IDirectoryWriter;
import net.asam.openscenario.v1_0.api.writer.IDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IDynamicConstraintsWriter;
import net.asam.openscenario.v1_0.api.writer.IEndOfRoadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityRefWriter;
import net.asam.openscenario.v1_0.api.writer.IEntitySelectionWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentActionWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentWriter;
import net.asam.openscenario.v1_0.api.writer.IEventWriter;
import net.asam.openscenario.v1_0.api.writer.IFileHeaderWriter;
import net.asam.openscenario.v1_0.api.writer.IFileWriter;
import net.asam.openscenario.v1_0.api.writer.IFinalSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IFogWriter;
import net.asam.openscenario.v1_0.api.writer.IFollowTrajectoryActionWriter;
import net.asam.openscenario.v1_0.api.writer.IGlobalActionWriter;
import net.asam.openscenario.v1_0.api.writer.IInRoutePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IInfrastructureActionWriter;
import net.asam.openscenario.v1_0.api.writer.IInitActionsWriter;
import net.asam.openscenario.v1_0.api.writer.IInitWriter;
import net.asam.openscenario.v1_0.api.writer.IKnotWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneChangeActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneChangeTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetActionDynamicsWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ILanePositionWriter;
import net.asam.openscenario.v1_0.api.writer.ILateralActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILateralDistanceActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILongitudinalActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILongitudinalDistanceActionWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverGroupWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IModifyRuleWriter;
import net.asam.openscenario.v1_0.api.writer.INoneWriter;
import net.asam.openscenario.v1_0.api.writer.INurbsWriter;
import net.asam.openscenario.v1_0.api.writer.IObjectControllerWriter;
import net.asam.openscenario.v1_0.api.writer.IOffroadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IOpenScenarioCategoryWriter;
import net.asam.openscenario.v1_0.api.writer.IOpenScenarioWriter;
import net.asam.openscenario.v1_0.api.writer.IOrientationWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideBrakeActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideClutchActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideControllerValueActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideGearActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideParkingBrakeActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideSteeringWheelActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideThrottleActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterAddValueRuleWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterAssignmentWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterModifyActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterMultiplyByValueRuleWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterSetActionWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianWriter;
import net.asam.openscenario.v1_0.api.writer.IPerformanceWriter;
import net.asam.openscenario.v1_0.api.writer.IPhaseWriter;
import net.asam.openscenario.v1_0.api.writer.IPolylineWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionInLaneCoordinatesWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionInRoadCoordinatesWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionOfCurrentEntityWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IPrecipitationWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateActionWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateWriter;
import net.asam.openscenario.v1_0.api.writer.IPropertiesWriter;
import net.asam.openscenario.v1_0.api.writer.IPropertyWriter;
import net.asam.openscenario.v1_0.api.writer.IReachPositionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeLanePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeObjectPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeRoadPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeSpeedConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeSpeedToMasterWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeTargetLaneOffsetWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeTargetLaneWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeTargetSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeWorldPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadNetworkWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteRefWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutingActionWriter;
import net.asam.openscenario.v1_0.api.writer.IScenarioDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.IScenarioObjectWriter;
import net.asam.openscenario.v1_0.api.writer.ISelectedEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IShapeWriter;
import net.asam.openscenario.v1_0.api.writer.ISimulationTimeConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedActionTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedActionWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStandStillConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryboardElementStateConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryboardWriter;
import net.asam.openscenario.v1_0.api.writer.ISunWriter;
import net.asam.openscenario.v1_0.api.writer.ISynchronizeActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITeleportActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeHeadwayConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeOfDayConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeOfDayWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeToCollisionConditionTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeToCollisionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimingWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalStateActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalStateWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSinkActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSourceActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSwarmActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryFollowingModeWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryWriter;
import net.asam.openscenario.v1_0.api.writer.ITransitionDynamicsWriter;
import net.asam.openscenario.v1_0.api.writer.ITraveledDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITriggerWriter;
import net.asam.openscenario.v1_0.api.writer.ITriggeringEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IUserDefinedActionWriter;
import net.asam.openscenario.v1_0.api.writer.IUserDefinedValueConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleCategoryDistributionEntryWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleCategoryDistributionWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleWriter;
import net.asam.openscenario.v1_0.api.writer.IVertexWriter;
import net.asam.openscenario.v1_0.api.writer.IVisibilityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IWaypointWriter;
import net.asam.openscenario.v1_0.api.writer.IWeatherWriter;
import net.asam.openscenario.v1_0.api.writer.IWorldPositionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;
import org.w3c.dom.Document;
import org.w3c.dom.Element;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Exporting an XML document form a scenario tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class OpenScenarioXmlExporter {

  public Document createXmlDocument(IOpenScenarioWriter openScenarioWriter) {
    Document document = null;
    try {
      DocumentBuilderFactory documentFactory = DocumentBuilderFactory.newInstance();
      DocumentBuilder documentBuilder = documentFactory.newDocumentBuilder();
      document = documentBuilder.newDocument();
      Element root = document.createElement("OpenSCENARIO");
      document.appendChild(root);
      fillOpenScenarioNode(document, root, openScenarioWriter);
    } catch (ParserConfigurationException e) {
      // do nothing
    }
    return document;
  }

  /**
   * Fills a dom element of type AbsoluteSpeed
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param absoluteSpeedWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAbsoluteSpeedNode(
      Document document, Element elementNode, IAbsoluteSpeedWriter absoluteSpeedWriter) {
    // Add Attributes (Parameters)
    Double value = absoluteSpeedWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (absoluteSpeedWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, absoluteSpeedWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AbsoluteTargetLane
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param absoluteTargetLaneWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAbsoluteTargetLaneNode(
      Document document, Element elementNode, IAbsoluteTargetLaneWriter absoluteTargetLaneWriter) {
    // Add Attributes (Parameters)
    String value = absoluteTargetLaneWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromString(value));
    } else if (absoluteTargetLaneWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, absoluteTargetLaneWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AbsoluteTargetLaneOffset
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param absoluteTargetLaneOffsetWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAbsoluteTargetLaneOffsetNode(
      Document document,
      Element elementNode,
      IAbsoluteTargetLaneOffsetWriter absoluteTargetLaneOffsetWriter) {
    // Add Attributes (Parameters)
    Double value = absoluteTargetLaneOffsetWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (absoluteTargetLaneOffsetWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, absoluteTargetLaneOffsetWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AbsoluteTargetSpeed
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param absoluteTargetSpeedWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAbsoluteTargetSpeedNode(
      Document document,
      Element elementNode,
      IAbsoluteTargetSpeedWriter absoluteTargetSpeedWriter) {
    // Add Attributes (Parameters)
    Double value = absoluteTargetSpeedWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (absoluteTargetSpeedWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, absoluteTargetSpeedWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AccelerationCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param accelerationConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAccelerationConditionNode(
      Document document,
      Element elementNode,
      IAccelerationConditionWriter accelerationConditionWriter) {
    // Add Attributes (Parameters)
    Double value = accelerationConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (accelerationConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, accelerationConditionWriter.getParameterFromValue());
    }
    Rule rule = accelerationConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (accelerationConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, accelerationConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AcquirePositionAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param acquirePositionActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAcquirePositionActionNode(
      Document document,
      Element elementNode,
      IAcquirePositionActionWriter acquirePositionActionWriter) {
    // Add Attributes (Parameters)
    IPositionWriter position = acquirePositionActionWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Act
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param actWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillActNode(Document document, Element elementNode, IActWriter actWriter) {
    // Add Attributes (Parameters)
    String name = actWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (actWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, actWriter.getParameterFromName());
    }
    List<IManeuverGroupWriter> maneuverGroups = actWriter.getWriterManeuverGroups();
    if (maneuverGroups != null) {
      for (IManeuverGroupWriter maneuverGroupsWriterItem : maneuverGroups) {
        Element maneuverGroupsElement =
            document.createElement(OscConstants.ELEMENT__MANEUVER_GROUP);
        elementNode.appendChild(maneuverGroupsElement);
        fillManeuverGroupNode(document, maneuverGroupsElement, maneuverGroupsWriterItem);
      }
    }
    ITriggerWriter startTrigger = actWriter.getWriterStartTrigger();
    if (startTrigger != null) {
      Element startTriggerElement = document.createElement(OscConstants.ELEMENT__START_TRIGGER);
      elementNode.appendChild(startTriggerElement);
      fillTriggerNode(document, startTriggerElement, startTrigger);
    }

    ITriggerWriter stopTrigger = actWriter.getWriterStopTrigger();
    if (stopTrigger != null) {
      Element stopTriggerElement = document.createElement(OscConstants.ELEMENT__STOP_TRIGGER);
      elementNode.appendChild(stopTriggerElement);
      fillTriggerNode(document, stopTriggerElement, stopTrigger);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Action
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param actionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillActionNode(Document document, Element elementNode, IActionWriter actionWriter) {
    // Add Attributes (Parameters)
    String name = actionWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (actionWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, actionWriter.getParameterFromName());
    }
    IGlobalActionWriter globalAction = actionWriter.getWriterGlobalAction();
    if (globalAction != null) {
      Element globalActionElement = document.createElement(OscConstants.ELEMENT__GLOBAL_ACTION);
      elementNode.appendChild(globalActionElement);
      fillGlobalActionNode(document, globalActionElement, globalAction);
    }

    IUserDefinedActionWriter userDefinedAction = actionWriter.getWriterUserDefinedAction();
    if (userDefinedAction != null) {
      Element userDefinedActionElement =
          document.createElement(OscConstants.ELEMENT__USER_DEFINED_ACTION);
      elementNode.appendChild(userDefinedActionElement);
      fillUserDefinedActionNode(document, userDefinedActionElement, userDefinedAction);
    }

    IPrivateActionWriter privateAction = actionWriter.getWriterPrivateAction();
    if (privateAction != null) {
      Element privateActionElement = document.createElement(OscConstants.ELEMENT__PRIVATE_ACTION);
      elementNode.appendChild(privateActionElement);
      fillPrivateActionNode(document, privateActionElement, privateAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ActivateControllerAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param activateControllerActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillActivateControllerActionNode(
      Document document,
      Element elementNode,
      IActivateControllerActionWriter activateControllerActionWriter) {
    // Add Attributes (Parameters)
    Boolean lateral = activateControllerActionWriter.getLateral();
    if (lateral != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LATERAL, XmlExportHelper.toXmlStringFromBoolean(lateral));
    } else if (activateControllerActionWriter.isLateralParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LATERAL,
          activateControllerActionWriter.getParameterFromLateral());
    }
    Boolean longitudinal = activateControllerActionWriter.getLongitudinal();
    if (longitudinal != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LONGITUDINAL,
          XmlExportHelper.toXmlStringFromBoolean(longitudinal));
    } else if (activateControllerActionWriter.isLongitudinalParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LONGITUDINAL,
          activateControllerActionWriter.getParameterFromLongitudinal());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Actors
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param actorsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillActorsNode(Document document, Element elementNode, IActorsWriter actorsWriter) {
    // Add Attributes (Parameters)
    Boolean selectTriggeringEntities = actorsWriter.getSelectTriggeringEntities();
    if (selectTriggeringEntities != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES,
          XmlExportHelper.toXmlStringFromBoolean(selectTriggeringEntities));
    } else if (actorsWriter.isSelectTriggeringEntitiesParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES,
          actorsWriter.getParameterFromSelectTriggeringEntities());
    }
    List<IEntityRefWriter> entityRefs = actorsWriter.getWriterEntityRefs();
    if (entityRefs != null) {
      for (IEntityRefWriter entityRefsWriterItem : entityRefs) {
        Element entityRefsElement = document.createElement(OscConstants.ELEMENT__ENTITY_REF);
        elementNode.appendChild(entityRefsElement);
        fillEntityRefNode(document, entityRefsElement, entityRefsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AddEntityAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param addEntityActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAddEntityActionNode(
      Document document, Element elementNode, IAddEntityActionWriter addEntityActionWriter) {
    // Add Attributes (Parameters)
    IPositionWriter position = addEntityActionWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AssignControllerAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param assignControllerActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAssignControllerActionNode(
      Document document,
      Element elementNode,
      IAssignControllerActionWriter assignControllerActionWriter) {
    // Add Attributes (Parameters)
    IControllerWriter controller = assignControllerActionWriter.getWriterController();
    if (controller != null) {
      Element controllerElement = document.createElement(OscConstants.ELEMENT__CONTROLLER);
      elementNode.appendChild(controllerElement);
      fillControllerNode(document, controllerElement, controller);
    }

    ICatalogReferenceWriter catalogReference =
        assignControllerActionWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type AssignRouteAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param assignRouteActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAssignRouteActionNode(
      Document document, Element elementNode, IAssignRouteActionWriter assignRouteActionWriter) {
    // Add Attributes (Parameters)
    IRouteWriter route = assignRouteActionWriter.getWriterRoute();
    if (route != null) {
      Element routeElement = document.createElement(OscConstants.ELEMENT__ROUTE);
      elementNode.appendChild(routeElement);
      fillRouteNode(document, routeElement, route);
    }

    ICatalogReferenceWriter catalogReference = assignRouteActionWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Axle
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param axleWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAxleNode(Document document, Element elementNode, IAxleWriter axleWriter) {
    // Add Attributes (Parameters)
    Double maxSteering = axleWriter.getMaxSteering();
    if (maxSteering != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_STEERING, XmlExportHelper.toXmlStringFromDouble(maxSteering));
    } else if (axleWriter.isMaxSteeringParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_STEERING, axleWriter.getParameterFromMaxSteering());
    }
    Double wheelDiameter = axleWriter.getWheelDiameter();
    if (wheelDiameter != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WHEEL_DIAMETER,
          XmlExportHelper.toXmlStringFromDouble(wheelDiameter));
    } else if (axleWriter.isWheelDiameterParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WHEEL_DIAMETER, axleWriter.getParameterFromWheelDiameter());
    }
    Double trackWidth = axleWriter.getTrackWidth();
    if (trackWidth != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRACK_WIDTH, XmlExportHelper.toXmlStringFromDouble(trackWidth));
    } else if (axleWriter.isTrackWidthParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRACK_WIDTH, axleWriter.getParameterFromTrackWidth());
    }
    Double positionX = axleWriter.getPositionX();
    if (positionX != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__POSITION_X, XmlExportHelper.toXmlStringFromDouble(positionX));
    } else if (axleWriter.isPositionXParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__POSITION_X, axleWriter.getParameterFromPositionX());
    }
    Double positionZ = axleWriter.getPositionZ();
    if (positionZ != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__POSITION_Z, XmlExportHelper.toXmlStringFromDouble(positionZ));
    } else if (axleWriter.isPositionZParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__POSITION_Z, axleWriter.getParameterFromPositionZ());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Axles
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param axlesWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillAxlesNode(Document document, Element elementNode, IAxlesWriter axlesWriter) {
    // Add Attributes (Parameters)
    IAxleWriter frontAxle = axlesWriter.getWriterFrontAxle();
    if (frontAxle != null) {
      Element frontAxleElement = document.createElement(OscConstants.ELEMENT__FRONT_AXLE);
      elementNode.appendChild(frontAxleElement);
      fillAxleNode(document, frontAxleElement, frontAxle);
    }

    IAxleWriter rearAxle = axlesWriter.getWriterRearAxle();
    if (rearAxle != null) {
      Element rearAxleElement = document.createElement(OscConstants.ELEMENT__REAR_AXLE);
      elementNode.appendChild(rearAxleElement);
      fillAxleNode(document, rearAxleElement, rearAxle);
    }

    List<IAxleWriter> additionalAxles = axlesWriter.getWriterAdditionalAxles();
    if (additionalAxles != null) {
      for (IAxleWriter additionalAxlesWriterItem : additionalAxles) {
        Element additionalAxlesElement =
            document.createElement(OscConstants.ELEMENT__ADDITIONAL_AXLE);
        elementNode.appendChild(additionalAxlesElement);
        fillAxleNode(document, additionalAxlesElement, additionalAxlesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type BoundingBox
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param boundingBoxWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillBoundingBoxNode(
      Document document, Element elementNode, IBoundingBoxWriter boundingBoxWriter) {
    // Add Attributes (Parameters)
    ICenterWriter center = boundingBoxWriter.getWriterCenter();
    if (center != null) {
      Element centerElement = document.createElement(OscConstants.ELEMENT__CENTER);
      elementNode.appendChild(centerElement);
      fillCenterNode(document, centerElement, center);
    }

    IDimensionsWriter dimensions = boundingBoxWriter.getWriterDimensions();
    if (dimensions != null) {
      Element dimensionsElement = document.createElement(OscConstants.ELEMENT__DIMENSIONS);
      elementNode.appendChild(dimensionsElement);
      fillDimensionsNode(document, dimensionsElement, dimensions);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ByEntityCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param byEntityConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillByEntityConditionNode(
      Document document, Element elementNode, IByEntityConditionWriter byEntityConditionWriter) {
    // Add Attributes (Parameters)
    ITriggeringEntitiesWriter triggeringEntities =
        byEntityConditionWriter.getWriterTriggeringEntities();
    if (triggeringEntities != null) {
      Element triggeringEntitiesElement =
          document.createElement(OscConstants.ELEMENT__TRIGGERING_ENTITIES);
      elementNode.appendChild(triggeringEntitiesElement);
      fillTriggeringEntitiesNode(document, triggeringEntitiesElement, triggeringEntities);
    }

    IEntityConditionWriter entityCondition = byEntityConditionWriter.getWriterEntityCondition();
    if (entityCondition != null) {
      Element entityConditionElement =
          document.createElement(OscConstants.ELEMENT__ENTITY_CONDITION);
      elementNode.appendChild(entityConditionElement);
      fillEntityConditionNode(document, entityConditionElement, entityCondition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ByObjectType
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param byObjectTypeWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillByObjectTypeNode(
      Document document, Element elementNode, IByObjectTypeWriter byObjectTypeWriter) {
    // Add Attributes (Parameters)
    ObjectType type = byObjectTypeWriter.getType();
    if (type != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__TYPE, type.getLiteral());
    } else if (byObjectTypeWriter.isTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TYPE, byObjectTypeWriter.getParameterFromType());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ByType
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param byTypeWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillByTypeNode(Document document, Element elementNode, IByTypeWriter byTypeWriter) {
    // Add Attributes (Parameters)
    ObjectType objectType = byTypeWriter.getObjectType();
    if (objectType != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__OBJECT_TYPE, objectType.getLiteral());
    } else if (byTypeWriter.isObjectTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OBJECT_TYPE, byTypeWriter.getParameterFromObjectType());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ByValueCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param byValueConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillByValueConditionNode(
      Document document, Element elementNode, IByValueConditionWriter byValueConditionWriter) {
    // Add Attributes (Parameters)
    IParameterConditionWriter parameterCondition =
        byValueConditionWriter.getWriterParameterCondition();
    if (parameterCondition != null) {
      Element parameterConditionElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_CONDITION);
      elementNode.appendChild(parameterConditionElement);
      fillParameterConditionNode(document, parameterConditionElement, parameterCondition);
    }

    ITimeOfDayConditionWriter timeOfDayCondition =
        byValueConditionWriter.getWriterTimeOfDayCondition();
    if (timeOfDayCondition != null) {
      Element timeOfDayConditionElement =
          document.createElement(OscConstants.ELEMENT__TIME_OF_DAY_CONDITION);
      elementNode.appendChild(timeOfDayConditionElement);
      fillTimeOfDayConditionNode(document, timeOfDayConditionElement, timeOfDayCondition);
    }

    ISimulationTimeConditionWriter simulationTimeCondition =
        byValueConditionWriter.getWriterSimulationTimeCondition();
    if (simulationTimeCondition != null) {
      Element simulationTimeConditionElement =
          document.createElement(OscConstants.ELEMENT__SIMULATION_TIME_CONDITION);
      elementNode.appendChild(simulationTimeConditionElement);
      fillSimulationTimeConditionNode(
          document, simulationTimeConditionElement, simulationTimeCondition);
    }

    IStoryboardElementStateConditionWriter storyboardElementStateCondition =
        byValueConditionWriter.getWriterStoryboardElementStateCondition();
    if (storyboardElementStateCondition != null) {
      Element storyboardElementStateConditionElement =
          document.createElement(OscConstants.ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION);
      elementNode.appendChild(storyboardElementStateConditionElement);
      fillStoryboardElementStateConditionNode(
          document, storyboardElementStateConditionElement, storyboardElementStateCondition);
    }

    IUserDefinedValueConditionWriter userDefinedValueCondition =
        byValueConditionWriter.getWriterUserDefinedValueCondition();
    if (userDefinedValueCondition != null) {
      Element userDefinedValueConditionElement =
          document.createElement(OscConstants.ELEMENT__USER_DEFINED_VALUE_CONDITION);
      elementNode.appendChild(userDefinedValueConditionElement);
      fillUserDefinedValueConditionNode(
          document, userDefinedValueConditionElement, userDefinedValueCondition);
    }

    ITrafficSignalConditionWriter trafficSignalCondition =
        byValueConditionWriter.getWriterTrafficSignalCondition();
    if (trafficSignalCondition != null) {
      Element trafficSignalConditionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONDITION);
      elementNode.appendChild(trafficSignalConditionElement);
      fillTrafficSignalConditionNode(
          document, trafficSignalConditionElement, trafficSignalCondition);
    }

    ITrafficSignalControllerConditionWriter trafficSignalControllerCondition =
        byValueConditionWriter.getWriterTrafficSignalControllerCondition();
    if (trafficSignalControllerCondition != null) {
      Element trafficSignalControllerConditionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION);
      elementNode.appendChild(trafficSignalControllerConditionElement);
      fillTrafficSignalControllerConditionNode(
          document, trafficSignalControllerConditionElement, trafficSignalControllerCondition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Catalog
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param catalogWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCatalogNode(
      Document document, Element elementNode, ICatalogWriter catalogWriter) {
    // Add Attributes (Parameters)
    String name = catalogWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (catalogWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, catalogWriter.getParameterFromName());
    }
    List<IVehicleWriter> vehicles = catalogWriter.getWriterVehicles();
    if (vehicles != null) {
      for (IVehicleWriter vehiclesWriterItem : vehicles) {
        Element vehiclesElement = document.createElement(OscConstants.ELEMENT__VEHICLE);
        elementNode.appendChild(vehiclesElement);
        fillVehicleNode(document, vehiclesElement, vehiclesWriterItem);
      }
    }
    List<IControllerWriter> controllers = catalogWriter.getWriterControllers();
    if (controllers != null) {
      for (IControllerWriter controllersWriterItem : controllers) {
        Element controllersElement = document.createElement(OscConstants.ELEMENT__CONTROLLER);
        elementNode.appendChild(controllersElement);
        fillControllerNode(document, controllersElement, controllersWriterItem);
      }
    }
    List<IPedestrianWriter> pedestrians = catalogWriter.getWriterPedestrians();
    if (pedestrians != null) {
      for (IPedestrianWriter pedestriansWriterItem : pedestrians) {
        Element pedestriansElement = document.createElement(OscConstants.ELEMENT__PEDESTRIAN);
        elementNode.appendChild(pedestriansElement);
        fillPedestrianNode(document, pedestriansElement, pedestriansWriterItem);
      }
    }
    List<IMiscObjectWriter> miscObjects = catalogWriter.getWriterMiscObjects();
    if (miscObjects != null) {
      for (IMiscObjectWriter miscObjectsWriterItem : miscObjects) {
        Element miscObjectsElement = document.createElement(OscConstants.ELEMENT__MISC_OBJECT);
        elementNode.appendChild(miscObjectsElement);
        fillMiscObjectNode(document, miscObjectsElement, miscObjectsWriterItem);
      }
    }
    List<IEnvironmentWriter> environments = catalogWriter.getWriterEnvironments();
    if (environments != null) {
      for (IEnvironmentWriter environmentsWriterItem : environments) {
        Element environmentsElement = document.createElement(OscConstants.ELEMENT__ENVIRONMENT);
        elementNode.appendChild(environmentsElement);
        fillEnvironmentNode(document, environmentsElement, environmentsWriterItem);
      }
    }
    List<IManeuverWriter> maneuvers = catalogWriter.getWriterManeuvers();
    if (maneuvers != null) {
      for (IManeuverWriter maneuversWriterItem : maneuvers) {
        Element maneuversElement = document.createElement(OscConstants.ELEMENT__MANEUVER);
        elementNode.appendChild(maneuversElement);
        fillManeuverNode(document, maneuversElement, maneuversWriterItem);
      }
    }
    List<ITrajectoryWriter> trajectories = catalogWriter.getWriterTrajectories();
    if (trajectories != null) {
      for (ITrajectoryWriter trajectoriesWriterItem : trajectories) {
        Element trajectoriesElement = document.createElement(OscConstants.ELEMENT__TRAJECTORY);
        elementNode.appendChild(trajectoriesElement);
        fillTrajectoryNode(document, trajectoriesElement, trajectoriesWriterItem);
      }
    }
    List<IRouteWriter> routes = catalogWriter.getWriterRoutes();
    if (routes != null) {
      for (IRouteWriter routesWriterItem : routes) {
        Element routesElement = document.createElement(OscConstants.ELEMENT__ROUTE);
        elementNode.appendChild(routesElement);
        fillRouteNode(document, routesElement, routesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type CatalogDefinition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param catalogDefinitionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCatalogDefinitionNode(
      Document document, Element elementNode, ICatalogDefinitionWriter catalogDefinitionWriter) {
    // Add Attributes (Parameters)
    ICatalogWriter catalog = catalogDefinitionWriter.getWriterCatalog();
    if (catalog != null) {
      Element catalogElement = document.createElement(OscConstants.ELEMENT__CATALOG);
      elementNode.appendChild(catalogElement);
      fillCatalogNode(document, catalogElement, catalog);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type CatalogLocations
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param catalogLocationsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCatalogLocationsNode(
      Document document, Element elementNode, ICatalogLocationsWriter catalogLocationsWriter) {
    // Add Attributes (Parameters)
    IVehicleCatalogLocationWriter vehicleCatalog = catalogLocationsWriter.getWriterVehicleCatalog();
    if (vehicleCatalog != null) {
      Element vehicleCatalogElement = document.createElement(OscConstants.ELEMENT__VEHICLE_CATALOG);
      elementNode.appendChild(vehicleCatalogElement);
      fillVehicleCatalogLocationNode(document, vehicleCatalogElement, vehicleCatalog);
    }

    IControllerCatalogLocationWriter controllerCatalog =
        catalogLocationsWriter.getWriterControllerCatalog();
    if (controllerCatalog != null) {
      Element controllerCatalogElement =
          document.createElement(OscConstants.ELEMENT__CONTROLLER_CATALOG);
      elementNode.appendChild(controllerCatalogElement);
      fillControllerCatalogLocationNode(document, controllerCatalogElement, controllerCatalog);
    }

    IPedestrianCatalogLocationWriter pedestrianCatalog =
        catalogLocationsWriter.getWriterPedestrianCatalog();
    if (pedestrianCatalog != null) {
      Element pedestrianCatalogElement =
          document.createElement(OscConstants.ELEMENT__PEDESTRIAN_CATALOG);
      elementNode.appendChild(pedestrianCatalogElement);
      fillPedestrianCatalogLocationNode(document, pedestrianCatalogElement, pedestrianCatalog);
    }

    IMiscObjectCatalogLocationWriter miscObjectCatalog =
        catalogLocationsWriter.getWriterMiscObjectCatalog();
    if (miscObjectCatalog != null) {
      Element miscObjectCatalogElement =
          document.createElement(OscConstants.ELEMENT__MISC_OBJECT_CATALOG);
      elementNode.appendChild(miscObjectCatalogElement);
      fillMiscObjectCatalogLocationNode(document, miscObjectCatalogElement, miscObjectCatalog);
    }

    IEnvironmentCatalogLocationWriter environmentCatalog =
        catalogLocationsWriter.getWriterEnvironmentCatalog();
    if (environmentCatalog != null) {
      Element environmentCatalogElement =
          document.createElement(OscConstants.ELEMENT__ENVIRONMENT_CATALOG);
      elementNode.appendChild(environmentCatalogElement);
      fillEnvironmentCatalogLocationNode(document, environmentCatalogElement, environmentCatalog);
    }

    IManeuverCatalogLocationWriter maneuverCatalog =
        catalogLocationsWriter.getWriterManeuverCatalog();
    if (maneuverCatalog != null) {
      Element maneuverCatalogElement =
          document.createElement(OscConstants.ELEMENT__MANEUVER_CATALOG);
      elementNode.appendChild(maneuverCatalogElement);
      fillManeuverCatalogLocationNode(document, maneuverCatalogElement, maneuverCatalog);
    }

    ITrajectoryCatalogLocationWriter trajectoryCatalog =
        catalogLocationsWriter.getWriterTrajectoryCatalog();
    if (trajectoryCatalog != null) {
      Element trajectoryCatalogElement =
          document.createElement(OscConstants.ELEMENT__TRAJECTORY_CATALOG);
      elementNode.appendChild(trajectoryCatalogElement);
      fillTrajectoryCatalogLocationNode(document, trajectoryCatalogElement, trajectoryCatalog);
    }

    IRouteCatalogLocationWriter routeCatalog = catalogLocationsWriter.getWriterRouteCatalog();
    if (routeCatalog != null) {
      Element routeCatalogElement = document.createElement(OscConstants.ELEMENT__ROUTE_CATALOG);
      elementNode.appendChild(routeCatalogElement);
      fillRouteCatalogLocationNode(document, routeCatalogElement, routeCatalog);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type CatalogReference
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param catalogReferenceWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCatalogReferenceNode(
      Document document, Element elementNode, ICatalogReferenceWriter catalogReferenceWriter) {
    // Add Attributes (Parameters)
    String catalogName = catalogReferenceWriter.getCatalogName();
    if (catalogName != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CATALOG_NAME, XmlExportHelper.toXmlStringFromString(catalogName));
    } else if (catalogReferenceWriter.isCatalogNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CATALOG_NAME,
          catalogReferenceWriter.getParameterFromCatalogName());
    }
    String entryName = catalogReferenceWriter.getEntryName();
    if (entryName != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTRY_NAME, XmlExportHelper.toXmlStringFromString(entryName));
    } else if (catalogReferenceWriter.isEntryNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTRY_NAME, catalogReferenceWriter.getParameterFromEntryName());
    }

    List<IParameterAssignmentWriter> parameterAssignments =
        catalogReferenceWriter.getWriterParameterAssignments();
    if (parameterAssignments != null) {
      Element parameterAssignmentsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_ASSIGNMENT);
      elementNode.appendChild(parameterAssignmentsWrapperElement);
      for (IParameterAssignmentWriter parameterAssignmentsWriterItem : parameterAssignments) {
        Element parameterAssignmentsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_ASSIGNMENTS);
        parameterAssignmentsWrapperElement.appendChild(parameterAssignmentsElement);
        fillParameterAssignmentNode(
            document, parameterAssignmentsElement, parameterAssignmentsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Center
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param centerWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCenterNode(Document document, Element elementNode, ICenterWriter centerWriter) {
    // Add Attributes (Parameters)
    Double x = centerWriter.getX();
    if (x != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__X, XmlExportHelper.toXmlStringFromDouble(x));
    } else if (centerWriter.isXParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__X, centerWriter.getParameterFromX());
    }
    Double y = centerWriter.getY();
    if (y != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Y, XmlExportHelper.toXmlStringFromDouble(y));
    } else if (centerWriter.isYParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Y, centerWriter.getParameterFromY());
    }
    Double z = centerWriter.getZ();
    if (z != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Z, XmlExportHelper.toXmlStringFromDouble(z));
    } else if (centerWriter.isZParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Z, centerWriter.getParameterFromZ());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type CentralSwarmObject
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param centralSwarmObjectWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCentralSwarmObjectNode(
      Document document, Element elementNode, ICentralSwarmObjectWriter centralSwarmObjectWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = centralSwarmObjectWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Clothoid
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param clothoidWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillClothoidNode(
      Document document, Element elementNode, IClothoidWriter clothoidWriter) {
    // Add Attributes (Parameters)
    Double curvature = clothoidWriter.getCurvature();
    if (curvature != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CURVATURE, XmlExportHelper.toXmlStringFromDouble(curvature));
    } else if (clothoidWriter.isCurvatureParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CURVATURE, clothoidWriter.getParameterFromCurvature());
    }
    Double curvatureDot = clothoidWriter.getCurvatureDot();
    if (curvatureDot != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CURVATURE_DOT,
          XmlExportHelper.toXmlStringFromDouble(curvatureDot));
    } else if (clothoidWriter.isCurvatureDotParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CURVATURE_DOT, clothoidWriter.getParameterFromCurvatureDot());
    }
    Double length = clothoidWriter.getLength();
    if (length != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LENGTH, XmlExportHelper.toXmlStringFromDouble(length));
    } else if (clothoidWriter.isLengthParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LENGTH, clothoidWriter.getParameterFromLength());
    }
    Double startTime = clothoidWriter.getStartTime();
    if (startTime != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__START_TIME, XmlExportHelper.toXmlStringFromDouble(startTime));
    } else if (clothoidWriter.isStartTimeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__START_TIME, clothoidWriter.getParameterFromStartTime());
    }
    Double stopTime = clothoidWriter.getStopTime();
    if (stopTime != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STOP_TIME, XmlExportHelper.toXmlStringFromDouble(stopTime));
    } else if (clothoidWriter.isStopTimeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STOP_TIME, clothoidWriter.getParameterFromStopTime());
    }
    IPositionWriter position = clothoidWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type CollisionCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param collisionConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCollisionConditionNode(
      Document document, Element elementNode, ICollisionConditionWriter collisionConditionWriter) {
    // Add Attributes (Parameters)
    IEntityRefWriter entityRef = collisionConditionWriter.getWriterEntityRef();
    if (entityRef != null) {
      Element entityRefElement = document.createElement(OscConstants.ELEMENT__ENTITY_REF);
      elementNode.appendChild(entityRefElement);
      fillEntityRefNode(document, entityRefElement, entityRef);
    }

    IByObjectTypeWriter byType = collisionConditionWriter.getWriterByType();
    if (byType != null) {
      Element byTypeElement = document.createElement(OscConstants.ELEMENT__BY_TYPE);
      elementNode.appendChild(byTypeElement);
      fillByObjectTypeNode(document, byTypeElement, byType);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Condition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param conditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillConditionNode(
      Document document, Element elementNode, IConditionWriter conditionWriter) {
    // Add Attributes (Parameters)
    String name = conditionWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (conditionWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, conditionWriter.getParameterFromName());
    }
    Double delay = conditionWriter.getDelay();
    if (delay != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DELAY, XmlExportHelper.toXmlStringFromDouble(delay));
    } else if (conditionWriter.isDelayParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DELAY, conditionWriter.getParameterFromDelay());
    }
    ConditionEdge conditionEdge = conditionWriter.getConditionEdge();
    if (conditionEdge != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__CONDITION_EDGE, conditionEdge.getLiteral());
    } else if (conditionWriter.isConditionEdgeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONDITION_EDGE, conditionWriter.getParameterFromConditionEdge());
    }
    IByEntityConditionWriter byEntityCondition = conditionWriter.getWriterByEntityCondition();
    if (byEntityCondition != null) {
      Element byEntityConditionElement =
          document.createElement(OscConstants.ELEMENT__BY_ENTITY_CONDITION);
      elementNode.appendChild(byEntityConditionElement);
      fillByEntityConditionNode(document, byEntityConditionElement, byEntityCondition);
    }

    IByValueConditionWriter byValueCondition = conditionWriter.getWriterByValueCondition();
    if (byValueCondition != null) {
      Element byValueConditionElement =
          document.createElement(OscConstants.ELEMENT__BY_VALUE_CONDITION);
      elementNode.appendChild(byValueConditionElement);
      fillByValueConditionNode(document, byValueConditionElement, byValueCondition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ConditionGroup
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param conditionGroupWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillConditionGroupNode(
      Document document, Element elementNode, IConditionGroupWriter conditionGroupWriter) {
    // Add Attributes (Parameters)
    List<IConditionWriter> conditions = conditionGroupWriter.getWriterConditions();
    if (conditions != null) {
      for (IConditionWriter conditionsWriterItem : conditions) {
        Element conditionsElement = document.createElement(OscConstants.ELEMENT__CONDITION);
        elementNode.appendChild(conditionsElement);
        fillConditionNode(document, conditionsElement, conditionsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ControlPoint
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param controlPointWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillControlPointNode(
      Document document, Element elementNode, IControlPointWriter controlPointWriter) {
    // Add Attributes (Parameters)
    Double time = controlPointWriter.getTime();
    if (time != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TIME, XmlExportHelper.toXmlStringFromDouble(time));
    } else if (controlPointWriter.isTimeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TIME, controlPointWriter.getParameterFromTime());
    }
    Double weight = controlPointWriter.getWeight();
    if (weight != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WEIGHT, XmlExportHelper.toXmlStringFromDouble(weight));
    } else if (controlPointWriter.isWeightParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WEIGHT, controlPointWriter.getParameterFromWeight());
    }
    IPositionWriter position = controlPointWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Controller
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param controllerWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillControllerNode(
      Document document, Element elementNode, IControllerWriter controllerWriter) {
    // Add Attributes (Parameters)
    String name = controllerWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (controllerWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, controllerWriter.getParameterFromName());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        controllerWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    IPropertiesWriter properties = controllerWriter.getWriterProperties();
    if (properties != null) {
      Element propertiesElement = document.createElement(OscConstants.ELEMENT__PROPERTIES);
      elementNode.appendChild(propertiesElement);
      fillPropertiesNode(document, propertiesElement, properties);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ControllerAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param controllerActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillControllerActionNode(
      Document document, Element elementNode, IControllerActionWriter controllerActionWriter) {
    // Add Attributes (Parameters)
    IAssignControllerActionWriter assignControllerAction =
        controllerActionWriter.getWriterAssignControllerAction();
    if (assignControllerAction != null) {
      Element assignControllerActionElement =
          document.createElement(OscConstants.ELEMENT__ASSIGN_CONTROLLER_ACTION);
      elementNode.appendChild(assignControllerActionElement);
      fillAssignControllerActionNode(
          document, assignControllerActionElement, assignControllerAction);
    }

    IOverrideControllerValueActionWriter overrideControllerValueAction =
        controllerActionWriter.getWriterOverrideControllerValueAction();
    if (overrideControllerValueAction != null) {
      Element overrideControllerValueActionElement =
          document.createElement(OscConstants.ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION);
      elementNode.appendChild(overrideControllerValueActionElement);
      fillOverrideControllerValueActionNode(
          document, overrideControllerValueActionElement, overrideControllerValueAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ControllerCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param controllerCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillControllerCatalogLocationNode(
      Document document,
      Element elementNode,
      IControllerCatalogLocationWriter controllerCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = controllerCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ControllerDistribution
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param controllerDistributionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillControllerDistributionNode(
      Document document,
      Element elementNode,
      IControllerDistributionWriter controllerDistributionWriter) {
    // Add Attributes (Parameters)
    List<IControllerDistributionEntryWriter> controllerDistributionEntries =
        controllerDistributionWriter.getWriterControllerDistributionEntries();
    if (controllerDistributionEntries != null) {
      for (IControllerDistributionEntryWriter controllerDistributionEntriesWriterItem :
          controllerDistributionEntries) {
        Element controllerDistributionEntriesElement =
            document.createElement(OscConstants.ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY);
        elementNode.appendChild(controllerDistributionEntriesElement);
        fillControllerDistributionEntryNode(
            document,
            controllerDistributionEntriesElement,
            controllerDistributionEntriesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ControllerDistributionEntry
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param controllerDistributionEntryWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillControllerDistributionEntryNode(
      Document document,
      Element elementNode,
      IControllerDistributionEntryWriter controllerDistributionEntryWriter) {
    // Add Attributes (Parameters)
    Double weight = controllerDistributionEntryWriter.getWeight();
    if (weight != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WEIGHT, XmlExportHelper.toXmlStringFromDouble(weight));
    } else if (controllerDistributionEntryWriter.isWeightParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WEIGHT,
          controllerDistributionEntryWriter.getParameterFromWeight());
    }
    IControllerWriter controller = controllerDistributionEntryWriter.getWriterController();
    if (controller != null) {
      Element controllerElement = document.createElement(OscConstants.ELEMENT__CONTROLLER);
      elementNode.appendChild(controllerElement);
      fillControllerNode(document, controllerElement, controller);
    }

    ICatalogReferenceWriter catalogReference =
        controllerDistributionEntryWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type CustomCommandAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param customCommandActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillCustomCommandActionNode(
      Document document,
      Element elementNode,
      ICustomCommandActionWriter customCommandActionWriter) {
    // Add Attributes (Parameters)
    String type = customCommandActionWriter.getType();
    if (type != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TYPE, XmlExportHelper.toXmlStringFromString(type));
    } else if (customCommandActionWriter.isTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TYPE, customCommandActionWriter.getParameterFromType());
    }
    String content = customCommandActionWriter.getContent();
    if (content != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTENT, XmlExportHelper.toXmlStringFromString(content));
    } else if (customCommandActionWriter.isContentParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTENT, customCommandActionWriter.getParameterFromContent());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type DeleteEntityAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param deleteEntityActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillDeleteEntityActionNode(
      Document document, Element elementNode, IDeleteEntityActionWriter deleteEntityActionWriter) {
    // Add Attributes (Parameters)
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Dimensions
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param dimensionsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillDimensionsNode(
      Document document, Element elementNode, IDimensionsWriter dimensionsWriter) {
    // Add Attributes (Parameters)
    Double width = dimensionsWriter.getWidth();
    if (width != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WIDTH, XmlExportHelper.toXmlStringFromDouble(width));
    } else if (dimensionsWriter.isWidthParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WIDTH, dimensionsWriter.getParameterFromWidth());
    }
    Double length = dimensionsWriter.getLength();
    if (length != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LENGTH, XmlExportHelper.toXmlStringFromDouble(length));
    } else if (dimensionsWriter.isLengthParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LENGTH, dimensionsWriter.getParameterFromLength());
    }
    Double height = dimensionsWriter.getHeight();
    if (height != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__HEIGHT, XmlExportHelper.toXmlStringFromDouble(height));
    } else if (dimensionsWriter.isHeightParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__HEIGHT, dimensionsWriter.getParameterFromHeight());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Directory
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param directoryWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillDirectoryNode(
      Document document, Element elementNode, IDirectoryWriter directoryWriter) {
    // Add Attributes (Parameters)
    String path = directoryWriter.getPath();
    if (path != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PATH, XmlExportHelper.toXmlStringFromString(path));
    } else if (directoryWriter.isPathParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PATH, directoryWriter.getParameterFromPath());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type DistanceCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param distanceConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillDistanceConditionNode(
      Document document, Element elementNode, IDistanceConditionWriter distanceConditionWriter) {
    // Add Attributes (Parameters)
    Double value = distanceConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (distanceConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, distanceConditionWriter.getParameterFromValue());
    }
    Boolean freespace = distanceConditionWriter.getFreespace();
    if (freespace != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE, XmlExportHelper.toXmlStringFromBoolean(freespace));
    } else if (distanceConditionWriter.isFreespaceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE, distanceConditionWriter.getParameterFromFreespace());
    }
    Boolean alongRoute = distanceConditionWriter.getAlongRoute();
    if (alongRoute != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ALONG_ROUTE, XmlExportHelper.toXmlStringFromBoolean(alongRoute));
    } else if (distanceConditionWriter.isAlongRouteParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ALONG_ROUTE,
          distanceConditionWriter.getParameterFromAlongRoute());
    }
    Rule rule = distanceConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (distanceConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, distanceConditionWriter.getParameterFromRule());
    }
    IPositionWriter position = distanceConditionWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type DynamicConstraints
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param dynamicConstraintsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillDynamicConstraintsNode(
      Document document, Element elementNode, IDynamicConstraintsWriter dynamicConstraintsWriter) {
    // Add Attributes (Parameters)
    Double maxAcceleration = dynamicConstraintsWriter.getMaxAcceleration();
    if (maxAcceleration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_ACCELERATION,
          XmlExportHelper.toXmlStringFromDouble(maxAcceleration));
    } else if (dynamicConstraintsWriter.isMaxAccelerationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_ACCELERATION,
          dynamicConstraintsWriter.getParameterFromMaxAcceleration());
    }
    Double maxDeceleration = dynamicConstraintsWriter.getMaxDeceleration();
    if (maxDeceleration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_DECELERATION,
          XmlExportHelper.toXmlStringFromDouble(maxDeceleration));
    } else if (dynamicConstraintsWriter.isMaxDecelerationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_DECELERATION,
          dynamicConstraintsWriter.getParameterFromMaxDeceleration());
    }
    Double maxSpeed = dynamicConstraintsWriter.getMaxSpeed();
    if (maxSpeed != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_SPEED, XmlExportHelper.toXmlStringFromDouble(maxSpeed));
    } else if (dynamicConstraintsWriter.isMaxSpeedParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_SPEED, dynamicConstraintsWriter.getParameterFromMaxSpeed());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EndOfRoadCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param endOfRoadConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEndOfRoadConditionNode(
      Document document, Element elementNode, IEndOfRoadConditionWriter endOfRoadConditionWriter) {
    // Add Attributes (Parameters)
    Double duration = endOfRoadConditionWriter.getDuration();
    if (duration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, XmlExportHelper.toXmlStringFromDouble(duration));
    } else if (endOfRoadConditionWriter.isDurationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, endOfRoadConditionWriter.getParameterFromDuration());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Entities
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param entitiesWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEntitiesNode(
      Document document, Element elementNode, IEntitiesWriter entitiesWriter) {
    // Add Attributes (Parameters)
    List<IScenarioObjectWriter> scenarioObjects = entitiesWriter.getWriterScenarioObjects();
    if (scenarioObjects != null) {
      for (IScenarioObjectWriter scenarioObjectsWriterItem : scenarioObjects) {
        Element scenarioObjectsElement =
            document.createElement(OscConstants.ELEMENT__SCENARIO_OBJECT);
        elementNode.appendChild(scenarioObjectsElement);
        fillScenarioObjectNode(document, scenarioObjectsElement, scenarioObjectsWriterItem);
      }
    }
    List<IEntitySelectionWriter> entitySelections = entitiesWriter.getWriterEntitySelections();
    if (entitySelections != null) {
      for (IEntitySelectionWriter entitySelectionsWriterItem : entitySelections) {
        Element entitySelectionsElement =
            document.createElement(OscConstants.ELEMENT__ENTITY_SELECTION);
        elementNode.appendChild(entitySelectionsElement);
        fillEntitySelectionNode(document, entitySelectionsElement, entitySelectionsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EntityAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param entityActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEntityActionNode(
      Document document, Element elementNode, IEntityActionWriter entityActionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = entityActionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    IAddEntityActionWriter addEntityAction = entityActionWriter.getWriterAddEntityAction();
    if (addEntityAction != null) {
      Element addEntityActionElement =
          document.createElement(OscConstants.ELEMENT__ADD_ENTITY_ACTION);
      elementNode.appendChild(addEntityActionElement);
      fillAddEntityActionNode(document, addEntityActionElement, addEntityAction);
    }

    IDeleteEntityActionWriter deleteEntityAction = entityActionWriter.getWriterDeleteEntityAction();
    if (deleteEntityAction != null) {
      Element deleteEntityActionElement =
          document.createElement(OscConstants.ELEMENT__DELETE_ENTITY_ACTION);
      elementNode.appendChild(deleteEntityActionElement);
      fillDeleteEntityActionNode(document, deleteEntityActionElement, deleteEntityAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EntityCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param entityConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEntityConditionNode(
      Document document, Element elementNode, IEntityConditionWriter entityConditionWriter) {
    // Add Attributes (Parameters)
    IEndOfRoadConditionWriter endOfRoadCondition =
        entityConditionWriter.getWriterEndOfRoadCondition();
    if (endOfRoadCondition != null) {
      Element endOfRoadConditionElement =
          document.createElement(OscConstants.ELEMENT__END_OF_ROAD_CONDITION);
      elementNode.appendChild(endOfRoadConditionElement);
      fillEndOfRoadConditionNode(document, endOfRoadConditionElement, endOfRoadCondition);
    }

    ICollisionConditionWriter collisionCondition =
        entityConditionWriter.getWriterCollisionCondition();
    if (collisionCondition != null) {
      Element collisionConditionElement =
          document.createElement(OscConstants.ELEMENT__COLLISION_CONDITION);
      elementNode.appendChild(collisionConditionElement);
      fillCollisionConditionNode(document, collisionConditionElement, collisionCondition);
    }

    IOffroadConditionWriter offroadCondition = entityConditionWriter.getWriterOffroadCondition();
    if (offroadCondition != null) {
      Element offroadConditionElement =
          document.createElement(OscConstants.ELEMENT__OFFROAD_CONDITION);
      elementNode.appendChild(offroadConditionElement);
      fillOffroadConditionNode(document, offroadConditionElement, offroadCondition);
    }

    ITimeHeadwayConditionWriter timeHeadwayCondition =
        entityConditionWriter.getWriterTimeHeadwayCondition();
    if (timeHeadwayCondition != null) {
      Element timeHeadwayConditionElement =
          document.createElement(OscConstants.ELEMENT__TIME_HEADWAY_CONDITION);
      elementNode.appendChild(timeHeadwayConditionElement);
      fillTimeHeadwayConditionNode(document, timeHeadwayConditionElement, timeHeadwayCondition);
    }

    ITimeToCollisionConditionWriter timeToCollisionCondition =
        entityConditionWriter.getWriterTimeToCollisionCondition();
    if (timeToCollisionCondition != null) {
      Element timeToCollisionConditionElement =
          document.createElement(OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION);
      elementNode.appendChild(timeToCollisionConditionElement);
      fillTimeToCollisionConditionNode(
          document, timeToCollisionConditionElement, timeToCollisionCondition);
    }

    IAccelerationConditionWriter accelerationCondition =
        entityConditionWriter.getWriterAccelerationCondition();
    if (accelerationCondition != null) {
      Element accelerationConditionElement =
          document.createElement(OscConstants.ELEMENT__ACCELERATION_CONDITION);
      elementNode.appendChild(accelerationConditionElement);
      fillAccelerationConditionNode(document, accelerationConditionElement, accelerationCondition);
    }

    IStandStillConditionWriter standStillCondition =
        entityConditionWriter.getWriterStandStillCondition();
    if (standStillCondition != null) {
      Element standStillConditionElement =
          document.createElement(OscConstants.ELEMENT__STAND_STILL_CONDITION);
      elementNode.appendChild(standStillConditionElement);
      fillStandStillConditionNode(document, standStillConditionElement, standStillCondition);
    }

    ISpeedConditionWriter speedCondition = entityConditionWriter.getWriterSpeedCondition();
    if (speedCondition != null) {
      Element speedConditionElement = document.createElement(OscConstants.ELEMENT__SPEED_CONDITION);
      elementNode.appendChild(speedConditionElement);
      fillSpeedConditionNode(document, speedConditionElement, speedCondition);
    }

    IRelativeSpeedConditionWriter relativeSpeedCondition =
        entityConditionWriter.getWriterRelativeSpeedCondition();
    if (relativeSpeedCondition != null) {
      Element relativeSpeedConditionElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_SPEED_CONDITION);
      elementNode.appendChild(relativeSpeedConditionElement);
      fillRelativeSpeedConditionNode(
          document, relativeSpeedConditionElement, relativeSpeedCondition);
    }

    ITraveledDistanceConditionWriter traveledDistanceCondition =
        entityConditionWriter.getWriterTraveledDistanceCondition();
    if (traveledDistanceCondition != null) {
      Element traveledDistanceConditionElement =
          document.createElement(OscConstants.ELEMENT__TRAVELED_DISTANCE_CONDITION);
      elementNode.appendChild(traveledDistanceConditionElement);
      fillTraveledDistanceConditionNode(
          document, traveledDistanceConditionElement, traveledDistanceCondition);
    }

    IReachPositionConditionWriter reachPositionCondition =
        entityConditionWriter.getWriterReachPositionCondition();
    if (reachPositionCondition != null) {
      Element reachPositionConditionElement =
          document.createElement(OscConstants.ELEMENT__REACH_POSITION_CONDITION);
      elementNode.appendChild(reachPositionConditionElement);
      fillReachPositionConditionNode(
          document, reachPositionConditionElement, reachPositionCondition);
    }

    IDistanceConditionWriter distanceCondition = entityConditionWriter.getWriterDistanceCondition();
    if (distanceCondition != null) {
      Element distanceConditionElement =
          document.createElement(OscConstants.ELEMENT__DISTANCE_CONDITION);
      elementNode.appendChild(distanceConditionElement);
      fillDistanceConditionNode(document, distanceConditionElement, distanceCondition);
    }

    IRelativeDistanceConditionWriter relativeDistanceCondition =
        entityConditionWriter.getWriterRelativeDistanceCondition();
    if (relativeDistanceCondition != null) {
      Element relativeDistanceConditionElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_DISTANCE_CONDITION);
      elementNode.appendChild(relativeDistanceConditionElement);
      fillRelativeDistanceConditionNode(
          document, relativeDistanceConditionElement, relativeDistanceCondition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EntityObject
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param entityObjectWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEntityObjectNode(
      Document document, Element elementNode, IEntityObjectWriter entityObjectWriter) {
    // Add Attributes (Parameters)
    ICatalogReferenceWriter catalogReference = entityObjectWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    IVehicleWriter vehicle = entityObjectWriter.getWriterVehicle();
    if (vehicle != null) {
      Element vehicleElement = document.createElement(OscConstants.ELEMENT__VEHICLE);
      elementNode.appendChild(vehicleElement);
      fillVehicleNode(document, vehicleElement, vehicle);
    }

    IPedestrianWriter pedestrian = entityObjectWriter.getWriterPedestrian();
    if (pedestrian != null) {
      Element pedestrianElement = document.createElement(OscConstants.ELEMENT__PEDESTRIAN);
      elementNode.appendChild(pedestrianElement);
      fillPedestrianNode(document, pedestrianElement, pedestrian);
    }

    IMiscObjectWriter miscObject = entityObjectWriter.getWriterMiscObject();
    if (miscObject != null) {
      Element miscObjectElement = document.createElement(OscConstants.ELEMENT__MISC_OBJECT);
      elementNode.appendChild(miscObjectElement);
      fillMiscObjectNode(document, miscObjectElement, miscObject);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EntityRef
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param entityRefWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEntityRefNode(
      Document document, Element elementNode, IEntityRefWriter entityRefWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = entityRefWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EntitySelection
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param entitySelectionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEntitySelectionNode(
      Document document, Element elementNode, IEntitySelectionWriter entitySelectionWriter) {
    // Add Attributes (Parameters)
    String name = entitySelectionWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (entitySelectionWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, entitySelectionWriter.getParameterFromName());
    }
    ISelectedEntitiesWriter members = entitySelectionWriter.getWriterMembers();
    if (members != null) {
      Element membersElement = document.createElement(OscConstants.ELEMENT__MEMBERS);
      elementNode.appendChild(membersElement);
      fillSelectedEntitiesNode(document, membersElement, members);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Environment
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param environmentWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEnvironmentNode(
      Document document, Element elementNode, IEnvironmentWriter environmentWriter) {
    // Add Attributes (Parameters)
    String name = environmentWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (environmentWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, environmentWriter.getParameterFromName());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        environmentWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    ITimeOfDayWriter timeOfDay = environmentWriter.getWriterTimeOfDay();
    if (timeOfDay != null) {
      Element timeOfDayElement = document.createElement(OscConstants.ELEMENT__TIME_OF_DAY);
      elementNode.appendChild(timeOfDayElement);
      fillTimeOfDayNode(document, timeOfDayElement, timeOfDay);
    }

    IWeatherWriter weather = environmentWriter.getWriterWeather();
    if (weather != null) {
      Element weatherElement = document.createElement(OscConstants.ELEMENT__WEATHER);
      elementNode.appendChild(weatherElement);
      fillWeatherNode(document, weatherElement, weather);
    }

    IRoadConditionWriter roadCondition = environmentWriter.getWriterRoadCondition();
    if (roadCondition != null) {
      Element roadConditionElement = document.createElement(OscConstants.ELEMENT__ROAD_CONDITION);
      elementNode.appendChild(roadConditionElement);
      fillRoadConditionNode(document, roadConditionElement, roadCondition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EnvironmentAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param environmentActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEnvironmentActionNode(
      Document document, Element elementNode, IEnvironmentActionWriter environmentActionWriter) {
    // Add Attributes (Parameters)
    IEnvironmentWriter environment = environmentActionWriter.getWriterEnvironment();
    if (environment != null) {
      Element environmentElement = document.createElement(OscConstants.ELEMENT__ENVIRONMENT);
      elementNode.appendChild(environmentElement);
      fillEnvironmentNode(document, environmentElement, environment);
    }

    ICatalogReferenceWriter catalogReference = environmentActionWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type EnvironmentCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param environmentCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEnvironmentCatalogLocationNode(
      Document document,
      Element elementNode,
      IEnvironmentCatalogLocationWriter environmentCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = environmentCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Event
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param eventWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillEventNode(Document document, Element elementNode, IEventWriter eventWriter) {
    // Add Attributes (Parameters)
    Priority priority = eventWriter.getPriority();
    if (priority != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__PRIORITY, priority.getLiteral());
    } else if (eventWriter.isPriorityParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PRIORITY, eventWriter.getParameterFromPriority());
    }
    Long maximumExecutionCount = eventWriter.getMaximumExecutionCount();
    if (maximumExecutionCount != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT,
          XmlExportHelper.toXmlStringFromUnsignedInt(maximumExecutionCount));
    } else if (eventWriter.isMaximumExecutionCountParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT,
          eventWriter.getParameterFromMaximumExecutionCount());
    }
    String name = eventWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (eventWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, eventWriter.getParameterFromName());
    }
    List<IActionWriter> actions = eventWriter.getWriterActions();
    if (actions != null) {
      for (IActionWriter actionsWriterItem : actions) {
        Element actionsElement = document.createElement(OscConstants.ELEMENT__ACTION);
        elementNode.appendChild(actionsElement);
        fillActionNode(document, actionsElement, actionsWriterItem);
      }
    }
    ITriggerWriter startTrigger = eventWriter.getWriterStartTrigger();
    if (startTrigger != null) {
      Element startTriggerElement = document.createElement(OscConstants.ELEMENT__START_TRIGGER);
      elementNode.appendChild(startTriggerElement);
      fillTriggerNode(document, startTriggerElement, startTrigger);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type File
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param fileWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillFileNode(Document document, Element elementNode, IFileWriter fileWriter) {
    // Add Attributes (Parameters)
    String filepath = fileWriter.getFilepath();
    if (filepath != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FILEPATH, XmlExportHelper.toXmlStringFromString(filepath));
    } else if (fileWriter.isFilepathParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FILEPATH, fileWriter.getParameterFromFilepath());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type FileHeader
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param fileHeaderWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillFileHeaderNode(
      Document document, Element elementNode, IFileHeaderWriter fileHeaderWriter) {
    // Add Attributes (Parameters)
    Integer revMajor = fileHeaderWriter.getRevMajor();
    if (revMajor != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__REV_MAJOR,
          XmlExportHelper.toXmlStringFromUnsignedShort(revMajor));
    } else if (fileHeaderWriter.isRevMajorParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__REV_MAJOR, fileHeaderWriter.getParameterFromRevMajor());
    }
    Integer revMinor = fileHeaderWriter.getRevMinor();
    if (revMinor != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__REV_MINOR,
          XmlExportHelper.toXmlStringFromUnsignedShort(revMinor));
    } else if (fileHeaderWriter.isRevMinorParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__REV_MINOR, fileHeaderWriter.getParameterFromRevMinor());
    }
    java.util.Date date = fileHeaderWriter.getDate();
    if (date != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DATE, XmlExportHelper.toXmlStringFromDateTime(date));
    } else if (fileHeaderWriter.isDateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DATE, fileHeaderWriter.getParameterFromDate());
    }
    String description = fileHeaderWriter.getDescription();
    if (description != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DESCRIPTION, XmlExportHelper.toXmlStringFromString(description));
    } else if (fileHeaderWriter.isDescriptionParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DESCRIPTION, fileHeaderWriter.getParameterFromDescription());
    }
    String author = fileHeaderWriter.getAuthor();
    if (author != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__AUTHOR, XmlExportHelper.toXmlStringFromString(author));
    } else if (fileHeaderWriter.isAuthorParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__AUTHOR, fileHeaderWriter.getParameterFromAuthor());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type FinalSpeed
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param finalSpeedWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillFinalSpeedNode(
      Document document, Element elementNode, IFinalSpeedWriter finalSpeedWriter) {
    // Add Attributes (Parameters)
    IAbsoluteSpeedWriter absoluteSpeed = finalSpeedWriter.getWriterAbsoluteSpeed();
    if (absoluteSpeed != null) {
      Element absoluteSpeedElement = document.createElement(OscConstants.ELEMENT__ABSOLUTE_SPEED);
      elementNode.appendChild(absoluteSpeedElement);
      fillAbsoluteSpeedNode(document, absoluteSpeedElement, absoluteSpeed);
    }

    IRelativeSpeedToMasterWriter relativeSpeedToMaster =
        finalSpeedWriter.getWriterRelativeSpeedToMaster();
    if (relativeSpeedToMaster != null) {
      Element relativeSpeedToMasterElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_SPEED_TO_MASTER);
      elementNode.appendChild(relativeSpeedToMasterElement);
      fillRelativeSpeedToMasterNode(document, relativeSpeedToMasterElement, relativeSpeedToMaster);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Fog
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param fogWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillFogNode(Document document, Element elementNode, IFogWriter fogWriter) {
    // Add Attributes (Parameters)
    Double visualRange = fogWriter.getVisualRange();
    if (visualRange != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VISUAL_RANGE, XmlExportHelper.toXmlStringFromDouble(visualRange));
    } else if (fogWriter.isVisualRangeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VISUAL_RANGE, fogWriter.getParameterFromVisualRange());
    }
    IBoundingBoxWriter boundingBox = fogWriter.getWriterBoundingBox();
    if (boundingBox != null) {
      Element boundingBoxElement = document.createElement(OscConstants.ELEMENT__BOUNDING_BOX);
      elementNode.appendChild(boundingBoxElement);
      fillBoundingBoxNode(document, boundingBoxElement, boundingBox);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type FollowTrajectoryAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param followTrajectoryActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillFollowTrajectoryActionNode(
      Document document,
      Element elementNode,
      IFollowTrajectoryActionWriter followTrajectoryActionWriter) {
    // Add Attributes (Parameters)
    ITrajectoryWriter trajectory = followTrajectoryActionWriter.getWriterTrajectory();
    if (trajectory != null) {
      Element trajectoryElement = document.createElement(OscConstants.ELEMENT__TRAJECTORY);
      elementNode.appendChild(trajectoryElement);
      fillTrajectoryNode(document, trajectoryElement, trajectory);
    }

    ICatalogReferenceWriter catalogReference =
        followTrajectoryActionWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    ITimeReferenceWriter timeReference = followTrajectoryActionWriter.getWriterTimeReference();
    if (timeReference != null) {
      Element timeReferenceElement = document.createElement(OscConstants.ELEMENT__TIME_REFERENCE);
      elementNode.appendChild(timeReferenceElement);
      fillTimeReferenceNode(document, timeReferenceElement, timeReference);
    }

    ITrajectoryFollowingModeWriter trajectoryFollowingMode =
        followTrajectoryActionWriter.getWriterTrajectoryFollowingMode();
    if (trajectoryFollowingMode != null) {
      Element trajectoryFollowingModeElement =
          document.createElement(OscConstants.ELEMENT__TRAJECTORY_FOLLOWING_MODE);
      elementNode.appendChild(trajectoryFollowingModeElement);
      fillTrajectoryFollowingModeNode(
          document, trajectoryFollowingModeElement, trajectoryFollowingMode);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type GlobalAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param globalActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillGlobalActionNode(
      Document document, Element elementNode, IGlobalActionWriter globalActionWriter) {
    // Add Attributes (Parameters)
    IEnvironmentActionWriter environmentAction = globalActionWriter.getWriterEnvironmentAction();
    if (environmentAction != null) {
      Element environmentActionElement =
          document.createElement(OscConstants.ELEMENT__ENVIRONMENT_ACTION);
      elementNode.appendChild(environmentActionElement);
      fillEnvironmentActionNode(document, environmentActionElement, environmentAction);
    }

    IEntityActionWriter entityAction = globalActionWriter.getWriterEntityAction();
    if (entityAction != null) {
      Element entityActionElement = document.createElement(OscConstants.ELEMENT__ENTITY_ACTION);
      elementNode.appendChild(entityActionElement);
      fillEntityActionNode(document, entityActionElement, entityAction);
    }

    IParameterActionWriter parameterAction = globalActionWriter.getWriterParameterAction();
    if (parameterAction != null) {
      Element parameterActionElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_ACTION);
      elementNode.appendChild(parameterActionElement);
      fillParameterActionNode(document, parameterActionElement, parameterAction);
    }

    IInfrastructureActionWriter infrastructureAction =
        globalActionWriter.getWriterInfrastructureAction();
    if (infrastructureAction != null) {
      Element infrastructureActionElement =
          document.createElement(OscConstants.ELEMENT__INFRASTRUCTURE_ACTION);
      elementNode.appendChild(infrastructureActionElement);
      fillInfrastructureActionNode(document, infrastructureActionElement, infrastructureAction);
    }

    ITrafficActionWriter trafficAction = globalActionWriter.getWriterTrafficAction();
    if (trafficAction != null) {
      Element trafficActionElement = document.createElement(OscConstants.ELEMENT__TRAFFIC_ACTION);
      elementNode.appendChild(trafficActionElement);
      fillTrafficActionNode(document, trafficActionElement, trafficAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type InRoutePosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param inRoutePositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillInRoutePositionNode(
      Document document, Element elementNode, IInRoutePositionWriter inRoutePositionWriter) {
    // Add Attributes (Parameters)
    IPositionOfCurrentEntityWriter fromCurrentEntity =
        inRoutePositionWriter.getWriterFromCurrentEntity();
    if (fromCurrentEntity != null) {
      Element fromCurrentEntityElement =
          document.createElement(OscConstants.ELEMENT__FROM_CURRENT_ENTITY);
      elementNode.appendChild(fromCurrentEntityElement);
      fillPositionOfCurrentEntityNode(document, fromCurrentEntityElement, fromCurrentEntity);
    }

    IPositionInRoadCoordinatesWriter fromRoadCoordinates =
        inRoutePositionWriter.getWriterFromRoadCoordinates();
    if (fromRoadCoordinates != null) {
      Element fromRoadCoordinatesElement =
          document.createElement(OscConstants.ELEMENT__FROM_ROAD_COORDINATES);
      elementNode.appendChild(fromRoadCoordinatesElement);
      fillPositionInRoadCoordinatesNode(document, fromRoadCoordinatesElement, fromRoadCoordinates);
    }

    IPositionInLaneCoordinatesWriter fromLaneCoordinates =
        inRoutePositionWriter.getWriterFromLaneCoordinates();
    if (fromLaneCoordinates != null) {
      Element fromLaneCoordinatesElement =
          document.createElement(OscConstants.ELEMENT__FROM_LANE_COORDINATES);
      elementNode.appendChild(fromLaneCoordinatesElement);
      fillPositionInLaneCoordinatesNode(document, fromLaneCoordinatesElement, fromLaneCoordinates);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type InfrastructureAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param infrastructureActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillInfrastructureActionNode(
      Document document,
      Element elementNode,
      IInfrastructureActionWriter infrastructureActionWriter) {
    // Add Attributes (Parameters)
    ITrafficSignalActionWriter trafficSignalAction =
        infrastructureActionWriter.getWriterTrafficSignalAction();
    if (trafficSignalAction != null) {
      Element trafficSignalActionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNAL_ACTION);
      elementNode.appendChild(trafficSignalActionElement);
      fillTrafficSignalActionNode(document, trafficSignalActionElement, trafficSignalAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Init
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param initWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillInitNode(Document document, Element elementNode, IInitWriter initWriter) {
    // Add Attributes (Parameters)
    IInitActionsWriter actions = initWriter.getWriterActions();
    if (actions != null) {
      Element actionsElement = document.createElement(OscConstants.ELEMENT__ACTIONS);
      elementNode.appendChild(actionsElement);
      fillInitActionsNode(document, actionsElement, actions);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type InitActions
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param initActionsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillInitActionsNode(
      Document document, Element elementNode, IInitActionsWriter initActionsWriter) {
    // Add Attributes (Parameters)
    List<IGlobalActionWriter> globalActions = initActionsWriter.getWriterGlobalActions();
    if (globalActions != null) {
      for (IGlobalActionWriter globalActionsWriterItem : globalActions) {
        Element globalActionsElement = document.createElement(OscConstants.ELEMENT__GLOBAL_ACTION);
        elementNode.appendChild(globalActionsElement);
        fillGlobalActionNode(document, globalActionsElement, globalActionsWriterItem);
      }
    }
    List<IUserDefinedActionWriter> userDefinedActions =
        initActionsWriter.getWriterUserDefinedActions();
    if (userDefinedActions != null) {
      for (IUserDefinedActionWriter userDefinedActionsWriterItem : userDefinedActions) {
        Element userDefinedActionsElement =
            document.createElement(OscConstants.ELEMENT__USER_DEFINED_ACTION);
        elementNode.appendChild(userDefinedActionsElement);
        fillUserDefinedActionNode(
            document, userDefinedActionsElement, userDefinedActionsWriterItem);
      }
    }
    List<IPrivateWriter> privates = initActionsWriter.getWriterPrivates();
    if (privates != null) {
      for (IPrivateWriter privatesWriterItem : privates) {
        Element privatesElement = document.createElement(OscConstants.ELEMENT__PRIVATE);
        elementNode.appendChild(privatesElement);
        fillPrivateNode(document, privatesElement, privatesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Knot
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param knotWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillKnotNode(Document document, Element elementNode, IKnotWriter knotWriter) {
    // Add Attributes (Parameters)
    Double value = knotWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (knotWriter.isValueParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__VALUE, knotWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LaneChangeAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param laneChangeActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLaneChangeActionNode(
      Document document, Element elementNode, ILaneChangeActionWriter laneChangeActionWriter) {
    // Add Attributes (Parameters)
    Double targetLaneOffset = laneChangeActionWriter.getTargetLaneOffset();
    if (targetLaneOffset != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET,
          XmlExportHelper.toXmlStringFromDouble(targetLaneOffset));
    } else if (laneChangeActionWriter.isTargetLaneOffsetParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET,
          laneChangeActionWriter.getParameterFromTargetLaneOffset());
    }
    ITransitionDynamicsWriter laneChangeActionDynamics =
        laneChangeActionWriter.getWriterLaneChangeActionDynamics();
    if (laneChangeActionDynamics != null) {
      Element laneChangeActionDynamicsElement =
          document.createElement(OscConstants.ELEMENT__LANE_CHANGE_ACTION_DYNAMICS);
      elementNode.appendChild(laneChangeActionDynamicsElement);
      fillTransitionDynamicsNode(
          document, laneChangeActionDynamicsElement, laneChangeActionDynamics);
    }

    ILaneChangeTargetWriter laneChangeTarget = laneChangeActionWriter.getWriterLaneChangeTarget();
    if (laneChangeTarget != null) {
      Element laneChangeTargetElement =
          document.createElement(OscConstants.ELEMENT__LANE_CHANGE_TARGET);
      elementNode.appendChild(laneChangeTargetElement);
      fillLaneChangeTargetNode(document, laneChangeTargetElement, laneChangeTarget);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LaneChangeTarget
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param laneChangeTargetWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLaneChangeTargetNode(
      Document document, Element elementNode, ILaneChangeTargetWriter laneChangeTargetWriter) {
    // Add Attributes (Parameters)
    IRelativeTargetLaneWriter relativeTargetLane =
        laneChangeTargetWriter.getWriterRelativeTargetLane();
    if (relativeTargetLane != null) {
      Element relativeTargetLaneElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_TARGET_LANE);
      elementNode.appendChild(relativeTargetLaneElement);
      fillRelativeTargetLaneNode(document, relativeTargetLaneElement, relativeTargetLane);
    }

    IAbsoluteTargetLaneWriter absoluteTargetLane =
        laneChangeTargetWriter.getWriterAbsoluteTargetLane();
    if (absoluteTargetLane != null) {
      Element absoluteTargetLaneElement =
          document.createElement(OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE);
      elementNode.appendChild(absoluteTargetLaneElement);
      fillAbsoluteTargetLaneNode(document, absoluteTargetLaneElement, absoluteTargetLane);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LaneOffsetAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param laneOffsetActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLaneOffsetActionNode(
      Document document, Element elementNode, ILaneOffsetActionWriter laneOffsetActionWriter) {
    // Add Attributes (Parameters)
    Boolean continuous = laneOffsetActionWriter.getContinuous();
    if (continuous != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS, XmlExportHelper.toXmlStringFromBoolean(continuous));
    } else if (laneOffsetActionWriter.isContinuousParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS, laneOffsetActionWriter.getParameterFromContinuous());
    }
    ILaneOffsetActionDynamicsWriter laneOffsetActionDynamics =
        laneOffsetActionWriter.getWriterLaneOffsetActionDynamics();
    if (laneOffsetActionDynamics != null) {
      Element laneOffsetActionDynamicsElement =
          document.createElement(OscConstants.ELEMENT__LANE_OFFSET_ACTION_DYNAMICS);
      elementNode.appendChild(laneOffsetActionDynamicsElement);
      fillLaneOffsetActionDynamicsNode(
          document, laneOffsetActionDynamicsElement, laneOffsetActionDynamics);
    }

    ILaneOffsetTargetWriter laneOffsetTarget = laneOffsetActionWriter.getWriterLaneOffsetTarget();
    if (laneOffsetTarget != null) {
      Element laneOffsetTargetElement =
          document.createElement(OscConstants.ELEMENT__LANE_OFFSET_TARGET);
      elementNode.appendChild(laneOffsetTargetElement);
      fillLaneOffsetTargetNode(document, laneOffsetTargetElement, laneOffsetTarget);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LaneOffsetActionDynamics
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param laneOffsetActionDynamicsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLaneOffsetActionDynamicsNode(
      Document document,
      Element elementNode,
      ILaneOffsetActionDynamicsWriter laneOffsetActionDynamicsWriter) {
    // Add Attributes (Parameters)
    Double maxLateralAcc = laneOffsetActionDynamicsWriter.getMaxLateralAcc();
    if (maxLateralAcc != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_LATERAL_ACC,
          XmlExportHelper.toXmlStringFromDouble(maxLateralAcc));
    } else if (laneOffsetActionDynamicsWriter.isMaxLateralAccParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_LATERAL_ACC,
          laneOffsetActionDynamicsWriter.getParameterFromMaxLateralAcc());
    }
    DynamicsShape dynamicsShape = laneOffsetActionDynamicsWriter.getDynamicsShape();
    if (dynamicsShape != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE, dynamicsShape.getLiteral());
    } else if (laneOffsetActionDynamicsWriter.isDynamicsShapeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DYNAMICS_SHAPE,
          laneOffsetActionDynamicsWriter.getParameterFromDynamicsShape());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LaneOffsetTarget
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param laneOffsetTargetWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLaneOffsetTargetNode(
      Document document, Element elementNode, ILaneOffsetTargetWriter laneOffsetTargetWriter) {
    // Add Attributes (Parameters)
    IRelativeTargetLaneOffsetWriter relativeTargetLaneOffset =
        laneOffsetTargetWriter.getWriterRelativeTargetLaneOffset();
    if (relativeTargetLaneOffset != null) {
      Element relativeTargetLaneOffsetElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_TARGET_LANE_OFFSET);
      elementNode.appendChild(relativeTargetLaneOffsetElement);
      fillRelativeTargetLaneOffsetNode(
          document, relativeTargetLaneOffsetElement, relativeTargetLaneOffset);
    }

    IAbsoluteTargetLaneOffsetWriter absoluteTargetLaneOffset =
        laneOffsetTargetWriter.getWriterAbsoluteTargetLaneOffset();
    if (absoluteTargetLaneOffset != null) {
      Element absoluteTargetLaneOffsetElement =
          document.createElement(OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET);
      elementNode.appendChild(absoluteTargetLaneOffsetElement);
      fillAbsoluteTargetLaneOffsetNode(
          document, absoluteTargetLaneOffsetElement, absoluteTargetLaneOffset);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LanePosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param lanePositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLanePositionNode(
      Document document, Element elementNode, ILanePositionWriter lanePositionWriter) {
    // Add Attributes (Parameters)
    String roadId = lanePositionWriter.getRoadId();
    if (roadId != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ROAD_ID, XmlExportHelper.toXmlStringFromString(roadId));
    } else if (lanePositionWriter.isRoadIdParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ROAD_ID, lanePositionWriter.getParameterFromRoadId());
    }
    String laneId = lanePositionWriter.getLaneId();
    if (laneId != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LANE_ID, XmlExportHelper.toXmlStringFromString(laneId));
    } else if (lanePositionWriter.isLaneIdParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LANE_ID, lanePositionWriter.getParameterFromLaneId());
    }
    Double offset = lanePositionWriter.getOffset();
    if (offset != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, XmlExportHelper.toXmlStringFromDouble(offset));
    } else if (lanePositionWriter.isOffsetParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, lanePositionWriter.getParameterFromOffset());
    }
    Double s = lanePositionWriter.getS();
    if (s != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__S, XmlExportHelper.toXmlStringFromDouble(s));
    } else if (lanePositionWriter.isSParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__S, lanePositionWriter.getParameterFromS());
    }
    IOrientationWriter orientation = lanePositionWriter.getWriterOrientation();
    if (orientation != null) {
      Element orientationElement = document.createElement(OscConstants.ELEMENT__ORIENTATION);
      elementNode.appendChild(orientationElement);
      fillOrientationNode(document, orientationElement, orientation);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LateralAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param lateralActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLateralActionNode(
      Document document, Element elementNode, ILateralActionWriter lateralActionWriter) {
    // Add Attributes (Parameters)
    ILaneChangeActionWriter laneChangeAction = lateralActionWriter.getWriterLaneChangeAction();
    if (laneChangeAction != null) {
      Element laneChangeActionElement =
          document.createElement(OscConstants.ELEMENT__LANE_CHANGE_ACTION);
      elementNode.appendChild(laneChangeActionElement);
      fillLaneChangeActionNode(document, laneChangeActionElement, laneChangeAction);
    }

    ILaneOffsetActionWriter laneOffsetAction = lateralActionWriter.getWriterLaneOffsetAction();
    if (laneOffsetAction != null) {
      Element laneOffsetActionElement =
          document.createElement(OscConstants.ELEMENT__LANE_OFFSET_ACTION);
      elementNode.appendChild(laneOffsetActionElement);
      fillLaneOffsetActionNode(document, laneOffsetActionElement, laneOffsetAction);
    }

    ILateralDistanceActionWriter lateralDistanceAction =
        lateralActionWriter.getWriterLateralDistanceAction();
    if (lateralDistanceAction != null) {
      Element lateralDistanceActionElement =
          document.createElement(OscConstants.ELEMENT__LATERAL_DISTANCE_ACTION);
      elementNode.appendChild(lateralDistanceActionElement);
      fillLateralDistanceActionNode(document, lateralDistanceActionElement, lateralDistanceAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LateralDistanceAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param lateralDistanceActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLateralDistanceActionNode(
      Document document,
      Element elementNode,
      ILateralDistanceActionWriter lateralDistanceActionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = lateralDistanceActionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double distance = lateralDistanceActionWriter.getDistance();
    if (distance != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DISTANCE, XmlExportHelper.toXmlStringFromDouble(distance));
    } else if (lateralDistanceActionWriter.isDistanceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DISTANCE, lateralDistanceActionWriter.getParameterFromDistance());
    }
    Boolean freespace = lateralDistanceActionWriter.getFreespace();
    if (freespace != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE, XmlExportHelper.toXmlStringFromBoolean(freespace));
    } else if (lateralDistanceActionWriter.isFreespaceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE,
          lateralDistanceActionWriter.getParameterFromFreespace());
    }
    Boolean continuous = lateralDistanceActionWriter.getContinuous();
    if (continuous != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS, XmlExportHelper.toXmlStringFromBoolean(continuous));
    } else if (lateralDistanceActionWriter.isContinuousParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS,
          lateralDistanceActionWriter.getParameterFromContinuous());
    }
    IDynamicConstraintsWriter dynamicConstraints =
        lateralDistanceActionWriter.getWriterDynamicConstraints();
    if (dynamicConstraints != null) {
      Element dynamicConstraintsElement =
          document.createElement(OscConstants.ELEMENT__DYNAMIC_CONSTRAINTS);
      elementNode.appendChild(dynamicConstraintsElement);
      fillDynamicConstraintsNode(document, dynamicConstraintsElement, dynamicConstraints);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LongitudinalAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param longitudinalActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLongitudinalActionNode(
      Document document, Element elementNode, ILongitudinalActionWriter longitudinalActionWriter) {
    // Add Attributes (Parameters)
    ISpeedActionWriter speedAction = longitudinalActionWriter.getWriterSpeedAction();
    if (speedAction != null) {
      Element speedActionElement = document.createElement(OscConstants.ELEMENT__SPEED_ACTION);
      elementNode.appendChild(speedActionElement);
      fillSpeedActionNode(document, speedActionElement, speedAction);
    }

    ILongitudinalDistanceActionWriter longitudinalDistanceAction =
        longitudinalActionWriter.getWriterLongitudinalDistanceAction();
    if (longitudinalDistanceAction != null) {
      Element longitudinalDistanceActionElement =
          document.createElement(OscConstants.ELEMENT__LONGITUDINAL_DISTANCE_ACTION);
      elementNode.appendChild(longitudinalDistanceActionElement);
      fillLongitudinalDistanceActionNode(
          document, longitudinalDistanceActionElement, longitudinalDistanceAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type LongitudinalDistanceAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param longitudinalDistanceActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillLongitudinalDistanceActionNode(
      Document document,
      Element elementNode,
      ILongitudinalDistanceActionWriter longitudinalDistanceActionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = longitudinalDistanceActionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double distance = longitudinalDistanceActionWriter.getDistance();
    if (distance != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DISTANCE, XmlExportHelper.toXmlStringFromDouble(distance));
    } else if (longitudinalDistanceActionWriter.isDistanceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DISTANCE,
          longitudinalDistanceActionWriter.getParameterFromDistance());
    }
    Double timeGap = longitudinalDistanceActionWriter.getTimeGap();
    if (timeGap != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TIME_GAP, XmlExportHelper.toXmlStringFromDouble(timeGap));
    } else if (longitudinalDistanceActionWriter.isTimeGapParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TIME_GAP,
          longitudinalDistanceActionWriter.getParameterFromTimeGap());
    }
    Boolean freespace = longitudinalDistanceActionWriter.getFreespace();
    if (freespace != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE, XmlExportHelper.toXmlStringFromBoolean(freespace));
    } else if (longitudinalDistanceActionWriter.isFreespaceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE,
          longitudinalDistanceActionWriter.getParameterFromFreespace());
    }
    Boolean continuous = longitudinalDistanceActionWriter.getContinuous();
    if (continuous != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS, XmlExportHelper.toXmlStringFromBoolean(continuous));
    } else if (longitudinalDistanceActionWriter.isContinuousParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS,
          longitudinalDistanceActionWriter.getParameterFromContinuous());
    }
    IDynamicConstraintsWriter dynamicConstraints =
        longitudinalDistanceActionWriter.getWriterDynamicConstraints();
    if (dynamicConstraints != null) {
      Element dynamicConstraintsElement =
          document.createElement(OscConstants.ELEMENT__DYNAMIC_CONSTRAINTS);
      elementNode.appendChild(dynamicConstraintsElement);
      fillDynamicConstraintsNode(document, dynamicConstraintsElement, dynamicConstraints);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Maneuver
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param maneuverWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillManeuverNode(
      Document document, Element elementNode, IManeuverWriter maneuverWriter) {
    // Add Attributes (Parameters)
    String name = maneuverWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (maneuverWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, maneuverWriter.getParameterFromName());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        maneuverWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    List<IEventWriter> events = maneuverWriter.getWriterEvents();
    if (events != null) {
      for (IEventWriter eventsWriterItem : events) {
        Element eventsElement = document.createElement(OscConstants.ELEMENT__EVENT);
        elementNode.appendChild(eventsElement);
        fillEventNode(document, eventsElement, eventsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ManeuverCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param maneuverCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillManeuverCatalogLocationNode(
      Document document,
      Element elementNode,
      IManeuverCatalogLocationWriter maneuverCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = maneuverCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ManeuverGroup
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param maneuverGroupWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillManeuverGroupNode(
      Document document, Element elementNode, IManeuverGroupWriter maneuverGroupWriter) {
    // Add Attributes (Parameters)
    Long maximumExecutionCount = maneuverGroupWriter.getMaximumExecutionCount();
    if (maximumExecutionCount != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT,
          XmlExportHelper.toXmlStringFromUnsignedInt(maximumExecutionCount));
    } else if (maneuverGroupWriter.isMaximumExecutionCountParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT,
          maneuverGroupWriter.getParameterFromMaximumExecutionCount());
    }
    String name = maneuverGroupWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (maneuverGroupWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, maneuverGroupWriter.getParameterFromName());
    }
    IActorsWriter actors = maneuverGroupWriter.getWriterActors();
    if (actors != null) {
      Element actorsElement = document.createElement(OscConstants.ELEMENT__ACTORS);
      elementNode.appendChild(actorsElement);
      fillActorsNode(document, actorsElement, actors);
    }

    List<ICatalogReferenceWriter> catalogReferences =
        maneuverGroupWriter.getWriterCatalogReferences();
    if (catalogReferences != null) {
      for (ICatalogReferenceWriter catalogReferencesWriterItem : catalogReferences) {
        Element catalogReferencesElement =
            document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
        elementNode.appendChild(catalogReferencesElement);
        fillCatalogReferenceNode(document, catalogReferencesElement, catalogReferencesWriterItem);
      }
    }
    List<IManeuverWriter> maneuvers = maneuverGroupWriter.getWriterManeuvers();
    if (maneuvers != null) {
      for (IManeuverWriter maneuversWriterItem : maneuvers) {
        Element maneuversElement = document.createElement(OscConstants.ELEMENT__MANEUVER);
        elementNode.appendChild(maneuversElement);
        fillManeuverNode(document, maneuversElement, maneuversWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type MiscObject
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param miscObjectWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillMiscObjectNode(
      Document document, Element elementNode, IMiscObjectWriter miscObjectWriter) {
    // Add Attributes (Parameters)
    MiscObjectCategory miscObjectCategory = miscObjectWriter.getMiscObjectCategory();
    if (miscObjectCategory != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MISC_OBJECT_CATEGORY, miscObjectCategory.getLiteral());
    } else if (miscObjectWriter.isMiscObjectCategoryParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MISC_OBJECT_CATEGORY,
          miscObjectWriter.getParameterFromMiscObjectCategory());
    }
    Double mass = miscObjectWriter.getMass();
    if (mass != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MASS, XmlExportHelper.toXmlStringFromDouble(mass));
    } else if (miscObjectWriter.isMassParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MASS, miscObjectWriter.getParameterFromMass());
    }
    String name = miscObjectWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (miscObjectWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, miscObjectWriter.getParameterFromName());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        miscObjectWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    IBoundingBoxWriter boundingBox = miscObjectWriter.getWriterBoundingBox();
    if (boundingBox != null) {
      Element boundingBoxElement = document.createElement(OscConstants.ELEMENT__BOUNDING_BOX);
      elementNode.appendChild(boundingBoxElement);
      fillBoundingBoxNode(document, boundingBoxElement, boundingBox);
    }

    IPropertiesWriter properties = miscObjectWriter.getWriterProperties();
    if (properties != null) {
      Element propertiesElement = document.createElement(OscConstants.ELEMENT__PROPERTIES);
      elementNode.appendChild(propertiesElement);
      fillPropertiesNode(document, propertiesElement, properties);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type MiscObjectCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param miscObjectCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillMiscObjectCatalogLocationNode(
      Document document,
      Element elementNode,
      IMiscObjectCatalogLocationWriter miscObjectCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = miscObjectCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ModifyRule
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param modifyRuleWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillModifyRuleNode(
      Document document, Element elementNode, IModifyRuleWriter modifyRuleWriter) {
    // Add Attributes (Parameters)
    IParameterAddValueRuleWriter addValue = modifyRuleWriter.getWriterAddValue();
    if (addValue != null) {
      Element addValueElement = document.createElement(OscConstants.ELEMENT__ADD_VALUE);
      elementNode.appendChild(addValueElement);
      fillParameterAddValueRuleNode(document, addValueElement, addValue);
    }

    IParameterMultiplyByValueRuleWriter multiplyByValue =
        modifyRuleWriter.getWriterMultiplyByValue();
    if (multiplyByValue != null) {
      Element multiplyByValueElement =
          document.createElement(OscConstants.ELEMENT__MULTIPLY_BY_VALUE);
      elementNode.appendChild(multiplyByValueElement);
      fillParameterMultiplyByValueRuleNode(document, multiplyByValueElement, multiplyByValue);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type None
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param noneWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillNoneNode(Document document, Element elementNode, INoneWriter noneWriter) {
    // Add Attributes (Parameters)
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Nurbs
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param nurbsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillNurbsNode(Document document, Element elementNode, INurbsWriter nurbsWriter) {
    // Add Attributes (Parameters)
    Long order = nurbsWriter.getOrder();
    if (order != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ORDER, XmlExportHelper.toXmlStringFromUnsignedInt(order));
    } else if (nurbsWriter.isOrderParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__ORDER, nurbsWriter.getParameterFromOrder());
    }
    List<IControlPointWriter> controlPoints = nurbsWriter.getWriterControlPoints();
    if (controlPoints != null) {
      for (IControlPointWriter controlPointsWriterItem : controlPoints) {
        Element controlPointsElement = document.createElement(OscConstants.ELEMENT__CONTROL_POINT);
        elementNode.appendChild(controlPointsElement);
        fillControlPointNode(document, controlPointsElement, controlPointsWriterItem);
      }
    }
    List<IKnotWriter> knots = nurbsWriter.getWriterKnots();
    if (knots != null) {
      for (IKnotWriter knotsWriterItem : knots) {
        Element knotsElement = document.createElement(OscConstants.ELEMENT__KNOT);
        elementNode.appendChild(knotsElement);
        fillKnotNode(document, knotsElement, knotsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ObjectController
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param objectControllerWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillObjectControllerNode(
      Document document, Element elementNode, IObjectControllerWriter objectControllerWriter) {
    // Add Attributes (Parameters)
    ICatalogReferenceWriter catalogReference = objectControllerWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    IControllerWriter controller = objectControllerWriter.getWriterController();
    if (controller != null) {
      Element controllerElement = document.createElement(OscConstants.ELEMENT__CONTROLLER);
      elementNode.appendChild(controllerElement);
      fillControllerNode(document, controllerElement, controller);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OffroadCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param offroadConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOffroadConditionNode(
      Document document, Element elementNode, IOffroadConditionWriter offroadConditionWriter) {
    // Add Attributes (Parameters)
    Double duration = offroadConditionWriter.getDuration();
    if (duration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, XmlExportHelper.toXmlStringFromDouble(duration));
    } else if (offroadConditionWriter.isDurationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, offroadConditionWriter.getParameterFromDuration());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OpenScenario
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param openScenarioWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOpenScenarioNode(
      Document document, Element elementNode, IOpenScenarioWriter openScenarioWriter) {
    // Add Attributes (Parameters)
    IFileHeaderWriter fileHeader = openScenarioWriter.getWriterFileHeader();
    if (fileHeader != null) {
      Element fileHeaderElement = document.createElement(OscConstants.ELEMENT__FILE_HEADER);
      elementNode.appendChild(fileHeaderElement);
      fillFileHeaderNode(document, fileHeaderElement, fileHeader);
    }

    IOpenScenarioCategoryWriter openScenarioCategory =
        openScenarioWriter.getWriterOpenScenarioCategory();
    if (openScenarioCategory != null) {
      Element openScenarioCategoryElement =
          document.createElement(OscConstants.ELEMENT__OPEN_SCENARIO_CATEGORY);
      elementNode.appendChild(openScenarioCategoryElement);
      fillOpenScenarioCategoryNode(document, openScenarioCategoryElement, openScenarioCategory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OpenScenarioCategory
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param openScenarioCategoryWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOpenScenarioCategoryNode(
      Document document,
      Element elementNode,
      IOpenScenarioCategoryWriter openScenarioCategoryWriter) {
    // Add Attributes (Parameters)
    IScenarioDefinitionWriter scenarioDefinition =
        openScenarioCategoryWriter.getWriterScenarioDefinition();
    if (scenarioDefinition != null) {
      Element scenarioDefinitionElement =
          document.createElement(OscConstants.ELEMENT__SCENARIO_DEFINITION);
      elementNode.appendChild(scenarioDefinitionElement);
      fillScenarioDefinitionNode(document, scenarioDefinitionElement, scenarioDefinition);
    }

    ICatalogDefinitionWriter catalogDefinition =
        openScenarioCategoryWriter.getWriterCatalogDefinition();
    if (catalogDefinition != null) {
      Element catalogDefinitionElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_DEFINITION);
      elementNode.appendChild(catalogDefinitionElement);
      fillCatalogDefinitionNode(document, catalogDefinitionElement, catalogDefinition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Orientation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param orientationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOrientationNode(
      Document document, Element elementNode, IOrientationWriter orientationWriter) {
    // Add Attributes (Parameters)
    ReferenceContext type = orientationWriter.getType();
    if (type != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__TYPE, type.getLiteral());
    } else if (orientationWriter.isTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TYPE, orientationWriter.getParameterFromType());
    }
    Double h = orientationWriter.getH();
    if (h != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__H, XmlExportHelper.toXmlStringFromDouble(h));
    } else if (orientationWriter.isHParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__H, orientationWriter.getParameterFromH());
    }
    Double p = orientationWriter.getP();
    if (p != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__P, XmlExportHelper.toXmlStringFromDouble(p));
    } else if (orientationWriter.isPParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__P, orientationWriter.getParameterFromP());
    }
    Double r = orientationWriter.getR();
    if (r != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__R, XmlExportHelper.toXmlStringFromDouble(r));
    } else if (orientationWriter.isRParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__R, orientationWriter.getParameterFromR());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OverrideBrakeAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param overrideBrakeActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOverrideBrakeActionNode(
      Document document,
      Element elementNode,
      IOverrideBrakeActionWriter overrideBrakeActionWriter) {
    // Add Attributes (Parameters)
    Double value = overrideBrakeActionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (overrideBrakeActionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, overrideBrakeActionWriter.getParameterFromValue());
    }
    Boolean active = overrideBrakeActionWriter.getActive();
    if (active != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, XmlExportHelper.toXmlStringFromBoolean(active));
    } else if (overrideBrakeActionWriter.isActiveParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, overrideBrakeActionWriter.getParameterFromActive());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OverrideClutchAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param overrideClutchActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOverrideClutchActionNode(
      Document document,
      Element elementNode,
      IOverrideClutchActionWriter overrideClutchActionWriter) {
    // Add Attributes (Parameters)
    Double value = overrideClutchActionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (overrideClutchActionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, overrideClutchActionWriter.getParameterFromValue());
    }
    Boolean active = overrideClutchActionWriter.getActive();
    if (active != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, XmlExportHelper.toXmlStringFromBoolean(active));
    } else if (overrideClutchActionWriter.isActiveParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, overrideClutchActionWriter.getParameterFromActive());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OverrideControllerValueAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param overrideControllerValueActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOverrideControllerValueActionNode(
      Document document,
      Element elementNode,
      IOverrideControllerValueActionWriter overrideControllerValueActionWriter) {
    // Add Attributes (Parameters)
    IOverrideThrottleActionWriter throttle =
        overrideControllerValueActionWriter.getWriterThrottle();
    if (throttle != null) {
      Element throttleElement = document.createElement(OscConstants.ELEMENT__THROTTLE);
      elementNode.appendChild(throttleElement);
      fillOverrideThrottleActionNode(document, throttleElement, throttle);
    }

    IOverrideBrakeActionWriter brake = overrideControllerValueActionWriter.getWriterBrake();
    if (brake != null) {
      Element brakeElement = document.createElement(OscConstants.ELEMENT__BRAKE);
      elementNode.appendChild(brakeElement);
      fillOverrideBrakeActionNode(document, brakeElement, brake);
    }

    IOverrideClutchActionWriter clutch = overrideControllerValueActionWriter.getWriterClutch();
    if (clutch != null) {
      Element clutchElement = document.createElement(OscConstants.ELEMENT__CLUTCH);
      elementNode.appendChild(clutchElement);
      fillOverrideClutchActionNode(document, clutchElement, clutch);
    }

    IOverrideParkingBrakeActionWriter parkingBrake =
        overrideControllerValueActionWriter.getWriterParkingBrake();
    if (parkingBrake != null) {
      Element parkingBrakeElement = document.createElement(OscConstants.ELEMENT__PARKING_BRAKE);
      elementNode.appendChild(parkingBrakeElement);
      fillOverrideParkingBrakeActionNode(document, parkingBrakeElement, parkingBrake);
    }

    IOverrideSteeringWheelActionWriter steeringWheel =
        overrideControllerValueActionWriter.getWriterSteeringWheel();
    if (steeringWheel != null) {
      Element steeringWheelElement = document.createElement(OscConstants.ELEMENT__STEERING_WHEEL);
      elementNode.appendChild(steeringWheelElement);
      fillOverrideSteeringWheelActionNode(document, steeringWheelElement, steeringWheel);
    }

    IOverrideGearActionWriter gear = overrideControllerValueActionWriter.getWriterGear();
    if (gear != null) {
      Element gearElement = document.createElement(OscConstants.ELEMENT__GEAR);
      elementNode.appendChild(gearElement);
      fillOverrideGearActionNode(document, gearElement, gear);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OverrideGearAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param overrideGearActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOverrideGearActionNode(
      Document document, Element elementNode, IOverrideGearActionWriter overrideGearActionWriter) {
    // Add Attributes (Parameters)
    Double number = overrideGearActionWriter.getNumber();
    if (number != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NUMBER, XmlExportHelper.toXmlStringFromDouble(number));
    } else if (overrideGearActionWriter.isNumberParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NUMBER, overrideGearActionWriter.getParameterFromNumber());
    }
    Boolean active = overrideGearActionWriter.getActive();
    if (active != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, XmlExportHelper.toXmlStringFromBoolean(active));
    } else if (overrideGearActionWriter.isActiveParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, overrideGearActionWriter.getParameterFromActive());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OverrideParkingBrakeAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param overrideParkingBrakeActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOverrideParkingBrakeActionNode(
      Document document,
      Element elementNode,
      IOverrideParkingBrakeActionWriter overrideParkingBrakeActionWriter) {
    // Add Attributes (Parameters)
    Double value = overrideParkingBrakeActionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (overrideParkingBrakeActionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, overrideParkingBrakeActionWriter.getParameterFromValue());
    }
    Boolean active = overrideParkingBrakeActionWriter.getActive();
    if (active != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, XmlExportHelper.toXmlStringFromBoolean(active));
    } else if (overrideParkingBrakeActionWriter.isActiveParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE,
          overrideParkingBrakeActionWriter.getParameterFromActive());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OverrideSteeringWheelAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param overrideSteeringWheelActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOverrideSteeringWheelActionNode(
      Document document,
      Element elementNode,
      IOverrideSteeringWheelActionWriter overrideSteeringWheelActionWriter) {
    // Add Attributes (Parameters)
    Double value = overrideSteeringWheelActionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (overrideSteeringWheelActionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, overrideSteeringWheelActionWriter.getParameterFromValue());
    }
    Boolean active = overrideSteeringWheelActionWriter.getActive();
    if (active != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, XmlExportHelper.toXmlStringFromBoolean(active));
    } else if (overrideSteeringWheelActionWriter.isActiveParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE,
          overrideSteeringWheelActionWriter.getParameterFromActive());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type OverrideThrottleAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param overrideThrottleActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillOverrideThrottleActionNode(
      Document document,
      Element elementNode,
      IOverrideThrottleActionWriter overrideThrottleActionWriter) {
    // Add Attributes (Parameters)
    Double value = overrideThrottleActionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (overrideThrottleActionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, overrideThrottleActionWriter.getParameterFromValue());
    }
    Boolean active = overrideThrottleActionWriter.getActive();
    if (active != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, XmlExportHelper.toXmlStringFromBoolean(active));
    } else if (overrideThrottleActionWriter.isActiveParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ACTIVE, overrideThrottleActionWriter.getParameterFromActive());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterActionNode(
      Document document, Element elementNode, IParameterActionWriter parameterActionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IParameterDeclaration> parameterRef = parameterActionWriter.getParameterRef();
    if (parameterRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PARAMETER_REF,
          XmlExportHelper.toXmlStringFromString(parameterRef.getNameRef()));
    }
    IParameterSetActionWriter setAction = parameterActionWriter.getWriterSetAction();
    if (setAction != null) {
      Element setActionElement = document.createElement(OscConstants.ELEMENT__SET_ACTION);
      elementNode.appendChild(setActionElement);
      fillParameterSetActionNode(document, setActionElement, setAction);
    }

    IParameterModifyActionWriter modifyAction = parameterActionWriter.getWriterModifyAction();
    if (modifyAction != null) {
      Element modifyActionElement = document.createElement(OscConstants.ELEMENT__MODIFY_ACTION);
      elementNode.appendChild(modifyActionElement);
      fillParameterModifyActionNode(document, modifyActionElement, modifyAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterAddValueRule
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterAddValueRuleWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterAddValueRuleNode(
      Document document,
      Element elementNode,
      IParameterAddValueRuleWriter parameterAddValueRuleWriter) {
    // Add Attributes (Parameters)
    Double value = parameterAddValueRuleWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (parameterAddValueRuleWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, parameterAddValueRuleWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterAssignment
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterAssignmentWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterAssignmentNode(
      Document document,
      Element elementNode,
      IParameterAssignmentWriter parameterAssignmentWriter) {
    // Add Attributes (Parameters)
    INamedReference<IParameterDeclaration> parameterRef =
        parameterAssignmentWriter.getParameterRef();
    if (parameterRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PARAMETER_REF,
          XmlExportHelper.toXmlStringFromString(parameterRef.getNameRef()));
    }
    String value = parameterAssignmentWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromString(value));
    } else if (parameterAssignmentWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, parameterAssignmentWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterConditionNode(
      Document document, Element elementNode, IParameterConditionWriter parameterConditionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IParameterDeclaration> parameterRef =
        parameterConditionWriter.getParameterRef();
    if (parameterRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PARAMETER_REF,
          XmlExportHelper.toXmlStringFromString(parameterRef.getNameRef()));
    }
    String value = parameterConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromString(value));
    } else if (parameterConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, parameterConditionWriter.getParameterFromValue());
    }
    Rule rule = parameterConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (parameterConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, parameterConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterDeclaration
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterDeclarationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterDeclarationNode(
      Document document,
      Element elementNode,
      IParameterDeclarationWriter parameterDeclarationWriter) {
    // Add Attributes (Parameters)
    String name = parameterDeclarationWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    }
    ParameterType parameterType = parameterDeclarationWriter.getParameterType();
    if (parameterType != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__PARAMETER_TYPE, parameterType.getLiteral());
    } else if (parameterDeclarationWriter.isParameterTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PARAMETER_TYPE,
          parameterDeclarationWriter.getParameterFromParameterType());
    }
    String value = parameterDeclarationWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromString(value));
    } else if (parameterDeclarationWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, parameterDeclarationWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterModifyAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterModifyActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterModifyActionNode(
      Document document,
      Element elementNode,
      IParameterModifyActionWriter parameterModifyActionWriter) {
    // Add Attributes (Parameters)
    IModifyRuleWriter rule = parameterModifyActionWriter.getWriterRule();
    if (rule != null) {
      Element ruleElement = document.createElement(OscConstants.ELEMENT__RULE);
      elementNode.appendChild(ruleElement);
      fillModifyRuleNode(document, ruleElement, rule);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterMultiplyByValueRule
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterMultiplyByValueRuleWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterMultiplyByValueRuleNode(
      Document document,
      Element elementNode,
      IParameterMultiplyByValueRuleWriter parameterMultiplyByValueRuleWriter) {
    // Add Attributes (Parameters)
    Double value = parameterMultiplyByValueRuleWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (parameterMultiplyByValueRuleWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE,
          parameterMultiplyByValueRuleWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ParameterSetAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param parameterSetActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillParameterSetActionNode(
      Document document, Element elementNode, IParameterSetActionWriter parameterSetActionWriter) {
    // Add Attributes (Parameters)
    String value = parameterSetActionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromString(value));
    } else if (parameterSetActionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, parameterSetActionWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Pedestrian
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param pedestrianWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPedestrianNode(
      Document document, Element elementNode, IPedestrianWriter pedestrianWriter) {
    // Add Attributes (Parameters)
    String model = pedestrianWriter.getModel();
    if (model != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MODEL, XmlExportHelper.toXmlStringFromString(model));
    } else if (pedestrianWriter.isModelParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MODEL, pedestrianWriter.getParameterFromModel());
    }
    Double mass = pedestrianWriter.getMass();
    if (mass != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MASS, XmlExportHelper.toXmlStringFromDouble(mass));
    } else if (pedestrianWriter.isMassParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MASS, pedestrianWriter.getParameterFromMass());
    }
    String name = pedestrianWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (pedestrianWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, pedestrianWriter.getParameterFromName());
    }
    PedestrianCategory pedestrianCategory = pedestrianWriter.getPedestrianCategory();
    if (pedestrianCategory != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PEDESTRIAN_CATEGORY, pedestrianCategory.getLiteral());
    } else if (pedestrianWriter.isPedestrianCategoryParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PEDESTRIAN_CATEGORY,
          pedestrianWriter.getParameterFromPedestrianCategory());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        pedestrianWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    IBoundingBoxWriter boundingBox = pedestrianWriter.getWriterBoundingBox();
    if (boundingBox != null) {
      Element boundingBoxElement = document.createElement(OscConstants.ELEMENT__BOUNDING_BOX);
      elementNode.appendChild(boundingBoxElement);
      fillBoundingBoxNode(document, boundingBoxElement, boundingBox);
    }

    IPropertiesWriter properties = pedestrianWriter.getWriterProperties();
    if (properties != null) {
      Element propertiesElement = document.createElement(OscConstants.ELEMENT__PROPERTIES);
      elementNode.appendChild(propertiesElement);
      fillPropertiesNode(document, propertiesElement, properties);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type PedestrianCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param pedestrianCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPedestrianCatalogLocationNode(
      Document document,
      Element elementNode,
      IPedestrianCatalogLocationWriter pedestrianCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = pedestrianCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Performance
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param performanceWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPerformanceNode(
      Document document, Element elementNode, IPerformanceWriter performanceWriter) {
    // Add Attributes (Parameters)
    Double maxSpeed = performanceWriter.getMaxSpeed();
    if (maxSpeed != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_SPEED, XmlExportHelper.toXmlStringFromDouble(maxSpeed));
    } else if (performanceWriter.isMaxSpeedParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_SPEED, performanceWriter.getParameterFromMaxSpeed());
    }
    Double maxAcceleration = performanceWriter.getMaxAcceleration();
    if (maxAcceleration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_ACCELERATION,
          XmlExportHelper.toXmlStringFromDouble(maxAcceleration));
    } else if (performanceWriter.isMaxAccelerationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_ACCELERATION,
          performanceWriter.getParameterFromMaxAcceleration());
    }
    Double maxDeceleration = performanceWriter.getMaxDeceleration();
    if (maxDeceleration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_DECELERATION,
          XmlExportHelper.toXmlStringFromDouble(maxDeceleration));
    } else if (performanceWriter.isMaxDecelerationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MAX_DECELERATION,
          performanceWriter.getParameterFromMaxDeceleration());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Phase
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param phaseWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPhaseNode(Document document, Element elementNode, IPhaseWriter phaseWriter) {
    // Add Attributes (Parameters)
    String name = phaseWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (phaseWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, phaseWriter.getParameterFromName());
    }
    Double duration = phaseWriter.getDuration();
    if (duration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, XmlExportHelper.toXmlStringFromDouble(duration));
    } else if (phaseWriter.isDurationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, phaseWriter.getParameterFromDuration());
    }
    List<ITrafficSignalStateWriter> trafficSignalStates =
        phaseWriter.getWriterTrafficSignalStates();
    if (trafficSignalStates != null) {
      for (ITrafficSignalStateWriter trafficSignalStatesWriterItem : trafficSignalStates) {
        Element trafficSignalStatesElement =
            document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNAL_STATE);
        elementNode.appendChild(trafficSignalStatesElement);
        fillTrafficSignalStateNode(
            document, trafficSignalStatesElement, trafficSignalStatesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Polyline
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param polylineWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPolylineNode(
      Document document, Element elementNode, IPolylineWriter polylineWriter) {
    // Add Attributes (Parameters)
    List<IVertexWriter> vertices = polylineWriter.getWriterVertices();
    if (vertices != null) {
      for (IVertexWriter verticesWriterItem : vertices) {
        Element verticesElement = document.createElement(OscConstants.ELEMENT__VERTEX);
        elementNode.appendChild(verticesElement);
        fillVertexNode(document, verticesElement, verticesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Position
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param positionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPositionNode(
      Document document, Element elementNode, IPositionWriter positionWriter) {
    // Add Attributes (Parameters)
    IWorldPositionWriter worldPosition = positionWriter.getWriterWorldPosition();
    if (worldPosition != null) {
      Element worldPositionElement = document.createElement(OscConstants.ELEMENT__WORLD_POSITION);
      elementNode.appendChild(worldPositionElement);
      fillWorldPositionNode(document, worldPositionElement, worldPosition);
    }

    IRelativeWorldPositionWriter relativeWorldPosition =
        positionWriter.getWriterRelativeWorldPosition();
    if (relativeWorldPosition != null) {
      Element relativeWorldPositionElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_WORLD_POSITION);
      elementNode.appendChild(relativeWorldPositionElement);
      fillRelativeWorldPositionNode(document, relativeWorldPositionElement, relativeWorldPosition);
    }

    IRelativeObjectPositionWriter relativeObjectPosition =
        positionWriter.getWriterRelativeObjectPosition();
    if (relativeObjectPosition != null) {
      Element relativeObjectPositionElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_OBJECT_POSITION);
      elementNode.appendChild(relativeObjectPositionElement);
      fillRelativeObjectPositionNode(
          document, relativeObjectPositionElement, relativeObjectPosition);
    }

    IRoadPositionWriter roadPosition = positionWriter.getWriterRoadPosition();
    if (roadPosition != null) {
      Element roadPositionElement = document.createElement(OscConstants.ELEMENT__ROAD_POSITION);
      elementNode.appendChild(roadPositionElement);
      fillRoadPositionNode(document, roadPositionElement, roadPosition);
    }

    IRelativeRoadPositionWriter relativeRoadPosition =
        positionWriter.getWriterRelativeRoadPosition();
    if (relativeRoadPosition != null) {
      Element relativeRoadPositionElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_ROAD_POSITION);
      elementNode.appendChild(relativeRoadPositionElement);
      fillRelativeRoadPositionNode(document, relativeRoadPositionElement, relativeRoadPosition);
    }

    ILanePositionWriter lanePosition = positionWriter.getWriterLanePosition();
    if (lanePosition != null) {
      Element lanePositionElement = document.createElement(OscConstants.ELEMENT__LANE_POSITION);
      elementNode.appendChild(lanePositionElement);
      fillLanePositionNode(document, lanePositionElement, lanePosition);
    }

    IRelativeLanePositionWriter relativeLanePosition =
        positionWriter.getWriterRelativeLanePosition();
    if (relativeLanePosition != null) {
      Element relativeLanePositionElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_LANE_POSITION);
      elementNode.appendChild(relativeLanePositionElement);
      fillRelativeLanePositionNode(document, relativeLanePositionElement, relativeLanePosition);
    }

    IRoutePositionWriter routePosition = positionWriter.getWriterRoutePosition();
    if (routePosition != null) {
      Element routePositionElement = document.createElement(OscConstants.ELEMENT__ROUTE_POSITION);
      elementNode.appendChild(routePositionElement);
      fillRoutePositionNode(document, routePositionElement, routePosition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type PositionInLaneCoordinates
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param positionInLaneCoordinatesWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPositionInLaneCoordinatesNode(
      Document document,
      Element elementNode,
      IPositionInLaneCoordinatesWriter positionInLaneCoordinatesWriter) {
    // Add Attributes (Parameters)
    Double pathS = positionInLaneCoordinatesWriter.getPathS();
    if (pathS != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PATH_S, XmlExportHelper.toXmlStringFromDouble(pathS));
    } else if (positionInLaneCoordinatesWriter.isPathSParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PATH_S, positionInLaneCoordinatesWriter.getParameterFromPathS());
    }
    String laneId = positionInLaneCoordinatesWriter.getLaneId();
    if (laneId != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LANE_ID, XmlExportHelper.toXmlStringFromString(laneId));
    } else if (positionInLaneCoordinatesWriter.isLaneIdParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LANE_ID,
          positionInLaneCoordinatesWriter.getParameterFromLaneId());
    }
    Double laneOffset = positionInLaneCoordinatesWriter.getLaneOffset();
    if (laneOffset != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LANE_OFFSET, XmlExportHelper.toXmlStringFromDouble(laneOffset));
    } else if (positionInLaneCoordinatesWriter.isLaneOffsetParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__LANE_OFFSET,
          positionInLaneCoordinatesWriter.getParameterFromLaneOffset());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type PositionInRoadCoordinates
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param positionInRoadCoordinatesWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPositionInRoadCoordinatesNode(
      Document document,
      Element elementNode,
      IPositionInRoadCoordinatesWriter positionInRoadCoordinatesWriter) {
    // Add Attributes (Parameters)
    Double pathS = positionInRoadCoordinatesWriter.getPathS();
    if (pathS != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PATH_S, XmlExportHelper.toXmlStringFromDouble(pathS));
    } else if (positionInRoadCoordinatesWriter.isPathSParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PATH_S, positionInRoadCoordinatesWriter.getParameterFromPathS());
    }
    Double t = positionInRoadCoordinatesWriter.getT();
    if (t != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__T, XmlExportHelper.toXmlStringFromDouble(t));
    } else if (positionInRoadCoordinatesWriter.isTParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__T, positionInRoadCoordinatesWriter.getParameterFromT());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type PositionOfCurrentEntity
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param positionOfCurrentEntityWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPositionOfCurrentEntityNode(
      Document document,
      Element elementNode,
      IPositionOfCurrentEntityWriter positionOfCurrentEntityWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = positionOfCurrentEntityWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Precipitation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param precipitationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPrecipitationNode(
      Document document, Element elementNode, IPrecipitationWriter precipitationWriter) {
    // Add Attributes (Parameters)
    PrecipitationType precipitationType = precipitationWriter.getPrecipitationType();
    if (precipitationType != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PRECIPITATION_TYPE, precipitationType.getLiteral());
    } else if (precipitationWriter.isPrecipitationTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PRECIPITATION_TYPE,
          precipitationWriter.getParameterFromPrecipitationType());
    }
    Double intensity = precipitationWriter.getIntensity();
    if (intensity != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__INTENSITY, XmlExportHelper.toXmlStringFromDouble(intensity));
    } else if (precipitationWriter.isIntensityParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__INTENSITY, precipitationWriter.getParameterFromIntensity());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Private
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param privateWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPrivateNode(
      Document document, Element elementNode, IPrivateWriter privateWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = privateWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    List<IPrivateActionWriter> privateActions = privateWriter.getWriterPrivateActions();
    if (privateActions != null) {
      for (IPrivateActionWriter privateActionsWriterItem : privateActions) {
        Element privateActionsElement =
            document.createElement(OscConstants.ELEMENT__PRIVATE_ACTION);
        elementNode.appendChild(privateActionsElement);
        fillPrivateActionNode(document, privateActionsElement, privateActionsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type PrivateAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param privateActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPrivateActionNode(
      Document document, Element elementNode, IPrivateActionWriter privateActionWriter) {
    // Add Attributes (Parameters)
    ILongitudinalActionWriter longitudinalAction =
        privateActionWriter.getWriterLongitudinalAction();
    if (longitudinalAction != null) {
      Element longitudinalActionElement =
          document.createElement(OscConstants.ELEMENT__LONGITUDINAL_ACTION);
      elementNode.appendChild(longitudinalActionElement);
      fillLongitudinalActionNode(document, longitudinalActionElement, longitudinalAction);
    }

    ILateralActionWriter lateralAction = privateActionWriter.getWriterLateralAction();
    if (lateralAction != null) {
      Element lateralActionElement = document.createElement(OscConstants.ELEMENT__LATERAL_ACTION);
      elementNode.appendChild(lateralActionElement);
      fillLateralActionNode(document, lateralActionElement, lateralAction);
    }

    IVisibilityActionWriter visibilityAction = privateActionWriter.getWriterVisibilityAction();
    if (visibilityAction != null) {
      Element visibilityActionElement =
          document.createElement(OscConstants.ELEMENT__VISIBILITY_ACTION);
      elementNode.appendChild(visibilityActionElement);
      fillVisibilityActionNode(document, visibilityActionElement, visibilityAction);
    }

    ISynchronizeActionWriter synchronizeAction = privateActionWriter.getWriterSynchronizeAction();
    if (synchronizeAction != null) {
      Element synchronizeActionElement =
          document.createElement(OscConstants.ELEMENT__SYNCHRONIZE_ACTION);
      elementNode.appendChild(synchronizeActionElement);
      fillSynchronizeActionNode(document, synchronizeActionElement, synchronizeAction);
    }

    IActivateControllerActionWriter activateControllerAction =
        privateActionWriter.getWriterActivateControllerAction();
    if (activateControllerAction != null) {
      Element activateControllerActionElement =
          document.createElement(OscConstants.ELEMENT__ACTIVATE_CONTROLLER_ACTION);
      elementNode.appendChild(activateControllerActionElement);
      fillActivateControllerActionNode(
          document, activateControllerActionElement, activateControllerAction);
    }

    IControllerActionWriter controllerAction = privateActionWriter.getWriterControllerAction();
    if (controllerAction != null) {
      Element controllerActionElement =
          document.createElement(OscConstants.ELEMENT__CONTROLLER_ACTION);
      elementNode.appendChild(controllerActionElement);
      fillControllerActionNode(document, controllerActionElement, controllerAction);
    }

    ITeleportActionWriter teleportAction = privateActionWriter.getWriterTeleportAction();
    if (teleportAction != null) {
      Element teleportActionElement = document.createElement(OscConstants.ELEMENT__TELEPORT_ACTION);
      elementNode.appendChild(teleportActionElement);
      fillTeleportActionNode(document, teleportActionElement, teleportAction);
    }

    IRoutingActionWriter routingAction = privateActionWriter.getWriterRoutingAction();
    if (routingAction != null) {
      Element routingActionElement = document.createElement(OscConstants.ELEMENT__ROUTING_ACTION);
      elementNode.appendChild(routingActionElement);
      fillRoutingActionNode(document, routingActionElement, routingAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Properties
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param propertiesWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPropertiesNode(
      Document document, Element elementNode, IPropertiesWriter propertiesWriter) {
    // Add Attributes (Parameters)
    List<IPropertyWriter> properties = propertiesWriter.getWriterProperties();
    if (properties != null) {
      for (IPropertyWriter propertiesWriterItem : properties) {
        Element propertiesElement = document.createElement(OscConstants.ELEMENT__PROPERTY);
        elementNode.appendChild(propertiesElement);
        fillPropertyNode(document, propertiesElement, propertiesWriterItem);
      }
    }
    List<IFileWriter> files = propertiesWriter.getWriterFiles();
    if (files != null) {
      for (IFileWriter filesWriterItem : files) {
        Element filesElement = document.createElement(OscConstants.ELEMENT__FILE);
        elementNode.appendChild(filesElement);
        fillFileNode(document, filesElement, filesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Property
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param propertyWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillPropertyNode(
      Document document, Element elementNode, IPropertyWriter propertyWriter) {
    // Add Attributes (Parameters)
    String name = propertyWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (propertyWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, propertyWriter.getParameterFromName());
    }
    String value = propertyWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromString(value));
    } else if (propertyWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, propertyWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ReachPositionCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param reachPositionConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillReachPositionConditionNode(
      Document document,
      Element elementNode,
      IReachPositionConditionWriter reachPositionConditionWriter) {
    // Add Attributes (Parameters)
    Double tolerance = reachPositionConditionWriter.getTolerance();
    if (tolerance != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TOLERANCE, XmlExportHelper.toXmlStringFromDouble(tolerance));
    } else if (reachPositionConditionWriter.isToleranceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TOLERANCE,
          reachPositionConditionWriter.getParameterFromTolerance());
    }
    IPositionWriter position = reachPositionConditionWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeDistanceCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeDistanceConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeDistanceConditionNode(
      Document document,
      Element elementNode,
      IRelativeDistanceConditionWriter relativeDistanceConditionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeDistanceConditionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    RelativeDistanceType relativeDistanceType =
        relativeDistanceConditionWriter.getRelativeDistanceType();
    if (relativeDistanceType != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RELATIVE_DISTANCE_TYPE, relativeDistanceType.getLiteral());
    } else if (relativeDistanceConditionWriter.isRelativeDistanceTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RELATIVE_DISTANCE_TYPE,
          relativeDistanceConditionWriter.getParameterFromRelativeDistanceType());
    }
    Double value = relativeDistanceConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (relativeDistanceConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, relativeDistanceConditionWriter.getParameterFromValue());
    }
    Boolean freespace = relativeDistanceConditionWriter.getFreespace();
    if (freespace != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE, XmlExportHelper.toXmlStringFromBoolean(freespace));
    } else if (relativeDistanceConditionWriter.isFreespaceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE,
          relativeDistanceConditionWriter.getParameterFromFreespace());
    }
    Rule rule = relativeDistanceConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (relativeDistanceConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, relativeDistanceConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeLanePosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeLanePositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeLanePositionNode(
      Document document,
      Element elementNode,
      IRelativeLanePositionWriter relativeLanePositionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeLanePositionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Integer dLane = relativeLanePositionWriter.getDLane();
    if (dLane != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__D_LANE, XmlExportHelper.toXmlStringFromInt(dLane));
    } else if (relativeLanePositionWriter.isDLaneParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__D_LANE, relativeLanePositionWriter.getParameterFromDLane());
    }
    Double ds = relativeLanePositionWriter.getDs();
    if (ds != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DS, XmlExportHelper.toXmlStringFromDouble(ds));
    } else if (relativeLanePositionWriter.isDsParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DS, relativeLanePositionWriter.getParameterFromDs());
    }
    Double offset = relativeLanePositionWriter.getOffset();
    if (offset != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, XmlExportHelper.toXmlStringFromDouble(offset));
    } else if (relativeLanePositionWriter.isOffsetParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, relativeLanePositionWriter.getParameterFromOffset());
    }
    IOrientationWriter orientation = relativeLanePositionWriter.getWriterOrientation();
    if (orientation != null) {
      Element orientationElement = document.createElement(OscConstants.ELEMENT__ORIENTATION);
      elementNode.appendChild(orientationElement);
      fillOrientationNode(document, orientationElement, orientation);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeObjectPosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeObjectPositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeObjectPositionNode(
      Document document,
      Element elementNode,
      IRelativeObjectPositionWriter relativeObjectPositionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeObjectPositionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double dx = relativeObjectPositionWriter.getDx();
    if (dx != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DX, XmlExportHelper.toXmlStringFromDouble(dx));
    } else if (relativeObjectPositionWriter.isDxParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DX, relativeObjectPositionWriter.getParameterFromDx());
    }
    Double dy = relativeObjectPositionWriter.getDy();
    if (dy != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DY, XmlExportHelper.toXmlStringFromDouble(dy));
    } else if (relativeObjectPositionWriter.isDyParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DY, relativeObjectPositionWriter.getParameterFromDy());
    }
    Double dz = relativeObjectPositionWriter.getDz();
    if (dz != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DZ, XmlExportHelper.toXmlStringFromDouble(dz));
    } else if (relativeObjectPositionWriter.isDzParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DZ, relativeObjectPositionWriter.getParameterFromDz());
    }
    IOrientationWriter orientation = relativeObjectPositionWriter.getWriterOrientation();
    if (orientation != null) {
      Element orientationElement = document.createElement(OscConstants.ELEMENT__ORIENTATION);
      elementNode.appendChild(orientationElement);
      fillOrientationNode(document, orientationElement, orientation);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeRoadPosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeRoadPositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeRoadPositionNode(
      Document document,
      Element elementNode,
      IRelativeRoadPositionWriter relativeRoadPositionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeRoadPositionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double ds = relativeRoadPositionWriter.getDs();
    if (ds != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DS, XmlExportHelper.toXmlStringFromDouble(ds));
    } else if (relativeRoadPositionWriter.isDsParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DS, relativeRoadPositionWriter.getParameterFromDs());
    }
    Double dt = relativeRoadPositionWriter.getDt();
    if (dt != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DT, XmlExportHelper.toXmlStringFromDouble(dt));
    } else if (relativeRoadPositionWriter.isDtParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DT, relativeRoadPositionWriter.getParameterFromDt());
    }
    IOrientationWriter orientation = relativeRoadPositionWriter.getWriterOrientation();
    if (orientation != null) {
      Element orientationElement = document.createElement(OscConstants.ELEMENT__ORIENTATION);
      elementNode.appendChild(orientationElement);
      fillOrientationNode(document, orientationElement, orientation);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeSpeedCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeSpeedConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeSpeedConditionNode(
      Document document,
      Element elementNode,
      IRelativeSpeedConditionWriter relativeSpeedConditionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeSpeedConditionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double value = relativeSpeedConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (relativeSpeedConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, relativeSpeedConditionWriter.getParameterFromValue());
    }
    Rule rule = relativeSpeedConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (relativeSpeedConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, relativeSpeedConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeSpeedToMaster
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeSpeedToMasterWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeSpeedToMasterNode(
      Document document,
      Element elementNode,
      IRelativeSpeedToMasterWriter relativeSpeedToMasterWriter) {
    // Add Attributes (Parameters)
    Double value = relativeSpeedToMasterWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (relativeSpeedToMasterWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, relativeSpeedToMasterWriter.getParameterFromValue());
    }
    SpeedTargetValueType speedTargetValueType =
        relativeSpeedToMasterWriter.getSpeedTargetValueType();
    if (speedTargetValueType != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, speedTargetValueType.getLiteral());
    } else if (relativeSpeedToMasterWriter.isSpeedTargetValueTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SPEED_TARGET_VALUE_TYPE,
          relativeSpeedToMasterWriter.getParameterFromSpeedTargetValueType());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeTargetLane
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeTargetLaneWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeTargetLaneNode(
      Document document, Element elementNode, IRelativeTargetLaneWriter relativeTargetLaneWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeTargetLaneWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Integer value = relativeTargetLaneWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromInt(value));
    } else if (relativeTargetLaneWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, relativeTargetLaneWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeTargetLaneOffset
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeTargetLaneOffsetWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeTargetLaneOffsetNode(
      Document document,
      Element elementNode,
      IRelativeTargetLaneOffsetWriter relativeTargetLaneOffsetWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeTargetLaneOffsetWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double value = relativeTargetLaneOffsetWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (relativeTargetLaneOffsetWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, relativeTargetLaneOffsetWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeTargetSpeed
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeTargetSpeedWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeTargetSpeedNode(
      Document document,
      Element elementNode,
      IRelativeTargetSpeedWriter relativeTargetSpeedWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeTargetSpeedWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double value = relativeTargetSpeedWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (relativeTargetSpeedWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, relativeTargetSpeedWriter.getParameterFromValue());
    }
    SpeedTargetValueType speedTargetValueType = relativeTargetSpeedWriter.getSpeedTargetValueType();
    if (speedTargetValueType != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, speedTargetValueType.getLiteral());
    } else if (relativeTargetSpeedWriter.isSpeedTargetValueTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SPEED_TARGET_VALUE_TYPE,
          relativeTargetSpeedWriter.getParameterFromSpeedTargetValueType());
    }
    Boolean continuous = relativeTargetSpeedWriter.getContinuous();
    if (continuous != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS, XmlExportHelper.toXmlStringFromBoolean(continuous));
    } else if (relativeTargetSpeedWriter.isContinuousParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CONTINUOUS,
          relativeTargetSpeedWriter.getParameterFromContinuous());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RelativeWorldPosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param relativeWorldPositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRelativeWorldPositionNode(
      Document document,
      Element elementNode,
      IRelativeWorldPositionWriter relativeWorldPositionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = relativeWorldPositionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double dx = relativeWorldPositionWriter.getDx();
    if (dx != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DX, XmlExportHelper.toXmlStringFromDouble(dx));
    } else if (relativeWorldPositionWriter.isDxParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DX, relativeWorldPositionWriter.getParameterFromDx());
    }
    Double dy = relativeWorldPositionWriter.getDy();
    if (dy != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DY, XmlExportHelper.toXmlStringFromDouble(dy));
    } else if (relativeWorldPositionWriter.isDyParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DY, relativeWorldPositionWriter.getParameterFromDy());
    }
    Double dz = relativeWorldPositionWriter.getDz();
    if (dz != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DZ, XmlExportHelper.toXmlStringFromDouble(dz));
    } else if (relativeWorldPositionWriter.isDzParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DZ, relativeWorldPositionWriter.getParameterFromDz());
    }
    IOrientationWriter orientation = relativeWorldPositionWriter.getWriterOrientation();
    if (orientation != null) {
      Element orientationElement = document.createElement(OscConstants.ELEMENT__ORIENTATION);
      elementNode.appendChild(orientationElement);
      fillOrientationNode(document, orientationElement, orientation);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RoadCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param roadConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRoadConditionNode(
      Document document, Element elementNode, IRoadConditionWriter roadConditionWriter) {
    // Add Attributes (Parameters)
    Double frictionScaleFactor = roadConditionWriter.getFrictionScaleFactor();
    if (frictionScaleFactor != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR,
          XmlExportHelper.toXmlStringFromDouble(frictionScaleFactor));
    } else if (roadConditionWriter.isFrictionScaleFactorParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR,
          roadConditionWriter.getParameterFromFrictionScaleFactor());
    }
    IPropertiesWriter properties = roadConditionWriter.getWriterProperties();
    if (properties != null) {
      Element propertiesElement = document.createElement(OscConstants.ELEMENT__PROPERTIES);
      elementNode.appendChild(propertiesElement);
      fillPropertiesNode(document, propertiesElement, properties);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RoadNetwork
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param roadNetworkWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRoadNetworkNode(
      Document document, Element elementNode, IRoadNetworkWriter roadNetworkWriter) {
    // Add Attributes (Parameters)
    IFileWriter logicFile = roadNetworkWriter.getWriterLogicFile();
    if (logicFile != null) {
      Element logicFileElement = document.createElement(OscConstants.ELEMENT__LOGIC_FILE);
      elementNode.appendChild(logicFileElement);
      fillFileNode(document, logicFileElement, logicFile);
    }

    IFileWriter sceneGraphFile = roadNetworkWriter.getWriterSceneGraphFile();
    if (sceneGraphFile != null) {
      Element sceneGraphFileElement =
          document.createElement(OscConstants.ELEMENT__SCENE_GRAPH_FILE);
      elementNode.appendChild(sceneGraphFileElement);
      fillFileNode(document, sceneGraphFileElement, sceneGraphFile);
    }

    List<ITrafficSignalControllerWriter> trafficSignals =
        roadNetworkWriter.getWriterTrafficSignals();
    if (trafficSignals != null) {
      Element trafficSignalsWrapperElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER);
      elementNode.appendChild(trafficSignalsWrapperElement);
      for (ITrafficSignalControllerWriter trafficSignalsWriterItem : trafficSignals) {
        Element trafficSignalsElement =
            document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNALS);
        trafficSignalsWrapperElement.appendChild(trafficSignalsElement);
        fillTrafficSignalControllerNode(document, trafficSignalsElement, trafficSignalsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RoadPosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param roadPositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRoadPositionNode(
      Document document, Element elementNode, IRoadPositionWriter roadPositionWriter) {
    // Add Attributes (Parameters)
    String roadId = roadPositionWriter.getRoadId();
    if (roadId != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ROAD_ID, XmlExportHelper.toXmlStringFromString(roadId));
    } else if (roadPositionWriter.isRoadIdParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ROAD_ID, roadPositionWriter.getParameterFromRoadId());
    }
    Double s = roadPositionWriter.getS();
    if (s != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__S, XmlExportHelper.toXmlStringFromDouble(s));
    } else if (roadPositionWriter.isSParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__S, roadPositionWriter.getParameterFromS());
    }
    Double t = roadPositionWriter.getT();
    if (t != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__T, XmlExportHelper.toXmlStringFromDouble(t));
    } else if (roadPositionWriter.isTParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__T, roadPositionWriter.getParameterFromT());
    }
    IOrientationWriter orientation = roadPositionWriter.getWriterOrientation();
    if (orientation != null) {
      Element orientationElement = document.createElement(OscConstants.ELEMENT__ORIENTATION);
      elementNode.appendChild(orientationElement);
      fillOrientationNode(document, orientationElement, orientation);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Route
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param routeWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRouteNode(Document document, Element elementNode, IRouteWriter routeWriter) {
    // Add Attributes (Parameters)
    String name = routeWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (routeWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, routeWriter.getParameterFromName());
    }
    Boolean closed = routeWriter.getClosed();
    if (closed != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CLOSED, XmlExportHelper.toXmlStringFromBoolean(closed));
    } else if (routeWriter.isClosedParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CLOSED, routeWriter.getParameterFromClosed());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        routeWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    List<IWaypointWriter> waypoints = routeWriter.getWriterWaypoints();
    if (waypoints != null) {
      for (IWaypointWriter waypointsWriterItem : waypoints) {
        Element waypointsElement = document.createElement(OscConstants.ELEMENT__WAYPOINT);
        elementNode.appendChild(waypointsElement);
        fillWaypointNode(document, waypointsElement, waypointsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RouteCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param routeCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRouteCatalogLocationNode(
      Document document,
      Element elementNode,
      IRouteCatalogLocationWriter routeCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = routeCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RoutePosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param routePositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRoutePositionNode(
      Document document, Element elementNode, IRoutePositionWriter routePositionWriter) {
    // Add Attributes (Parameters)
    IRouteRefWriter routeRef = routePositionWriter.getWriterRouteRef();
    if (routeRef != null) {
      Element routeRefElement = document.createElement(OscConstants.ELEMENT__ROUTE_REF);
      elementNode.appendChild(routeRefElement);
      fillRouteRefNode(document, routeRefElement, routeRef);
    }

    IOrientationWriter orientation = routePositionWriter.getWriterOrientation();
    if (orientation != null) {
      Element orientationElement = document.createElement(OscConstants.ELEMENT__ORIENTATION);
      elementNode.appendChild(orientationElement);
      fillOrientationNode(document, orientationElement, orientation);
    }

    IInRoutePositionWriter inRoutePosition = routePositionWriter.getWriterInRoutePosition();
    if (inRoutePosition != null) {
      Element inRoutePositionElement =
          document.createElement(OscConstants.ELEMENT__IN_ROUTE_POSITION);
      elementNode.appendChild(inRoutePositionElement);
      fillInRoutePositionNode(document, inRoutePositionElement, inRoutePosition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RouteRef
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param routeRefWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRouteRefNode(
      Document document, Element elementNode, IRouteRefWriter routeRefWriter) {
    // Add Attributes (Parameters)
    IRouteWriter route = routeRefWriter.getWriterRoute();
    if (route != null) {
      Element routeElement = document.createElement(OscConstants.ELEMENT__ROUTE);
      elementNode.appendChild(routeElement);
      fillRouteNode(document, routeElement, route);
    }

    ICatalogReferenceWriter catalogReference = routeRefWriter.getWriterCatalogReference();
    if (catalogReference != null) {
      Element catalogReferenceElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_REFERENCE);
      elementNode.appendChild(catalogReferenceElement);
      fillCatalogReferenceNode(document, catalogReferenceElement, catalogReference);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type RoutingAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param routingActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillRoutingActionNode(
      Document document, Element elementNode, IRoutingActionWriter routingActionWriter) {
    // Add Attributes (Parameters)
    IAssignRouteActionWriter assignRouteAction = routingActionWriter.getWriterAssignRouteAction();
    if (assignRouteAction != null) {
      Element assignRouteActionElement =
          document.createElement(OscConstants.ELEMENT__ASSIGN_ROUTE_ACTION);
      elementNode.appendChild(assignRouteActionElement);
      fillAssignRouteActionNode(document, assignRouteActionElement, assignRouteAction);
    }

    IFollowTrajectoryActionWriter followTrajectoryAction =
        routingActionWriter.getWriterFollowTrajectoryAction();
    if (followTrajectoryAction != null) {
      Element followTrajectoryActionElement =
          document.createElement(OscConstants.ELEMENT__FOLLOW_TRAJECTORY_ACTION);
      elementNode.appendChild(followTrajectoryActionElement);
      fillFollowTrajectoryActionNode(
          document, followTrajectoryActionElement, followTrajectoryAction);
    }

    IAcquirePositionActionWriter acquirePositionAction =
        routingActionWriter.getWriterAcquirePositionAction();
    if (acquirePositionAction != null) {
      Element acquirePositionActionElement =
          document.createElement(OscConstants.ELEMENT__ACQUIRE_POSITION_ACTION);
      elementNode.appendChild(acquirePositionActionElement);
      fillAcquirePositionActionNode(document, acquirePositionActionElement, acquirePositionAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ScenarioDefinition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param scenarioDefinitionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillScenarioDefinitionNode(
      Document document, Element elementNode, IScenarioDefinitionWriter scenarioDefinitionWriter) {
    // Add Attributes (Parameters)

    List<IParameterDeclarationWriter> parameterDeclarations =
        scenarioDefinitionWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    ICatalogLocationsWriter catalogLocations = scenarioDefinitionWriter.getWriterCatalogLocations();
    if (catalogLocations != null) {
      Element catalogLocationsElement =
          document.createElement(OscConstants.ELEMENT__CATALOG_LOCATIONS);
      elementNode.appendChild(catalogLocationsElement);
      fillCatalogLocationsNode(document, catalogLocationsElement, catalogLocations);
    }

    IRoadNetworkWriter roadNetwork = scenarioDefinitionWriter.getWriterRoadNetwork();
    if (roadNetwork != null) {
      Element roadNetworkElement = document.createElement(OscConstants.ELEMENT__ROAD_NETWORK);
      elementNode.appendChild(roadNetworkElement);
      fillRoadNetworkNode(document, roadNetworkElement, roadNetwork);
    }

    IEntitiesWriter entities = scenarioDefinitionWriter.getWriterEntities();
    if (entities != null) {
      Element entitiesElement = document.createElement(OscConstants.ELEMENT__ENTITIES);
      elementNode.appendChild(entitiesElement);
      fillEntitiesNode(document, entitiesElement, entities);
    }

    IStoryboardWriter storyboard = scenarioDefinitionWriter.getWriterStoryboard();
    if (storyboard != null) {
      Element storyboardElement = document.createElement(OscConstants.ELEMENT__STORYBOARD);
      elementNode.appendChild(storyboardElement);
      fillStoryboardNode(document, storyboardElement, storyboard);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type ScenarioObject
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param scenarioObjectWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillScenarioObjectNode(
      Document document, Element elementNode, IScenarioObjectWriter scenarioObjectWriter) {
    // Add Attributes (Parameters)
    String name = scenarioObjectWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (scenarioObjectWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, scenarioObjectWriter.getParameterFromName());
    }
    IEntityObjectWriter entityObject = scenarioObjectWriter.getWriterEntityObject();
    if (entityObject != null) {
      Element entityObjectElement = document.createElement(OscConstants.ELEMENT__ENTITY_OBJECT);
      elementNode.appendChild(entityObjectElement);
      fillEntityObjectNode(document, entityObjectElement, entityObject);
    }

    IObjectControllerWriter objectController = scenarioObjectWriter.getWriterObjectController();
    if (objectController != null) {
      Element objectControllerElement =
          document.createElement(OscConstants.ELEMENT__OBJECT_CONTROLLER);
      elementNode.appendChild(objectControllerElement);
      fillObjectControllerNode(document, objectControllerElement, objectController);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type SelectedEntities
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param selectedEntitiesWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillSelectedEntitiesNode(
      Document document, Element elementNode, ISelectedEntitiesWriter selectedEntitiesWriter) {
    // Add Attributes (Parameters)
    List<IEntityRefWriter> entityRef = selectedEntitiesWriter.getWriterEntityRef();
    if (entityRef != null) {
      for (IEntityRefWriter entityRefWriterItem : entityRef) {
        Element entityRefElement = document.createElement(OscConstants.ELEMENT__ENTITY_REF);
        elementNode.appendChild(entityRefElement);
        fillEntityRefNode(document, entityRefElement, entityRefWriterItem);
      }
    }
    List<IByTypeWriter> byType = selectedEntitiesWriter.getWriterByType();
    if (byType != null) {
      for (IByTypeWriter byTypeWriterItem : byType) {
        Element byTypeElement = document.createElement(OscConstants.ELEMENT__BY_TYPE);
        elementNode.appendChild(byTypeElement);
        fillByTypeNode(document, byTypeElement, byTypeWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Shape
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param shapeWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillShapeNode(Document document, Element elementNode, IShapeWriter shapeWriter) {
    // Add Attributes (Parameters)
    IPolylineWriter polyline = shapeWriter.getWriterPolyline();
    if (polyline != null) {
      Element polylineElement = document.createElement(OscConstants.ELEMENT__POLYLINE);
      elementNode.appendChild(polylineElement);
      fillPolylineNode(document, polylineElement, polyline);
    }

    IClothoidWriter clothoid = shapeWriter.getWriterClothoid();
    if (clothoid != null) {
      Element clothoidElement = document.createElement(OscConstants.ELEMENT__CLOTHOID);
      elementNode.appendChild(clothoidElement);
      fillClothoidNode(document, clothoidElement, clothoid);
    }

    INurbsWriter nurbs = shapeWriter.getWriterNurbs();
    if (nurbs != null) {
      Element nurbsElement = document.createElement(OscConstants.ELEMENT__NURBS);
      elementNode.appendChild(nurbsElement);
      fillNurbsNode(document, nurbsElement, nurbs);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type SimulationTimeCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param simulationTimeConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillSimulationTimeConditionNode(
      Document document,
      Element elementNode,
      ISimulationTimeConditionWriter simulationTimeConditionWriter) {
    // Add Attributes (Parameters)
    Double value = simulationTimeConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (simulationTimeConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, simulationTimeConditionWriter.getParameterFromValue());
    }
    Rule rule = simulationTimeConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (simulationTimeConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, simulationTimeConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type SpeedAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param speedActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillSpeedActionNode(
      Document document, Element elementNode, ISpeedActionWriter speedActionWriter) {
    // Add Attributes (Parameters)
    ITransitionDynamicsWriter speedActionDynamics =
        speedActionWriter.getWriterSpeedActionDynamics();
    if (speedActionDynamics != null) {
      Element speedActionDynamicsElement =
          document.createElement(OscConstants.ELEMENT__SPEED_ACTION_DYNAMICS);
      elementNode.appendChild(speedActionDynamicsElement);
      fillTransitionDynamicsNode(document, speedActionDynamicsElement, speedActionDynamics);
    }

    ISpeedActionTargetWriter speedActionTarget = speedActionWriter.getWriterSpeedActionTarget();
    if (speedActionTarget != null) {
      Element speedActionTargetElement =
          document.createElement(OscConstants.ELEMENT__SPEED_ACTION_TARGET);
      elementNode.appendChild(speedActionTargetElement);
      fillSpeedActionTargetNode(document, speedActionTargetElement, speedActionTarget);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type SpeedActionTarget
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param speedActionTargetWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillSpeedActionTargetNode(
      Document document, Element elementNode, ISpeedActionTargetWriter speedActionTargetWriter) {
    // Add Attributes (Parameters)
    IRelativeTargetSpeedWriter relativeTargetSpeed =
        speedActionTargetWriter.getWriterRelativeTargetSpeed();
    if (relativeTargetSpeed != null) {
      Element relativeTargetSpeedElement =
          document.createElement(OscConstants.ELEMENT__RELATIVE_TARGET_SPEED);
      elementNode.appendChild(relativeTargetSpeedElement);
      fillRelativeTargetSpeedNode(document, relativeTargetSpeedElement, relativeTargetSpeed);
    }

    IAbsoluteTargetSpeedWriter absoluteTargetSpeed =
        speedActionTargetWriter.getWriterAbsoluteTargetSpeed();
    if (absoluteTargetSpeed != null) {
      Element absoluteTargetSpeedElement =
          document.createElement(OscConstants.ELEMENT__ABSOLUTE_TARGET_SPEED);
      elementNode.appendChild(absoluteTargetSpeedElement);
      fillAbsoluteTargetSpeedNode(document, absoluteTargetSpeedElement, absoluteTargetSpeed);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type SpeedCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param speedConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillSpeedConditionNode(
      Document document, Element elementNode, ISpeedConditionWriter speedConditionWriter) {
    // Add Attributes (Parameters)
    Double value = speedConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (speedConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, speedConditionWriter.getParameterFromValue());
    }
    Rule rule = speedConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (speedConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, speedConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type StandStillCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param standStillConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillStandStillConditionNode(
      Document document,
      Element elementNode,
      IStandStillConditionWriter standStillConditionWriter) {
    // Add Attributes (Parameters)
    Double duration = standStillConditionWriter.getDuration();
    if (duration != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, XmlExportHelper.toXmlStringFromDouble(duration));
    } else if (standStillConditionWriter.isDurationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DURATION, standStillConditionWriter.getParameterFromDuration());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Story
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param storyWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillStoryNode(Document document, Element elementNode, IStoryWriter storyWriter) {
    // Add Attributes (Parameters)
    String name = storyWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (storyWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, storyWriter.getParameterFromName());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        storyWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    List<IActWriter> acts = storyWriter.getWriterActs();
    if (acts != null) {
      for (IActWriter actsWriterItem : acts) {
        Element actsElement = document.createElement(OscConstants.ELEMENT__ACT);
        elementNode.appendChild(actsElement);
        fillActNode(document, actsElement, actsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Storyboard
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param storyboardWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillStoryboardNode(
      Document document, Element elementNode, IStoryboardWriter storyboardWriter) {
    // Add Attributes (Parameters)
    IInitWriter init = storyboardWriter.getWriterInit();
    if (init != null) {
      Element initElement = document.createElement(OscConstants.ELEMENT__INIT);
      elementNode.appendChild(initElement);
      fillInitNode(document, initElement, init);
    }

    List<IStoryWriter> stories = storyboardWriter.getWriterStories();
    if (stories != null) {
      for (IStoryWriter storiesWriterItem : stories) {
        Element storiesElement = document.createElement(OscConstants.ELEMENT__STORY);
        elementNode.appendChild(storiesElement);
        fillStoryNode(document, storiesElement, storiesWriterItem);
      }
    }
    ITriggerWriter stopTrigger = storyboardWriter.getWriterStopTrigger();
    if (stopTrigger != null) {
      Element stopTriggerElement = document.createElement(OscConstants.ELEMENT__STOP_TRIGGER);
      elementNode.appendChild(stopTriggerElement);
      fillTriggerNode(document, stopTriggerElement, stopTrigger);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type StoryboardElementStateCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param storyboardElementStateConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillStoryboardElementStateConditionNode(
      Document document,
      Element elementNode,
      IStoryboardElementStateConditionWriter storyboardElementStateConditionWriter) {
    // Add Attributes (Parameters)
    StoryboardElementType storyboardElementType =
        storyboardElementStateConditionWriter.getStoryboardElementType();
    if (storyboardElementType != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, storyboardElementType.getLiteral());
    } else if (storyboardElementStateConditionWriter.isStoryboardElementTypeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE,
          storyboardElementStateConditionWriter.getParameterFromStoryboardElementType());
    }
    INamedReference<IStoryboardElement> storyboardElementRef =
        storyboardElementStateConditionWriter.getStoryboardElementRef();
    if (storyboardElementRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF,
          XmlExportHelper.toXmlStringFromString(storyboardElementRef.getNameRef()));
    }
    StoryboardElementState state = storyboardElementStateConditionWriter.getState();
    if (state != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__STATE, state.getLiteral());
    } else if (storyboardElementStateConditionWriter.isStateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STATE,
          storyboardElementStateConditionWriter.getParameterFromState());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Sun
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param sunWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillSunNode(Document document, Element elementNode, ISunWriter sunWriter) {
    // Add Attributes (Parameters)
    Double intensity = sunWriter.getIntensity();
    if (intensity != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__INTENSITY, XmlExportHelper.toXmlStringFromDouble(intensity));
    } else if (sunWriter.isIntensityParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__INTENSITY, sunWriter.getParameterFromIntensity());
    }
    Double azimuth = sunWriter.getAzimuth();
    if (azimuth != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__AZIMUTH, XmlExportHelper.toXmlStringFromDouble(azimuth));
    } else if (sunWriter.isAzimuthParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__AZIMUTH, sunWriter.getParameterFromAzimuth());
    }
    Double elevation = sunWriter.getElevation();
    if (elevation != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ELEVATION, XmlExportHelper.toXmlStringFromDouble(elevation));
    } else if (sunWriter.isElevationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ELEVATION, sunWriter.getParameterFromElevation());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type SynchronizeAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param synchronizeActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillSynchronizeActionNode(
      Document document, Element elementNode, ISynchronizeActionWriter synchronizeActionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> masterEntityRef = synchronizeActionWriter.getMasterEntityRef();
    if (masterEntityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__MASTER_ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(masterEntityRef.getNameRef()));
    }
    IPositionWriter targetPositionMaster = synchronizeActionWriter.getWriterTargetPositionMaster();
    if (targetPositionMaster != null) {
      Element targetPositionMasterElement =
          document.createElement(OscConstants.ELEMENT__TARGET_POSITION_MASTER);
      elementNode.appendChild(targetPositionMasterElement);
      fillPositionNode(document, targetPositionMasterElement, targetPositionMaster);
    }

    IPositionWriter targetPosition = synchronizeActionWriter.getWriterTargetPosition();
    if (targetPosition != null) {
      Element targetPositionElement = document.createElement(OscConstants.ELEMENT__TARGET_POSITION);
      elementNode.appendChild(targetPositionElement);
      fillPositionNode(document, targetPositionElement, targetPosition);
    }

    IFinalSpeedWriter finalSpeed = synchronizeActionWriter.getWriterFinalSpeed();
    if (finalSpeed != null) {
      Element finalSpeedElement = document.createElement(OscConstants.ELEMENT__FINAL_SPEED);
      elementNode.appendChild(finalSpeedElement);
      fillFinalSpeedNode(document, finalSpeedElement, finalSpeed);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TeleportAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param teleportActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTeleportActionNode(
      Document document, Element elementNode, ITeleportActionWriter teleportActionWriter) {
    // Add Attributes (Parameters)
    IPositionWriter position = teleportActionWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TimeHeadwayCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param timeHeadwayConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTimeHeadwayConditionNode(
      Document document,
      Element elementNode,
      ITimeHeadwayConditionWriter timeHeadwayConditionWriter) {
    // Add Attributes (Parameters)
    INamedReference<IEntity> entityRef = timeHeadwayConditionWriter.getEntityRef();
    if (entityRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ENTITY_REF,
          XmlExportHelper.toXmlStringFromString(entityRef.getNameRef()));
    }
    Double value = timeHeadwayConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (timeHeadwayConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, timeHeadwayConditionWriter.getParameterFromValue());
    }
    Boolean freespace = timeHeadwayConditionWriter.getFreespace();
    if (freespace != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE, XmlExportHelper.toXmlStringFromBoolean(freespace));
    } else if (timeHeadwayConditionWriter.isFreespaceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE,
          timeHeadwayConditionWriter.getParameterFromFreespace());
    }
    Boolean alongRoute = timeHeadwayConditionWriter.getAlongRoute();
    if (alongRoute != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ALONG_ROUTE, XmlExportHelper.toXmlStringFromBoolean(alongRoute));
    } else if (timeHeadwayConditionWriter.isAlongRouteParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ALONG_ROUTE,
          timeHeadwayConditionWriter.getParameterFromAlongRoute());
    }
    Rule rule = timeHeadwayConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (timeHeadwayConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, timeHeadwayConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TimeOfDay
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param timeOfDayWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTimeOfDayNode(
      Document document, Element elementNode, ITimeOfDayWriter timeOfDayWriter) {
    // Add Attributes (Parameters)
    Boolean animation = timeOfDayWriter.getAnimation();
    if (animation != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ANIMATION, XmlExportHelper.toXmlStringFromBoolean(animation));
    } else if (timeOfDayWriter.isAnimationParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ANIMATION, timeOfDayWriter.getParameterFromAnimation());
    }
    java.util.Date dateTime = timeOfDayWriter.getDateTime();
    if (dateTime != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DATE_TIME, XmlExportHelper.toXmlStringFromDateTime(dateTime));
    } else if (timeOfDayWriter.isDateTimeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DATE_TIME, timeOfDayWriter.getParameterFromDateTime());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TimeOfDayCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param timeOfDayConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTimeOfDayConditionNode(
      Document document, Element elementNode, ITimeOfDayConditionWriter timeOfDayConditionWriter) {
    // Add Attributes (Parameters)
    Rule rule = timeOfDayConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (timeOfDayConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, timeOfDayConditionWriter.getParameterFromRule());
    }
    java.util.Date dateTime = timeOfDayConditionWriter.getDateTime();
    if (dateTime != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DATE_TIME, XmlExportHelper.toXmlStringFromDateTime(dateTime));
    } else if (timeOfDayConditionWriter.isDateTimeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DATE_TIME, timeOfDayConditionWriter.getParameterFromDateTime());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TimeReference
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param timeReferenceWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTimeReferenceNode(
      Document document, Element elementNode, ITimeReferenceWriter timeReferenceWriter) {
    // Add Attributes (Parameters)
    INoneWriter none = timeReferenceWriter.getWriterNone();
    if (none != null) {
      Element noneElement = document.createElement(OscConstants.ELEMENT__NONE);
      elementNode.appendChild(noneElement);
      fillNoneNode(document, noneElement, none);
    }

    ITimingWriter timing = timeReferenceWriter.getWriterTiming();
    if (timing != null) {
      Element timingElement = document.createElement(OscConstants.ELEMENT__TIMING);
      elementNode.appendChild(timingElement);
      fillTimingNode(document, timingElement, timing);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TimeToCollisionCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param timeToCollisionConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTimeToCollisionConditionNode(
      Document document,
      Element elementNode,
      ITimeToCollisionConditionWriter timeToCollisionConditionWriter) {
    // Add Attributes (Parameters)
    Double value = timeToCollisionConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (timeToCollisionConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, timeToCollisionConditionWriter.getParameterFromValue());
    }
    Boolean freespace = timeToCollisionConditionWriter.getFreespace();
    if (freespace != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE, XmlExportHelper.toXmlStringFromBoolean(freespace));
    } else if (timeToCollisionConditionWriter.isFreespaceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FREESPACE,
          timeToCollisionConditionWriter.getParameterFromFreespace());
    }
    Boolean alongRoute = timeToCollisionConditionWriter.getAlongRoute();
    if (alongRoute != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ALONG_ROUTE, XmlExportHelper.toXmlStringFromBoolean(alongRoute));
    } else if (timeToCollisionConditionWriter.isAlongRouteParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ALONG_ROUTE,
          timeToCollisionConditionWriter.getParameterFromAlongRoute());
    }
    Rule rule = timeToCollisionConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (timeToCollisionConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, timeToCollisionConditionWriter.getParameterFromRule());
    }
    ITimeToCollisionConditionTargetWriter timeToCollisionConditionTarget =
        timeToCollisionConditionWriter.getWriterTimeToCollisionConditionTarget();
    if (timeToCollisionConditionTarget != null) {
      Element timeToCollisionConditionTargetElement =
          document.createElement(OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET);
      elementNode.appendChild(timeToCollisionConditionTargetElement);
      fillTimeToCollisionConditionTargetNode(
          document, timeToCollisionConditionTargetElement, timeToCollisionConditionTarget);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TimeToCollisionConditionTarget
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param timeToCollisionConditionTargetWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTimeToCollisionConditionTargetNode(
      Document document,
      Element elementNode,
      ITimeToCollisionConditionTargetWriter timeToCollisionConditionTargetWriter) {
    // Add Attributes (Parameters)
    IPositionWriter position = timeToCollisionConditionTargetWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    IEntityRefWriter entityRef = timeToCollisionConditionTargetWriter.getWriterEntityRef();
    if (entityRef != null) {
      Element entityRefElement = document.createElement(OscConstants.ELEMENT__ENTITY_REF);
      elementNode.appendChild(entityRefElement);
      fillEntityRefNode(document, entityRefElement, entityRef);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Timing
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param timingWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTimingNode(Document document, Element elementNode, ITimingWriter timingWriter) {
    // Add Attributes (Parameters)
    ReferenceContext domainAbsoluteRelative = timingWriter.getDomainAbsoluteRelative();
    if (domainAbsoluteRelative != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, domainAbsoluteRelative.getLiteral());
    } else if (timingWriter.isDomainAbsoluteRelativeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE,
          timingWriter.getParameterFromDomainAbsoluteRelative());
    }
    Double scale = timingWriter.getScale();
    if (scale != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SCALE, XmlExportHelper.toXmlStringFromDouble(scale));
    } else if (timingWriter.isScaleParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__SCALE, timingWriter.getParameterFromScale());
    }
    Double offset = timingWriter.getOffset();
    if (offset != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, XmlExportHelper.toXmlStringFromDouble(offset));
    } else if (timingWriter.isOffsetParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, timingWriter.getParameterFromOffset());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficActionNode(
      Document document, Element elementNode, ITrafficActionWriter trafficActionWriter) {
    // Add Attributes (Parameters)
    ITrafficSourceActionWriter trafficSourceAction =
        trafficActionWriter.getWriterTrafficSourceAction();
    if (trafficSourceAction != null) {
      Element trafficSourceActionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SOURCE_ACTION);
      elementNode.appendChild(trafficSourceActionElement);
      fillTrafficSourceActionNode(document, trafficSourceActionElement, trafficSourceAction);
    }

    ITrafficSinkActionWriter trafficSinkAction = trafficActionWriter.getWriterTrafficSinkAction();
    if (trafficSinkAction != null) {
      Element trafficSinkActionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SINK_ACTION);
      elementNode.appendChild(trafficSinkActionElement);
      fillTrafficSinkActionNode(document, trafficSinkActionElement, trafficSinkAction);
    }

    ITrafficSwarmActionWriter trafficSwarmAction =
        trafficActionWriter.getWriterTrafficSwarmAction();
    if (trafficSwarmAction != null) {
      Element trafficSwarmActionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SWARM_ACTION);
      elementNode.appendChild(trafficSwarmActionElement);
      fillTrafficSwarmActionNode(document, trafficSwarmActionElement, trafficSwarmAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficDefinition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficDefinitionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficDefinitionNode(
      Document document, Element elementNode, ITrafficDefinitionWriter trafficDefinitionWriter) {
    // Add Attributes (Parameters)
    String name = trafficDefinitionWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (trafficDefinitionWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, trafficDefinitionWriter.getParameterFromName());
    }
    IVehicleCategoryDistributionWriter vehicleCategoryDistribution =
        trafficDefinitionWriter.getWriterVehicleCategoryDistribution();
    if (vehicleCategoryDistribution != null) {
      Element vehicleCategoryDistributionElement =
          document.createElement(OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION);
      elementNode.appendChild(vehicleCategoryDistributionElement);
      fillVehicleCategoryDistributionNode(
          document, vehicleCategoryDistributionElement, vehicleCategoryDistribution);
    }

    IControllerDistributionWriter controllerDistribution =
        trafficDefinitionWriter.getWriterControllerDistribution();
    if (controllerDistribution != null) {
      Element controllerDistributionElement =
          document.createElement(OscConstants.ELEMENT__CONTROLLER_DISTRIBUTION);
      elementNode.appendChild(controllerDistributionElement);
      fillControllerDistributionNode(
          document, controllerDistributionElement, controllerDistribution);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSignalAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSignalActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSignalActionNode(
      Document document,
      Element elementNode,
      ITrafficSignalActionWriter trafficSignalActionWriter) {
    // Add Attributes (Parameters)
    ITrafficSignalControllerActionWriter trafficSignalControllerAction =
        trafficSignalActionWriter.getWriterTrafficSignalControllerAction();
    if (trafficSignalControllerAction != null) {
      Element trafficSignalControllerActionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION);
      elementNode.appendChild(trafficSignalControllerActionElement);
      fillTrafficSignalControllerActionNode(
          document, trafficSignalControllerActionElement, trafficSignalControllerAction);
    }

    ITrafficSignalStateActionWriter trafficSignalStateAction =
        trafficSignalActionWriter.getWriterTrafficSignalStateAction();
    if (trafficSignalStateAction != null) {
      Element trafficSignalStateActionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION);
      elementNode.appendChild(trafficSignalStateActionElement);
      fillTrafficSignalStateActionNode(
          document, trafficSignalStateActionElement, trafficSignalStateAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSignalCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSignalConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSignalConditionNode(
      Document document,
      Element elementNode,
      ITrafficSignalConditionWriter trafficSignalConditionWriter) {
    // Add Attributes (Parameters)
    String name = trafficSignalConditionWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (trafficSignalConditionWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, trafficSignalConditionWriter.getParameterFromName());
    }
    String state = trafficSignalConditionWriter.getState();
    if (state != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STATE, XmlExportHelper.toXmlStringFromString(state));
    } else if (trafficSignalConditionWriter.isStateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STATE, trafficSignalConditionWriter.getParameterFromState());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSignalController
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSignalControllerWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSignalControllerNode(
      Document document,
      Element elementNode,
      ITrafficSignalControllerWriter trafficSignalControllerWriter) {
    // Add Attributes (Parameters)
    String name = trafficSignalControllerWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (trafficSignalControllerWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, trafficSignalControllerWriter.getParameterFromName());
    }
    Double delay = trafficSignalControllerWriter.getDelay();
    if (delay != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DELAY, XmlExportHelper.toXmlStringFromDouble(delay));
    } else if (trafficSignalControllerWriter.isDelayParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DELAY, trafficSignalControllerWriter.getParameterFromDelay());
    }
    String reference = trafficSignalControllerWriter.getReference();
    if (reference != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__REFERENCE, XmlExportHelper.toXmlStringFromString(reference));
    } else if (trafficSignalControllerWriter.isReferenceParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__REFERENCE,
          trafficSignalControllerWriter.getParameterFromReference());
    }
    List<IPhaseWriter> phases = trafficSignalControllerWriter.getWriterPhases();
    if (phases != null) {
      for (IPhaseWriter phasesWriterItem : phases) {
        Element phasesElement = document.createElement(OscConstants.ELEMENT__PHASE);
        elementNode.appendChild(phasesElement);
        fillPhaseNode(document, phasesElement, phasesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSignalControllerAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSignalControllerActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSignalControllerActionNode(
      Document document,
      Element elementNode,
      ITrafficSignalControllerActionWriter trafficSignalControllerActionWriter) {
    // Add Attributes (Parameters)
    INamedReference<ITrafficSignalController> trafficSignalControllerRef =
        trafficSignalControllerActionWriter.getTrafficSignalControllerRef();
    if (trafficSignalControllerRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF,
          XmlExportHelper.toXmlStringFromString(trafficSignalControllerRef.getNameRef()));
    }
    String phase = trafficSignalControllerActionWriter.getPhase();
    if (phase != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PHASE, XmlExportHelper.toXmlStringFromString(phase));
    } else if (trafficSignalControllerActionWriter.isPhaseParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PHASE,
          trafficSignalControllerActionWriter.getParameterFromPhase());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSignalControllerCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSignalControllerConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSignalControllerConditionNode(
      Document document,
      Element elementNode,
      ITrafficSignalControllerConditionWriter trafficSignalControllerConditionWriter) {
    // Add Attributes (Parameters)
    INamedReference<ITrafficSignalController> trafficSignalControllerRef =
        trafficSignalControllerConditionWriter.getTrafficSignalControllerRef();
    if (trafficSignalControllerRef != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF,
          XmlExportHelper.toXmlStringFromString(trafficSignalControllerRef.getNameRef()));
    }
    String phase = trafficSignalControllerConditionWriter.getPhase();
    if (phase != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PHASE, XmlExportHelper.toXmlStringFromString(phase));
    } else if (trafficSignalControllerConditionWriter.isPhaseParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__PHASE,
          trafficSignalControllerConditionWriter.getParameterFromPhase());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSignalState
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSignalStateWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSignalStateNode(
      Document document, Element elementNode, ITrafficSignalStateWriter trafficSignalStateWriter) {
    // Add Attributes (Parameters)
    String trafficSignalId = trafficSignalStateWriter.getTrafficSignalId();
    if (trafficSignalId != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_ID,
          XmlExportHelper.toXmlStringFromString(trafficSignalId));
    } else if (trafficSignalStateWriter.isTrafficSignalIdParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_ID,
          trafficSignalStateWriter.getParameterFromTrafficSignalId());
    }
    String state = trafficSignalStateWriter.getState();
    if (state != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STATE, XmlExportHelper.toXmlStringFromString(state));
    } else if (trafficSignalStateWriter.isStateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STATE, trafficSignalStateWriter.getParameterFromState());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSignalStateAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSignalStateActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSignalStateActionNode(
      Document document,
      Element elementNode,
      ITrafficSignalStateActionWriter trafficSignalStateActionWriter) {
    // Add Attributes (Parameters)
    String name = trafficSignalStateActionWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (trafficSignalStateActionWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, trafficSignalStateActionWriter.getParameterFromName());
    }
    String state = trafficSignalStateActionWriter.getState();
    if (state != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STATE, XmlExportHelper.toXmlStringFromString(state));
    } else if (trafficSignalStateActionWriter.isStateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__STATE, trafficSignalStateActionWriter.getParameterFromState());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSinkAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSinkActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSinkActionNode(
      Document document, Element elementNode, ITrafficSinkActionWriter trafficSinkActionWriter) {
    // Add Attributes (Parameters)
    Double rate = trafficSinkActionWriter.getRate();
    if (rate != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RATE, XmlExportHelper.toXmlStringFromDouble(rate));
    } else if (trafficSinkActionWriter.isRateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RATE, trafficSinkActionWriter.getParameterFromRate());
    }
    Double radius = trafficSinkActionWriter.getRadius();
    if (radius != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RADIUS, XmlExportHelper.toXmlStringFromDouble(radius));
    } else if (trafficSinkActionWriter.isRadiusParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RADIUS, trafficSinkActionWriter.getParameterFromRadius());
    }
    IPositionWriter position = trafficSinkActionWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    ITrafficDefinitionWriter trafficDefinition =
        trafficSinkActionWriter.getWriterTrafficDefinition();
    if (trafficDefinition != null) {
      Element trafficDefinitionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_DEFINITION);
      elementNode.appendChild(trafficDefinitionElement);
      fillTrafficDefinitionNode(document, trafficDefinitionElement, trafficDefinition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSourceAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSourceActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSourceActionNode(
      Document document,
      Element elementNode,
      ITrafficSourceActionWriter trafficSourceActionWriter) {
    // Add Attributes (Parameters)
    Double rate = trafficSourceActionWriter.getRate();
    if (rate != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RATE, XmlExportHelper.toXmlStringFromDouble(rate));
    } else if (trafficSourceActionWriter.isRateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RATE, trafficSourceActionWriter.getParameterFromRate());
    }
    Double radius = trafficSourceActionWriter.getRadius();
    if (radius != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RADIUS, XmlExportHelper.toXmlStringFromDouble(radius));
    } else if (trafficSourceActionWriter.isRadiusParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RADIUS, trafficSourceActionWriter.getParameterFromRadius());
    }
    Double velocity = trafficSourceActionWriter.getVelocity();
    if (velocity != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VELOCITY, XmlExportHelper.toXmlStringFromDouble(velocity));
    } else if (trafficSourceActionWriter.isVelocityParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VELOCITY, trafficSourceActionWriter.getParameterFromVelocity());
    }
    IPositionWriter position = trafficSourceActionWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    ITrafficDefinitionWriter trafficDefinition =
        trafficSourceActionWriter.getWriterTrafficDefinition();
    if (trafficDefinition != null) {
      Element trafficDefinitionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_DEFINITION);
      elementNode.appendChild(trafficDefinitionElement);
      fillTrafficDefinitionNode(document, trafficDefinitionElement, trafficDefinition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrafficSwarmAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trafficSwarmActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrafficSwarmActionNode(
      Document document, Element elementNode, ITrafficSwarmActionWriter trafficSwarmActionWriter) {
    // Add Attributes (Parameters)
    Double semiMajorAxis = trafficSwarmActionWriter.getSemiMajorAxis();
    if (semiMajorAxis != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS,
          XmlExportHelper.toXmlStringFromDouble(semiMajorAxis));
    } else if (trafficSwarmActionWriter.isSemiMajorAxisParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS,
          trafficSwarmActionWriter.getParameterFromSemiMajorAxis());
    }
    Double semiMinorAxis = trafficSwarmActionWriter.getSemiMinorAxis();
    if (semiMinorAxis != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS,
          XmlExportHelper.toXmlStringFromDouble(semiMinorAxis));
    } else if (trafficSwarmActionWriter.isSemiMinorAxisParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS,
          trafficSwarmActionWriter.getParameterFromSemiMinorAxis());
    }
    Double innerRadius = trafficSwarmActionWriter.getInnerRadius();
    if (innerRadius != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__INNER_RADIUS, XmlExportHelper.toXmlStringFromDouble(innerRadius));
    } else if (trafficSwarmActionWriter.isInnerRadiusParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__INNER_RADIUS,
          trafficSwarmActionWriter.getParameterFromInnerRadius());
    }
    Double offset = trafficSwarmActionWriter.getOffset();
    if (offset != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, XmlExportHelper.toXmlStringFromDouble(offset));
    } else if (trafficSwarmActionWriter.isOffsetParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__OFFSET, trafficSwarmActionWriter.getParameterFromOffset());
    }
    Long numberOfVehicles = trafficSwarmActionWriter.getNumberOfVehicles();
    if (numberOfVehicles != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES,
          XmlExportHelper.toXmlStringFromUnsignedInt(numberOfVehicles));
    } else if (trafficSwarmActionWriter.isNumberOfVehiclesParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES,
          trafficSwarmActionWriter.getParameterFromNumberOfVehicles());
    }
    Double velocity = trafficSwarmActionWriter.getVelocity();
    if (velocity != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VELOCITY, XmlExportHelper.toXmlStringFromDouble(velocity));
    } else if (trafficSwarmActionWriter.isVelocityParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VELOCITY, trafficSwarmActionWriter.getParameterFromVelocity());
    }
    ICentralSwarmObjectWriter centralObject = trafficSwarmActionWriter.getWriterCentralObject();
    if (centralObject != null) {
      Element centralObjectElement = document.createElement(OscConstants.ELEMENT__CENTRAL_OBJECT);
      elementNode.appendChild(centralObjectElement);
      fillCentralSwarmObjectNode(document, centralObjectElement, centralObject);
    }

    ITrafficDefinitionWriter trafficDefinition =
        trafficSwarmActionWriter.getWriterTrafficDefinition();
    if (trafficDefinition != null) {
      Element trafficDefinitionElement =
          document.createElement(OscConstants.ELEMENT__TRAFFIC_DEFINITION);
      elementNode.appendChild(trafficDefinitionElement);
      fillTrafficDefinitionNode(document, trafficDefinitionElement, trafficDefinition);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Trajectory
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trajectoryWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrajectoryNode(
      Document document, Element elementNode, ITrajectoryWriter trajectoryWriter) {
    // Add Attributes (Parameters)
    String name = trajectoryWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (trajectoryWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, trajectoryWriter.getParameterFromName());
    }
    Boolean closed = trajectoryWriter.getClosed();
    if (closed != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CLOSED, XmlExportHelper.toXmlStringFromBoolean(closed));
    } else if (trajectoryWriter.isClosedParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CLOSED, trajectoryWriter.getParameterFromClosed());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        trajectoryWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    IShapeWriter shape = trajectoryWriter.getWriterShape();
    if (shape != null) {
      Element shapeElement = document.createElement(OscConstants.ELEMENT__SHAPE);
      elementNode.appendChild(shapeElement);
      fillShapeNode(document, shapeElement, shape);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrajectoryCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trajectoryCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrajectoryCatalogLocationNode(
      Document document,
      Element elementNode,
      ITrajectoryCatalogLocationWriter trajectoryCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = trajectoryCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TrajectoryFollowingMode
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param trajectoryFollowingModeWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTrajectoryFollowingModeNode(
      Document document,
      Element elementNode,
      ITrajectoryFollowingModeWriter trajectoryFollowingModeWriter) {
    // Add Attributes (Parameters)
    FollowingMode followingMode = trajectoryFollowingModeWriter.getFollowingMode();
    if (followingMode != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__FOLLOWING_MODE, followingMode.getLiteral());
    } else if (trajectoryFollowingModeWriter.isFollowingModeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__FOLLOWING_MODE,
          trajectoryFollowingModeWriter.getParameterFromFollowingMode());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TransitionDynamics
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param transitionDynamicsWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTransitionDynamicsNode(
      Document document, Element elementNode, ITransitionDynamicsWriter transitionDynamicsWriter) {
    // Add Attributes (Parameters)
    DynamicsShape dynamicsShape = transitionDynamicsWriter.getDynamicsShape();
    if (dynamicsShape != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE, dynamicsShape.getLiteral());
    } else if (transitionDynamicsWriter.isDynamicsShapeParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DYNAMICS_SHAPE,
          transitionDynamicsWriter.getParameterFromDynamicsShape());
    }
    Double value = transitionDynamicsWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (transitionDynamicsWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, transitionDynamicsWriter.getParameterFromValue());
    }
    DynamicsDimension dynamicsDimension = transitionDynamicsWriter.getDynamicsDimension();
    if (dynamicsDimension != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION, dynamicsDimension.getLiteral());
    } else if (transitionDynamicsWriter.isDynamicsDimensionParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION,
          transitionDynamicsWriter.getParameterFromDynamicsDimension());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TraveledDistanceCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param traveledDistanceConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTraveledDistanceConditionNode(
      Document document,
      Element elementNode,
      ITraveledDistanceConditionWriter traveledDistanceConditionWriter) {
    // Add Attributes (Parameters)
    Double value = traveledDistanceConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromDouble(value));
    } else if (traveledDistanceConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, traveledDistanceConditionWriter.getParameterFromValue());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Trigger
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param triggerWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTriggerNode(
      Document document, Element elementNode, ITriggerWriter triggerWriter) {
    // Add Attributes (Parameters)
    List<IConditionGroupWriter> conditionGroups = triggerWriter.getWriterConditionGroups();
    if (conditionGroups != null) {
      for (IConditionGroupWriter conditionGroupsWriterItem : conditionGroups) {
        Element conditionGroupsElement =
            document.createElement(OscConstants.ELEMENT__CONDITION_GROUP);
        elementNode.appendChild(conditionGroupsElement);
        fillConditionGroupNode(document, conditionGroupsElement, conditionGroupsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type TriggeringEntities
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param triggeringEntitiesWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillTriggeringEntitiesNode(
      Document document, Element elementNode, ITriggeringEntitiesWriter triggeringEntitiesWriter) {
    // Add Attributes (Parameters)
    TriggeringEntitiesRule triggeringEntitiesRule =
        triggeringEntitiesWriter.getTriggeringEntitiesRule();
    if (triggeringEntitiesRule != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, triggeringEntitiesRule.getLiteral());
    } else if (triggeringEntitiesWriter.isTriggeringEntitiesRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE,
          triggeringEntitiesWriter.getParameterFromTriggeringEntitiesRule());
    }
    List<IEntityRefWriter> entityRefs = triggeringEntitiesWriter.getWriterEntityRefs();
    if (entityRefs != null) {
      for (IEntityRefWriter entityRefsWriterItem : entityRefs) {
        Element entityRefsElement = document.createElement(OscConstants.ELEMENT__ENTITY_REF);
        elementNode.appendChild(entityRefsElement);
        fillEntityRefNode(document, entityRefsElement, entityRefsWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type UserDefinedAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param userDefinedActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillUserDefinedActionNode(
      Document document, Element elementNode, IUserDefinedActionWriter userDefinedActionWriter) {
    // Add Attributes (Parameters)
    ICustomCommandActionWriter customCommandAction =
        userDefinedActionWriter.getWriterCustomCommandAction();
    if (customCommandAction != null) {
      Element customCommandActionElement =
          document.createElement(OscConstants.ELEMENT__CUSTOM_COMMAND_ACTION);
      elementNode.appendChild(customCommandActionElement);
      fillCustomCommandActionNode(document, customCommandActionElement, customCommandAction);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type UserDefinedValueCondition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param userDefinedValueConditionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillUserDefinedValueConditionNode(
      Document document,
      Element elementNode,
      IUserDefinedValueConditionWriter userDefinedValueConditionWriter) {
    // Add Attributes (Parameters)
    String name = userDefinedValueConditionWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (userDefinedValueConditionWriter.isNameParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, userDefinedValueConditionWriter.getParameterFromName());
    }
    String value = userDefinedValueConditionWriter.getValue();
    if (value != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, XmlExportHelper.toXmlStringFromString(value));
    } else if (userDefinedValueConditionWriter.isValueParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VALUE, userDefinedValueConditionWriter.getParameterFromValue());
    }
    Rule rule = userDefinedValueConditionWriter.getRule();
    if (rule != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__RULE, rule.getLiteral());
    } else if (userDefinedValueConditionWriter.isRuleParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__RULE, userDefinedValueConditionWriter.getParameterFromRule());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Vehicle
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param vehicleWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillVehicleNode(
      Document document, Element elementNode, IVehicleWriter vehicleWriter) {
    // Add Attributes (Parameters)
    String name = vehicleWriter.getName();
    if (name != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__NAME, XmlExportHelper.toXmlStringFromString(name));
    } else if (vehicleWriter.isNameParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__NAME, vehicleWriter.getParameterFromName());
    }
    VehicleCategory vehicleCategory = vehicleWriter.getVehicleCategory();
    if (vehicleCategory != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, vehicleCategory.getLiteral());
    } else if (vehicleWriter.isVehicleCategoryParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__VEHICLE_CATEGORY,
          vehicleWriter.getParameterFromVehicleCategory());
    }

    List<IParameterDeclarationWriter> parameterDeclarations =
        vehicleWriter.getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      Element parameterDeclarationsWrapperElement =
          document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATION);
      elementNode.appendChild(parameterDeclarationsWrapperElement);
      for (IParameterDeclarationWriter parameterDeclarationsWriterItem : parameterDeclarations) {
        Element parameterDeclarationsElement =
            document.createElement(OscConstants.ELEMENT__PARAMETER_DECLARATIONS);
        parameterDeclarationsWrapperElement.appendChild(parameterDeclarationsElement);
        fillParameterDeclarationNode(
            document, parameterDeclarationsElement, parameterDeclarationsWriterItem);
      }
    }
    IBoundingBoxWriter boundingBox = vehicleWriter.getWriterBoundingBox();
    if (boundingBox != null) {
      Element boundingBoxElement = document.createElement(OscConstants.ELEMENT__BOUNDING_BOX);
      elementNode.appendChild(boundingBoxElement);
      fillBoundingBoxNode(document, boundingBoxElement, boundingBox);
    }

    IPerformanceWriter performance = vehicleWriter.getWriterPerformance();
    if (performance != null) {
      Element performanceElement = document.createElement(OscConstants.ELEMENT__PERFORMANCE);
      elementNode.appendChild(performanceElement);
      fillPerformanceNode(document, performanceElement, performance);
    }

    IAxlesWriter axles = vehicleWriter.getWriterAxles();
    if (axles != null) {
      Element axlesElement = document.createElement(OscConstants.ELEMENT__AXLES);
      elementNode.appendChild(axlesElement);
      fillAxlesNode(document, axlesElement, axles);
    }

    IPropertiesWriter properties = vehicleWriter.getWriterProperties();
    if (properties != null) {
      Element propertiesElement = document.createElement(OscConstants.ELEMENT__PROPERTIES);
      elementNode.appendChild(propertiesElement);
      fillPropertiesNode(document, propertiesElement, properties);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type VehicleCatalogLocation
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param vehicleCatalogLocationWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillVehicleCatalogLocationNode(
      Document document,
      Element elementNode,
      IVehicleCatalogLocationWriter vehicleCatalogLocationWriter) {
    // Add Attributes (Parameters)
    IDirectoryWriter directory = vehicleCatalogLocationWriter.getWriterDirectory();
    if (directory != null) {
      Element directoryElement = document.createElement(OscConstants.ELEMENT__DIRECTORY);
      elementNode.appendChild(directoryElement);
      fillDirectoryNode(document, directoryElement, directory);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type VehicleCategoryDistribution
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param vehicleCategoryDistributionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillVehicleCategoryDistributionNode(
      Document document,
      Element elementNode,
      IVehicleCategoryDistributionWriter vehicleCategoryDistributionWriter) {
    // Add Attributes (Parameters)
    List<IVehicleCategoryDistributionEntryWriter> vehicleCategoryDistributionEntries =
        vehicleCategoryDistributionWriter.getWriterVehicleCategoryDistributionEntries();
    if (vehicleCategoryDistributionEntries != null) {
      for (IVehicleCategoryDistributionEntryWriter vehicleCategoryDistributionEntriesWriterItem :
          vehicleCategoryDistributionEntries) {
        Element vehicleCategoryDistributionEntriesElement =
            document.createElement(OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY);
        elementNode.appendChild(vehicleCategoryDistributionEntriesElement);
        fillVehicleCategoryDistributionEntryNode(
            document,
            vehicleCategoryDistributionEntriesElement,
            vehicleCategoryDistributionEntriesWriterItem);
      }
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type VehicleCategoryDistributionEntry
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param vehicleCategoryDistributionEntryWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillVehicleCategoryDistributionEntryNode(
      Document document,
      Element elementNode,
      IVehicleCategoryDistributionEntryWriter vehicleCategoryDistributionEntryWriter) {
    // Add Attributes (Parameters)
    VehicleCategory category = vehicleCategoryDistributionEntryWriter.getCategory();
    if (category != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__CATEGORY, category.getLiteral());
    } else if (vehicleCategoryDistributionEntryWriter.isCategoryParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CATEGORY,
          vehicleCategoryDistributionEntryWriter.getParameterFromCategory());
    }
    Double weight = vehicleCategoryDistributionEntryWriter.getWeight();
    if (weight != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WEIGHT, XmlExportHelper.toXmlStringFromDouble(weight));
    } else if (vehicleCategoryDistributionEntryWriter.isWeightParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__WEIGHT,
          vehicleCategoryDistributionEntryWriter.getParameterFromWeight());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Vertex
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param vertexWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillVertexNode(Document document, Element elementNode, IVertexWriter vertexWriter) {
    // Add Attributes (Parameters)
    Double time = vertexWriter.getTime();
    if (time != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TIME, XmlExportHelper.toXmlStringFromDouble(time));
    } else if (vertexWriter.isTimeParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__TIME, vertexWriter.getParameterFromTime());
    }
    IPositionWriter position = vertexWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type VisibilityAction
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param visibilityActionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillVisibilityActionNode(
      Document document, Element elementNode, IVisibilityActionWriter visibilityActionWriter) {
    // Add Attributes (Parameters)
    Boolean graphics = visibilityActionWriter.getGraphics();
    if (graphics != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__GRAPHICS, XmlExportHelper.toXmlStringFromBoolean(graphics));
    } else if (visibilityActionWriter.isGraphicsParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__GRAPHICS, visibilityActionWriter.getParameterFromGraphics());
    }
    Boolean traffic = visibilityActionWriter.getTraffic();
    if (traffic != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRAFFIC, XmlExportHelper.toXmlStringFromBoolean(traffic));
    } else if (visibilityActionWriter.isTrafficParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__TRAFFIC, visibilityActionWriter.getParameterFromTraffic());
    }
    Boolean sensors = visibilityActionWriter.getSensors();
    if (sensors != null) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SENSORS, XmlExportHelper.toXmlStringFromBoolean(sensors));
    } else if (visibilityActionWriter.isSensorsParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__SENSORS, visibilityActionWriter.getParameterFromSensors());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Waypoint
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param waypointWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillWaypointNode(
      Document document, Element elementNode, IWaypointWriter waypointWriter) {
    // Add Attributes (Parameters)
    RouteStrategy routeStrategy = waypointWriter.getRouteStrategy();
    if (routeStrategy != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__ROUTE_STRATEGY, routeStrategy.getLiteral());
    } else if (waypointWriter.isRouteStrategyParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__ROUTE_STRATEGY, waypointWriter.getParameterFromRouteStrategy());
    }
    IPositionWriter position = waypointWriter.getWriterPosition();
    if (position != null) {
      Element positionElement = document.createElement(OscConstants.ELEMENT__POSITION);
      elementNode.appendChild(positionElement);
      fillPositionNode(document, positionElement, position);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type Weather
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param weatherWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillWeatherNode(
      Document document, Element elementNode, IWeatherWriter weatherWriter) {
    // Add Attributes (Parameters)
    CloudState cloudState = weatherWriter.getCloudState();
    if (cloudState != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__CLOUD_STATE, cloudState.getLiteral());
    } else if (weatherWriter.isCloudStateParameterized()) {
      elementNode.setAttribute(
          OscConstants.ATTRIBUTE__CLOUD_STATE, weatherWriter.getParameterFromCloudState());
    }
    ISunWriter sun = weatherWriter.getWriterSun();
    if (sun != null) {
      Element sunElement = document.createElement(OscConstants.ELEMENT__SUN);
      elementNode.appendChild(sunElement);
      fillSunNode(document, sunElement, sun);
    }

    IFogWriter fog = weatherWriter.getWriterFog();
    if (fog != null) {
      Element fogElement = document.createElement(OscConstants.ELEMENT__FOG);
      elementNode.appendChild(fogElement);
      fillFogNode(document, fogElement, fog);
    }

    IPrecipitationWriter precipitation = weatherWriter.getWriterPrecipitation();
    if (precipitation != null) {
      Element precipitationElement = document.createElement(OscConstants.ELEMENT__PRECIPITATION);
      elementNode.appendChild(precipitationElement);
      fillPrecipitationNode(document, precipitationElement, precipitation);
    }

    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
  /**
   * Fills a dom element of type WorldPosition
   *
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param worldPositionWriter the writer the element is filled from.
   */
  @SuppressWarnings("unused")
  private void fillWorldPositionNode(
      Document document, Element elementNode, IWorldPositionWriter worldPositionWriter) {
    // Add Attributes (Parameters)
    Double x = worldPositionWriter.getX();
    if (x != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__X, XmlExportHelper.toXmlStringFromDouble(x));
    } else if (worldPositionWriter.isXParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__X, worldPositionWriter.getParameterFromX());
    }
    Double y = worldPositionWriter.getY();
    if (y != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Y, XmlExportHelper.toXmlStringFromDouble(y));
    } else if (worldPositionWriter.isYParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Y, worldPositionWriter.getParameterFromY());
    }
    Double z = worldPositionWriter.getZ();
    if (z != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Z, XmlExportHelper.toXmlStringFromDouble(z));
    } else if (worldPositionWriter.isZParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__Z, worldPositionWriter.getParameterFromZ());
    }
    Double h = worldPositionWriter.getH();
    if (h != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__H, XmlExportHelper.toXmlStringFromDouble(h));
    } else if (worldPositionWriter.isHParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__H, worldPositionWriter.getParameterFromH());
    }
    Double p = worldPositionWriter.getP();
    if (p != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__P, XmlExportHelper.toXmlStringFromDouble(p));
    } else if (worldPositionWriter.isPParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__P, worldPositionWriter.getParameterFromP());
    }
    Double r = worldPositionWriter.getR();
    if (r != null) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__R, XmlExportHelper.toXmlStringFromDouble(r));
    } else if (worldPositionWriter.isRParameterized()) {
      elementNode.setAttribute(OscConstants.ATTRIBUTE__R, worldPositionWriter.getParameterFromR());
    }
    // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
  }
}
