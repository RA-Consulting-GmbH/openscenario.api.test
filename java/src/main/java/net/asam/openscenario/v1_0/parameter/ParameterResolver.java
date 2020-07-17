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
import java.util.Map;
import java.util.Set;
import java.util.Stack;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parameter.IParameterizedObject;
import net.asam.openscenario.parameter.ParameterValue;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.ICatalogElement;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IScenarioDefinition;
import net.asam.openscenario.v1_0.api.ParameterType;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;

/**
 * Resolves all parameter of a parameterized object
 *
 * @author Andreas Hege - RA Consulting
 */
public class ParameterResolver {

  private Stack<Hashtable<String, ParameterValue>> parameterValueSets =
      new Stack<Hashtable<String, ParameterValue>>();

  /**
   * Resolves all parameters of a parameterized object.
   *
   * @param logger to log messages
   * @param parameterizedObject the parameterized object
   * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
   */
  private void resolveInternal(
      IParserMessageLogger logger,
      IParameterizedObject parameterizedObject,
      boolean logUnresolvableParameter) {
    Set<String> attributeKeys = parameterizedObject.getParameterizedAttributeKeys();

    for (String attributeKey : attributeKeys) {
      String parameterName = parameterizedObject.getParameterNameFromAttribute(attributeKey);
      String value =
          findValue(parameterizedObject.getTypeFromAttributeName(attributeKey), parameterName);

      if (value != null) {
        parameterizedObject.resolveParameter(logger, attributeKey, value);
      } else {
        if (logUnresolvableParameter) {
          logger.logMessage(
              new FileContentMessage(
                  "Cannot resolve parameter '" + parameterName + "'",
                  ErrorLevel.ERROR,
                  parameterizedObject.getTextmarker(attributeKey)));
        }
      }
    }
  }

  /**
   * Find a parameter value by its parameter name and type
   *
   * @param expectedParameterType expected type
   * @param parameterName name of the parameter the value is looked up
   * @return the string representation of the value.
   */
  public String findValue(Class<?> expectedParameterType, String parameterName) {
    // Search from the top of the stack (which is the end of the underlying
    // list)
    for (int i = parameterValueSets.size() - 1; i >= 0; i--) {
      Hashtable<String, ParameterValue> parameterNameToParameterValue = parameterValueSets.get(i);
      ParameterValue paramValue = parameterNameToParameterValue.get(parameterName);
      if (paramValue != null && paramValue.getType().equals(expectedParameterType)) {
        return paramValue.getValue();
      }
    }
    return null;
  }

  /**
   * Pushes a parameter value set on the stack. Implementing scopes of values. The values are always
   * looked up in the head of the stack first.
   *
   * @param parameterValues set of parameter values
   */
  public void pushParameterValueSet(List<ParameterValue> parameterValues) {
    Hashtable<String, ParameterValue> table = new Hashtable<String, ParameterValue>();
    for (ParameterValue parameterValue : parameterValues) {
      table.put(parameterValue.getName(), parameterValue);
    }
    parameterValueSets.push(table);
  }

  /** Remove the head of the stack */
  public void popParameterValueSet() {

    parameterValueSets.pop();
  }

  /**
   * @param logger logger to log messages
   * @param baseImpl instance of BaseImpl for which the parameters should be resolved.
   * @param injectedParameters name value pairs injected from outside
   * @param logUnresolvableParameter a flag whether unresolvable parameters should be logged.
   */
  public void resolve(
      IParserMessageLogger logger,
      BaseImpl baseImpl,
      Map<String, String> injectedParameters,
      boolean logUnresolvableParameter) {
    boolean hasParameterDefinitions = baseImpl.hasParameterDefinitions();
    if (hasParameterDefinitions) {
      List<ParameterValue> parameterDefinitions = baseImpl.getParameterDefinitions();
      if (injectedParameters != null
          && !injectedParameters.isEmpty()
          && baseImpl instanceof IScenarioDefinition) {
        // override parameter values with injected parameters
        overrideGlobalParametersWithInjectedParameters(
            parameterDefinitions, logger, injectedParameters, (IScenarioDefinition) baseImpl);
      }
      pushParameterValueSet(parameterDefinitions);
    }

    resolveInternal(logger, baseImpl, logUnresolvableParameter);
    List<BaseImpl> children = baseImpl.getChildren();
    if (baseImpl instanceof CatalogReferenceImpl) {
      ICatalogElement referencedCatalogElement = ((CatalogReferenceImpl) baseImpl).getRef();
      if (referencedCatalogElement != null) {
        children.add((BaseImpl) referencedCatalogElement);
      }
    }
    if (children != null) {
      for (BaseImpl child : children) {
        resolve(
            logger,
            child,
            baseImpl instanceof IScenarioDefinition ? null : injectedParameters,
            logUnresolvableParameter);
      }
    }

    if (hasParameterDefinitions) {
      popParameterValueSet();
    }
  }

