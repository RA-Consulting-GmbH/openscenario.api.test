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

import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.checker.ITreeValidationRule;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.TreeContentMessage;
import net.asam.openscenario.v1_0.api.IFileHeader;

/**
 * A checker rule for checking the version of the standard within a OpenSCENARIO file.
 *
 * @author Andreas Hege - RA Consulting
 */
public class VersionCheckerRule implements ICheckerRule<IFileHeader>,ITreeValidationRule<IFileHeader> {
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
  public void applyRule(IParserMessageLogger messageLogger, IFileHeader object) {
    if (!validateVersions(object)) {
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
  private boolean validateVersions(IFileHeader object)
  {
    Integer revMajor = object.getRevMajor();
    Integer revMinor = object.getRevMinor();
    return revMajor != null
        && revMinor != null
        && revMajor.intValue() == this.majorRev
        && revMinor.intValue() == this.minorRev;
  }

  @Override
  public void applyTreeValidationRule(IParserMessageLogger messageLogger, IFileHeader object)
  {
    if (!validateVersions(object)) {
      messageLogger.logMessage(new TreeContentMessage(ErrorLevel.WARNING,object, getMessage()));
    }
    
  }

  
}
