package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.INurbs;
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

import de.rac.openscenario.v1_0.api.IKnot;
import de.rac.openscenario.v1_0.api.IControlPoint;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements INurbs. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of INurbs)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class NurbsImpl extends BaseImpl implements INurbs, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ORDER, Long.class);
	}
	
	private Long order;
	private List<IControlPoint> controlPoints;
	private List<IKnot> knots;

	@Override
	public Long getOrder()
	{
		return order;
	}
	@Override
	public List<IControlPoint> getControlPoints()
	{
		return controlPoints;
	}
	@Override
	public List<IKnot> getKnots()
	{
		return knots;
	}
	/**
	 * Sets the value of model property order
	 * @param order from OpenSCENARIO class model specification: [Order of the NURBS trajectory. This is the order of the 
	 * curve, not the degree of the polynomials, which will be one less, than the order of the curve. Range [2..inf[.]
	 * 
	*/
	public  void setOrder (Long order )
	{
		this.order = order;
	}
	/**
	 * Sets the value of model property controlPoints
	 * @param controlPoints from OpenSCENARIO class model specification: [Control point vector of the NURBS trajectory. The 
	 * number of control points must be greater or equal to the order of the , curve.]
	 * 
	*/
	public void setControlPoints(List<IControlPoint> controlPoints)
	{
		this.controlPoints = controlPoints;
	}
	/**
	 * Sets the value of model property knots
	 * @param knots from OpenSCENARIO class model specification: [Knot vector of the NURBS trajectory. Knot values must be 
	 * given in ascending order. The number of knot vector values must, be equal to the number of control points plus the order
	 * of the curve.]
	 * 
	*/
	public void setKnots(List<IKnot> knots)
	{
		this.knots = knots;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ORDER))
		{
			// Simple type
			order = ParserHelper.parseUnsignedInt(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			List<IControlPoint> controlPoints = null;
			controlPoints =  getControlPoints();
			if (controlPoints != null)
			{
				for(IControlPoint item : controlPoints)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IKnot> knots = null;
			knots =  getKnots();
			if (knots != null)
			{
				for(IKnot item : knots)
				{
					result.add((BaseImpl) item);
				}
			}
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public NurbsImpl clone()
	{
		NurbsImpl clonedObject = new NurbsImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setOrder(getOrder());		
		// clone children
		List<IControlPoint> controlPoints = null;
			controlPoints =  getControlPoints();
		if (controlPoints != null)
		{
			List<IControlPoint> clonedList = new ArrayList<IControlPoint>();
			for(IControlPoint item : controlPoints)
			{
				ControlPointImpl clonedChild = ((ControlPointImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setControlPoints(clonedList);
		}
		List<IKnot> knots = null;
			knots =  getKnots();
		if (knots != null)
		{
			List<IKnot> clonedList = new ArrayList<IKnot>();
			for(IKnot item : knots)
			{
				KnotImpl clonedChild = ((KnotImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setKnots(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

