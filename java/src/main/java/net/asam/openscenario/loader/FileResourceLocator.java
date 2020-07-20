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

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;

/**
 * Implements the resource locator in a file system
 *
 * @author Andreas Hege - RA Consulting
 */
public class FileResourceLocator implements IResourceLocator {

  @Override
  public InputStream getInputStream(String symbolicFilename) throws ResourceNotFoundException {
    try {
      InputStream inputStream = new FileInputStream(symbolicFilename);
      return inputStream;
    } catch (FileNotFoundException e) {
      throw new ResourceNotFoundException(symbolicFilename, e);
    }
  }

  @Override
  public List<String> getSymbolicFilenamesInSymbolicDir(String symbolicDirName)
      throws ResourceNotFoundException {
    File dir = new File(symbolicDirName);
    try {
      if (!dir.isDirectory()) {
        throw new ResourceNotFoundException(symbolicDirName);
      }
    } catch (SecurityException e) {
      throw new ResourceNotFoundException(symbolicDirName);
    }

    return getFiles(dir);
  }

  /**
   * returns the list of files in a directory
   *
   * @param dir the directory
   * @return the list of files in this directory
   */
  protected List<String> getFiles(final File dir) {
    List<String> result = new ArrayList<>();
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
    if (dir.isDirectory() && dir.getPath().equals(dir.getAbsolutePath())) {
      // symbolic Dir is given absolute
      return symbolicDir;
    }
    File baseDir = new File(new File(symbolicBaseDir).getParentFile(), symbolicDir);
    if (baseDir.isDirectory()) {
      return baseDir.getAbsolutePath();
    }
    return null;
  }
}
