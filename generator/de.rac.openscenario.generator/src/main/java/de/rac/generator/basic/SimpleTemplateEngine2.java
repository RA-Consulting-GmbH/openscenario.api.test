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
package de.rac.generator.basic;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.Reader;
import java.io.StringWriter;
import java.io.Writer;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import org.codehaus.groovy.control.CompilationFailedException;
import org.codehaus.groovy.runtime.InvokerHelper;

import groovy.lang.Binding;
import groovy.lang.GroovyRuntimeException;
import groovy.lang.GroovyShell;
import groovy.lang.Script;
import groovy.lang.Writable;
import groovy.text.Template;
import groovy.text.TemplateEngine;

/**
 * This work is based on:
 * groovy.text.SimpleTemplateEngine
 * 
 * https://github.com/groovy/groovy-core/blob/master/subprojects/groovy-templates/src/main/groovy/groovy/text/SimpleTemplateEngine.java
 * The file is published under http://www.apache.org/licenses/LICENSE-2.0
 * This class add advanced error handling to the original engine (lines, columns)
 */
public class SimpleTemplateEngine2 extends TemplateEngine
{
    private boolean verbose;

    private static int counter = 1;

    private GroovyShell groovyShell;

    public SimpleTemplateEngine2()
    {
        this(GroovyShell.class.getClassLoader());
    }

    public SimpleTemplateEngine2(boolean verbose)
    {
        this(GroovyShell.class.getClassLoader());
        setVerbose(verbose);
    }

    public SimpleTemplateEngine2(ClassLoader parentLoader)
    {
        this(new GroovyShell(parentLoader));
    }

    public SimpleTemplateEngine2(GroovyShell groovyShell)
    {
        this.groovyShell = groovyShell;
        this.m_doInstrument = true;
    }

    private boolean m_doInstrument;

    public boolean getDoInstrument()
    {
        return m_doInstrument;
    }

    public void setDoInstrument(boolean value)
    {
        m_doInstrument = value;
    }

    private String m_prepend;

    public String getPrepend()
    {
        return m_prepend;
    }

    public void setPrepend(String value)
    {
        m_prepend = value;
    }

    public Template createTemplate(Reader reader) throws CompilationFailedException, IOException
    {
        SimpleTemplate template = new SimpleTemplate(m_doInstrument);
        String script = m_prepend + template.parse(reader);
        if (verbose)
        {
            System.out.println("\n-- script source --");
            System.out.print(script);
            System.out.println("\n-- script end --\n");
        }
        try
        {
            template.script = groovyShell.parse(script, "SimpleTemplateScript" + counter++ + ".groovy");
        }
        catch (Exception e)
        {
            throw new GroovyRuntimeException(
                    "Failed to parse template script (your template may contain an error or be trying to use expressions not currently supported): "
                            + e.getMessage());
        }
        return template;
    }

    /**
     * @param verbose true if you want the engine to display the template source
     *            file for debugging purposes
     */
    public void setVerbose(boolean verbose)
    {
        this.verbose = verbose;
    }

    public boolean isVerbose()
    {
        return verbose;
    }

    private static class SimpleTemplate implements Template
    {

        private boolean m_doInstrument;

        public SimpleTemplate(boolean doInstrument)
        {
            m_doInstrument = doInstrument;
        }

        protected Script script;

        public Writable make()
        {
            return make(null);
        }

        public Writable make(final Map map)
        {
            return new Writable()
            {
                /**
                 * Write the template document with the set binding applied to
                 * the writer.
                 * 
                 * @see groovy.lang.Writable#writeTo(java.io.Writer)
                 */
                public Writer writeTo(Writer writer)
                {
                    Binding binding;
                    if (map == null)
                        binding = new Binding();
                    else
                        binding = new Binding(map);
                    Script scriptObject = InvokerHelper.createScript(script.getClass(), binding);
                    PrintWriter pw = new PrintWriter(writer);
                    scriptObject.setProperty("out", pw);
                    try
                    {
                        scriptObject.run();
                    }
                    catch (Throwable e)
                    {
                        if (m_doInstrument)
                        {
                            Error ee;
                            try
                            {
                                // try to give information (but include the cause, so we have the *full* stack trace!)
                                ee = new Error("Error in script (~ " + scriptObject.getProperty("____line____") + ":"
                                        + scriptObject.getProperty("____column____") + " , or in a method called there):"
                                        + e.getMessage(), e);
                            }
                            catch (Throwable b)
                            {
                                ee = new Error(e); // throw the original
                            }
                            throw ee;
                        }
                        else
                        {
                            throw new Error(e);
                        }
                    }
                    pw.flush();
                    return writer;
                }

                /**
                 * Convert the template and binding into a result String.
                 * 
                 * @see java.lang.Object#toString()
                 */
                public String toString()
                {
                    StringWriter sw = new StringWriter();
                    writeTo(sw);
                    return sw.toString();
                }
            };
        }

