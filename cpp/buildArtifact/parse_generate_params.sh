#!/bin/bash
# This is used for PLATFORM_PARAM and if not set then ${CMAKE_SYSTEM_NAME} is used.
PLATFORM_NAME="Linux"
# This is used for CMAKE_BUILD_TYPE and if not set then "Debug" is used.
BUILD_TARGET="Release"
# Static or shared lib
BUILD_STATIC_LIBS="OFF"
# Build / compile project directly after cmake.
MAKE="no"

for i in $* ; do
    case "$i" in
        "Debug")
            BUILD_TARGET="Debug"
            ;;
        "make")
            MAKE="yes"
            ;;
        "static")
            BUILD_STATIC_LIBS="ON"
            ;;	
        *)
            ;;
    esac
done
