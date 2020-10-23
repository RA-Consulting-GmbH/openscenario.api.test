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

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TimeReference' From OpenSCENARIO class model specification: Defines
 * whether time information present in trajectories should be considered. If considered, it may be
 * used as either absolute or relative time values. Moreover, a time offset or time scaling may be
 * applied.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITimeReferenceWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: This property indicates Timing information is
   * neglected.
   *
   * @return a writer for model property none
   */
  public INoneWriter getNoneWriter();
  /**
   * From OpenSCENARIO class model specification: This property indicates timing information is
   * taken into account. Its underlying properties allow specification of the time domain (absolute
   * or relative), time scaling and a global time offset.
   *
   * @return a writer for model property timing
   */
  public ITimingWriter getTimingWriter();

  /**
   * From OpenSCENARIO class model specification: This property indicates Timing information is
   * neglected.
   *
   * @param noneWriter writer for the model property none
   */
  public void writeToNoneWriter(INoneWriter noneWriter);
  /**
   * From OpenSCENARIO class model specification: This property indicates timing information is
   * taken into account. Its underlying properties allow specification of the time domain (absolute
   * or relative), time scaling and a global time offset.
   *
   * @param timingWriter writer for the model property timing
   */
  public void writeToTimingWriter(ITimingWriter timingWriter);
}
