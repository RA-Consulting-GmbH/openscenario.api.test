package de.rac.openscenario.v1_0.parser;

import java.util.List;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;

/**
 * A generic parser for model groups (sequence, all, choice)
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public abstract class XmlModelGroupParser<T extends BaseImpl> extends XmlParserBase<T> {

	protected List<IElementParser<T>> parsers;
	
	/**
	 * Creates a list of parsers for the elements of the model group.
	 * @return the list of parsers.
	 */
	protected abstract List<IElementParser<T>> createParserList();
	
	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing process
	 * @param filename of the file the parser is operationg on.
	 */
	public XmlModelGroupParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		
	
	}
	/**
	 * The parsers for the elements in this model group.
	 * @return the parsers
	 */
	protected List<IElementParser<T>> getParsers()
	{
		return parsers;
	}
	
	
	/**
	 * Find the right parser for a given tag name
	 * @param tagName the tag name a given parser ahould be found for.
	 * @return the appropriate parser for an element with this tag name.
	 */
	protected IElementParser<T> findParser(String tagName)
	{
		for (IElementParser<T> parser : parsers) {
			if (parser.doesMatch(tagName))
			{
				return parser;
			}
		}
		return null;
	}
	/**
	 * Moves the current index to the elemtn
	 * @param indexedElements a list with the indexed elements to parse
	 * @param currentIndex the current index
	 * @param lastParsedElement the last element that was parsed
	 * @return the new list index or the size of the indexed elements list
	 */
	protected int moveForwardToLastElementParsed(List<IndexedElement> indexedElements, int currentIndex, IndexedElement lastParsedElement)
	{
		for (int i = currentIndex; i< indexedElements.size(); i++)
		{
			if (indexedElements.get(i) == lastParsedElement)
			{
				return i;
			}
		}
		return indexedElements.size();
	}
	
	@Override
	public void parseSubElements(List<IndexedElement> indexedElements, ParserContext parserContext,T object) {
		parsers = createParserList();
		parseSubElementsInternal(indexedElements, parserContext, object);
	}
	/**
	 * Parsing the sub elements
	 * @param indexedElements all sub elements
	 * @param parserContext a parser context to store dynamic information in.
	 * @param object the object that will be filled during the parsing process.
	 */
	public abstract void parseSubElementsInternal(List<IndexedElement> indexedElements, ParserContext parserContext,T object);
}