        /**
         * Parse the text document looking for <% or <%= and then call out to
         * the appropriate handler, otherwise copy the text directly
         * into the script while escaping quotes.
         * 
         * @param reader a reader for the template text
         * @return the parsed text
         * @throws IOException if something goes wrong
         */
        protected String parse(Reader reader) throws IOException
        {
            _line_ = 1;
            _column_ = 0;
            if (!reader.markSupported())
            {
                reader = new BufferedReader(reader);
            }
            StringWriter sw = new StringWriter();
            startScript(sw);
            int c;
            while ((c = myReaderRead(reader)) != -1)
            {
                if (c == '<')
                {
                    myReaderMark(reader);
                    c = myReaderRead(reader);
                    if (c != '%')
                    {
                        sw.write('<');
                        myReaderReset(reader);
                    }
                    else
                    {
                        myReaderMark(reader);
                        c = myReaderRead(reader);
                        if (c == '=')
                        {
                            groovyExpression(reader, sw);
                        }
                        else
                        {
                            myReaderReset(reader);
                            groovySection(reader, sw);
                        }
                    }
                    continue; // at least '<' is consumed ... read next chars.
                }
                if (c == '$')
                {
                    myReaderMark(reader);
                    c = myReaderRead(reader);
                    if (c != '{')
                    {
                        sw.write('$');
                        myReaderReset(reader);
                    }
                    else
                    {
                        myReaderMark(reader);
                        sw.write("${");
                        processGSstring(reader, sw);
                    }
                    continue; // at least '$' is consumed ... read next chars.
                }
                if (c == '\"')
                {
                    sw.write('\\');
                }
                /*
                 * Handle raw new line characters.
                 */
                if (c == '\n' || c == '\r')
                {
                    if (c == '\r')
                    { // on Windows, "\r\n" is a new line.
                        myReaderMark(reader);
                        c = myReaderRead(reader);
                        if (c != '\n')
                        {
                            myReaderReset(reader);
                        }
                    }
                    sw.write("\n");
                    continue;
                }
                sw.write(c);
            }
            endScript(sw);
            return sw.toString();
        }

        private void startScript(StringWriter sw)
        {
            if (m_doInstrument)
            {
                sw.write("@Field def ____line____ = 0;\r\n");
                sw.write("@Field def ____column____ = 0;\r\n");
                sw.write("def ____setpos____(l, c) { ____line____ = l; ____column____ = c; }\r\n");
                /*
                 * sw.write("try {\r\n");
                 */
            }
            sw.write("out.print(\"\"\"");
        }

        private void endScript(StringWriter sw)
        {
            sw.write("\"\"\");\n");
            if (m_doInstrument)
            {
                /*
                 * sw.write("}\n");
                 * sw.write("catch (Throwable __e__)\n");
                 * sw.write("{\n");
                 * sw.write(
                 * "throw new Error(\"Error in script at around line \" + ____line____ + \": \" + __e__.toString());\n"
                 * );
                 * sw.write("}\n");
                 */
            }
            sw.write("\n/* Generated by SimpleTemplateEngine2 */");
        }

        private void processGSstring(Reader reader, StringWriter sw) throws IOException
        {
            int c;
            while ((c = myReaderRead(reader)) != -1)
            {
                if (c != '\n' && c != '\r')
                {
                    sw.write(c);
                }
                if (c == '}')
                {
                    break;
                }
            }
        }

        /**
         * Closes the currently open write and writes out the following text as
         * a GString expression until it reaches an end %>.
         * 
         * @param reader a reader for the template text
         * @param sw a StringWriter to write expression content
         * @throws IOException if something goes wrong
         */
        private void groovyExpression(Reader reader, StringWriter sw) throws IOException
        {
            if (m_doInstrument)
            {
                sw.write("\"\"\");\n");
                if (m_doInstrument)
                {
                    sw.write("____setpos____ (" + _line_ + "," + _column_ + ");\n");
                }
                sw.write("print (");
            }
            else
            {
                sw.write("${");
            }

            int c;
            while ((c = myReaderRead(reader)) != -1)
            {
                if (c == '%')
                {
                    c = myReaderRead(reader);
                    if (c != '>')
                    {
                        sw.write('%');
                    }
                    else
                    {
                        break;
                    }
                }
                if (c != '\n' && c != '\r')
                {
                    sw.write(c);
                }
            }

            if (m_doInstrument)
            {
                sw.write(");\n");
                if (m_doInstrument)
                {
                    sw.write("____setpos____ (" + _line_ + "," + _column_ + ");\n");
                }
                sw.write("out.print(\"\"\"");
            }
            else
            {
                sw.write("}");
            }
        }

