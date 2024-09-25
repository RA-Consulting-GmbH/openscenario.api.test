#!/bin/bash

################################################################
# get script folder
################################################################
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"

################################################################
# Check for parameters; print help
################################################################
if [ "$1" == "" ] || [ "$1" == "h" ] || [ "$1" == "help" ] || [ "$1" == "-h" ] || [ "$1" == "-help" ] || [ "$1" == "--h" ] || [ "$1" == "--help" ]; then
    echo "$0 shared|static [debug|release] [Linux|Win32|x64]"
    echo "  release and Linux are default."
    exit 0
fi

################################################################
# Parse cmd line params
################################################################
# BUILD_TYPE currently not used
BUILD_TYPE="release"
BUILD_TYPE_CAP="Release"
BINDING_TYPE="shared"
BINDING_TYPE_CAP="Shared"
PLATFORM_NAME="Linux"
PLATFORM_PATH=
for i in $*; do
    case "$i" in
        "debug")
            BUILD_TYPE="debug"
            BUILD_TYPE_CAP="Debug"
            ;;
        "static")
            BINDING_TYPE="static"
            BINDING_TYPE_CAP="Static"
            ;;
        "Win32")
            PLATFORM_NAME="Win32"
            PLATFORM_PATH="Windows/"
            ;;
        "x64")
            PLATFORM_NAME="x64"
            PLATFORM_PATH="Windows/"
            ;;
        *) ;;
    esac
done

################################################################
# setup some variables anf prepare target dir
################################################################
# cd to script dir
cd ${SCRIPT_DIR}
# set OpenSCENARIO API folder
OPEN_SCEANARIO_API=OpenSCENARIO_API_${PLATFORM_NAME}${BINDING_TYPE_CAP}${BUILD_TYPE_CAP}
# current OpenSCENARIO libs
OSC_LIBS="expressionsLib openScenarioLib antlr4_runtime/src/antlr4_runtime/runtime/Cpp/dist"
# prepare OpenSCENARIO API folder
rm -rf "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"/*
mkdir -p "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"

################################################################
# prepare includes and copy source(s)
################################################################
# collect headers and copy them
echo "Collecting headers..."
${SCRIPT_DIR}/collectHeaderFiles.sh ${OPEN_SCEANARIO_API}
################################
# copy main source file
mkdir -p "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}/src/"
cp -r "${SCRIPT_DIR}/../applications/openScenarioReader/src/OpenScenarioReader.cpp" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}/src/"

################################################################
# prepare CMakeLists.txt
################################################################
cp -f "${SCRIPT_DIR}/../CMakeHelpers.cmake" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"
"${SCRIPT_DIR}/createCMakeLists.sh" ${OPEN_SCEANARIO_API} ${BINDING_TYPE} ${BUILD_TYPE}

################################################################
# copy examples
################################################################
cp -r "${SCRIPT_DIR}/../applications/openScenarioTester/res" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"

################################################################
# copy LICENSE and NOTICE
################################################################
cp "${SCRIPT_DIR}/../../LICENSE" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"
cp "${SCRIPT_DIR}/../../NOTICE"

################################################################
# prepare lib files
################################################################
# check if libraries are already compiled
if [ ${PLATFORM_NAME} == "Linux" ]; then
    if [ ! -d "${SCRIPT_DIR}/../build/cg${BUILD_TYPE_CAP}Make${BINDING_TYPE_CAP}/" ]; then
        echo "Please run './generateLinux.sh ${BUILD_TYPE} ${BINDING_TYPE} make' to compile the OpenSCENARIO libraries!"
        exit -1
    fi
else
    VISUAL_STUDIO=""
    # determine Visual Studio version
    for j in 2010 2012 2013 2015 2017 2019 2022; do if [[ -d "${SCRIPT_DIR}/../build/cgMultiVS${j}${PLATFORM_NAME}${BINDING_TYPE_CAP}" ]]; then
        VISUAL_STUDIO=${j}
        break
    fi; done
    if [ "${VISUAL_STUDIO}" == "" ] || [ ! -d "${SCRIPT_DIR}/../build/cgMultiVS${VISUAL_STUDIO}${PLATFORM_NAME}${BINDING_TYPE_CAP}/" ]; then
        echo "Please run './generateWindows.bat (VS2010|...|VS2022) ${BUILD_TYPE} ${BINDING_TYPE} ${PLATFORM_NAME} make' to compile the OpenSCENARIO libraries!"
        exit -1
    fi
fi

# create lib folders
mkdir -p "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"

# determine libs extension
if [ ${PLATFORM_NAME} == "Linux" ]; then
    LIB_SHST="lib*.a"
    if [ ${BINDING_TYPE} == "shared" ]; then
        LIB_SHST="lib*.so*"
    fi
fi

# platform dependent build folder
PLATFORM_SPECIFIC_PATH="cgMultiVS${VISUAL_STUDIO}${PLATFORM_NAME}${BINDING_TYPE_CAP}"
if [ ${PLATFORM_NAME} == "Linux" ]; then
    PLATFORM_SPECIFIC_PATH="cg${BUILD_TYPE_CAP}Make${BINDING_TYPE_CAP}"
fi

# copy all osc libs
for LIB in ${OSC_LIBS}; do
    if [ ${PLATFORM_NAME} == "Linux" ]; then
        cp -r "${SCRIPT_DIR}"/../build/${PLATFORM_SPECIFIC_PATH}/${LIB}/${LIB_SHST} "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"
    fi
    if [ ${PLATFORM_NAME} == "Win32" ] || [ ${PLATFORM_NAME} == "x64" ]; then
        cp -r "${SCRIPT_DIR}"/../build/${PLATFORM_SPECIFIC_PATH}/${LIB}/${BUILD_TYPE_CAP}/*.lib "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"
        if [ ${BINDING_TYPE} == "shared" ]; then
            cp -r "${SCRIPT_DIR}"/../build/${PLATFORM_SPECIFIC_PATH}/${LIB}/${BUILD_TYPE_CAP}/*.dll "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"
            cp -r "${SCRIPT_DIR}"/../build/${PLATFORM_SPECIFIC_PATH}/${LIB}/${BUILD_TYPE_CAP}/*.exp "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"
        fi
    fi
done

# strip debug infos
#strip -s "${OPEN_SCEANARIO_API}"/lib/Linux/*

################################################################
# create package
################################################################
# tar and gzip
CUR_DATE=$(date '+%Y.%m.%d')
if [ ${PLATFORM_NAME} == "Linux" ]; then
    tar -zcf "${OPEN_SCEANARIO_API}_${CUR_DATE}.tgz" "${OPEN_SCEANARIO_API}"
else
    zip -rq "${OPEN_SCEANARIO_API}_${CUR_DATE}.zip" "${OPEN_SCEANARIO_API}"
fi
# rm orig
rm -rf "${OPEN_SCEANARIO_API}"
