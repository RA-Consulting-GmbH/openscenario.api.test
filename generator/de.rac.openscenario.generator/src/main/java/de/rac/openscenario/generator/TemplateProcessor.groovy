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
package de.rac.openscenario.generator


import groovy.text.Template
import de.rac.generator.basic.CommonTemplateProcessor

class TemplateProcessor {
  
    public static final String CPP = "cpp";
	public static final String JSON = "json";

    private String type;
	private String version;
	
    TemplateProcessor(String type, String version)
    {
      assert(type.equals(CPP) || type.equals(JSON))
      assert(version.equals("v1_0") || version.equals("v1_1") || version.equals("v1_2") || version.equals("v1_3"))
      this.type = type;
	  this.version = version;
    }

	def Template getTemplate(String templateName) {
		def classLoader = TemplateProcessor.getClassLoader()
		InputStream stream = classLoader.getResourceAsStream("templates/${type}/${version}/${templateName}.tpl")
		return CommonTemplateProcessor.getTplTemplate(stream, "\n");
	}
}