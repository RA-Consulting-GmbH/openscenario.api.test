/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
package net.asam.openscenario.loader;

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
