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
 
package net.asam.openscenario.v1_0.parameter;

import java.util.Hashtable;
import java.util.List;
import java.util.Set;
import java.util.Stack;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parameter.IParameterizedObject;
import net.asam.openscenario.parameter.ParameterValue;
import net.asam.openscenario.v1_0.api.ICatalogElement;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;

/**
 * Resolves all parameter of a parameterized object
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public class ParameterResolver {

	private Stack<Hashtable<String, ParameterValue>> parameterValueSets = new Stack<Hashtable<String, ParameterValue>>();

	/**
	 * Resolves all parameters of a parameterized object.
	 * @param logger to log messages
	 * @param parameterizedObject the parameterized object
	 * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
	 */
	private void resolveInternal(IParserMessageLogger logger,
			IParameterizedObject parameterizedObject, boolean logUnresolvableParameter ) {
		Set<String> attributeKeys = parameterizedObject
				.getParameterizedAttributeKeys();

		for (String attributeKey : attributeKeys) {
			String parameterName = parameterizedObject
					.getParameterNameFromAttribute(attributeKey);
			String value = findValue(
					parameterizedObject.getTypeFromAttributeName(attributeKey),
					parameterName);
			
			if (value != null) {
				parameterizedObject.resolveParameter(logger, attributeKey,
						value);
			} else {
				if (logUnresolvableParameter)
				{
					logger.logMessage(new FileContentMessage(
						"Cannot resolve parameter '" + parameterName + "'",
						ErrorLevel.ERROR,
						parameterizedObject.getTextmarker(attributeKey)));
				}
			}
		}
	}

	
	/**
	 * Find a parameter value by its parameter name and type
	 * @param expectedParameterType expected type
	 * @param parameterName  name of the parameter the value is looked up
	 * @return the string representation of the value.
	 */
	public String findValue(Class<?> expectedParameterType, String parameterName) {
		// Search from the top of the stack (which is the end of the underlying
		// list)
		for (int i = parameterValueSets.size() - 1; i >= 0; i--) {
			Hashtable<String, ParameterValue> parameterNameToParameterValue = parameterValueSets
					.get(i);
			ParameterValue paramValue = parameterNameToParameterValue
					.get(parameterName);
			if (paramValue != null
					&& paramValue.getType().equals(expectedParameterType)) {
				return paramValue.getValue();
			}
		}
		return null;
	}

	/**
	 * Pushes a parameter value set on the stack. Implementing scopes of values.
	 * The values are always looked up in the head of the stack first.
	 * @param parameterValues set of parameter values
	 */
	public void pushParameterValueSet(List<ParameterValue> parameterValues) {
		Hashtable<String, ParameterValue> table = new Hashtable<String, ParameterValue>();
		for (ParameterValue parameterValue : parameterValues) {
			table.put(parameterValue.getName(), parameterValue);

		}
		parameterValueSets.push(table);

	}

	/**
	 * Remove the head of the stack
	 */
	public void popParameterValueSet() {

		parameterValueSets.pop();
	}

	/**
	 * 
	 * @param logger logger to log messages
	 * @param baseImpl instance of BaseImpl for which the parameters should be resolved.
	 * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
	 */
	public void resolve(IParserMessageLogger logger, BaseImpl baseImpl, boolean logUnresolvableParameter) {
		boolean hasParameterDefinitions = baseImpl.hasParameterDefinitions();
		if (hasParameterDefinitions) {
			pushParameterValueSet(baseImpl.getParameterDefinitions());
		}

		resolveInternal(logger, baseImpl,logUnresolvableParameter);
		List<BaseImpl> children = baseImpl.getChildren();
		if (baseImpl instanceof CatalogReferenceImpl)
		{
			ICatalogElement referencedCatalogElement = ((CatalogReferenceImpl)baseImpl).getRef();
			if (referencedCatalogElement != null)
			{
				children.add((BaseImpl)referencedCatalogElement);
			}
			
		}
		if (children != null) {
			for (BaseImpl child : children) {
				resolve(logger, child, logUnresolvableParameter);
			}
		}

		if (hasParameterDefinitions) {
			popParameterValueSet();
		}

	}
	/**
	 * Resolve all parameters with parameter assignments, instead of parameter definitions
	 * @param logger to log messages
	 * @param catalogElement a catalogElement the parameters will be resolved.
	 * @param parameterAssignments the parameter assignments that provide the parameter names and values
	 */
	public void resolveWithParameterAssignments(IParserMessageLogger logger,
			ICatalogElement catalogElement,
			Hashtable<String, String> parameterAssignments) {
		BaseImpl baseImpl = (BaseImpl) catalogElement;

		boolean hasParameterDefinitions = baseImpl.hasParameterDefinitions();
		if (hasParameterDefinitions) {
			List<ParameterValue> parameterDefinitions = baseImpl
					.getParameterDefinitions();
			for (ParameterValue parameterValue : parameterDefinitions) {
				String value = parameterAssignments.get(parameterValue.getName());
				if (value != null) {
					// override the definition's default value with the 
					parameterValue.setValue(value);

				}
			}
			pushParameterValueSet(parameterDefinitions);
		}

		resolveInternal(logger, baseImpl, false);
		List<BaseImpl> children = baseImpl.getChildren();
		if (children != null) {
			for (BaseImpl child : children) {
				resolve(logger, child, false);
			}
		}

		if (hasParameterDefinitions) {
			popParameterValueSet();
		}

	}
}
