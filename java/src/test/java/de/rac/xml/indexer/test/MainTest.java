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
 
package de.rac.xml.indexer.test;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.junit.jupiter.api.Test;

import de.rac.xml.indexer.ElementNode;
import de.rac.xml.indexer.PositionIndex;
import de.rac.xml.indexer.grammar.XMLLexer;
import de.rac.xml.indexer.grammar.XMLParser;

public class MainTest {


  
    @Test
	public  void testBooks() {
		
		CharStream stream;
		try {
		    ClassLoader classLoader = getClass().getClassLoader();
	        File file =  new File(classLoader.getResource("indexer/books.xml").getFile());
		    InputStream  in = new FileInputStream(file);
			stream = CharStreams.fromStream(in);
			
			
		XMLLexer lexer = new XMLLexer(stream);
		
	    CommonTokenStream tokens = new CommonTokenStream(lexer);
	    XMLParser parser = new XMLParser(tokens);
	    parser.document();
	    
	    PositionIndex positionIndex =  parser.getPositionIndex();
	    for (int i = 0; i< positionIndex.getSize(); i++)
	    {
	    	dump(positionIndex, i);
	    }
	    
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	public static void dump(PositionIndex positionIndex, int index)
	{
		ElementNode elementNode = positionIndex.getElementNode(index);
		System.out.println( index + ": " + "(" + elementNode.getStartPosition().getLine() + ", " + elementNode.getStartPosition().getColumn() + ") - ("
				+ elementNode.getEndPosition().getLine() + ", " + elementNode.getEndPosition().getColumn() + ")");
	}
}
