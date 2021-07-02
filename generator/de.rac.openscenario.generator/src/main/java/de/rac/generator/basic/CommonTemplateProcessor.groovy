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
package de.rac.generator.basic

import java.security.MessageDigest

import org.apache.log4j.Logger;

import groovy.text.Template;


/**
 * Caution: The String Class must be extended by toDir
 * 
 **/

class CommonTemplateProcessor {

    static Logger logger = org.apache.log4j.Logger.getLogger(CommonTemplateProcessor.class);




    public static toDir(String namespaceName) {
        if (String.class.metaClass."toDir") {
            return namespaceName.toDir();
        }
        return namespaceName;
    }
   

    // gets a processor with the specified beautifier and save saver
    public static Closure getProcessor (){
        return { File outputDirectory, String namespaceName, String filename, Closure c ->

            def completeDirectory =  outputDirectory;
            if (namespaceName) {
                completeDirectory = new File(outputDirectory,toDir(namespaceName));
            }

            // make the folders if they do not exist
            if (!completeDirectory.exists())
            {
                completeDirectory.mkdirs();
            }

            String text = c.call();

            File f = new File(completeDirectory,filename);
            FileOutputStream outStream = new FileOutputStream(f);
            outStream.write(text.getBytes("UTF-8"));
        }
    }

    public static String getMD5(byte[] bytes)
    {
        MessageDigest md = MessageDigest.getInstance("MD5");
        byte[] array = md.digest(bytes);
        StringBuffer sb = new StringBuffer();
        for (int i = 0; i < array.length; ++i) {
            sb.append(Integer.toHexString((array[i] & 0xFF) | 0x100).substring(1,3));
        }
        return sb.toString();
    }

    public static Template getTplTemplate(InputStream stream, String eol)
    {
        def engine = new SimpleTemplateEngine2();

        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(stream));

        StringBuilder prepend = new StringBuilder();
        StringBuilder stringBuilder = new StringBuilder();
        String line = null;

        // adding facility for swallowing spaces
        // - "<%-" opens the code tag swallowing pre-spaces
        // - "-%>" closes the code tag swallowing pre-spaces
        // - "<%-%>" is equivalent to "<%- -%>" (swallows both pre- and post-spaces)

        // adding facility for indentation
        // - "ti()" increases indentation by 4
        // - "to()" decreases indentation by 4
        // - "ti(x)"/"to(x)" increases/decreases indentation by x
        // - "t()" writes the indentation
        // - "<%*"  opens the code tag and writes the indentation
        // - "<%*=" opens the code tag and writes the indentation, then writes the rest of the expression
        // - "<%-*" opens the code tag swallowing pre-spaces and writes the indentation
        // - "<%-*=" opens the code tag swallowing pre-spaces and writes the indentation, then writes the rest of the expression
        // - "<%+"  opens the code tag and increases the indentation
        // - "<%-+" opens the code tag swallowing pre-spaces and increases the indentation
        // - "+%>"  closes the code tag and decreases the indentation
        // - "+-%>" closes the code tag swallowing pre-spaces and decreases the indentation
        // - it is possible to use 1..4 "+" to increase/decrease indentation quickly
        prepend.append("import groovy.transform.*\r\n");
        prepend.append("@Field def tab = 0;\r\n");
        prepend.append("def t() { for (int i = 0; i < tab; i++) { print \" \"; } }\r\n");
        prepend.append("def ti() { tab += 4; }\r\n");
        prepend.append("def ti(amount) { tab += amount; }\r\n");
        prepend.append("def to() { tab -= 4; }\r\n");
        prepend.append("def to(amount) { tab -= amount; }\r\n");

        while ((line = bufferedReader.readLine()) != null) {
            line = line + eol;

            if (line.trim().startsWith("<%@") && line.trim().endsWith("@%>"))
            {
                // this is a prepend line
                // don't instrument it, just write it as-is in the prepend section
                line = (line =~ /<%@/).replaceAll("");
                line = (line =~ /@%>/).replaceAll("");

                prepend.append(line);

            } else {
                line = engine.instrumentIfNeeded(line);

                // NOTE! Only *VERY BASIC REGEXS* are supported when instrumenting!
                // (no parenthesis, no groups, '\s' is specially treated, etc)

                line = engine.replaceRegex (line , "<%-%>", "<%- -%>");

                line = engine.replaceRegex (line , "<%-%>", "<%- -%>"); // shortcut

                line = engine.replaceRegex (line , "<%\\*=", "<% t(); %><%=");
                line = engine.replaceRegex (line , "<%-\\*=", "<%- t(); %><%=");
                line = engine.replaceRegex (line , "<%\\*", "<% t(); ");
                line = engine.replaceRegex (line , "<%-\\*", "<%- t(); ");

                line = engine.replaceRegex (line , "<%\\+\\+\\+\\+", "<% ti(16); ");
                line = engine.replaceRegex (line , "<%\\+\\+\\+", "<% ti(12); ");
                line = engine.replaceRegex (line , "<%\\+\\+", "<% ti(8); ");
                line = engine.replaceRegex (line , "<%\\+", "<% ti(4); ");
                line = engine.replaceRegex (line , "<%-\\+\\+\\+\\+", "<%- ti(16); ");
                line = engine.replaceRegex (line , "<%-\\+\\+\\+", "<%- ti(12); ");
                line = engine.replaceRegex (line , "<%-\\+\\+", "<%- ti(8); ");
                line = engine.replaceRegex (line , "<%-\\+", "<%- ti(4); ");
                line = engine.replaceRegex (line , "\\+\\+\\+\\+%>", "; to(16); %>");
                line = engine.replaceRegex (line , "\\+\\+\\+%>", "; to(12); %>");
                line = engine.replaceRegex (line , "\\+\\+%>", "; to(8); %>");
                line = engine.replaceRegex (line , "\\+%>", "; to(4); %>");
                line = engine.replaceRegex (line , "\\+\\+\\+\\+-%>", "; to(16); -%>");
                line = engine.replaceRegex (line , "\\+\\+\\+-%>", "; to(12); -%>");
                line = engine.replaceRegex (line , "\\+\\+-%>", "; to(8); -%>");
                line = engine.replaceRegex (line , "\\+-%>", "; to(4); -%>");

                line = engine.replaceRegex (line , "^\\s*<%-", "<%"); // deal with pre-spaces
                line = engine.replaceRegex (line , "-%>\\s*\$", "%>"); // deal with post-spaces

                line = engine.replaceRegex (line , "<%-", "<%"); // deal with non-needed pre-spaces
                line = engine.replaceRegex (line , "-%>", "%>"); // deal with non-needed post-spaces

                stringBuilder.append(line);
            }
        }

        engine.prepend = prepend;
        def template = engine.createTemplate(stringBuilder.toString());
        return template;
    }

    public static Closure getTemplateApplication(){
        return { Map binding, Template template, element->
            binding['element'] = element;
            return template.make(binding);
        }
    }

    static boolean clean(File dir, boolean deleteDir = false)
    {
        if (dir.isDirectory()) {
            String[] children = dir.list();
            for (int i=0; i<children.length; i++) {
                def fileToDelete = new File(dir, children[i]);
                if(!clean(fileToDelete, true))
                {
                    throw new Error("Cannot Delete directory " + fileToDelete.getAbsolutePath());
                }
            }
        }
        if (deleteDir)
        {
            return dir.delete();
        }else{
            return true;
        }
    }


}