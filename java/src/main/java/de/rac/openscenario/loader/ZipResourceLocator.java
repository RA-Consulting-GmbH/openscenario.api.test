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
 
package de.rac.openscenario.loader;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.Hashtable;
import java.util.List;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

public class ZipResourceLocator implements IResourceLocator {

	private ZipFile addressedZipFile = null;
	private String zipParentDirectory  = null;
	private Hashtable<String, List<ZipEntry>> dirToFiles = new Hashtable<String, List<ZipEntry>>();
	
	@Override
	public InputStream getInputStream(String symbolicFilename)
			throws ResourceNotFoundException {
		InputStream result = null;
		ZipEntry foundEntry = null;
		if (addressedZipFile == null) {
			// Is this file a zipFile?

			try {
				File file = new File(symbolicFilename);
				if (file.exists())
				{
					zipParentDirectory = normalizeFilePath(file.getParentFile().getAbsolutePath());
				}
				addressedZipFile = new ZipFile(symbolicFilename);
				Enumeration<? extends ZipEntry> entries = addressedZipFile
						.entries();

				while (entries.hasMoreElements()) {
					ZipEntry entry = entries.nextElement();
					if (!entry.isDirectory()) {
						if (foundEntry == null && isRootFile(entry)) {
							foundEntry = entry;
						} else if (foundEntry != null && isRootFile(entry)){
							// There is more than one file in the main
							// directory.
							foundEntry = null;
							break;
						} else
						{
							addFileToMap(entry);
						}
					}else
					{
						addDirToMap(entry);
					}
				}

			} catch (IOException e) {
				throw new ResourceNotFoundException(symbolicFilename, e );

			}
		

		} else {
			// it is a zip Entry
			foundEntry = getZipEntry(symbolicFilename);
		}

		if (foundEntry == null) {
			throw new ResourceNotFoundException(symbolicFilename);
		}
		try {
			result = addressedZipFile.getInputStream(foundEntry);
		} catch (IOException e) {
			throw new ResourceNotFoundException(symbolicFilename, e );
		}
		return result;

	}

	private ZipEntry getZipEntry(String symbolicFilename) {
		int index = symbolicFilename.lastIndexOf("/");
		String dirName = symbolicFilename.substring(0, index);
		ZipEntry result = null;
		
		List<ZipEntry> entries = dirToFiles.get(dirName);
		
		if (entries != null)
		{
			for (ZipEntry zipEntry : entries) {
				if (zipEntry.getName().equals(symbolicFilename))
				{
					result = zipEntry;
					break;
				}
			}
		}
		return result;
	}

	private void addDirToMap(ZipEntry entry) {
		String dirName = entry.getName();
		if (dirToFiles.get(dirName) == null)
		{
			dirToFiles.put(stripFileSeparator(dirName), new ArrayList<ZipEntry>());
		}
		
	}

	/**
	 * add an entry to the map
	 * @param entry entry t be added.
	 */
	private void addFileToMap(ZipEntry entry) {
		String pathName = entry.getName();
		int index = pathName.lastIndexOf("/");
		String dirName = pathName.substring(0, index);
		List<ZipEntry> entries = dirToFiles.get(dirName);
		
		if (entries == null)
		{
			entries = new ArrayList<ZipEntry>();
			dirToFiles.put(dirName, entries);
		}
		entries.add(entry);
	}

	@Override
	public List<String> getSymbolicFilenamesInSymbolicDir(String symbolicDirName)
			throws ResourceNotFoundException {
		List<String> files = new ArrayList<String>();
		List<ZipEntry> entries = dirToFiles.get(symbolicDirName);
		if (entries != null)
		{
			for (ZipEntry zipEntry : entries) {
				files.add(zipEntry.getName());
			}
		}else
		{
			throw new ResourceNotFoundException(symbolicDirName);
		}
		return files;
	}

	@Override
	public String getSymbolicDirname(String symbolicBaseDir, String symbolicDir)  {
		File dir = new File(symbolicDir);
		if (dir.getPath().equals(dir.getAbsolutePath()))
		{
			String normalizedPath = normalizeFilePath(dir.getAbsolutePath());
			if (zipParentDirectory.equals(symbolicBaseDir))
			{
				int index = normalizedPath.indexOf(zipParentDirectory);
				if (index == 0)
				{
					return normalizedPath.substring(index);
				}
			}
			return symbolicDir;
		}else
		{			
			String normalizedPath = normalizeFilePath(symbolicDir);
			if (dirToFiles.containsKey(normalizedPath))
			{
				return normalizedPath;
			}
		}
		return null;
	}

	@Override
	public void finalize() {
		if (addressedZipFile != null) {
			try {
				addressedZipFile.close();
			} catch (IOException e) {
				// nothing we can do now
			}
		}
	}
	/**
	 * checks whether this is a file in root directory
	 * @param zipEntry
	 * @return true if file is a fiel in zip's root directory
	 */
	private boolean isRootFile(ZipEntry zipEntry)
	{
		return zipEntry.getName().indexOf("/") == -1;
	}
	
	/**
	 * strips off '/' if existent at the end of the string
	 * @param input the input
	 * @return the stripped input
	 */
	private String stripFileSeparator(String input)
	{
		if (input.substring(input.length()-1) == "/")
		{
			return input.substring(0,input.length()-1);
		}else
		{
			return input;
		}
	}
	
	/**
	 * Replaces backslash with slashes and 
	 * strips off "./" and "/" at the beginning and strips off "/" at the end.
	 * 
	 * @param input the input to be stripped normalizen
	 * @return the normalized file path.
	 */
	private String normalizeFilePath(String input)
	{
		String filepath = input.replaceAll("\\", "//");
		if (filepath.startsWith( "/"))
		{
			return stripFileSeparator(filepath.substring(1));
		}else if (filepath.startsWith( "./"))
		{
			return stripFileSeparator(filepath.substring(2));
		}else
		{
			return stripFileSeparator(filepath);
		}
	}

}
