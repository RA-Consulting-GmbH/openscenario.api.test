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
package net.asam.openscenario.v1_0.api.writer;

import java.util.List;
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Storyboard' From OpenSCENARIO class model specification: Top container
 * for the dynamic content of a scenario.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IStoryboardWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Initialization of the storyboard instance. Initial
   * conditions are set and initial actions are applied to entities.
   *
   * @return a writer for model property init
   */
  public IInitWriter getInitWriter();
  /**
   * From OpenSCENARIO class model specification: Trigger to stop the Storyboard instance.
   *
   * @return a writer for model property stopTrigger
   */
  public ITriggerWriter getStopTriggerWriter();

  /**
   * From OpenSCENARIO class model specification: Initialization of the storyboard instance. Initial
   * conditions are set and initial actions are applied to entities.
   *
   * @param initWriter writer for the model property init
   */
  public void writeToInitWriter(IInitWriter initWriter);
  /**
   * From OpenSCENARIO class model specification: Trigger to stop the Storyboard instance.
   *
   * @param stopTriggerWriter writer for the model property stopTrigger
   */
  public void writeToStopTriggerWriter(ITriggerWriter stopTriggerWriter);

  /**
   * From OpenSCENARIO class model specification: List of stories defined in a story board.
   *
   * @return a list of writers for model property stories
   */
  public List<IStoryWriter> getStoriesWriter();

  /**
   * From OpenSCENARIO class model specification: List of stories defined in a story board.
   *
   * @param storiesWriters list of writers for the model property stories
   */
  public void setStoriesWriter(List<IStoryWriter> storiesWriters);
}
