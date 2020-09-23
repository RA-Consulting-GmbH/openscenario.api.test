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

import java.io.File;
import java.io.IOException;

import com.fasterxml.jackson.core.JsonLocation;
import com.fasterxml.jackson.core.JsonParseException;
import com.fasterxml.jackson.databind.JsonMappingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.fasterxml.jackson.dataformat.yaml.YAMLFactory;

/**
 * Reading the Configuration from a yaml file.
 *
 * @author Andreas Hege - RA Consulting
 */
public class CiCheckerConfigurationReader {
  
  /**
   * Reading a configuration from a yaml file
   * @param configurationFileName the name of the configuration file to load
   * @return the configuration read from file
   * @throws CiConfigurationException if an exception (JsonParseException, JsonMappingException,IOException) occurs
   */
  public CiCheckerConfiguration readConfiguration(String configurationFileName) throws CiConfigurationException
  {
    CiCheckerConfiguration result = null;
    ObjectMapper objectManager = new ObjectMapper(new YAMLFactory());
    // Check the constraints
    try {
       result = objectManager.readValue(new File(configurationFileName), CiCheckerConfiguration.class);
       if (result.getParameterMap() == null)
       {
         result.initParameterMap();
       }
    } catch (JsonParseException e) {
      JsonLocation location = e.getLocation();
      throw new CiConfigurationException(String.format("Parsing error in configuration file at (%d,%d)", location.getLineNr(), location.getColumnNr()));     
    } catch (JsonMappingException e) {
      JsonLocation location = e.getLocation();
      throw new CiConfigurationException(String.format("Mapping error in configuration file. Check value or name at (%d,%d)", location.getLineNr(), location.getColumnNr()));
    } catch (IOException e) {
      throw new CiConfigurationException(String.format("Cannot read configuration file '%s'.", configurationFileName));
    }
    
    return result;
  }

}
