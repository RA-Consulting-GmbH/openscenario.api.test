package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IFog;
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

import de.rac.openscenario.v1_0.api.IBoundingBox;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFog. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFog)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class FogImpl extends BaseImpl implements IFog, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__VISUAL_RANGE, Double.class);
	}
	
	private Double visualRange;
	private IBoundingBox boundingBox;

	@Override
	public Double getVisualRange()
	{
		return visualRange;
	}
	@Override
	public IBoundingBox getBoundingBox()
	{
		return boundingBox;
	}
	/**
	 * Sets the value of model property visualRange
	 * @param visualRange from OpenSCENARIO class model specification: [Unit: m; Range: [0..inf[.]
	 * 
	*/
	public  void setVisualRange (Double visualRange )
	{
		this.visualRange = visualRange;
	}
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [Dimensions and center of fog in fixed coordinates.]
	 * 
	*/
	public  void setBoundingBox (IBoundingBox boundingBox )
	{
		this.boundingBox = boundingBox;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__VISUAL_RANGE))
		{
			// Simple type
			visualRange = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			IBoundingBox boundingBox = null;
			boundingBox =  getBoundingBox();
			if (boundingBox != null)
			{
				result.add((BaseImpl) boundingBox);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public FogImpl clone()
	{
		FogImpl clonedObject = new FogImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setVisualRange(getVisualRange());		
		// clone children
		IBoundingBox boundingBox = null;
		boundingBox =  getBoundingBox();
		if (boundingBox != null)
		{
			BoundingBoxImpl clonedChild = ((BoundingBoxImpl) boundingBox).clone();
			clonedObject.setBoundingBox(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

