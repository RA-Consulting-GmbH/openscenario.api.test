package de.rac.openscenario.v1_0.loader;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;

/**
 * Implements the resource locator in a file system
 * @author Andreas Hege - RA Consulting
 *
 */
public class FileResourceLocator implements IResourceLocator{

	@Override
	public InputStream getInputStream(String symbolicFilename)
			throws ResourceNotFoundException {
		try{
			InputStream inputStream = new FileInputStream(symbolicFilename);
			return inputStream;
		}catch(FileNotFoundException e )
		{
			throw new ResourceNotFoundException(symbolicFilename, e);
		}		
	}

	@Override
	public List<String> getSymbolicFilenamesInSymbolicDir(String symbolicDirName) throws ResourceNotFoundException{
		File dir = new File(symbolicDirName);
		try {
			if (!dir.isDirectory())
			{
				throw new ResourceNotFoundException(symbolicDirName);
			}
		} catch (SecurityException e) {
			throw new ResourceNotFoundException(symbolicDirName);
		}

		return getFiles(dir);
		
	}

	/**
	 * returns the list of files in a directory
	 * @param dir the directory
	 * @return the list of files in this directory
	 */
	protected List<String> getFiles(final File dir) {
		List<String> result = new ArrayList<String>();
	    for (final File fileEntry : dir.listFiles()) {
	        if (fileEntry.isDirectory()) {
	        	result.addAll(getFiles(fileEntry));
	        } else {
	            result.add(fileEntry.getAbsolutePath());
	        }
	    }
	    return result;
	}

	@Override
	public String getSymbolicDirname(String symbolicBaseDir, String symbolicDir) {
		File dir = new File(symbolicDir);
		if (dir.isDirectory() && dir.getPath().equals(dir.getAbsolutePath()))
		{
			// symbolic Dir is given absolute
			return symbolicDir;
		}else
		{
			
			File baseDir = new File(new File(symbolicBaseDir).getParentFile(), symbolicDir);
			if (baseDir.isDirectory())
			{
				return baseDir.getAbsolutePath();
			}
		}
		return null;
	}
}
