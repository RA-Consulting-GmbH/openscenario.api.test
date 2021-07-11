# Building with cmake-gui
## Building the OpenSCENARIO libraries and executables on Windows
Prerequisites:
- cmake and cmake-gui 3.19 installed
- working copy of OpeNSCENARIO
### Building with Visual Studio
Supported: VS2015 up to VS2022
- Start cmake-gui application
- Click "Browse Source..."
- Select cpp folder in OpenSCANARIO workng copy
- Select the build environment from the presets, e.g. "VS2019 x64 shared", which means that a solution for Visual Studio 2019 for 64 bit architecture with shared libraries will be build.
- Click "Configure"
- Follow the cmake-gui instructions
- Click "Generate"
- Click "Open Project"
_ Build solution from within Visual Studio