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
package net.asam.openscenario.checker.model;

import java.util.List;
import java.util.StringJoiner;

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * Checks the xor constraints of all children. 
 * Violation 
 * <ul>
 * <li>if more than one children is not null
 * <li>if all are null and one must be present. (all have minOccur &gt; 0)
 * </ul>
 * @author Andreas Hege - RA Consulting
 * @param <T> the type to check
 *
 */
public abstract class UnionCheckerRule<T extends IOpenScenarioModelElement> extends ModelCheckerRule<T> 
{
  
  protected String getTooManyMessage( List<String> properties)
  {
    StringJoiner stringJoiner = new StringJoiner(", ");
    for (String property : properties)
    {
      stringJoiner.add(property);
    }
    
    return String.format("Multiple children are set (%s)"   , stringJoiner.toString());
  }
  
  protected String getTooFewMessage( List<String> properties)
  {
    StringJoiner stringJoiner = new StringJoiner(", ");
    for (String property : properties)
    {
      stringJoiner.add(property);
    }
    
    return String.format("One of these children must be set (%s)"   , stringJoiner.toString());
  }

  

}
