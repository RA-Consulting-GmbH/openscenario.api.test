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
package net.asam.openscenario.checker;

import java.util.ArrayList;
import java.util.List;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;

/**
 * This class implements the composite pattern for ICheckerRule
 * @author Andreas Hege - RA Consulting
 * @param <T> The type to check.
 *
 */
public class CheckerRuleComposite<T extends IOpenScenarioModelElement> implements ICheckerRule<T>
{
  protected List<ICheckerRule<T>> checkerRules = new ArrayList<>();
  

  @Override
  public void applyRuleInFileContext(IParserMessageLogger messageLogger, T object)
  {
    for (ICheckerRule<T> checkerRule : this.checkerRules)
    {
      checkerRule.applyRuleInFileContext(messageLogger, object);
    }
    
  }

  @Override
  public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, T object)
  {
    for (ICheckerRule<T> checkerRule : this.checkerRules)
    {
      checkerRule.applyRuleInTreeContext(messageLogger, object);
    }
    
  }

  
}
