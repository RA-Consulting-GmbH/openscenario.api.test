# OpenSCENARIO API

## Abstract
* Extensive library for reading and checking scenarios.
* Fully compliant to [OpenSCENARIO 1.0.](https://www.asam.net/standards/detail/openscenario/)
* Includes an executable checker (See [Getting Started](./doc/main.adoc#getting-started-on-c)).
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

Please refer to the main documentation [here](./doc/main.adoc). 
