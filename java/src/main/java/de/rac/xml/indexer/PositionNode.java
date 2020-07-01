package de.rac.xml.indexer;

/**
 * A node along with its position.
 * @author Andreas Hege - RA Consulting
 *
 */
public abstract class PositionNode {


	private Position startPosition;
	private Position endPosition;
	
	
	/**
	 * The start position
	 * @return start position of the node
	 */
	public Position getStartPosition() {
		return startPosition;
	}

    /**
     * The end position
     * @return end position of the node
     */
	public Position getEndPosition() {
		return endPosition;
	}
	
	/**
	 * Adding an end postion to the node
	 * @param line of the end position
	 * @param column of the end position
	 */
	public void addEndPosition(int line, int column) {
		this.endPosition = new Position (line, column);
	}
 
	/**
	 * Constructor
	 * @param line of the start position
	 * @param column of the stat position
	 */
	public PositionNode(int line, int column) {
		startPosition = new Position(line, column);
	}
	
	/**
     * Constructor
     * @param startLine line of the start position
     * @param startColumn column of the stat position
     * @param endLine line of the end position
     * @param endColumn column of the end position
     */
	public PositionNode(int startLine, int startColumn, int endLine, int endColumn) {
		startPosition = new Position(startLine, startColumn);
		endPosition = new Position(endLine, endColumn);
	}
	
}
