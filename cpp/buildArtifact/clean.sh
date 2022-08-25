#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd "${SCRIPT_DIR}"

echo "rm -rf ../build/cg*"
rm -rf ../build/cg*
