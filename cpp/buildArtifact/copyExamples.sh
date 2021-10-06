#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd ${SCRIPT_DIR}


# copy examples for release
echo "rm -rf ${SCRIPT_DIR}/../build/output/Linux_shared/Release/examples"
rm -rf ${SCRIPT_DIR}/../build/output/Linux_shared/Release/res
echo "mkdir -p ${SCRIPT_DIR}/../build/output/Linux_shared/Release/examples"
mkdir -p ${SCRIPT_DIR}/../build/output/Linux_shared/Release/res
echo "cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/output/Linux_shared/Release"
cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/output/Linux_shared/Release


# copy examples for debug
echo "rm -rf ${SCRIPT_DIR}/../build/output/Linux_shared/Debug/examples"
rm -rf ${SCRIPT_DIR}/../build/output/Linux_shared/Debug/res
echo "mkdir -p ${SCRIPT_DIR}/../build/output/Linux_shared/Debug/examples"
mkdir -p ${SCRIPT_DIR}/../build/output/Linux_shared/Debug/res
echo "cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/output/Linux_shared/Debug"
cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/output/Linux_shared/Debug

