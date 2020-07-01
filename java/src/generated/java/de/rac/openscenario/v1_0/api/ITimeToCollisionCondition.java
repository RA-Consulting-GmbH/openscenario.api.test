package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The currently predicted time to collision of a triggering entity/entities and either a reference entityâ€™s position or
 * an explicit position is compared to a given time value. The logical operator for comparison is defined by the rule
 * attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITimeToCollisionCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The time to collision value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: time to collision is measured using the distance between closest bounding box points.False: reference point
	 * distance is used.
	 * 
	 * @return value of model property freespace
	*/
	public Boolean getFreespace();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/
	public Boolean getAlongRoute();

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
	public Rule getRule();

	/**
	 * From OpenSCENARIO class model specification:
	 * The explicit position or a position defined through the current position of a reference entity.
	 * 
	 * @return value of model property timeToCollisionConditionTarget
	*/
	public ITimeToCollisionConditionTarget getTimeToCollisionConditionTarget();
}
