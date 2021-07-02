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
package de.rac.openscenario.generator.java;

public class JavaDocHelper {
	private static int lineLength = 120;

	public static List formatString(String unformattedString)
	{
		if (unformattedString == null)
		{
			return [];
		}
		if (unformattedString.isEmpty())
		{
			return [""]
		}
		List splittedString = splitWords(unformattedString);
		List result = [];
		splittedString.each{ String part ->
			result.add(part);
		}
		return result;
	}
	
	public static List splitWords(String unformattedString)
	{
		unformattedString = unformattedString.trim();
		def matcher = unformattedString =~ /(\S+)(\s*)/
		List words = []
		while(matcher.find())
		{
			words.add(matcher.group(1))
			if (matcher.group(2))
			{
				words.add(matcher.group(2))
			}
		}
		// Make lines from word
		int counter = 0;
		String line = "";
		List lines = []
		words.each{String word->
			if (counter + word.length()>lineLength)
			{
				lines.add(line);
				if (word =~ /\s+/)
				{
					line = "";
					counter = 0
				}else
				{
					line = word;
					counter = word.length()
				}
				
			}else
			{
				line += word;
				counter += word.length();
			}
			
		}
		if (line != "")
		{
			lines.add(line);
		}
		return lines;
		
	}
	public  static String makeClassComment(List textLines, String author, String indent = "")
	{
		List result = [];
		result.addAll(textLines)
		if (author)
		{
			result.add("" )
			result.add("@author ${author}" )
		}
		return makeComment(result, indent);
	}
	
	public static String makeComment(List textLines,String indent = "")
	{
		StringBuffer buffer = new StringBuffer();
		buffer.append("${indent}/**\n")
		textLines.each { String  line ->
			List multiLines = formatString(line)
			multiLines.each{ String multiLine ->
				buffer.append("${indent} * ${multiLine}\n")
			}
		}
		buffer.append("${indent}*/")
		return buffer.toString();
	}
	
	
	public  static String makeGeneratedClassComment(List textLines, String openScenarioVersion, String indent = "")
	{
		if (!textLines)
		{
			textLines = [];
		}
		textLines.add(0, "This is a automatic generated file according to the OpenSCENARIO specification version ${openScenarioVersion}\n")
		return makeClassComment(textLines, "RA Consulting OpenSCENARIO generation facility", indent);
	}
	
	public static String makePropertyKey(umlClass, property)
	{
		return umlClass.name.toClassName() + "." + property.name.toMemberName();
	}
}
