#!/bin/bash


################################################################
# get script folder
################################################################
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"


################################################################
# Print help
################################################################
if [ "$1" == "" ] || [ $1 == "h" ] || [ $1 == "help" ] || [ $1 == "-h" ] || [ $1 == "-help" ] || [ $1 == "--h" ] || [ $1 == "--help" ]; then
    echo "$0 shared|static [Linux|Win32|x64]"
    echo "  Linux is default."
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
OPEN_SCEANARIO_API=OpenSCENARIO.V1_1.API_${PLATFORM_NAME}_${BINDING_TYPE}
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
cp -r "${SCRIPT_DIR}/../applications/openScenarioReader/src/OpenScenarioReader.cpp" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"


################################################################
# prepare CMakeLists.txt
################################################################
cp -f "${SCRIPT_DIR}/../CMakeHelpers.cmake" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"
"${SCRIPT_DIR}/createCMakeListsTemplate.sh" "${OPEN_SCEANARIO_API}"


################################################################
# copy examples
################################################################
cp -r "${SCRIPT_DIR}/../applications/openScenarioTester/res" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"


################################################################
# prepare lib files
################################################################
# check if libraries are already compiled
if [ ${PLATFORM_NAME} == "Linux" ] ; then
    if [ ! -d "${SCRIPT_DIR}/../build/output/${PLATFORM_NAME}_${BINDING_TYPE}/${BUILD_TYPE_CAP}" ] ; then
        echo "Please run './generateLinux.sh ${BUILD_TYPE} ${BINDING_TYPE} make' to compile the OpenSCENARIO libraries!"
        exit -1
    fi
else
    if [ ! -d "${SCRIPT_DIR}/../build/output/${PLATFORM_NAME}_${BINDING_TYPE}/${BUILD_TYPE_CAP}" ] ; then
        echo "Please run './generateWindows.bat (VS2010|...|VS2022) ${BUILD_TYPE} ${BINDING_TYPE} ${PLATFORM_NAME} make' to compile the OpenSCENARIO libraries!"
        exit -1
    fi
fi

# create lib folders
mkdir -p "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"

# copy libs
if [ ${PLATFORM_NAME} == "Linux" ] ; then
    LIB_SHST="lib*.a"
    if [ ${BINDING_TYPE} == "shared" ] ; then
        LIB_SHST="lib*.so*"
    fi
else
    LIB_SHST="*.lib"
    if [ ${BINDING_TYPE} == "shared" ] ; then
        LIB_SHST="*.dll"
    fi
fi
cp -r "${SCRIPT_DIR}"/../build/output/${PLATFORM_NAME}_${BINDING_TYPE}/${BUILD_TYPE_CAP}/${LIB_SHST} "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"
if [ ${PLATFORM_NAME} == "Linux" ] ; then
    #/home/deakon/Projects/openscenario.api.test.101/cpp/build/cgReleaseMakeStatic/antlr4_runtime/src/antlr4_runtime/runtime/Cpp/dist/
    cp -r "${SCRIPT_DIR}"/../build/??${BUILD_TYPE_CAP}Make${BINDING_TYPE_CAP}/antlr4_runtime/src/antlr4_runtime/runtime/Cpp/dist/${LIB_SHST} "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"
else
    #C:/Users/Deakon/source/repos/openscenario.api.test.101/cpp/build/cgMultiVS2019Win32Static/antlr4_runtime/src/antlr4_runtime/runtime/Cpp/dist/Release
    cp -r "${SCRIPT_DIR}"/../build/??MultiVS20??${PLATFORM_NAME}${BINDING_TYPE_CAP}/antlr4_runtime/src/antlr4_runtime/runtime/Cpp/dist/${BUILD_TYPE_CAP}/${LIB_SHST} "${OPEN_SCEANARIO_API}/lib/${PLATFORM_PATH}${PLATFORM_NAME}"
fi

# strip debug infos
#strip -s "${OPEN_SCEANARIO_API}"/lib/Linux/*


################################################################
# create package
################################################################
# tar and gzip
CUR_DATE=`date '+%Y.%m.%d'`
tar -zcf "${OPEN_SCEANARIO_API}_${CUR_DATE}.tgz" "${OPEN_SCEANARIO_API}"
