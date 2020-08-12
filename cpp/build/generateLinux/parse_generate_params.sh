#!/bin/bash
# This is used for PLATFORM_PARAM and if not set then ${CMAKE_SYSTEM_NAME} is used.
PLATFORM_NAME="Linux"
# This is used for CMAKE_BUILD_TYPE and if not set then "Debug" is used.
BUILD_TARGET="Release"
# Build / compile project directly after cmake.
MAKE="no"

case "$1" in
    "Debug")
        BUILD_TARGET="Debug"
        ;;
    "make")
        MAKE="yes"
        ;;
    *)
        ;;
esac

case "$2" in
    "Debug")
        BUILD_TARGET="Debug"
        ;;
    "make")
        MAKE="yes"
        ;;
    *)
        ;;
esac
