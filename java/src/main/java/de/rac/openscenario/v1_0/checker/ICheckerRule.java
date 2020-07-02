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
