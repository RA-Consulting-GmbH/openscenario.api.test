#!/bin/bash


################################
# Script-Dir: https://stackoverflow.com/questions/59895/get-the-source-directory-of-a-bash-script-from-within-the-script-itself
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"


################################
# Print help
if [ "$1" == "" ] || [ $1 == "h" ] || [ $1 == "help" ] || [ $1 == "-h" ] || [ $1 == "-help" ] || [ $1 == "--h" ] || [ $1 == "--help" ]; then
    echo "$0 (all [release] [shared|static] [parallel]) | ([release|debug] [shared|static] [make [parallel]])"
    echo ""
    echo "Multi config: all [release] [shared|static] [parallel]"
    echo "  Builds and compiles multiple projects or even all projects at once (takes a long time)."
    echo ""
    echo "Single config: [release|debug] [shared|static] [make [parallel]]"
    echo "  Builds and optionaly compiles only one project (quite fast)."
    exit 0
fi


################################
# Check if cmake is installed
command -v cmake >/dev/null 2>&1 || {
    echo >&2 "cmake is required to build the software. Please install cmake and add its bin path to the PATH environment variable. Aborting"
    exit 1
}


################################
# Parse cmd line params
# Multi config build
if [ $1 == "all" ]; then
    BUILD_TYPES="release debug"
    BINDING_TYPES="shared static"
    MAKE="yes"
    MAKE_TEXT=" and compiling"
    for i in $*; do
        case "$i" in
        "release")
            BUILD_TYPES="release"
            ;;
        "shared")
            BINDING_TYPES="shared"
            ;;
        "parallel")
            PAR="-j 4"
            ;;
        *) ;;
        esac
    done
# Single config build
else
    BUILD_TYPES="release"
    BINDING_TYPES="shared"
    MAKE="no"
    MAKE_TEXT=""
    for i in $*; do
        case "$i" in
        "debug")
            BUILD_TYPES="debug"
            ;;
        "static")
            BINDING_TYPES="static"
            ;;
        "make")
            MAKE="yes"
            MAKE_TEXT=" and compiling"
            ;;
        "parallel")
            PAR="-j 4"
            ;;
        *) ;;
        esac
    done
fi


################################
# Remember user dir
USER_DIR="$(pwd)"


################################
# Root-Dir
ROOT_DIR="$(pwd)"
while [ ! -d "$ROOT_DIR/.github" ]; do
    ROOT_DIR=$(realpath -s "$ROOT_DIR/..")
    if [ "/" == "$ROOT_DIR" ]; then
        echo ".github not found! Terminating..."
        exit -1
    fi
done
echo "OpenSCENARIO root dir: $ROOT_DIR"
cd "$ROOT_DIR/cpp"
echo "Entering $ROOT_DIR/cpp"


################################
# Get cmake version
CMV=$(cmake --version | egrep -o "[0-9]+\.[0-9]+")
CMV_MAJOR=$(echo $CMV | cut -d '.' -f1 -)
CMV_MINOR=$(echo $CMV | cut -d '.' -f2 -)


################################################################################
# Build the release binaries cmake version dependent
################################################
# Easy build for cmake version >= 3.19
################################################
if [ $CMV_MAJOR -ge 3 ] && [ $CMV_MINOR -ge 19 ]; then
    # Build Linux Makefiles and compile project
    for BUILD_TYPE in $BUILD_TYPES; do
        for BINDING_TYPE in $BINDING_TYPES; do
            echo -e "\nBuilding Linux $BINDING_TYPE $BUILD_TYPE ..."
            cmake -Wno-dev --preset="Linux-$BINDING_TYPE-$BUILD_TYPE"
            if [ $MAKE == "yes" ]; then
                echo -e "\nCompiling Linux $BINDING_TYPE $BUILD_TYPE ..."
                cmake --build --preset="Build-Linux-$BINDING_TYPE-$BUILD_TYPE" $PAR
            fi
            echo -e "\nFinished building$MAKE_TEXT Linux $BINDING_TYPE $BUILD_TYPE"
        done
    done

################################################
# More tedious build for cmake version < 3.19
################################################
else
    PLATFORM_NAME="Linux"
    for BUILD_TYPE in $BUILD_TYPES; do
        for BINDING_TYPE in $BINDING_TYPES; do
            BUILD_SHARED_LIBS="OFF"
            if [ $BINDING_TYPE == "shared" ]; then
                BUILD_SHARED_LIBS="ON"
            fi

            # Create build folder name
            BUT_CC=${BUILD_TYPE/d/D}
            BUT_CC=${BUT_CC/r/R}
            BIT_CC=${BINDING_TYPE/s/S}

            # Create the build folder
            BUILDFOLDER="cg${BUT_CC}Make${BIT_CC}"
            mkdir -p "build/${BUILDFOLDER}"
            LOCAL_CWD="$(pwd)"
            cd "build/${BUILDFOLDER}"

            # Build Linux Makefiles and compile project
            echo -e "\nBuilding Linux $BINDING_TYPE $BUILD_TYPE ..."
            cmake -Wno-dev -DCMAKE_BUILD_TYPE="${BUT_CC}" -DBUILD_SHARED_LIBS="${BUILD_SHARED_LIBS}" -DPLATFORM_PARAM="${PLATFORM_NAME}" -DMASTER_PROJECT=TRUE $ROOT_DIR/cpp/
            if [ $MAKE == "yes" ]; then
                echo -e "\nCompiling Linux $BINDING_TYPE $BUILD_TYPE ..."
                make $PAR
            fi
            echo -e "\nFinished building$MAKE_TEXT Linux $BINDING_TYPE $BUILD_TYPE"
            cd "$LOCAL_CWD"
        done
    done
fi


################################
# Return to user dir
cd "$USER_DIR"
