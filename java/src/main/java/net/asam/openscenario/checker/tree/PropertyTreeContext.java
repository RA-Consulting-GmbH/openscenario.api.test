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
package net.asam.openscenario.checker.tree;

import java.util.ArrayList;
import java.util.List;

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * Basic tree context with properties.
 * @author Andreas Hege - RA Consulting
 *
 */
public class PropertyTreeContext extends BaseTreeContext
{

  private List<String> propertyNames = null;
  
  /**
   * @param treeObjectContext a model element as the parent of the properties.
   * @param propertyNames the names of the properties as you would use it in the IOpenScenarioFlexElement
   */
  public PropertyTreeContext(IOpenScenarioModelElement treeObjectContext,List<String> propertyNames)
  {
    super(treeObjectContext);
    if (propertyNames != null)
      this.propertyNames = propertyNames;
    else
      this.propertyNames = new ArrayList<>();
  }
  
  /**
   * @return the property names
   */
  public List<String> getPropertyNames()
  {
    return this.propertyNames;
  }

}
