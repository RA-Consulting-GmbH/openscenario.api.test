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

import java.util.ArrayList;
import java.util.Date;
import java.util.Hashtable;
import java.util.Iterator;
import java.util.List;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import net.asam.openscenario.api.SimpleType;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.v1_0.api.IInit;
import net.asam.openscenario.v1_0.api.IStory;
import net.asam.openscenario.v1_0.api.IStoryboard;
import net.asam.openscenario.v1_0.api.ITrigger;
import net.asam.openscenario.v1_0.api.writer.IInitWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryboardWriter;
import net.asam.openscenario.v1_0.api.writer.ITriggerWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IStoryboard. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IStoryboard)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class StoryboardImpl extends BaseImpl implements IStoryboardWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IInitWriter init;
  private List<IStoryWriter> stories = new ArrayList<>();
  private ITriggerWriter stopTrigger;

  /** Default constructor */
  public StoryboardImpl() {
    super();
    addAdapter(StoryboardImpl.class, this);
    addAdapter(IStoryboard.class, this);
    addAdapter(IStoryboardWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IInit getInit() {
    return this.init;
  }

  @Override
  public List<IStoryWriter> getWriterStories() {
    return this.stories;
  }

  @Override
  public Iterable<IStory> getStories() {
    return new Iterable<IStory>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IStory> iterator() {
        return new ArrayList<IStory>(StoryboardImpl.this.stories).iterator();
      }
    };
  }

  @Override
  public int getStoriesSize() {
    if (this.stories != null) return this.stories.size();
    return 0;
  }

  @Override
  public IStory getStoriesAtIndex(int index) {
    if (index >= 0 && this.stories != null && this.stories.size() > index) {
      return this.stories.get(index);
    }
    return null;
  }

  @Override
  public ITrigger getStopTrigger() {
    return this.stopTrigger;
  }

  @Override
  public void setInit(IInitWriter init) {
    this.init = init;
  }

  @Override
  public void setStories(List<IStoryWriter> stories) {
    this.stories = stories;
  }

  @Override
  public void setStopTrigger(ITriggerWriter stopTrigger) {
    this.stopTrigger = stopTrigger;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    // Empty
  }

  @Override
  public SimpleType getTypeFromAttributeName(String attributeKey) {
    return propertyToType.get(attributeKey);
  }

  /**
   * A list of all aggregated children (lists are flattened). This may be used for applying a
   * specific method for any child.
   *
   * @return a list with all children (as BaseImpl)
   */
  @Override
  public List<BaseImpl> getChildren() {
    List<BaseImpl> result = new ArrayList<>();

    IInitWriter init = null;
    init = getWriterInit();
    if (init != null) {
      result.add((BaseImpl) init);
    }
    List<IStoryWriter> stories = null;
    stories = getWriterStories();
    if (stories != null) {
      for (IStoryWriter item : stories) {
        result.add((BaseImpl) item);
      }
    }
    ITriggerWriter stopTrigger = null;
    stopTrigger = getWriterStopTrigger();
    if (stopTrigger != null) {
      result.add((BaseImpl) stopTrigger);
    }
    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public StoryboardImpl clone() {
    StoryboardImpl clonedObject = new StoryboardImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IInitWriter init = null;
    init = getWriterInit();
    if (init != null) {
      IInitWriter clonedChild = ((InitImpl) init).clone();
      clonedObject.setInit(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    List<IStoryWriter> stories = null;
    stories = getWriterStories();
    if (stories != null) {
      List<IStoryWriter> clonedList = new ArrayList<>();
      for (IStoryWriter item : stories) {
        IStoryWriter clonedChild = ((StoryImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setStories(clonedList);
    }
    ITriggerWriter stopTrigger = null;
    stopTrigger = getWriterStopTrigger();
    if (stopTrigger != null) {
      ITriggerWriter clonedChild = ((TriggerImpl) stopTrigger).clone();
      clonedObject.setStopTrigger(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    throw new KeyNotSupportedException();
  }

  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__INIT)) {
      return (IOpenScenarioFlexElement) getInit();
    }
    if (key.equals(OscConstants.ELEMENT__STOP_TRIGGER)) {
      return (IOpenScenarioFlexElement) getStopTrigger();
    }
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__STORY)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getStories();
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public IOpenScenarioFlexElement getParentFlexElement() {
    return (IOpenScenarioFlexElement) getParent();
  }

  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name)
      throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "Storyboard";
  }

  // children
  @Override
  public IInitWriter getWriterInit() {
    return this.init;
  }

  @Override
  public ITriggerWriter getWriterStopTrigger() {
    return this.stopTrigger;
  }
}
