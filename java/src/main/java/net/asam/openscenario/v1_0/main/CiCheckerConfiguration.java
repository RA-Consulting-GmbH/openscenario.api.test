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
package net.asam.openscenario.v1_0.main;

import java.util.Hashtable;
import java.util.List;
import java.util.Map;

/**
 * Configuration for applying a checker to a continuous integration environment
 *
 * @author Andreas Hege - RA Consulting
 */
public class CiCheckerConfiguration {

  private List<String> suffixList;
  private List<String> directoryList;
  private Map<String, String> parameterMap;
  private String checkerRuleFactoryClassName;
  private boolean handleWarningsAsErrors = false;
  /**
   * Constructor
   *
   * @param suffixList list of suffixes to be checked (in the format ["xosc", osc"])
   * @param directoryList list of directories to be checked
   * @param parameterMap parameter map for injected parameters (name, value in string format)
   * @param checkerRuleFactoryClassName The name of the IScenarioCheckerFactory class that is
   *     additionally applied during the check.
   * @param handleWarningsAsErrors Indicates whether warnings are handled as errors.
   */
  public CiCheckerConfiguration(
      List<String> suffixList,
      List<String> directoryList,
      Map<String, String> parameterMap,
      String checkerRuleFactoryClassName,
      boolean handleWarningsAsErrors) {
    super();
    this.suffixList = suffixList;
    this.directoryList = directoryList;
    this.parameterMap = parameterMap;
    this.checkerRuleFactoryClassName = checkerRuleFactoryClassName;
    this.handleWarningsAsErrors = handleWarningsAsErrors;
  }
  /** Default Constructor */
  public CiCheckerConfiguration() {}

  /**
   * Returns the list of suffixes to be checked. If empty every file will be checked.
   *
   * @return the suffixList
   */
  public List<String> getSuffixList() {
    return this.suffixList;
  }
  /**
   * the directories to be checked
   *
   * @return the directoryList
   */
  public List<String> getDirectoryList() {
    return this.directoryList;
  }
  /**
   * The injected paramters
   *
   * @return the parameterMap
   */
  public Map<String, String> getParameterMap() {
    return this.parameterMap;
  }
  /**
   * The name of the IScenarioCheckerFactory class that is additionally applied during the check.
   *
   * @return the checkerRuleFactoryClassName
   */
  public String getCheckerRuleFactoryClassName() {
    return this.checkerRuleFactoryClassName;
  }

  /** Sets the parameters to an empty list */
  public void initParameterMap() {
    this.parameterMap = new Hashtable<>();
  }
  /**
   * Specifies whether a Warning is handled as an error
   *
   * @return the handleWarningsAsErrors
   */
  public boolean isHandleWarningsAsErrors() {
    return this.handleWarningsAsErrors;
  }
}