        /**
         * Closes the currently open write and writes the following text as
         * normal Groovy script code until it reaches an end %>.
         * 
         * @param reader a reader for the template text
         * @param sw a StringWriter to write expression content
         * @throws IOException if something goes wrong
         */
        private void groovySection(Reader reader, StringWriter sw) throws IOException
        {
            sw.write("\"\"\");\n");
            if (m_doInstrument)
            {
                sw.write("____setpos____ (" + _line_ + "," + _column_ + ");\n");
            }
            int c;
            while ((c = myReaderRead(reader)) != -1)
            {
                if (c == '%')
                {
                    c = myReaderRead(reader);
                    if (c != '>')
                    {
                        sw.write('%');
                    }
                    else
                    {
                        break;
                    }
                }
                /*
                 * Don't eat EOL chars in sections - as they are valid
                 * instruction separators.
                 * See http://jira.codehaus.org/browse/GROOVY-980
                 */
                // if (c != '\n' && c != '\r') {
                sw.write(c);
                //}
            }
            sw.write(";\n");
            if (m_doInstrument)
            {
                sw.write("____setpos____ (" + _line_ + "," + _column_ + ");\n");
            }
            sw.write("out.print(\"\"\"");
        }

        private int _line_;

        private int _column_;

        private int _line_marked_;

        private int _column_marked_;

        private void myReaderMark(Reader r) throws IOException
        {
            _line_marked_ = _line_;
            _column_marked_ = _column_;
            r.mark(100);
        }

        private void myReaderReset(Reader r) throws IOException
        {
            _line_ = _line_marked_;
            _column_ = _column_marked_;
            r.reset();
        }

        private int myReaderRead(Reader r) throws IOException
        {
            if (m_doInstrument)
            {
                while (true)
                {
                    int c = r.read();

                    if (c == -1)
                    {
                        return -1;
                    }
                    if (c == '\u089A')
                    {
                        _line_ += 1;
                        _column_ = 0;
                        continue;
                    }
                    else if (c == '\u089B')
                    {
                        _column_ += 1;
                        continue;
                    }
                    else
                    {
                        return c;
                    }
                }
            }
            else
            {
                return r.read();
            }
        }

    }

    public String instrumentIfNeeded(String text)
    {
        if (m_doInstrument)
        {
            StringBuilder sb = new StringBuilder(text.length() * 2);
            for (int i = 0; i < text.length(); i++)
            {
                char c = text.charAt(i);
                if (c == '\n')
                {
                    sb.append('\u089A');
                }
                else if (c == '\r')
                {
                    // ignore
                }
                else
                {
                    sb.append('\u089B');
                }
                sb.append(c);
            }
            return sb.toString();
        }
        else
        {
            return text;
        }
    }

    public String replaceRegex(String input, String regex, String replacement)
    {
        // we need to instrument the regex
        StringBuilder regex2 = new StringBuilder(regex.length() * 2);
        int i = 0;
        boolean nextCanBeQuantifier = false;
        while (i < regex.length())
        {
            char c = regex.charAt(i);

            // special case: if the first character is '^', we don't instrument it
            if (i == 0 && c == '^')
            {
                regex2.append(c);
                i += 1;
                continue;
            }

            if (nextCanBeQuantifier)
            {
                if (c == '+' || c == '?' || c == '*')
                {
                    // this is a quantifier: just add it as it is, don't instrument it
                    regex2.append(regex.charAt(i));
                    i += 1;

                    // and keep the variable to true: sometimes we have more than one quantifier
                    continue;
                }
                else
                {
                    // this is not a quantifier: flag it and process it
                    nextCanBeQuantifier = false;
                }
            }

            // in general, we instrument before each letter
            if (m_doInstrument)
            {
                regex2.append("[\u089A\u089B]*");
            }

            if (c == '\\')
            {
                // a escape char means we print it together with the escaped item

                // get the second item
                i += 1;
                char c2 = regex.charAt(i);
                i += 1;

                // we have \s -> transform it
                if (c2 == 's')
                {
                    if (m_doInstrument)
                    {
                        regex2.append("[\\" + c2 + "\u089A\u089B]");
                    }
                    else
                    {
                        regex2.append("\\s");
                    }
                }
                else
                {
                    regex2.append(c);
                    regex2.append(c2);
                }
            }
            else
            {
                // another character - print it
                regex2.append(c);
                i += 1;
            }

            // and process any quantifiers as they are, if we have them, in the next loop
            nextCanBeQuantifier = true;
        }

        //System.out.println("regex " + regex + " to " + regex2.toString());

        Matcher m = Pattern.compile(regex2.toString()).matcher(input);

        StringBuffer sb = new StringBuffer(32);

        while (m.find())
        {
            String group = m.group(0);
            StringBuilder rsb = new StringBuilder(group.length());

            // add markers
            for (int i1 = 0; i1 < group.length(); i1++)
            {
                char c = group.charAt(i1);
                if (c == '\u089A' || c == '\u089B')
                {
                    // leave the markers
                    rsb.append(c);
                }
                else
                {
                    // ignore the rest, that's what we are replacing
                }
            }

            // then add our replacement text
            rsb.append(replacement);

            // and replace
            m.appendReplacement(sb, rsb.toString());

            //System.out.println("got it -> '" + group + "' (" + group.length() + ") vs '" + rsb.toString() + "' (" + rsb.length() + ")");
        }
        m.appendTail(sb);

        return sb.toString();
    }

}
