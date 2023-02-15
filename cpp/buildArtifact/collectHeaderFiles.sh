#!/bin/bash

################################################################
# setup some variables
################################################################
# get script folder
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
# cd to project root
cd "${SCRIPT_DIR}/../"
# set openSCENARIO API folder, e.g. openScenario.API
# check for parameter
if [[ $1 == "" ]]; then
    echo "Parameter missing."
    echo "Usage: $0 <openSCENARIO API folder>"
    exit -1
fi
OPEN_SCEANARIO_API=$1

################################################################
# prepare include files
################################################################
# path and file name for findHeaders.sh
# it is placed in the openScenarioReader project folder
FIND_HEADERS_SH_PATH=./applications/openScenarioReader/src
FIND_HEADERS_SH_FILE=findHeaders.sh
FIND_HEADERS_SH=${FIND_HEADERS_SH_PATH}/${FIND_HEADERS_SH_FILE}

# prepare inlude paths for C++ compiler in order to extract ALL necessary non-system include files
# this has to be done outside the openScenarioReader project folder to also reach all referenced external dependencies
echo "#!/bin/bash" >${FIND_HEADERS_SH}
echo "cpp -DCOLLECT_HEADERS -DSUPPORT_OSC_1_0 -DSUPPORT_OSC_1_1 -DSUPPORT_OSC_1_2 -MM \\" >>${FIND_HEADERS_SH}
for i in $(find . -type d -print); do
    if [[ $i == *"CMake"* ]] || [[ $i == *"antlr_runtime"* ]] || [[ $i == *"ython"* ]] || [[ $i == *"java"* ]] || [[ $i == *".dir"* ]] || [[ $i == "./build"* ]]; then
        continue
    fi
    echo "-I $i \\" >>${FIND_HEADERS_SH}
done
echo ${FIND_HEADERS_SH_PATH}/OpenScenarioReader.cpp -std=c++11 >>${FIND_HEADERS_SH}

# give the findHeaders.sh exec rights
chmod a+x ${FIND_HEADERS_SH}

# prepare the openScenario source for install folder;
echo "rm -rf ${SCRIPT_DIR}/${OPEN_SCEANARIO_API}/include"
rm -rf "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}/include"
mkdir -p "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}/include"

# and now let the compiler collect all necessary dependent header files
# and copy them preserving their directory structure
for i in $(./${FIND_HEADERS_SH}); do
    if [[ $i != "\\" ]] && [[ $i != *".cpp"* ]] \
        && [[ $i != *".o"* ]] && [[ $i != *"openScenarioReader"* ]]; then
        cp -i --parents $i "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}/include"
    fi
done

cd "${SCRIPT_DIR}"
