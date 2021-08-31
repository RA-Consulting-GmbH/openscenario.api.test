#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd ${SCRIPT_DIR}

echo "rm -rf ${SCRIPT_DIR}/../build/cg*"
rm -rf ${SCRIPT_DIR}/../build/cg*

echo "rm -rf ${SCRIPT_DIR}/../build/output/Linux*"
rm -rf ${SCRIPT_DIR}/../build/output/Linux*

echo "rm -rf ${SCRIPT_DIR}/../build/output/Win32*"
rm -rf ${SCRIPT_DIR}/../build/output/Win32*

echo "rm -rf ${SCRIPT_DIR}/../build/output/x64*"
rm -rf ${SCRIPT_DIR}/../build/output/x64*
