


################################################################
# setup some variables
################################################################
# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
# cd to script dir
cd ${SCRIPT_DIR}
# set OpenSCENARIO API folder
OPEN_SCEANARIO_API=openScenario.v1_1.API
# prepare OpenSCENARIO API folder
mkdir -p "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"
rm -rf "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"/*


################################################################
# prepare includes
################################################################
# collect headers and copy them
echo "Collecting headers..."
${SCRIPT_DIR}/collectHeaderFiles.sh ${OPEN_SCEANARIO_API}

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
if [ ! -d "${SCRIPT_DIR}/../build/output/Linux_shared/Release" ] ; then
    echo "Please run './generateLinux.sh release shared make' to compile the OpenSCENARIO libraries!"
    exit -1
fi

if [ ! -d "${SCRIPT_DIR}/../build/output/Linux_shared/Debug" ] ; then
    echo "Please run './generateLinux.sh debug shared make' to compile the OpenSCENARIO libraries!"
    exit -1
fi

if [ ! -d "${SCRIPT_DIR}/../build/output/Linux_static/Release" ] ; then
    echo "Please run './generateLinux.sh release shared make' to compile the OpenSCENARIO libraries!"
    exit -1
fi

if [ ! -d "${SCRIPT_DIR}/../build/output/Linux_static/Debug" ] ; then
    echo "Please run './generateLinux.sh debug static make' to compile the OpenSCENARIO libraries!"
    exit -1
fi

 [ ! -d "${SCRIPT_DIR}/../build/output/Win32_static/Release" ] ; then
    echo "Please run './generateLinux.sh debug shared make' to compile the OpenSCENARIO libraries!"
    exit -1
fi

if [ ! -d "${SCRIPT_DIR}/../build/output/Win32_static/Debug" ] ; then
    echo "Please run './generateLinux.sh debug static make' to compile the OpenSCENARIO libraries!"
    exit -1
fi

# create lib folders
mkdir -p "${OPEN_SCEANARIO_API}/lib/Linux"
mkdir -p "${OPEN_SCEANARIO_API}/lib/Windows/Win32"
mkdir -p "${OPEN_SCEANARIO_API}/lib/Windows/x64"

# copy libs
cp -r "${SCRIPT_DIR}/../build/output/Linux_shared/Release"/lib* "${OPEN_SCEANARIO_API}/lib/Linux"
cp -r "${SCRIPT_DIR}/../build/output/Linux_shared/Debug"/lib* "${OPEN_SCEANARIO_API}/lib/Linux"

cp -r "${SCRIPT_DIR}/../build/output/Linux_static/Release"/lib* "${OPEN_SCEANARIO_API}/lib/Linux"
cp -r "${SCRIPT_DIR}/../build/output/Linux_static/Debug"/lib* "${OPEN_SCEANARIO_API}/lib/Linux"

cp -r "${SCRIPT_DIR}/../build/output/Win32_static/Release"/*.lib "${OPEN_SCEANARIO_API}/lib/Windows/Win32"
cp -r "${SCRIPT_DIR}/../build/output/Win32_static/Debug"/*.lib "${OPEN_SCEANARIO_API}/lib/Windows/Win32"

cp -r "${SCRIPT_DIR}/../build/output/Win32_shared/Release"/*.dll "${OPEN_SCEANARIO_API}/lib/Windows/Win32"
cp -r "${SCRIPT_DIR}/../build/output/Win32_shared/Debug"/*.dll "${OPEN_SCEANARIO_API}/lib/Windows/Win32"

cp -r "${SCRIPT_DIR}/../build/output/x64_static/Release"/*.lib "${OPEN_SCEANARIO_API}/lib/Windows/x64"
cp -r "${SCRIPT_DIR}/../build/output/x64_static/Debug"/*.lib "${OPEN_SCEANARIO_API}/lib/Windows/x64"

cp -r "${SCRIPT_DIR}/../build/output/x64_shared/Release"/*.dll "${OPEN_SCEANARIO_API}/lib/Windows/x64"
cp -r "${SCRIPT_DIR}/../build/output/x64_shared/Debug"/*.dll "${OPEN_SCEANARIO_API}/lib/Windows/x64"

# strip debug infos
strip -s "${OPEN_SCEANARIO_API}"/lib/Linux/*


################################################################
# create package
################################################################
# tar and gzip
CUR_DATE=`date '+%Y.%m.%d'`
tar -zcf "${OPEN_SCEANARIO_API}_${CUR_DATE}.tgz" "${OPEN_SCEANARIO_API}"
