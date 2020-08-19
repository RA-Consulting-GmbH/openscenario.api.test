#!/bin/bash


################################################################
# setup some variables
################################################################
# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
# cd to script dir
cd ${SCRIPT_DIR}
# set openSCENARIO API folder
OPEN_SCEANARIO_API=openScenario.v1_0.API


################################################################
# prepare includes
################################################################
# check if headers are collected
if [ ! -d "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}" ] ; then
    echo "Collecting headers"
    ${SCRIPT_DIR}/collectHeaderFiles.sh ${OPEN_SCEANARIO_API}
fi


################################################################
# prepare CMakeLists.txt
################################################################
${SCRIPT_DIR}/createCMakeListsTemplate.sh ${OPEN_SCEANARIO_API}


################################################################
# prepare lib files
################################################################
# check if libraries are already compiled
if [ ! -d "${SCRIPT_DIR}/../output/Linux/Release" ] ; then
    echo "Please run './generate_Linux.sh Release make' to compile the openSCENARIO libraries!"
    exit -1
fi

# create lib folder
mkdir -p ${OPEN_SCEANARIO_API}/lib

# copy libs
cp -a ${SCRIPT_DIR}/../output/Linux/Release/lib* ${OPEN_SCEANARIO_API}/lib

# strip debug infos
strip ${OPEN_SCEANARIO_API}/lib/*

# tar and gzip
CUR_DATE=`date '+%Y.%m.%d'`
tar -zcf ${OPEN_SCEANARIO_API}_${CUR_DATE}.tgz ${OPEN_SCEANARIO_API}


