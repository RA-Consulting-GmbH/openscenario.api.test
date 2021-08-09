/**
 * 
 */
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
 package de.rac.openscenario.generator;

import groovy.json.JsonSlurper

/**
 * @author ahege
 *
 */
public class GeneratorHelper {

  
   
  public static Map getRangeCheckerRules(String rangeCheckerRulesFile)
  {
	def classLoader = GeneratorHelper.getClassLoader()
	InputStream stream = classLoader.getResourceAsStream(rangeCheckerRulesFile)
    def jsonSlurper = new JsonSlurper()
    return jsonSlurper.parse(new InputStreamReader(stream))
  }

 

  public static void removeDirectory(File dir) {
    if (dir.isDirectory()) {
      File[] files = dir.listFiles();
      if (files != null && files.length > 0) {
        for (File aFile : files) {
          removeDirectory(aFile);
        }
      }
      dir.delete();
    } else {
      dir.delete();
    }
  }
  public static void removeSubDirectories(File dir) {
    if (dir.isDirectory()) {
      File[] files = dir.listFiles();
      if (files != null && files.length > 0) {
        for (File aFile : files) {
          removeDirectory(aFile);
        }
      }
    }
  }
}
