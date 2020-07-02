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

import de.rac.openscenario.v1_0.api.ILaneOffsetTarget;
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

import de.rac.openscenario.v1_0.api.IAbsoluteTargetLaneOffset;
import de.rac.openscenario.v1_0.api.IRelativeTargetLaneOffset;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneOffsetTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneOffsetTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneOffsetTargetImpl extends BaseImpl implements ILaneOffsetTarget, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IRelativeTargetLaneOffset relativeTargetLaneOffset;
	private IAbsoluteTargetLaneOffset absoluteTargetLaneOffset;

	@Override
	public IRelativeTargetLaneOffset getRelativeTargetLaneOffset()
	{
		return relativeTargetLaneOffset;
	}
	@Override
	public IAbsoluteTargetLaneOffset getAbsoluteTargetLaneOffset()
	{
		return absoluteTargetLaneOffset;
	}
	/**
	 * Sets the value of model property relativeTargetLaneOffset
	 * @param relativeTargetLaneOffset from OpenSCENARIO class model specification: [Relative reference to the lane position of
	 * a specific entity.]
	 * 
	*/
	public  void setRelativeTargetLaneOffset (IRelativeTargetLaneOffset relativeTargetLaneOffset )
	{
		this.relativeTargetLaneOffset = relativeTargetLaneOffset;
	}
	/**
	 * Sets the value of model property absoluteTargetLaneOffset
	 * @param absoluteTargetLaneOffset from OpenSCENARIO class model specification: [Absolute reference to the current lane's 
	 * center line.]
	 * 
	*/
	public  void setAbsoluteTargetLaneOffset (IAbsoluteTargetLaneOffset absoluteTargetLaneOffset )
	{
		this.absoluteTargetLaneOffset = absoluteTargetLaneOffset;
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
		
			IRelativeTargetLaneOffset relativeTargetLaneOffset = null;
			relativeTargetLaneOffset =  getRelativeTargetLaneOffset();
			if (relativeTargetLaneOffset != null)
			{
				result.add((BaseImpl) relativeTargetLaneOffset);
			}	
			IAbsoluteTargetLaneOffset absoluteTargetLaneOffset = null;
			absoluteTargetLaneOffset =  getAbsoluteTargetLaneOffset();
			if (absoluteTargetLaneOffset != null)
			{
				result.add((BaseImpl) absoluteTargetLaneOffset);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LaneOffsetTargetImpl clone()
	{
		LaneOffsetTargetImpl clonedObject = new LaneOffsetTargetImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IRelativeTargetLaneOffset relativeTargetLaneOffset = null;
		relativeTargetLaneOffset =  getRelativeTargetLaneOffset();
		if (relativeTargetLaneOffset != null)
		{
			RelativeTargetLaneOffsetImpl clonedChild = ((RelativeTargetLaneOffsetImpl) relativeTargetLaneOffset).clone();
			clonedObject.setRelativeTargetLaneOffset(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAbsoluteTargetLaneOffset absoluteTargetLaneOffset = null;
		absoluteTargetLaneOffset =  getAbsoluteTargetLaneOffset();
		if (absoluteTargetLaneOffset != null)
		{
			AbsoluteTargetLaneOffsetImpl clonedChild = ((AbsoluteTargetLaneOffsetImpl) absoluteTargetLaneOffset).clone();
			clonedObject.setAbsoluteTargetLaneOffset(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

