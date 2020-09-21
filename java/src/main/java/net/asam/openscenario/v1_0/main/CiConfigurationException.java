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

/**
 * Exception that generalizes the yaml and the IO Exceptions when reading a configuration
 *
 * @author Andreas Hege - RA Consulting
 */
public class CiConfigurationException extends Exception {
  /** Serial ID, default */
  private static final long serialVersionUID = 1L;

  /** Constructor 
   * @param message The message of the exception*/
  public CiConfigurationException(String message) {
    super(message);
  }
}
