#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd ${SCRIPT_DIR}


# copy examples for release
echo "rm -rf ${SCRIPT_DIR}/../output/Linux/Release/res"
rm -rf ${SCRIPT_DIR}/../output/Linux/Release/res
echo "mkdir -p ${SCRIPT_DIR}/../output/Linux/Release/res"
mkdir -p ${SCRIPT_DIR}/../output/Linux/Release/res
echo "cp -r ${SCRIPT_DIR}/../../applications/openScenarioReader/res ${SCRIPT_DIR}/../output/Linux/Release"
cp -r ${SCRIPT_DIR}/../../applications/openScenarioReader/res ${SCRIPT_DIR}/../output/Linux/Release


# copy examples for debug
echo "rm -rf ${SCRIPT_DIR}/../output/Linux/Debug/res"
rm -rf ${SCRIPT_DIR}/../output/Linux/Debug/res
echo "mkdir -p ${SCRIPT_DIR}/../output/Linux/Debug/res"
mkdir -p ${SCRIPT_DIR}/../output/Linux/Debug/res
echo "cp -r ${SCRIPT_DIR}/../../applications/openScenarioReader/res ${SCRIPT_DIR}/../output/Linux/Debug"
cp -r ${SCRIPT_DIR}/../../applications/openScenarioReader/res ${SCRIPT_DIR}/../output/Linux/Debug

