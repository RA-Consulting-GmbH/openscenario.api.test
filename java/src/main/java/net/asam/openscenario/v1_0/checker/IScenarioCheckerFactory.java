/**
 * 
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
