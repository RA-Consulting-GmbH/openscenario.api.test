package de.rac.xml.indexer;

/**
 * Every osc model element does implement this interface
 * @author Andreas Hege - RA Consulting
 *
 */
public class AttributeNode extends PositionNode{

	private String name;
	
	/**
     * Constructor
     * @param name name of the attribute
     * @param startLine line of the start position
     * @param startColumn column of the stat position
     * @param endLine line of the end position
     * @param endColumn column of the end position
     */
	public AttributeNode(String name, int startLine, int startColumn, int endLine, int endColumn) {
		super(startLine, startColumn,endLine, endColumn);
		this.name = name;
		
	} 
	
	/**
	 * The name of the attribute
	 * @return the name
	 */
	public String getName() {
		return name;
	}

}
