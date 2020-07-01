package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ILanePosition;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import de.rac.openscenario.v1_0.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IOrientation;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILanePosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILanePosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LanePositionImpl extends BaseImpl implements ILanePosition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ROAD_ID, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__LANE_ID, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__OFFSET, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__S, Double.class);
	}
	
	private String roadId;
	private String laneId;
	private Double offset;
	private Double s;
	private IOrientation orientation;

	@Override
	public String getRoadId()
	{
		return roadId;
	}
	@Override
	public String getLaneId()
	{
		return laneId;
	}
	@Override
	public Double getOffset()
	{
		return offset;
	}
	@Override
	public Double getS()
	{
		return s;
	}
	@Override
	public IOrientation getOrientation()
	{
		return orientation;
	}
	/**
	 * Sets the value of model property roadId
	 * @param roadId from OpenSCENARIO class model specification: [ID of the current road (ID of a road in road network).]
	 * 
	*/
	public  void setRoadId (String roadId )
	{
		this.roadId = roadId;
	}
	/**
	 * Sets the value of model property laneId
	 * @param laneId from OpenSCENARIO class model specification: [ID of the current lane (ID of a lane in road network).]
	 * 
	*/
	public  void setLaneId (String laneId )
	{
		this.laneId = laneId;
	}
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Lateral offset to the centerline of the current lane. Unit: 
	 * m.]
	 * 
	*/
	public  void setOffset (Double offset )
	{
		this.offset = offset;
	}
	/**
	 * Sets the value of model property s
	 * @param s from OpenSCENARIO class model specification: [The s coordinate of the current position. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
	public  void setS (Double s )
	{
		this.s = s;
	}
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates.]
	 * 
	*/
	public  void setOrientation (IOrientation orientation )
	{
		this.orientation = orientation;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ROAD_ID))
		{
			// Simple type
			roadId = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__LANE_ID))
		{
			// Simple type
			laneId = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__OFFSET))
		{
			// Simple type
			offset = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__S))
		{
			// Simple type
			s = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
	}
	
	@Override
	public  Class<?> getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			IOrientation orientation = null;
			orientation =  getOrientation();
			if (orientation != null)
			{
				result.add((BaseImpl) orientation);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LanePositionImpl clone()
	{
		LanePositionImpl clonedObject = new LanePositionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setRoadId(getRoadId());		
		// Simple type
		clonedObject.setLaneId(getLaneId());		
		// Simple type
		clonedObject.setOffset(getOffset());		
		// Simple type
		clonedObject.setS(getS());		
		// clone children
		IOrientation orientation = null;
		orientation =  getOrientation();
		if (orientation != null)
		{
			OrientationImpl clonedChild = ((OrientationImpl) orientation).clone();
			clonedObject.setOrientation(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

