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

/** */
package net.asam.openscenario.v1_0.checker;

import java.util.ArrayList;
import java.util.List;

import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.checker.tree.PropertyTreeContext;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.TreeContentMessage;
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * A checker rule for checking the version of the standard within a OpenSCENARIO file.
 *
 * @author Andreas Hege - RA Consulting
 */
public class VersionCheckerRule implements ICheckerRule<IFileHeader> {
  private int majorRev;
  private int minorRev;

  /**
   * @param majorRev The expected major revision
   * @param minorRev The expected minor revision
   */
  public VersionCheckerRule(int majorRev, int minorRev) {
    super();
    this.majorRev = majorRev;
    this.minorRev = minorRev;
  }

  @Override
  public void applyRuleInFileContext(IParserMessageLogger messageLogger, IFileHeader object) {
    if (!isRevValid(object)) {
      ILocator locator = (ILocator) object.getAdapter(ILocator.class);
      Textmarker textmarker = null;

      if (locator != null) {
        textmarker = locator.getStartMarker();
      }
      messageLogger.logMessage(
          new FileContentMessage(
              getMessage(),
              ErrorLevel.WARNING,
              textmarker));
    }
  }

  private boolean isRevValid(IFileHeader object)
  {
    Integer revMajor = object.getRevMajor();
    Integer revMinor = object.getRevMinor();
    return (revMajor != null
        && revMinor != null
        && revMajor.intValue() == this.majorRev
        && revMinor.intValue() == this.minorRev);
  }
  
  @Override
  public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, IFileHeader object)
  {
    if (!isRevValid(object)) {
      List<String> propertyNames = new ArrayList<>();
      propertyNames.add(OscConstants.ATTRIBUTE__REV_MINOR);
      propertyNames.add(OscConstants.ATTRIBUTE__REV_MAJOR);
      messageLogger.logMessage(
          new TreeContentMessage(
              getMessage(),
              ErrorLevel.WARNING,
              new PropertyTreeContext(object, propertyNames)));
    }
    
  }

  /**
   * @return
   */
  private String getMessage()
  {
    return "Major revision and minor revision are expected to be "
        + this.majorRev
        + " and "
        + this.minorRev;
  }
}
