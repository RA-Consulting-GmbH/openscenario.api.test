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
    #set(CMAKE_CXX_EXTENSIONS OFF)
    #set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
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
        if( CMAKE_BUILD_TYPE STREQUAL "Release" )
            set( CMAKE_BUILD_TYPE Release )
            message( STATUS "${PROJECT_NAME} configuration: Release" )
        elseif( CMAKE_BUILD_TYPE STREQUAL "Debug" )
            set( CMAKE_BUILD_TYPE Debug )
            add_definitions( -D_DEBUG )
            add_compile_options( -g -O0 )
            message( STATUS "${PROJECT_NAME} configuration: Debug" )
        else()
            message( WARNING "Unknown build target: ${CMAKE_BUILD_TYPE}" )
        endif()
        set( NO_PSABI "-Wno-psabi" )
        if( APPLE )
            set( NO_PSABI "" )
        endif()
        add_definitions( -Wall -fPIC -Wno-unknown-pragmas -Wno-unused-result ${NO_PSABI} )
        message( STATUS "Platform: ${PLATFORM_PARAM}; Shared lib: ${BUILD_SHARED_LIBS}" )
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
# Parses the version.h header file...
function (RAC_GET_VERSION versionfilepath)
    file(READ ${versionfilepath} version_h)

    string(REGEX MATCH " MAJORVERSION[ \t]*([0-9]*)" _ ${version_h})
    set(VERSION_MAJOR ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH " MINORVERSION[ \t]*([0-9]*)" _ ${version_h})
    set(VERSION_MINOR ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH " PATCHNUMBER[ \t]*([0-9]*)" _ ${version_h})
    set(PATCHNUMBER ${CMAKE_MATCH_1} PARENT_SCOPE)
    
    string(REGEX MATCH "OSC_MAJORVERSION[ \t]*([0-9]*)" _ ${version_h})
    set(OSC_VERSION_MAJOR ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "OSC_MINORVERSION[ \t]*([0-9]*)" _ ${version_h})
    set(OSC_VERSION_MINOR ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "OSC_PATCHNUMBER[ \t]*([0-9]*)" _ ${version_h})
    set(OSC_PATCHNUMBER ${CMAKE_MATCH_1} PARENT_SCOPE)
    
#    string(TIMESTAMP VERSION_TIME "%H:%M:%S" UTC)
#    set(VERSION_TIME ${VERSION_TIME} PARENT_SCOPE)
#    add_definitions(-DVERSION_TIME="${VERSION_TIME}")
    
#    string(TIMESTAMP VERSION_DATE "%Y-%m-%d" UTC)
#    set(VERSION_DATE ${VERSION_DATE} PARENT_SCOPE)
#    add_definitions(-DVERSION_DATE="${VERSION_DATE}")
endfunction (RAC_GET_VERSION)


################################################################
# Generate version, company, and product info for Windows resource file (parses the companyInfo.txt file...)
function (RAC_GET_COMPANY_INFO companyInfoFilepath)
    file(READ ${companyInfoFilepath} companyInfo_txt)

    string(REGEX MATCH "COMPANY_NAME=([^\r\n]*)[ \t\r\n]+" _ ${companyInfo_txt})
    set(COMPANY_NAME ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "COMPANY_ADDRESS_STREET=([^\r\n]*)[ \t\r\n]+" _ ${companyInfo_txt})
    set(COMPANY_ADDRESS_STREET ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "COMPANY_ADDRESS_POSTAL_CODE=([^\r\n]*)[ \t\r\n]+" _ ${companyInfo_txt})
    set(COMPANY_ADDRESS_POSTAL_CODE ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "COMPANY_ADDRESS_CITY=([^\r\n]*)[ \t\r\n]+" _ ${companyInfo_txt})
    set(COMPANY_ADDRESS_CITY ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "COMPANY_ADDRESS_COUNTRY=([^\r\n]*)[ \t\r\n]+" _ ${companyInfo_txt})
    set(COMPANY_ADDRESS_COUNTRY ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "LEGAL_COPYRIGHT=([^\r\n]*)[ \t\r\n]+" _ ${companyInfo_txt})
    set(LEGAL_COPYRIGHT ${CMAKE_MATCH_1})
    string(TIMESTAMP LEGAL_YEAR "%Y" UTC)
    set(LEGAL_COPYRIGHT "${LEGAL_COPYRIGHT} ${LEGAL_YEAR}" PARENT_SCOPE)
endfunction (RAC_GET_COMPANY_INFO)

function (RAC_GET_PRODUCT_INFO productInfoFilepath)
    file(READ ${productInfoFilepath} productInfo_txt)

    string(REGEX MATCH "PRODUCT_NAME=([^\r\n]*)[ \t\r\n]+" _ ${productInfo_txt})
    set(PRODUCT_NAME ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "PRODUCT_TYPE=([^\r\n]*)[ \t\r\n]+" _ ${productInfo_txt})
    set(PRODUCT_TYPE ${CMAKE_MATCH_1} PARENT_SCOPE)

    string(REGEX MATCH "FILE_DESCRIPTION=([^\r\n]*)[ \t\r\n]+" _ ${productInfo_txt})
    set(FILE_DESCRIPTION ${CMAKE_MATCH_1} PARENT_SCOPE)
endfunction (RAC_GET_PRODUCT_INFO)
################################################################
# Copy the resources for testing
# @param dependentLibName name of the dependent lib target
# @param targetName name of the target
function(POST_BUILD_COPY_DEPENDENT_LIB dependentLibName targetName)
if (BUILD_SHARED_LIBS)
	add_custom_command(TARGET ${targetName} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy
					"$<TARGET_FILE:${dependentLibName}>"
					"$<TARGET_FILE_DIR:${targetName}>"
			COMMAND ${CMAKE_COMMAND} -E echo "Copying '${dependentLibName}' to '$<TARGET_FILE_DIR:${targetName}>'"
		   )
endif()
endfunction()

################################################################
# Copy the antlr4 runtime libraries
# @param targetName name of the target
function(POST_BUILD_COPY_ANTLR_RUNTIME_FILES targetName)
if (BUILD_SHARED_LIBS)
add_custom_command(TARGET ${targetName}
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                           -E copy ${ANTLR4_RUNTIME_LIBRARIES}
						   "$<TARGET_FILE_DIR:${targetName}>")
endif()
endfunction()

################################################################
# Copy the resources for testing
function(POST_BUILD_ADD_COPY_TEST_RESOURCES targetName dirTestResourceFiles)

# silently ignored when the directories already exist
make_directory (${dirTestResourceFiles})
		
add_custom_command(TARGET ${targetName} POST_BUILD
		# Create the output directory
        COMMAND ${CMAKE_COMMAND} -E make_directory $<TARGET_FILE_DIR:${targetName}>/test-rc
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${dirTestResourceFiles} $<TARGET_FILE_DIR:${targetName}>/test-rc
       )
endfunction()

