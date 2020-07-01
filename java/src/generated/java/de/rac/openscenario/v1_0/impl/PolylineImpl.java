package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IPolyline;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IVertex;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPolyline. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPolyline)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PolylineImpl extends BaseImpl implements IPolyline, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private List<IVertex> vertices;

	@Override
	public List<IVertex> getVertices()
	{
		return vertices;
	}
	/**
	 * Sets the value of model property vertices
	 * @param vertices from OpenSCENARIO class model specification: [Ordered chain of vertices of the polygonal chain.]
	 * 
	*/
	public void setVertices(List<IVertex> vertices)
	{
		this.vertices = vertices;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
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
		
			List<IVertex> vertices = null;
			vertices =  getVertices();
			if (vertices != null)
			{
				for(IVertex item : vertices)
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
	public PolylineImpl clone()
	{
		PolylineImpl clonedObject = new PolylineImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		List<IVertex> vertices = null;
			vertices =  getVertices();
		if (vertices != null)
		{
			List<IVertex> clonedList = new ArrayList<IVertex>();
			for(IVertex item : vertices)
			{
				VertexImpl clonedChild = ((VertexImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setVertices(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

