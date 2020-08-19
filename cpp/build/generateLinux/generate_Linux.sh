#!/bin/bash

# Check if cmake is installed
command -v cmake >/dev/null 2>&1 || { echo >&2 "cmake is required to build the software. Please install it. Aborting."; exit 1; }

# Script-Dir: https://stackoverflow.com/questions/59895/get-the-source-directory-of-a-bash-script-from-within-the-script-itself
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

# Root-Dir
ROOT_DIR=`pwd`
while [ ! -d $ROOT_DIR/.github ]; do
    ROOT_DIR=`realpath -s $ROOT_DIR/..`
    if [ "/" == "$ROOT_DIR" ]; then
        echo ".github not found! Terminating..."
        exit -1
    fi
done
echo $ROOT_DIR

# Parse parameters
. ${SCRIPT_DIR}/parse_generate_params.sh $1 $2

# Create build folder
BUILDFOLDER="gcc${PLATFORM_NAME}${BUILD_TARGET}"
mkdir -p "${BUILDFOLDER}"
cd "${BUILDFOLDER}"

# Call cmake
cmake -DCMAKE_BUILD_TYPE="${BUILD_TARGET}" -DPLATFORM_PARAM="${PLATFORM_NAME}" $ROOT_DIR/cpp/

# Build solution if requested
if [ $MAKE != "yes" ]
    then
        exit 0
fi
make -j8
