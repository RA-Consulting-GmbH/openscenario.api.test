package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ILaneOffsetActionDynamics;
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
import de.rac.openscenario.v1_0.common.ErrorLevel;

import de.rac.openscenario.v1_0.api.DynamicsShape;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneOffsetActionDynamics. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneOffsetActionDynamics)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneOffsetActionDynamicsImpl extends BaseImpl implements ILaneOffsetActionDynamics, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__MAX_LATERAL_ACC, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE, String.class);
	}
	
	private Double maxLateralAcc;
	private DynamicsShape dynamicsShape;

	@Override
	public Double getMaxLateralAcc()
	{
		return maxLateralAcc;
	}
	@Override
	public DynamicsShape getDynamicsShape()
	{
		return dynamicsShape;
	}
	/**
	 * Sets the value of model property maxLateralAcc
	 * @param maxLateralAcc from OpenSCENARIO class model specification: [Maximum lateral acceleration used to initially reach 
	 * and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
	public  void setMaxLateralAcc (Double maxLateralAcc )
	{
		this.maxLateralAcc = maxLateralAcc;
	}
	/**
	 * Sets the value of model property dynamicsShape
	 * @param dynamicsShape from OpenSCENARIO class model specification: [Geometrical shape of the LaneOffsetAction's 
	 * dynamics.]
	 * 
	*/
	public  void setDynamicsShape (DynamicsShape dynamicsShape )
	{
		this.dynamicsShape = dynamicsShape;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_LATERAL_ACC))
		{
			// Simple type
			maxLateralAcc = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE))
		{
			// Enumeration Type
			DynamicsShape result = DynamicsShape.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				dynamicsShape = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
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
		
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LaneOffsetActionDynamicsImpl clone()
	{
		LaneOffsetActionDynamicsImpl clonedObject = new LaneOffsetActionDynamicsImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setMaxLateralAcc(getMaxLateralAcc());		
		// Enumeration Type
		DynamicsShape dynamicsShape = getDynamicsShape();
		if (dynamicsShape != null)
		{
			clonedObject.setDynamicsShape(DynamicsShape.getFromLiteral(dynamicsShape.getLiteral()));
		}
		// clone children
		return clonedObject;
	}
	
	
	
}

