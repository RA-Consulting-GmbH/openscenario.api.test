package de.rac.openscenario.v1_0.loader;

import java.io.InputStream;
import java.util.List;

/**
 * Abstracts the Locator from the storage medium. It can be a file system or a database or else.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IResourceLocator {
	/**
	 * An input stream to read from.
	 * @param symbolicFilename from the OpenSCENARIO file
	 * @return the input stream to read from this resource.
	 * @throws ResourceNotFoundException if resource cannot be located
	 */
	public InputStream getInputStream(String symbolicFilename) throws ResourceNotFoundException;
	
	/**
	 * A list of symbolic filenames from a symbolic dir.
	 * @param symbolicDirName as a result from a getSymbolicDirname.
	 * @return the symbolic filenames in a symbolic dir.
	 * @throws ResourceNotFoundException if resource cannot be located
	 */
	public List<String> getSymbolicFilenamesInSymbolicDir(String symbolicDirName)throws ResourceNotFoundException;
	
	/**
	 * get a symbolic directory name form a symbolic base directory.
	 * @param symbolicBaseDir the symbolic base directory
	 * @param symbolicDir from the OpenSCENARIO file
	 * @return the absolute symbolic dir name
	 */
	public String getSymbolicDirname(String symbolicBaseDir, String symbolicDir);

}
