package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IEnvironment;
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
import de.rac.openscenario.v1_0.parameter.ParameterValue;

import de.rac.openscenario.v1_0.api.IRoadCondition;
import de.rac.openscenario.v1_0.api.ITimeOfDay;
import de.rac.openscenario.v1_0.api.IWeather;
import de.rac.openscenario.v1_0.api.IParameterDeclaration;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEnvironment. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEnvironment)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EnvironmentImpl extends BaseImpl implements IEnvironment, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private String name;
	private List<IParameterDeclaration> parameterDeclarations;
	private ITimeOfDay timeOfDay;
	private IWeather weather;
	private IRoadCondition roadCondition;

	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public List<IParameterDeclaration> getParameterDeclarations()
	{
		return parameterDeclarations;
	}
	@Override
	public ITimeOfDay getTimeOfDay()
	{
		return timeOfDay;
	}
	@Override
	public IWeather getWeather()
	{
		return weather;
	}
	@Override
	public IRoadCondition getRoadCondition()
	{
		return roadCondition;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the environment. If used in catalog name is required.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
	public void setParameterDeclarations(List<IParameterDeclaration> parameterDeclarations)
	{
		this.parameterDeclarations = parameterDeclarations;
	}
	/**
	 * Sets the value of model property timeOfDay
	 * @param timeOfDay from OpenSCENARIO class model specification: [Time of the day during the simulation.]
	 * 
	*/
	public  void setTimeOfDay (ITimeOfDay timeOfDay )
	{
		this.timeOfDay = timeOfDay;
	}
	/**
	 * Sets the value of model property weather
	 * @param weather from OpenSCENARIO class model specification: [Weather conditions during the simulation.]
	 * 
	*/
	public  void setWeather (IWeather weather )
	{
		this.weather = weather;
	}
	/**
	 * Sets the value of model property roadCondition
	 * @param roadCondition from OpenSCENARIO class model specification: [Road conditions during the simulation.]
	 * 
	*/
	public  void setRoadCondition (IRoadCondition roadCondition )
	{
		this.roadCondition = roadCondition;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME))
		{
			// Simple type
			name = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
	}
	
	@Override
	public  Class<?> getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}

	@Override
	public boolean hasParameterDefinitions() {
		return true;
	}
	
	@Override
	public List<ParameterValue> getParameterDefinitions() {
		List<ParameterValue> result = new java.util.ArrayList<ParameterValue>();
		if (parameterDeclarations != null)
		{
			for (IParameterDeclaration parameterDeclaration :parameterDeclarations)
			{
				ParameterValue parameterValue = new ParameterValue(parameterDeclaration.getName(), getParameterType(parameterDeclaration.getParameterType().getLiteral()),parameterDeclaration.getValue());
				result.add(parameterValue);
			}
		}
		return result;
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			List<IParameterDeclaration> parameterDeclarations = null;
			parameterDeclarations =  getParameterDeclarations();
			if (parameterDeclarations != null)
			{
				for(IParameterDeclaration item : parameterDeclarations)
				{
					result.add((BaseImpl) item);
				}
			}
			ITimeOfDay timeOfDay = null;
			timeOfDay =  getTimeOfDay();
			if (timeOfDay != null)
			{
				result.add((BaseImpl) timeOfDay);
			}	
			IWeather weather = null;
			weather =  getWeather();
			if (weather != null)
			{
				result.add((BaseImpl) weather);
			}	
			IRoadCondition roadCondition = null;
			roadCondition =  getRoadCondition();
			if (roadCondition != null)
			{
				result.add((BaseImpl) roadCondition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public EnvironmentImpl clone()
	{
		EnvironmentImpl clonedObject = new EnvironmentImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		List<IParameterDeclaration> parameterDeclarations = null;
			parameterDeclarations =  getParameterDeclarations();
		if (parameterDeclarations != null)
		{
			List<IParameterDeclaration> clonedList = new ArrayList<IParameterDeclaration>();
			for(IParameterDeclaration item : parameterDeclarations)
			{
				ParameterDeclarationImpl clonedChild = ((ParameterDeclarationImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setParameterDeclarations(clonedList);
		}
		ITimeOfDay timeOfDay = null;
		timeOfDay =  getTimeOfDay();
		if (timeOfDay != null)
		{
			TimeOfDayImpl clonedChild = ((TimeOfDayImpl) timeOfDay).clone();
			clonedObject.setTimeOfDay(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IWeather weather = null;
		weather =  getWeather();
		if (weather != null)
		{
			WeatherImpl clonedChild = ((WeatherImpl) weather).clone();
			clonedObject.setWeather(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRoadCondition roadCondition = null;
		roadCondition =  getRoadCondition();
		if (roadCondition != null)
		{
			RoadConditionImpl clonedChild = ((RoadConditionImpl) roadCondition).clone();
			clonedObject.setRoadCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

