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

package net.asam.openscenario.v1_0.checker;

/**
 * A factory interface for IScenrioChecker.
 * It should be implemented to create factories that can be  archived and 
 * then be loaded from a jar file e.g. by the standalone checker
 * 
 * The correct way should be:
 * <ul>
 * <li>Create tests and a Factory that bundles them in the create method
 * <li>archive it the compiled class in a jar file
 * <li>add the jar file to the classpath of your standalone checker
 * <li>hand over class name of the factory the standalone checker.
 * <li>the standalone checker loads the factory with reflection, calls the create function and applys it to the tree. 
 * </ul>
 *
 * @author Andreas Hege - RA Consulting
 */
public interface IScenarioCheckerFactory {

  /**
   * 
   * @return a Scenario Checker
   */
  public IScenarioChecker create();
}
