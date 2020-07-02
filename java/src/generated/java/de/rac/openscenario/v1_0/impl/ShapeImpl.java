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
 
package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IShape;
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

import de.rac.openscenario.v1_0.api.IClothoid;
import de.rac.openscenario.v1_0.api.IPolyline;
import de.rac.openscenario.v1_0.api.INurbs;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IShape. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IShape)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ShapeImpl extends BaseImpl implements IShape, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IPolyline polyline;
	private IClothoid clothoid;
	private INurbs nurbs;

	@Override
	public IPolyline getPolyline()
	{
		return polyline;
	}
	@Override
	public IClothoid getClothoid()
	{
		return clothoid;
	}
	@Override
	public INurbs getNurbs()
	{
		return nurbs;
	}
	/**
	 * Sets the value of model property polyline
	 * @param polyline from OpenSCENARIO class model specification: [Polyline property of a shape.]
	 * 
	*/
	public  void setPolyline (IPolyline polyline )
	{
		this.polyline = polyline;
	}
	/**
	 * Sets the value of model property clothoid
	 * @param clothoid from OpenSCENARIO class model specification: [Clothoid property of a shape.]
	 * 
	*/
	public  void setClothoid (IClothoid clothoid )
	{
		this.clothoid = clothoid;
	}
	/**
	 * Sets the value of model property nurbs
	 * @param nurbs from OpenSCENARIO class model specification: [NURBS property of a shape.]
	 * 
	*/
	public  void setNurbs (INurbs nurbs )
	{
		this.nurbs = nurbs;
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
		
			IPolyline polyline = null;
			polyline =  getPolyline();
			if (polyline != null)
			{
				result.add((BaseImpl) polyline);
			}	
			IClothoid clothoid = null;
			clothoid =  getClothoid();
			if (clothoid != null)
			{
				result.add((BaseImpl) clothoid);
			}	
			INurbs nurbs = null;
			nurbs =  getNurbs();
			if (nurbs != null)
			{
				result.add((BaseImpl) nurbs);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ShapeImpl clone()
	{
		ShapeImpl clonedObject = new ShapeImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IPolyline polyline = null;
		polyline =  getPolyline();
		if (polyline != null)
		{
			PolylineImpl clonedChild = ((PolylineImpl) polyline).clone();
			clonedObject.setPolyline(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IClothoid clothoid = null;
		clothoid =  getClothoid();
		if (clothoid != null)
		{
			ClothoidImpl clonedChild = ((ClothoidImpl) clothoid).clone();
			clonedObject.setClothoid(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		INurbs nurbs = null;
		nurbs =  getNurbs();
		if (nurbs != null)
		{
			NurbsImpl clonedChild = ((NurbsImpl) nurbs).clone();
			clonedObject.setNurbs(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

