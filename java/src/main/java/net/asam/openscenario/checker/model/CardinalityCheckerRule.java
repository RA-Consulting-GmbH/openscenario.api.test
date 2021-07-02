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

import net.asam.openscenario.api.IOpenScenarioModelElement;


/**
 * Checks the cardinalitiy of all properties that are not (0..1). 
 * @author Andreas Hege - RA Consulting
 * @param <T> the type to check
 *
 */
public abstract class CardinalityCheckerRule<T extends IOpenScenarioModelElement> extends ModelCheckerRule<T> 
{
  
  protected String getTooManyMessage( String property , int expected, int actual)
  {
  
    
    return String.format("Too many children children are set (%s). max defined: %d. actual size: %d"   , property, expected, actual);
  }
  
  protected String getTooFewMessage( String property, int expected, int actual)
  {
    
    return String.format("Too few children children are set (%s). min defined: %d. actual size: %d"   , property, expected, actual);
  }
  
  protected String getRequiredMessage( String property)
  {
    
    return String.format("This property is required (%s)."   , property);
  }
  
  protected String getRequiredContentMessage()
  {
    
    return String.format("Content is required.");
  }

  protected enum ViolationType {
    TOO_MANY,
    TOO_FEW,
    REQUIRED,
    REQUIRED_SIMPLE_CONTENT;
  }

  protected class CardinalityViolation {
    public String propertyName;
    public int expected;
    public int actual;
    public ViolationType violationType;

    public CardinalityViolation(
        String propertyName, int expected, int actual, ViolationType violationType) {
      this.propertyName = propertyName;
      this.expected = expected;
      this.violationType = violationType;
      this.actual = actual;
    }
  }
  

}
