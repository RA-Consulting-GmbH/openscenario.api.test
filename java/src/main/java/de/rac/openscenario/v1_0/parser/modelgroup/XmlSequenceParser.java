package de.rac.openscenario.v1_0.parser.modelgroup;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;

import org.w3c.dom.Element;

import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.parser.XmlModelGroupParser;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.xml.indexer.Position;

/**
 * Parser for a XSD:sequence model group (exact order of elements).
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public  abstract class XmlSequenceParser<T extends BaseImpl> extends XmlModelGroupParser<T> {
	
	private static int NOT_FOUND = -1;
	
	private Map<IElementParser<T>, Integer>  occuredElementList = new Hashtable<IElementParser<T>, Integer>();

	
	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing process
	 * @param filename of the file the parser is operating on.
	 */
	public XmlSequenceParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
	
	}
		
	@Override
	public void parseSubElementsInternal(List<IndexedElement> indexedElements, ParserContext parserContext,  T object){
		
		IndexedElement lastElementParsed = null;
		int currentListIndex = 0;
		int currentParserIndex = 0;
		while (currentListIndex < indexedElements.size()) {
			IndexedElement indexedElement = indexedElements.get(currentListIndex);
			Element element = indexedElement.getElement();
			String tagName = element.getNodeName();
			IElementParser<T> parser = findParser(tagName);
			Position start = indexedElement.getStartElementLocation();
			

			
			if (parser == null )
			{
				messageLogger.logMessage(new FileContentMessage("Unknown element '"+tagName+"'", ErrorLevel.ERROR, new Textmarker(start.getLine(),start.getColumn(),filename)));
				lastElementParsed = indexedElement;
			}else
			{
				int nextIndex = getNextIndex(currentParserIndex, tagName, start);
				if (nextIndex == NOT_FOUND)
				{
					messageLogger.logMessage(new FileContentMessage("Element '"+tagName+"' is not allowed here.", ErrorLevel.ERROR,  new Textmarker(start.getLine(),start.getColumn(),filename)));
					lastElementParsed = indexedElement;
				}else
				{
					currentParserIndex = nextIndex;
					Integer currentOccurs = occuredElementList.get(tagName);
					if (currentOccurs == null)
					{
						currentOccurs = 0;
					}
					if (currentOccurs < parser.getMaxOccur() || parser.getMaxOccur() == -1)
					{
						parser.parse(indexedElement, parserContext, object);
						currentListIndex = moveForwardToLastElementParsed(indexedElements,currentListIndex,parserContext.getLastElementParsed());
						lastElementParsed = parserContext.getLastElementParsed();
						occuredElementList.put(parser, currentOccurs+1);
					}else
					{
						messageLogger.logMessage(new FileContentMessage("Too many elements of <"+tagName+">  ("+ parser.getMaxOccur()+") has already reached", ErrorLevel.ERROR,new Textmarker(start.getLine(),start.getColumn(),filename)));
						lastElementParsed = indexedElement;
					}
					
					
				}

			}
			currentListIndex++;
			
			
		}
		if (lastElementParsed != null)
			parserContext.setLastElementParsed(lastElementParsed);

		
	}
	
	/**
	 * Evaluates the next index in the ordered parser list. 
	 * Checks on the fly whether a element is missing in between.
	 * @param currentIndex the current index in the list
	 * @param tagName the tag name of the element that should be parsed
	 * @param startPosition  a current position in the file
	 * @return the next index if found or -1 if a parser for such a element cannot be found.
	 */
	private int getNextIndex(int currentIndex, String tagName, Position startPosition)
	{
		List<FileContentMessage> localMessages = new ArrayList<FileContentMessage>();
		
		// Increment the list index until the element fits
		for (int i = currentIndex; i < getParsers().size(); i++) {
			List<IElementParser<T>> parsers = getParsers();
			if (parsers.get(i).doesMatch(tagName))
			{
				messageLogger.logAllMessages(localMessages);
				return i;
			}else
			{
				IElementParser<T> parser = parsers.get(i);
				// if the element at this index is required and not yet reached minimum occurance
				Integer occured = occuredElementList.get(parser);
				if (occured == null)
				{
					occured = 0;
				}
				if (parser.getMinOccur() > occured)
				{
					localMessages.add(new FileContentMessage("Required element is missing before <" +tagName +">" , ErrorLevel.ERROR, new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename)));

				}
			}
		}
		return NOT_FOUND;
	}
	
	
	

}
