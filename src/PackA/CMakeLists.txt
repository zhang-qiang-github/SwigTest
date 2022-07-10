

file(GLOB SOURCESFILE "*.cpp" "*.c" "*.hpp")
file(GLOB HEADERSFILE "*.h")

add_library(PackA SHARED ${SOURCESFILE} ${HEADERSFILE})

SET_TARGET_PROPERTIES(PackA
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${Bin_Root}
	ARCHIVE_OUTPUT_DIRECTORY ${Lib_Root}
	COMPILE_DEFINITIONS PackA_EXPORTS
)


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set_property(SOURCE PackA.i PROPERTY CPLUSPLUS ON)
swig_add_library(PackAWrapping 
                LANGUAGE python 
                SOURCES PackA.i PackA.cpp)