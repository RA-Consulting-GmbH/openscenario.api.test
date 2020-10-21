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
package net.asam.openscenario.v1_0.test.helper;

import java.util.List;

import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.checker.tree.BaseTreeContext;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.TreeContentMessage;
import net.asam.openscenario.v1_0.api.IEntities;
import net.asam.openscenario.v1_0.api.IScenarioObject;

/** 
 * Checks whether a e entity with the name ego exists
 * @author Andreas Hege - RA Consulting
 * */
public class EgoCheckerRule implements ICheckerRule<IEntities> {

  @Override
  public void applyRuleInFileContext(IParserMessageLogger messageLogger, IEntities object) {
    

    if (!isEgoDefined(object)) {
      ILocator locator = (ILocator) object.getAdapter(ILocator.class);
      Textmarker textmarker = null;

      if (locator != null) {
        textmarker = locator.getStartMarker();
      }
      messageLogger.logMessage(
          new FileContentMessage("No ego vehicle defined", ErrorLevel.ERROR, textmarker));
    }
  }

  private boolean isEgoDefined(IEntities object)
  {
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
    return isEgoDefined;
  }
  @Override
  public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, IEntities object)
  {
    if (!isEgoDefined(object)) {
      ILocator locator = (ILocator) object.getAdapter(ILocator.class);
      Textmarker textmarker = null;

      if (locator != null) {
        textmarker = locator.getStartMarker();
      }
      messageLogger.logMessage(
          new TreeContentMessage("No ego vehicle defined", ErrorLevel.ERROR, new BaseTreeContext(object)
          {
          }));
    }
    
  }
}
