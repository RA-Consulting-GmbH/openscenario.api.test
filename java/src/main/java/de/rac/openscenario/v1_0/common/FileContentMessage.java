package de.rac.openscenario.v1_0.common;

/**
 * A message that consists of the message itself and some meta information like the error level and a textmarker 
 * that enables the user to trace the message back to a file location.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public  class FileContentMessage implements Comparable<FileContentMessage>{
	private Textmarker textmarker;
	private String message;
	private ErrorLevel errorLevel;
	
	/**
	 * Constructor;
	 * @param message the message text
	 * @param errorLevel the error level of the message
	 * @param textmarker the text marker that enables the user to trace the message back to a file location.
	 */
	public FileContentMessage(String message,ErrorLevel errorLevel, Textmarker textmarker)  {
		super();
		this.message = message;
		this.errorLevel = errorLevel;
		this.textmarker = textmarker;
		
	}
	
	/**
	 * The text marker that enables the user to trace the message back to a file location
	 * @return the text marker
	 */
	public Textmarker getTextmarker() {
		return textmarker;
	}

	/**
	 * The text of a message
	 * @return the message text
	 */
	public String getMessage() {
		return message;
	}
	
	/**
	 * The error level of the message.
	 * @return the error level
	 */
	public  ErrorLevel getErrorLevel()
	{
		return errorLevel;
	}
	
	@Override
	public boolean equals(Object obj) {
		if (obj instanceof  FileContentMessage)
		{
			FileContentMessage comparedObject = (FileContentMessage) obj;
			boolean equals = comparedObject.toString().equals(this.toString());
			return equals;
		}
		return false;
	}
	
	@Override
	public int hashCode() {
		return this.toString().hashCode();
	}
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "Message: '" + message+ "'" +
			" ErrorLevel: " + errorLevel.toString() +
			" Textmarker: '" + textmarker.toString()+ "'";
	}


	@Override
	public int compareTo(FileContentMessage o) {
		return this.toString().compareTo(o.toString());
	}
	
}
