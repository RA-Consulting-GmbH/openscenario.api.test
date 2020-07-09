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
package net.asam.openscenario.v1_0.impl;

import net.asam.openscenario.v1_0.api.IRoadNetwork;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import net.asam.openscenario.v1_0.api.IFile;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;


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
	/**
	 * Default constructor
	 */
	public RoadNetworkImpl()
	{
		super();
		addAdapter(RoadNetworkImpl.class, this);
		addAdapter(IRoadNetwork.class, this);
		
	}
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
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
	throw new KeyNotSupportedException();
  }
  
  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }  
  
  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
 
  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
  
  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
 
  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
   
  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException
  {
 	throw new KeyNotSupportedException();

  }
 
  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__LOGIC_FILE))
	{
		return (IOpenScenarioFlexElement) getLogicFile();
	}else 
	if (key.equals(OscConstants.ELEMENT__SCENE_GRAPH_FILE))
	{
		return (IOpenScenarioFlexElement) getSceneGraphFile();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getTrafficSignals();

	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
   
  @Override
  public IOpenScenarioFlexElement getParentFlexElement()
  {
   	return (IOpenScenarioFlexElement) getParent();
  }
  
  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "RoadNetwork";
  }
 	
}

