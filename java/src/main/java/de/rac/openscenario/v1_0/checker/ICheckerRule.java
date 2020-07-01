package de.rac.openscenario.v1_0.checker;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;

/**
 * This represents a rule that can be applied to any model object instance.
 * It implements the command pattern. The rule is added to the type and applyRule 
 * is executed when the object has been filled.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface ICheckerRule<T> {
	public void applyRule(IParserMessageLogger messageLoger, T object);
}
