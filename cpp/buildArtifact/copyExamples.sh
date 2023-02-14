#!/bin/bash

# get script folder
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
cd ${SCRIPT_DIR}

# available configurations binary and build dirs
OSC_LINUX_BIN_DIRS="cgReleaseMakeShared cgReleaseMakeStatic cgDebugMakeShared cgDebugMakeStatic"

# copy examples for configuration
for i in ${OSC_LINUX_BIN_DIRS}; do
    if [ ! -d "${SCRIPT_DIR}/../build/${i}" ]; then
        echo -e "\nSkipping ${i} as it does not exist.\n"
    else
        echo "Copying examples to ${i}"
        echo "========================================"
        echo "rm -rf ${SCRIPT_DIR}/../build/${i}/applications/openScenarioReader/res"
        rm -rf "${SCRIPT_DIR}/../build/${i}/applications/openScenarioReader/res"
        echo "mkdir -p ${SCRIPT_DIR}/../build/${i}/applications/openScenarioReader/res"
        mkdir -p "${SCRIPT_DIR}/../build/${i}/applications/openScenarioReader/res"
        echo "cp -r ${SCRIPT_DIR}/../../doc/examples ${SCRIPT_DIR}/../build/${i}/applications/openScenarioReader/res"
        cp -r "${SCRIPT_DIR}/../../doc/examples" "${SCRIPT_DIR}/../build/${i}/applications/openScenarioReader/res"
    fi
done
