#!/bin/bash

# TODO: check if cmake is installed
# TODO: add script dir
# TODO: add root-dir

# Parse parameters
. ${SCRIPT_DIR}/parse_generate_params.sh $1 $2

# TODO: create build folder

# TODO: call cmake
. ../../../Rac.Core.Cpp-src/CMake-Helper/generate_unix_common.sh $*

# TODO: build solution if requested
