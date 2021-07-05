# OpenSCENARIO API

## Abstract
* Extensive library for reading and checking scenarios.
* Fully compliant to [OpenSCENARIO 1.0.](https://www.asam.net/standards/detail/openscenario/)
* Includes an executable checker (See [Getting Started](https://github.com/ra-consulting-gmbh/openscenario.api.test/wiki/Getting-started)).
* Implementation platform is C++

## Features
* Reading and processing of XML scenario files.
* Precise warnings and errors on a line and column based file location.
* API for browsing the OpenSCENARIO tree.

### More Features
* Resolving $notated parameters
* Resolving catalog references
* Resolving object references
* Checking model constraints from the standard (Range checker rules)

### Architectural features and extension points

* **Abstracting the model from its implementation** Feature: Providing an API to browse the tree.Hiding the implementations.
* **Abstracting from storage media** Extension Point: Reading from zipped files, from databases or from the cloud by writing your own resource locator classes.
* **Abstracting from storage formats** Extension Point: Write your own loader class to read from binary files or from JSON etc.
* **Checker rule API** Extension Point: Write your own checker rules. E.g. for your company‘s set of authoring guidelines.
* **Architecture is transferable to different platforms** E.g. JAVA, Python

## Use Cases
### Primary Use Cases
* Using the library as a stand alone checker.
* Integrating the library in simulators and editors.
* Analyzing scenarios for labeling issues (e.g. in OpenLabel).

### More Use Cases
* Building customer specific sets of authoring guidelines with the generic checker rule interface.
* Enabling reading access to backends and to the cloud.
* Analyzing scenarios for building comparators, doing data mining etc.
* Storing pre-compiled scenarios in efficient storage formats in databases.

# Building the Sources in C++

**Note:**
The Linux and Windows (post) build steps are still under development and work in progress!  Post build step for Windows is not yet implemented.

## Linux and Windows
* Clone the master branch (the `cpp` path from this project).
* Make sure you have `cmake` installed.

## Linux
#### System requirements:
- gcc >= 5.0
- cmake >= 3.8
- SSD/HDD free space >= 1.5 GB
- Main memory >= 8 GB
If you have 8 GB then please change the last line in the script `generateLinux.sh` from `make -j8` to `make`. 

#### Build steps:
* Install `uuid-dev` (needed for building antlr4):
```bash
$ sudo apt install uuid-dev
```
* Change your current directory to `cpp/build/generateLinux` and execute:
```bash
$ ./generate_Linux.sh Release make
```
* This creates all necessary makefiles for building the openSCENARIO library as shared library and starts the compilation process by executing `make -j8` starting 8 build threads. If you have 8 GB then change the make command to `make` only as described above in the paragraph **"System requirements"**.
* The general call to the script above is `./generateLinux.sh [Release|Debug] [static] [make]`.
* To create a package containing all necessary include files and binaries (libraries) execute the bash script below. A file named `openSCENARIO_<date>.tgz` will be created.
```bash
$ ./createLinuxBinPackage.sh
```

## Windows
* Make sure you have Visual Studio 2015 or 2017 installed.
* Open a file explorer and navigate to your `openSCENARIO` folder and there to `cpp/build/generateWindows`.
* Execute `generate_vs20[15|17]_x64].bat` according to your Visual Studio installation and a Visual Studio solution in the folder `VS20[15|17][_x64]` will be created.
* Inside that folder open the solution `OpenScenario-Cpp.sln` and build the project.
* The created binaries are then located in the folder `cpp/build/output/[Win32|x64]`.