  /**
   * Checks the data type and overrides the values in the parametervalues.
   *
   * @param parameterDefinitions the parameter values to override
   * @param logger the logger to pick up the errors and warnings
   * @param injectedParameters the injected parameters
   * @param scenarioDefinition the scenario definition with the global parameter declarations
   */
  private void overrideGlobalParametersWithInjectedParameters(
      List<ParameterValue> parameterDefinitions,
      IParserMessageLogger logger,
      Map<String, String> injectedParameters,
      IScenarioDefinition scenarioDefinition) {
    Set<String> notUsedInjectedParameters = injectedParameters.keySet();
    List<IParameterDeclaration> parameterDeclarations =
        scenarioDefinition.getParameterDeclarations();
    Textmarker textmarker = null;
    ILocator locator = (ILocator) scenarioDefinition.getAdapter(ILocator.class);
    if (locator != null) {
      textmarker = locator.getStartMarker();
    }

    if (parameterDeclarations != null) {
      for (IParameterDeclaration parameterDeclaration : parameterDeclarations) {
        String name = parameterDeclaration.getName();
        String injectedValue = injectedParameters.get(name);
        if (injectedValue != null) {
          ParameterType typeName = parameterDeclaration.getParameterType();
          try {
            notUsedInjectedParameters.remove(name);
            if (typeName == ParameterType.UNSIGNED_INT) {
              ParserHelper.validateUnsignedInt(injectedValue);

            } else if (typeName == ParameterType.INTEGER) {
              ParserHelper.validateInt(injectedValue);

            } else if (typeName == ParameterType.UNSIGNED_SHORT) {
              ParserHelper.validateUnsignedShort(injectedValue);
            } else if (typeName == ParameterType.DATE_TIME) {
              ParserHelper.validateDateTime(injectedValue);
            } else if (typeName == ParameterType.BOOLEAN) {
              ParserHelper.validateBoolean(injectedValue);
            } else if (typeName == ParameterType.DOUBLE) {
              ParserHelper.validateDouble(injectedValue);
            }
            overrideValue(parameterDefinitions, name, injectedValue);
          } catch (Exception e) {
            logger.logMessage(
                new FileContentMessage(
                    "Injected parameter '"
                        + name
                        + "': "
                        + e.getMessage()
                        + " Injected parameter is ignored.",
                    ErrorLevel.ERROR,
                    textmarker));
          }
        }
      }
    }
    // Now, only the injected paramters are in the set that are not declared in
    // the global parameters.
    for (String name : notUsedInjectedParameters) {
      logger.logMessage(
          new FileContentMessage(
              "Injected parameter '"
                  + name
                  + "' must be declared as a global parameter. Injected parameter is ignored.",
              ErrorLevel.WARNING,
              textmarker));
    }
  }

  /**
   * Overrides the value of a paramterValue in a List of paramter values
   *
   * @param paramterValues list of parameter values.
   * @param name name of the parameter to override
   * @param value value of the parameter to override
   */
  private void overrideValue(List<ParameterValue> paramterValues, String name, String value) {
    for (ParameterValue parameterValue : paramterValues) {
      if (parameterValue.getName().contentEquals(name)) {
        parameterValue.setValue(value);
        break;
      }
    }
  }

  /**
   * Resolve all parameters with parameter assignments, instead of parameter definitions
   *
   * @param logger to log messages
   * @param catalogElement a catalogElement the parameters will be resolved.
   * @param parameterAssignments the parameter assignments that provide the parameter names and
   *     values
   */
  public void resolveWithParameterAssignments(
      IParserMessageLogger logger,
      ICatalogElement catalogElement,
      Hashtable<String, String> parameterAssignments) {
    BaseImpl baseImpl = (BaseImpl) catalogElement;

    boolean hasParameterDefinitions = baseImpl.hasParameterDefinitions();
    if (hasParameterDefinitions) {
      List<ParameterValue> parameterDefinitions = baseImpl.getParameterDefinitions();
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
        resolve(logger, child, null, false);
      }
    }

    if (hasParameterDefinitions) {
      popParameterValueSet();
    }
  }
}
