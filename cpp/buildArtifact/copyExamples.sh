#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd ${SCRIPT_DIR}


# copy examples for release
echo "rm -rf ${SCRIPT_DIR}/../build/cgReleaseMakeShared/applications/openScenarioReader/res"
rm -rf ${SCRIPT_DIR}/../build/cgReleaseMakeShared/applications/openScenarioReader/res
echo "mkdir -p ${SCRIPT_DIR}/../build/cgReleaseMakeShared/applications/openScenarioReader/res"
mkdir -p ${SCRIPT_DIR}/../build/cgReleaseMakeShared/applications/openScenarioReader/res
echo "cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/cgReleaseMakeShared/applications/openScenarioReader/res"
cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/cgReleaseMakeShared/applications/openScenarioReader/res


# copy examples for debug
echo "rm -rf ${SCRIPT_DIR}/../build/cgDebugMakeShared/applications/openScenarioReader/res"
rm -rf ${SCRIPT_DIR}/../build/cgDebugMakeShared/applications/openScenarioReader/res
echo "mkdir -p ${SCRIPT_DIR}/../build/cgDebugMakeShared/applications/openScenarioReader/res"
mkdir -p ${SCRIPT_DIR}/../build/cgDebugMakeShared/applications/openScenarioReader/res
echo "cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/cgDebugMakeShared/applications/openScenarioReader/res"
cp -r ${SCRIPT_DIR}/../../../doc/examples ${SCRIPT_DIR}/../build/cgDebugMakeShared/applications/openScenarioReader/res

