/**
 * 
 */
package net.asam.openscenario.v1_0.test;

import net.asam.openscenario.v1_0.checker.IScenarioChecker;
import net.asam.openscenario.v1_0.checker.IScenarioCheckerFactory;
import net.asam.openscenario.v1_0.checker.VersionCheckerRule;
import net.asam.openscenario.v1_0.checker.impl.ScenarioCheckerImpl;

/**
 * @author ahege
 *
 */
public class SimpleTestScenarioCheckerFactory implements IScenarioCheckerFactory {

  @Override
  public IScenarioChecker create() {
    IScenarioChecker checker = new ScenarioCheckerImpl();
    checker.addFileHeaderCheckerRule(new VersionCheckerRule(1, 0));
    return checker;
  }

}
