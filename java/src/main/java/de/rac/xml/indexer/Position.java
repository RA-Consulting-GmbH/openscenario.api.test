package de.rac.xml.indexer;

/**
 * Class for position value objects.
 * @author Andreas Hege - RA Consulting
 *
 */
public class Position {

	private int line;
	private int column;
	
	/**
	 * The column
	 * @return the column of the position.
	 */
	public int getColumn() {
		return column;
	}
	
	/**
	 * The line
	 * @return the line of the position
	 */
	public int getLine() {
		return line;
	}

	/**
	 * Constructor
	 * @param line line of the position
	 * @param column column of the position
	 */
	public Position(int line, int column) {
		super();
		this.line = line;
		this.column = column;
	}

}
