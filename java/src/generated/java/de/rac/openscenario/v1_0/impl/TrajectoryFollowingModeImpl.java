package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrajectoryFollowingMode;
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

import de.rac.openscenario.v1_0.api.FollowingMode;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrajectoryFollowingMode. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrajectoryFollowingMode)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrajectoryFollowingModeImpl extends BaseImpl implements ITrajectoryFollowingMode, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__FOLLOWING_MODE, String.class);
	}
	
	private FollowingMode followingMode;

	@Override
	public FollowingMode getFollowingMode()
	{
		return followingMode;
	}
	/**
	 * Sets the value of model property followingMode
	 * @param followingMode from OpenSCENARIO class model specification: [Defines (lateral) trajectory following behavior of 
	 * the actor: Mode 'position' forces the actor to strictly adhere to the, trajectory. In contrast, mode 'follow' hands over
	 * control to the actor. In this mode, the actor tries to follow the , trajectory as best as he can. This may be restricted
	 * by dynamics constraints and/or control loop implementation.]
	 * 
	*/
	public  void setFollowingMode (FollowingMode followingMode )
	{
		this.followingMode = followingMode;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__FOLLOWING_MODE))
		{
			// Enumeration Type
			FollowingMode result = FollowingMode.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				followingMode = result;
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
	public TrajectoryFollowingModeImpl clone()
	{
		TrajectoryFollowingModeImpl clonedObject = new TrajectoryFollowingModeImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		FollowingMode followingMode = getFollowingMode();
		if (followingMode != null)
		{
			clonedObject.setFollowingMode(FollowingMode.getFromLiteral(followingMode.getLiteral()));
		}
		// clone children
		return clonedObject;
	}
	
	
	
}

