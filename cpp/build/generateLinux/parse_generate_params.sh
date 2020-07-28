#!/bin/bash
BUILD_TARGET="Release"
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
