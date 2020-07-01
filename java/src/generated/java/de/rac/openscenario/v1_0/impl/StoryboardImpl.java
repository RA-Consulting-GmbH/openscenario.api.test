package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IStoryboard;
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

import de.rac.openscenario.v1_0.api.ITrigger;
import de.rac.openscenario.v1_0.api.IInit;
import de.rac.openscenario.v1_0.api.IStory;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IStoryboard. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IStoryboard)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class StoryboardImpl extends BaseImpl implements IStoryboard, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IInit init;
	private List<IStory> stories;
	private ITrigger stopTrigger;

	@Override
	public IInit getInit()
	{
		return init;
	}
	@Override
	public List<IStory> getStories()
	{
		return stories;
	}
	@Override
	public ITrigger getStopTrigger()
	{
		return stopTrigger;
	}
	/**
	 * Sets the value of model property init
	 * @param init from OpenSCENARIO class model specification: [Initialization of the storyboard instance. Initial conditions 
	 * are set and initial actions are applied to entities.]
	 * 
	*/
	public  void setInit (IInit init )
	{
		this.init = init;
	}
	/**
	 * Sets the value of model property stories
	 * @param stories from OpenSCENARIO class model specification: [List of stories defined in a story board.]
	 * 
	*/
	public void setStories(List<IStory> stories)
	{
		this.stories = stories;
	}
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Trigger to stop the Storyboard instance.]
	 * 
	*/
	public  void setStopTrigger (ITrigger stopTrigger )
	{
		this.stopTrigger = stopTrigger;
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
		
			IInit init = null;
			init =  getInit();
			if (init != null)
			{
				result.add((BaseImpl) init);
			}	
			List<IStory> stories = null;
			stories =  getStories();
			if (stories != null)
			{
				for(IStory item : stories)
				{
					result.add((BaseImpl) item);
				}
			}
			ITrigger stopTrigger = null;
			stopTrigger =  getStopTrigger();
			if (stopTrigger != null)
			{
				result.add((BaseImpl) stopTrigger);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public StoryboardImpl clone()
	{
		StoryboardImpl clonedObject = new StoryboardImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IInit init = null;
		init =  getInit();
		if (init != null)
		{
			InitImpl clonedChild = ((InitImpl) init).clone();
			clonedObject.setInit(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		List<IStory> stories = null;
			stories =  getStories();
		if (stories != null)
		{
			List<IStory> clonedList = new ArrayList<IStory>();
			for(IStory item : stories)
			{
				StoryImpl clonedChild = ((StoryImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setStories(clonedList);
		}
		ITrigger stopTrigger = null;
		stopTrigger =  getStopTrigger();
		if (stopTrigger != null)
		{
			TriggerImpl clonedChild = ((TriggerImpl) stopTrigger).clone();
			clonedObject.setStopTrigger(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

