


################################################################
# setup some variables
################################################################
# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
# cd to script dir
cd ${SCRIPT_DIR}
# set OpenSCENARIO API folder
OPEN_SCEANARIO_API=openScenario.v1_0.API
# prepare OpenSCENARIO API folder
mkdir -p "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"
rm -rf "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"/*


################################################################
# prepare includes
################################################################
# collect headers
echo "Collecting headers..."
${SCRIPT_DIR}/collectHeaderFiles.sh ${OPEN_SCEANARIO_API}


################################################################
# prepare CMakeLists.txt
################################################################
cp -f "${SCRIPT_DIR}/../CMakeHelpers.cmake" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"
"${SCRIPT_DIR}/createCMakeListsTemplate.sh" "${OPEN_SCEANARIO_API}"


################################################################
# prepare lib files
################################################################
# check if libraries are already compiled
if [ ! -d "${SCRIPT_DIR}/../build/output/Linux_shared/Release" ] ; then
    echo "Please run './generate_Linux.sh Release make' to compile the OpenSCENARIO libraries!"
    exit -1
fi

# create lib folders
mkdir -p "${OPEN_SCEANARIO_API}/lib/Linux"
mkdir -p "${OPEN_SCEANARIO_API}/lib/Windows/Win32"
mkdir -p "${OPEN_SCEANARIO_API}/lib/Windows/x64"

# copy libs
cp -r "${SCRIPT_DIR}/../build/output/Linux_shared/Release"/lib* "${OPEN_SCEANARIO_API}/lib/Linux"
cp -r "${SCRIPT_DIR}/../build/output/Win32_shared/Release"/*.lib "${OPEN_SCEANARIO_API}/lib/Windows/Win32"
cp -r "${SCRIPT_DIR}/../build/output/x64_shared/Release"/*.lib "${OPEN_SCEANARIO_API}/lib/Windows/x64"
cp -r "${SCRIPT_DIR}/../build/output/Win32_shared/Release"/*.dll "${OPEN_SCEANARIO_API}/lib/Windows/Win32"
cp -r "${SCRIPT_DIR}/../build/output/x64_shared/Release"/*.dll "${OPEN_SCEANARIO_API}/lib/Windows/x64"
cp -r "${SCRIPT_DIR}/../build/output/Win32_shared/Release"/*.exp "${OPEN_SCEANARIO_API}/lib/Windows/Win32"
cp -r "${SCRIPT_DIR}/../build/output/x64_shared/Release"/*.exp "${OPEN_SCEANARIO_API}/lib/Windows/x64"

# strip debug infos
#strip "${OPEN_SCEANARIO_API}"/lib/*


################################################################
# copy examples
################################################################
cp -r "${SCRIPT_DIR}/../../doc/examples" "${SCRIPT_DIR}/${OPEN_SCEANARIO_API}"


################################################################
# create package
################################################################
# tar and gzip
CUR_DATE=`date '+%Y.%m.%d'`
tar -zcf "${OPEN_SCEANARIO_API}_${CUR_DATE}.tgz" "${OPEN_SCEANARIO_API}"
