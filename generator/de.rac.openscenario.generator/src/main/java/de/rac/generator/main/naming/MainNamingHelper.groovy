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
package de.rac.generator.main.naming

import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import de.rac.generator.basic.Memoizer;

class MainNamingHelper {

	// Generator standard vocabulary
	public static final String LIST_SUFFIX = "List";

	static void init(){
		Memoizer.doInit(MainNamingHelper.class, java.lang.String.class)
	}

	public static String toClassName(String modelName) {
		if (modelName == null) {
			return null;
		}
		return toFirstUpper(modelName);
		modelName = toMemberName(modelName);

		Pattern p = Pattern.compile("([a-z])");
		Matcher m = p.matcher(modelName);

		StringBuffer sb = new StringBuffer();

		if (m.find()) {
			m.appendReplacement(sb, m.group(1).toUpperCase());
		}

		m.appendTail(sb);

		return sb.toString();
	}

	public  static String toMemberName(String dbName) {
		if (dbName == null) {
			return null;
		}
		return toFirstLower(dbName);
		String result = dbName.toLowerCase();
		Pattern p = Pattern.compile("-([a-z])");
		Matcher m = p.matcher(result);
		StringBuffer sb = new StringBuffer();

		while (m.find()) {
			m.appendReplacement(sb, m.group(1).toUpperCase());
		}

		m.appendTail(sb);

		return sb.toString();
	}

	public static  String toFirstLower(String name) {
		return name.substring(0,1).toLowerCase() + name.substring(1);
	}
	public static  String toFirstUpper(String name) {
		if (name != null && name.length()>0)
			return name.substring(0,1).toUpperCase() + name.substring(1);
		else
			return name;
	}

	public  static String toCEnumName(String dbName) {
		if (dbName == null) {
			return null;
		}

		return "e_" + toCMemberName(dbName);
	}

	public static String toInterfaceName(String modelName) {
		return "I"+modelName;
	}

	public  static String toCMemberName(String dbName) {
		if (dbName == null) {
			return null;
		}

		return dbName.toLowerCase().replaceAll("-", "_");
	}

	public  static String toCStructName(String dbName) {
		if (dbName == null) {
			return null;
		}

		return "t_" + toCMemberName(dbName);
	}

	public static String toUpperNameFromMemberName(String javaName) {
		if (javaName == null) {
			return null;
		}

		// When there are consecutive capital letters, leave them: z.B. URI -> URI not U_R_I

		Pattern p = Pattern.compile("([A-Z]+)");
		Matcher m = p.matcher(javaName);
		StringBuffer sb = new StringBuffer();

		while (m.find()) {
			m.appendReplacement(sb, "_" + m.group(1));
		}

		m.appendTail(sb);

		String upperResult = sb.toString().toUpperCase();
		return upperResult.charAt(0) == '_'? upperResult.substring(1): upperResult;
	}

	public static String toUpperName(String modelName) {
		if (modelName == null) {
			return null;
		}

		return modelName.toUpperCase().replaceAll("-", "_");
	}

	public static String toPackage(String dir) {
		return dir.replaceAll("/", ".");
	}

	public static  String toDir(String dir) {
		return dir.replaceAll("\\.", "/");
	}

	public static String addPluralToClassName(String className) {
		return className + "s";
	}

	public final static String toUnderscore(String s)
	{
		// We do not allow "_" in any names. Hence, numbers having a "_" prefix
		// loose their prefix.
		StringBuffer underscoreString = new StringBuffer();
		char[] inputChars = s.trim().toCharArray();
		boolean first = true;
		for (int i = 0; i < inputChars.length; ++i)
		{
			char c = inputChars[i];
			if (Character.isUpperCase(c) && !first)
				underscoreString.append("_").append(c); //$NON-NLS-1$
			else
				underscoreString.append(c);

			first = false;
		}

		return underscoreString.toString().toUpperCase();
	}
}

