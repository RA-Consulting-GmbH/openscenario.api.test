package de.rac.openscenario.v1_0.loader;

/**
 * Base scenario loader exception
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public class ScenarioLoaderException extends Exception{
	
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	/**
	 * Constructor
	 * @param message open scenario message
	 * @param cause system exception
	 */
	public ScenarioLoaderException(String message, Throwable cause)
	{
		super(message, cause);
	}
	
	/**
	 * Constructor
	 * @param message open scenario message
	 */
	public ScenarioLoaderException(String message)
	{
		super(message);
	}
}
