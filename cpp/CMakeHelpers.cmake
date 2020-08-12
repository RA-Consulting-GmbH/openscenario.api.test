################################################################
# Set params common to all projects
macro (RAC_SET_COMMON_PARAM)
    if(WIN32)
        # Visual Studio solution folders
        set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    endif(WIN32)
endmacro (RAC_SET_COMMON_PARAM)


################################################################
# Set C++ params
macro (RAC_SET_CPP_PARAM)
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
endmacro (RAC_SET_CPP_PARAM)


################################################################
# Set build params
macro (RAC_SET_BUILD_PARAM)
    # Restrict configurations to Debug, Release, and RelWithDebInfo only
    if(CMAKE_CONFIGURATION_TYPES)
        set(CMAKE_CONFIGURATION_TYPES "Debug;Release;RelWithDebInfo" CACHE STRING "" FORCE)
        string(REPLACE "/O2" "/Od" CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
        string(REPLACE "/O2" "/Od" CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO}")
        string(REPLACE "/Ob1" "/Ob0" CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
        string(REPLACE "/Ob1" "/Ob0" CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO}")
        string(CONCAT CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}" " /JMC")
        string(CONCAT CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO}" " /JMC")
        message( STATUS "Multi-configuration generator: ${CMAKE_CONFIGURATION_TYPES}" )
    else()
        message( STATUS "Single-configuration generator: ${CMAKE_BUILD_TYPE}" )
    endif()

    # Linux compiler options
    if( UNIX )
        if( BUILD_TARGET_PARAM STREQUAL "Release" )
            set( CMAKE_BUILD_TYPE Release )
            message( STATUS "${PROJECT_NAME} configuration: Release" )
        elseif( BUILD_TARGET_PARAM STREQUAL "Debug" )
            set( CMAKE_BUILD_TYPE Debug )
            add_definitions( -D_DEBUG )
            add_compile_options( -g -O0 )
            message( STATUS "${PROJECT_NAME} configuration: Debug" )
        else()
            message( WARNING "Unknown build target: ${BUILD_TARGET_PARAM}" )
        endif()
        add_definitions( -Wall -fPIC -Wno-attributes -Wno-unknown-pragmas -Wunused-result -Wno-psabi )
        message( STATUS "Platform: ${PLATFORM_PARAM}; Static lib: ${BUILD_STATIC_LIBS}" )
    endif()

    # Check processor bus width on Windows
    if( WIN32 )
        if(CMAKE_SIZEOF_VOID_P EQUAL 8)
            set( PLATFORM_PARAM "x64" )
        elseif(CMAKE_SIZEOF_VOID_P EQUAL 4)
            set( PLATFORM_PARAM "Win32" )
        endif()
    endif()
endmacro (RAC_SET_BUILD_PARAM)


################################################################
# Set folders
macro (RAC_SET_FOLDERS)
    # On Windows CMAKE_BUILD_TYPE is empty, but the build type is added automatically as defined in the MSBuild-call (Release/Debug)
    set (CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build/output/${PLATFORM_PARAM}/${CMAKE_BUILD_TYPE})
    set( EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR} )
    set( LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR} )
endmacro (RAC_SET_FOLDERS)
