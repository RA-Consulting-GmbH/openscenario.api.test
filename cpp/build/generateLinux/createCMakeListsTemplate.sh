#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
# cd to project root
cd ${SCRIPT_DIR}/../../

if [ ! -d "${SCRIPT_DIR}/../output/Linux/Release" ]; then
    echo "Please run './generate_Linux.sh Release make' to compile the binaries!"
    exit -1
fi

################################################################
# prepare include files
################################################################
# path and file name for findHeaders.sh
# it is placed in the openScenarioTester project folder
FIND_HEADERS_SH_PATH=./applications/openScenarioTester/v_1_0/src
FIND_HEADERS_SH_FILE=findHeaders.sh
FIND_HEADERS_SH=${FIND_HEADERS_SH_PATH}/${FIND_HEADERS_SH_FILE}

# prepare inlude paths for C++ compiler in order to extract ALL necessary non-system include files
# this has to be done outside the openScenarioTester project folder to also reach all referenced external dependencies
echo "#!/bin/bash" > ${FIND_HEADERS_SH}
echo "cpp -MM \\" >> ${FIND_HEADERS_SH}
for i in `find . -type d -print` ; do
    echo "-I ../../../.$i \\" >> ${FIND_HEADERS_SH} ;
done
echo OpenScenarioTester.cpp >> ${FIND_HEADERS_SH}

# give the findHeaders.sh exec rights
chmod a+x ${FIND_HEADERS_SH}

# go to the openScenarioTester folder where its main file OpenScenarioTester.cpp is located
cd ${SCRIPT_DIR}/../../applications/openScenarioTester/v_1_0/src/
# prepare the openScenario source for install folder; ok it is a bit clumsy but it works as expected
echo "rm -rf ${SCRIPT_DIR}/../../applications/openScenarioTester/v_1_0/src/install"
rm -rf install
mkdir -p install/include/openSCENARIO/a/b/c/d
# and now let the compiler collect all necessary dependent header files
# and copy them preserving their directory structure
for i in `./${FIND_HEADERS_SH_FILE}` ; do
    if [[ $i != "\\" ]] && [[ $i != *".cpp"* ]] && \
       [[ $i != *".o"* ]] && [[ $i != *"openScenarioTester"* ]] ; then
        cp -i --parents $i install/include/openSCENARIO/a/b/c/d ;
    fi ;
done
# clean up
echo "rm -rf ${SCRIPT_DIR}/../../applications/openScenarioTester/v_1_0/src/install/include/openSCENARIO/a"
rm -rf install/include/openSCENARIO/a


################################################################
# prepare lib files
################################################################
# create lib folder
mkdir -p install/lib/openSCENARIO

# copy libs
cp -a ${SCRIPT_DIR}/../output/Linux/Release/lib* install/lib/openSCENARIO

# strip debug infos
strip install/lib/openSCENARIO/*

# tar and gzip
CUR_DATE=`date '+%Y.%m.%d'`
tar -zcf openSCENARIO_${CUR_DATE}.tgz install
mv openSCENARIO_${CUR_DATE}.tgz ${SCRIPT_DIR}
