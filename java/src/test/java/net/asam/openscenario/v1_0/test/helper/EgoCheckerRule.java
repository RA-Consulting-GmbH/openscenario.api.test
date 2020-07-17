/** */
package net.asam.openscenario.v1_0.test.helper;

import java.util.List;

import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.v1_0.api.IEntities;
import net.asam.openscenario.v1_0.api.IScenarioObject;

/** @author ahege */
public class EgoCheckerRule implements ICheckerRule<IEntities> {

  @Override
  public void applyRule(IParserMessageLogger messageLogger, IEntities object) {
    boolean isEgoDefined = false;

    // We are adding the validation code here
    List<IScenarioObject> scenarioObjects = object.getScenarioObjects();
    if (scenarioObjects != null && !scenarioObjects.isEmpty()) {
      for (IScenarioObject scenarioObject : scenarioObjects) {
        if (scenarioObject.getName().toLowerCase().contentEquals("ego")) {
          isEgoDefined = true;
          break;
        }
      }
    }

    if (!isEgoDefined) {
      ILocator locator = (ILocator) object.getAdapter(ILocator.class);
      Textmarker textmarker = null;

      if (locator != null) {
        textmarker = locator.getStartMarker();
      }
      messageLogger.logMessage(
          new FileContentMessage("No ego vehicle defined", ErrorLevel.ERROR, textmarker));
    }
  }
}
