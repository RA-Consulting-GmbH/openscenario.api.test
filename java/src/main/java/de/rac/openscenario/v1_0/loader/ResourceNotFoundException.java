package de.rac.openscenario.v1_0.loader;

/**
 * An exception that indicates that resources could not be resolved.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public class ResourceNotFoundException extends ScenarioLoaderException{
	
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	/**
	 * Constructor
	 * @param symbolicFilename symbolic filename that cannot be resolved
	 * @param cause inner exception
	 */
	public ResourceNotFoundException(String symbolicFilename, Throwable cause)
	{
		super("Resource not found '"+ symbolicFilename+ "'", cause);
	}
	/**
	 * Constructor
	 * @param symbolicFilename symbolic filename that cannot be resolved
	 */
	public ResourceNotFoundException(String symbolicFilename)
	{
		super("Resource not found '"+ symbolicFilename+ "'");
	}
}
