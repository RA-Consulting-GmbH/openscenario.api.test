package de.rac.xml.indexer.test;

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
		    InputStream  in = new FileInputStream("./src/test/resources/indexer/books.xml");
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
