package de.rac.openscenario.v1_0.checker;

import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;

/**
 * An abstract implementation of ICheckerRule to check ranges of object's properties.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public abstract class RangeCheckerRule <T extends IOpenScenarioModelElement> implements ICheckerRule<T>{
	
	/**
	 * Constructor
	 */
	public RangeCheckerRule(){
		
	}

	/**
	 * Logging a range error violation
	 * @param object The object that is tested.
	 * @param messageLogger to log the message if violation is detected
	 * @param propertyName name of the property that is checked
	 * @param propertyValue the actual value of the property that was evaluated
	 * @param operator operator that was evaluated
	 * @param comparedValue the value the actual value is compared to.
	 * @param attributeKey the attribute key that is used to locate the violation.
	 */
	public void logMessage(IOpenScenarioModelElement object, IParserMessageLogger messageLogger, String propertyName, String propertyValue, String operator, String comparedValue, String attributeKey) 
	{
		
	 		ILocator locator = (ILocator) object.getAdapter(ILocator.class);
	 		Textmarker textmarker = null;
 			
	 		if (locator != null)
	 		{
	 			textmarker = locator.getStartMarkerOfProperty(attributeKey);
	 			
	 		}
	 		messageLogger.logMessage(new FileContentMessage(getMessage(propertyName, propertyValue, operator, comparedValue)  , ErrorLevel.ERROR, textmarker));
	 	
		
	}
	
	/**
	 * Logging a Range error message.
	 * @param propertyName name of the property
	 * @param propertyValue the actual value of the property that was evaluated
	 * @param operator operator that was evaluated
	 * @param comparedValue the value the actual value is compared to.
	 * @return the message
	 */
	private String getMessage(String propertyName, String propertyValue,
			String operator, String comparedValue) {
		return "Range error: Rule ("+propertyName+ operator + comparedValue + ") is violated (value: "+ propertyValue + ")";
	}
}
