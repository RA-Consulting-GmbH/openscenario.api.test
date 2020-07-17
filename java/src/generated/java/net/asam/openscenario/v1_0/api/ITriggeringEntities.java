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
package net.asam.openscenario.v1_0.api;

import java.util.List;
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: A collection of entities evaluated for an
 * EntityCondition to be triggered. It is optional whether the condition must be fulfilled any or
 * all of the objects.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITriggeringEntities extends IOpenScenarioModelElement {

  /**
   * From OpenSCENARIO class model specification: All or any.
   *
   * @return value of model property triggeringEntitiesRule
   */
  public TriggeringEntitiesRule getTriggeringEntitiesRule();

  /**
   * From OpenSCENARIO class model specification: List of referenced entities that trigger the
   * condition.
   *
   * @return value of model property entityRefs
   */
  public List<IEntityRef> getEntityRefs();
}
