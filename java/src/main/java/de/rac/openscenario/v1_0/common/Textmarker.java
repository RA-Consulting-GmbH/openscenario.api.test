package de.rac.openscenario.v1_0.common;

/**
 * A text marker hold information of a file a line and a column.
 * Both line and column should start with 0
 * @author Andreas Hege - RA Consulting
 *
 */
public class Textmarker {

	private int column;
	private int line;
	private String filename;
	
	public Textmarker(int line, int column, String filename) {
		super();
		this.column = column;
		this.line = line;
		this.filename = filename;
	}
	
	/**
	 * The column in a line
	 * @return the column (starting with 0)
	 */
	public int getColumn() {
		return column;
	}
	
	/**
	 * The line in a file.
	 * @return The line number (starting with 0)
	 */
	public int getLine() {
		return line;
	}
	
	/**
	 * The filename
	 * @return the name of the file.
	 */
	public String getFilename() {
		return filename;
	}
	
	@Override
	public boolean equals(Object obj) {
		if (obj instanceof  Textmarker)
		{
			Textmarker comparedObject = (Textmarker) obj;
			return comparedObject.filename.equals(this.filename) 
					&& comparedObject.line == this.line 
						&& comparedObject.column == this.column ;
		}
		return false;
	}
	
	@Override
	public int hashCode() {
		return this.toString().hashCode();
	}
	@Override
	public String toString() {
		return filename  + "(" + line + "," + column + ")";
	}
}
