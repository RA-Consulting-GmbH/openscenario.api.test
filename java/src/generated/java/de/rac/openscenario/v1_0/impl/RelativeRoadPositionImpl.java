package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IRelativeRoadPosition;
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
import de.rac.openscenario.v1_0.impl.NamedReferenceProxy;
import de.rac.openscenario.v1_0.common.INamedReference;
import de.rac.openscenario.v1_0.api.IOrientation;
import de.rac.openscenario.v1_0.api.IEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeRoadPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeRoadPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RelativeRoadPositionImpl extends BaseImpl implements IRelativeRoadPosition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DS, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DT, Double.class);
	}
	
	private NamedReferenceProxy<IEntity> entityRef;
	private Double ds;
	private Double dt;
	private IOrientation orientation;

	@Override
	public INamedReference<IEntity> getEntityRef()
	{
		return entityRef;
	}
	@Override
	public Double getDs()
	{
		return ds;
	}
	@Override
	public Double getDt()
	{
		return dt;
	}
	@Override
	public IOrientation getOrientation()
	{
		return orientation;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [reference entity.]
	 * 
	*/
	public  void setEntityRef (NamedReferenceProxy<IEntity> entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property ds
	 * @param ds from OpenSCENARIO class model specification: [Relative ds road coordinate to s coordinate of the reference 
	 * entity.]
	 * 
	*/
	public  void setDs (Double ds )
	{
		this.ds = ds;
	}
	/**
	 * Sets the value of model property dt
	 * @param dt from OpenSCENARIO class model specification: [Relative dt road coordinate to t coordinate of the reference 
	 * entity.]
	 * 
	*/
	public  void setDt (Double dt )
	{
		this.dt = dt;
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
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
		{
			// Proxy
			NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (parameterLiteralValue);
			entityRef = proxy;
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DS))
		{
			// Simple type
			ds = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DT))
		{
			// Simple type
			dt = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public RelativeRoadPositionImpl clone()
	{
		RelativeRoadPositionImpl clonedObject = new RelativeRoadPositionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>)getEntityRef()).clone();
		clonedObject.setEntityRef(proxy);
		proxy.setParent(clonedObject);
		// Simple type
		clonedObject.setDs(getDs());		
		// Simple type
		clonedObject.setDt(getDt());		
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

