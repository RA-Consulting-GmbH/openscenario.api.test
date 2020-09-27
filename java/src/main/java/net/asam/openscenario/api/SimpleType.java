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
package net.asam.openscenario.api;

/**
 * <p>Values for primitive types or a genereral enum type:
 *
 * <ul>
 *   <li>integer.
 *   <li>double.
 *   <li>String.
 *   <li>unsignedInt.
 *   <li>unsignedShort.
 *   <li>boolean.
 *   <li>dateTime.
 *   <li>enumType
 * </ul>
 * @author Andreas Hege - RA Consulting
 */
public enum SimpleType {
  INT,
  DOUBLE,
  STRING,
  UNSIGNED_INT,
  UNSIGNED_SHORT,
  BOOLEAN,
  DATE_TIME,
  ENUM_TYPE;

}
