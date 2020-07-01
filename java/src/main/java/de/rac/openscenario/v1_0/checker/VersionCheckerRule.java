/**
 * 
 */
package de.rac.openscenario.v1_0.checker;

import de.rac.openscenario.v1_0.api.IFileHeader;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;

/**
 * @author ahege
 *
 */
public class VersionCheckerRule implements ICheckerRule<IFileHeader>
{
  private int majorRev;
  private int minorRev;
  
  

  /**
   * @param majorRev
   * @param minorRev
   */
  public VersionCheckerRule(int majorRev, int minorRev)
  {
    super();
    this.majorRev = majorRev;
    this.minorRev = minorRev;
  }



  @Override
  public void applyRule(IParserMessageLogger messageLogger, IFileHeader object)
  {
    Integer revMajor = object.getRevMajor();
    Integer revMinor = object.getRevMinor();
    if (revMajor == null  || revMinor == null || revMajor.intValue() != majorRev || revMinor.intValue() != minorRev)
    {
      ILocator locator = (ILocator) object.getAdapter(ILocator.class);
      Textmarker textmarker = null;
      
      if (locator != null)
      {
          textmarker = locator.getStartMarker();
          
      }
      messageLogger.logMessage(new FileContentMessage( "Major revision and minor revision are expected to be "+majorRev+" and "+minorRev , ErrorLevel.WARNING, textmarker));

    }
    
  }

}
