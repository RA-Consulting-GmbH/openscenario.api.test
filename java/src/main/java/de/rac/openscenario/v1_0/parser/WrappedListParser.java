package de.rac.openscenario.v1_0.parser;

import java.util.List;

import org.w3c.dom.Element;

import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.parser.XmlParserBase.IElementParser;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.xml.indexer.Position;

/**
 * Generic parsers for wrapped list. An inner parser is wrapped by this parser.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public  class WrappedListParser<T extends BaseImpl> extends XmlParserBase<T> implements IElementParser<T>{

	private IElementParser<T> innerElementParser;
	protected String wrapperTagName;
	protected Position wrapperTagNameEndPosition;
	
	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing process
	 * @param filename of the file the parser is operationg on.
	 * @param innerParser the inner parser
	 * @param wrapperTagName the tagname that wrapps the list.
	 */
	public WrappedListParser(IParserMessageLogger messageLogger , String filename, IElementParser<T> innerParser, String wrapperTagName) {
			super( messageLogger, filename);

		this.innerElementParser = innerParser;
		this.wrapperTagName = wrapperTagName;
		
	}

	@Override
	public void parseSubElements(List<IndexedElement> indexedElements,ParserContext parserContext, T object) {
		int currentOccurs = 0;	
		for (IndexedElement indexedElement : indexedElements) 
		{
			Element element = indexedElement.getElement();
			String tagName = element.getNodeName();
			Position start = indexedElement.getStartElementLocation();

			if (!innerElementParser.doesMatch(tagName))
			{
				messageLogger.logMessage(new FileContentMessage("Unknown or unexpected element '"+tagName+"'", ErrorLevel.ERROR,  new Textmarker(start.getLine(),start.getColumn(),filename)));
			}else
			{
			
				if (currentOccurs < innerElementParser.getMaxOccur() || innerElementParser.getMaxOccur() == -1)
				{
					innerElementParser.parse(indexedElement, parserContext, object);
					currentOccurs++;
					
				}else
				{
					messageLogger.logMessage(new FileContentMessage("Too many elements in <"+wrapperTagName+">  ("+ innerElementParser.getMaxOccur()+") has already reached", ErrorLevel.ERROR,  new Textmarker(start.getLine(),start.getColumn(),filename)));
					
				}
			}

		}
		
		if (currentOccurs < innerElementParser.getMinOccur())
		{
			messageLogger.logMessage(new FileContentMessage("Too few elements in <"+wrapperTagName+">  ("+ innerElementParser.getMaxOccur()+" are allowed)", ErrorLevel.FATAL, new Textmarker(wrapperTagNameEndPosition.getLine(), wrapperTagNameEndPosition.getColumn(),filename)));
			
		}
		
	}

	@Override
	public void parse(IndexedElement indexedElement, ParserContext parserContext,T object) {
		
		this.wrapperTagNameEndPosition = indexedElement.getEndElementLocation();
		parseSubElements(indexedElement.getSubElements(),parserContext, object);
		parserContext.setLastElementParsed(indexedElement);
		
	}


	@Override
	public int getMinOccur() {
		return innerElementParser.getMinOccur()==0?0:1;
	}



	@Override
	public int getMaxOccur() {
		return 1;
	}



	@Override
	public boolean doesMatch(String elementName) {
		return  elementName != null && elementName.equals(wrapperTagName);
	}



	@Override
	public String[] getExpectedTagNames() {
		return new String[]{wrapperTagName};
	}

}
