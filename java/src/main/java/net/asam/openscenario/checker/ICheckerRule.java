

package net.asam.openscenario.checker;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;

/**
 * This represents a rule that can be applied to any model object instance. It implements the
 * command pattern. The rule is added to the type and applyRule is executed during runtime for every
 * instance of a specific type.
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> An object type that is validated
 */
public interface ICheckerRule<T extends IOpenScenarioModelElement> {
  /**
   * Applies validation to a specific type in the context of a file.
   *
   * @param messageLogger logger to pick up the violations
   * @param object the object to validate
   */
  public void applyRuleInFileContext(IParserMessageLogger messageLogger, T object);
  /**
   * Applies validation to a specific type in the context of a tree.
   *
   * @param messageLogger logger to pick up the violations
   * @param object the object to validate
   */
  public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, T object);
  
 

}
