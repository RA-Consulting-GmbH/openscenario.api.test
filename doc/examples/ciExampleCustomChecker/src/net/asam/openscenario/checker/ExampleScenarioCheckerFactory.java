/**
 * 
 */
package net.asam.openscenario.checker;

import net.asam.openscenario.v1_0.checker.IScenarioChecker;
import net.asam.openscenario.v1_0.checker.IScenarioCheckerFactory;
import net.asam.openscenario.v1_0.checker.VersionCheckerRule;
import net.asam.openscenario.v1_0.checker.impl.ScenarioCheckerImpl;

/**
 * @author ahege
 *
 */
public class ExampleScenarioCheckerFactory implements IScenarioCheckerFactory{

  @Override
  public IScenarioChecker create() {
    ScenarioCheckerImpl scenarioCheckerImpl = new ScenarioCheckerImpl();
    scenarioCheckerImpl.addFileHeaderCheckerRule(new VersionCheckerRule(1, 0));
    return scenarioCheckerImpl;
  }

}
