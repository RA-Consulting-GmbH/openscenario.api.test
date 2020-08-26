#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd ${SCRIPT_DIR}


# copy examples for release
echo "rm -rf ${SCRIPT_DIR}/../output/Linux/Release/examples"
rm -rf ${SCRIPT_DIR}/../output/Linux/Release/res
echo "mkdir -p ${SCRIPT_DIR}/../output/Linux/Release/examples"
mkdir -p ${SCRIPT_DIR}/../output/Linux/Release/res
echo "cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../output/Linux/Release"
cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../output/Linux/Release


# copy examples for debug
echo "rm -rf ${SCRIPT_DIR}/../output/Linux/Debug/examples"
rm -rf ${SCRIPT_DIR}/../output/Linux/Debug/res
echo "mkdir -p ${SCRIPT_DIR}/../output/Linux/Debug/examples"
mkdir -p ${SCRIPT_DIR}/../output/Linux/Debug/res
echo "cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../output/Linux/Debug"
cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../output/Linux/Debug

