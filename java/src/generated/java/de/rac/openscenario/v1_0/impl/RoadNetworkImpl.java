package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IRoadNetwork;
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

import de.rac.openscenario.v1_0.api.ITrafficSignalController;
import de.rac.openscenario.v1_0.api.IFile;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoadNetwork. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoadNetwork)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RoadNetworkImpl extends BaseImpl implements IRoadNetwork, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IFile logicFile;
	private IFile sceneGraphFile;
	private List<ITrafficSignalController> trafficSignals;

	@Override
	public IFile getLogicFile()
	{
		return logicFile;
	}
	@Override
	public IFile getSceneGraphFile()
	{
		return sceneGraphFile;
	}
	@Override
	public List<ITrafficSignalController> getTrafficSignals()
	{
		return trafficSignals;
	}
	/**
	 * Sets the value of model property logicFile
	 * @param logicFile from OpenSCENARIO class model specification: [File path of the road network file (e.g. an ASAM 
	 * OpenDRIVE file).]
	 * 
	*/
	public  void setLogicFile (IFile logicFile )
	{
		this.logicFile = logicFile;
	}
	/**
	 * Sets the value of model property sceneGraphFile
	 * @param sceneGraphFile from OpenSCENARIO class model specification: [File path of a 3D model representing the virtual 
	 * environment. This may be used for visual representation (rendering).]
	 * 
	*/
	public  void setSceneGraphFile (IFile sceneGraphFile )
	{
		this.sceneGraphFile = sceneGraphFile;
	}
	/**
	 * Sets the value of model property trafficSignals
	 * @param trafficSignals from OpenSCENARIO class model specification: [Name references and description of dynamic behavior 
	 * for traffic signals defined in the road network file.]
	 * 
	*/
	public void setTrafficSignals(List<ITrafficSignalController> trafficSignals)
	{
		this.trafficSignals = trafficSignals;
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
		
			IFile logicFile = null;
			logicFile =  getLogicFile();
			if (logicFile != null)
			{
				result.add((BaseImpl) logicFile);
			}	
			IFile sceneGraphFile = null;
			sceneGraphFile =  getSceneGraphFile();
			if (sceneGraphFile != null)
			{
				result.add((BaseImpl) sceneGraphFile);
			}	
			List<ITrafficSignalController> trafficSignals = null;
			trafficSignals =  getTrafficSignals();
			if (trafficSignals != null)
			{
				for(ITrafficSignalController item : trafficSignals)
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
	public RoadNetworkImpl clone()
	{
		RoadNetworkImpl clonedObject = new RoadNetworkImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IFile logicFile = null;
		logicFile =  getLogicFile();
		if (logicFile != null)
		{
			FileImpl clonedChild = ((FileImpl) logicFile).clone();
			clonedObject.setLogicFile(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IFile sceneGraphFile = null;
		sceneGraphFile =  getSceneGraphFile();
		if (sceneGraphFile != null)
		{
			FileImpl clonedChild = ((FileImpl) sceneGraphFile).clone();
			clonedObject.setSceneGraphFile(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		List<ITrafficSignalController> trafficSignals = null;
			trafficSignals =  getTrafficSignals();
		if (trafficSignals != null)
		{
			List<ITrafficSignalController> clonedList = new ArrayList<ITrafficSignalController>();
			for(ITrafficSignalController item : trafficSignals)
			{
				TrafficSignalControllerImpl clonedChild = ((TrafficSignalControllerImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setTrafficSignals(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

