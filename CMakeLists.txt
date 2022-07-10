cmake_minimum_required(VERSION 3.20.0)
project(Wrapping C CXX)

SET(Bin_Root "${CMAKE_CURRENT_SOURCE_DIR}/Bin/$(PlatformName)")
SET(Lib_Root "${CMAKE_CURRENT_SOURCE_DIR}/Lib/$(PlatformName)")
SET(ConfigurationName "$(ConfigurationName)")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")


set(Python3_ARTIFACTS_INTERACTIVE ON)
find_package(Python3 COMPONENTS Interpreter Development)
include_directories(${Python3_INCLUDE_DIRS})
link_libraries(${Python3_LIBRARIES})
message(${Python3_INCLUDE_DIRS})

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

set(CMAKE_SWIG_OUTDIR ${CMAKE_CURRENT_BINARY_DIR}/python)
set(CMAKE_PYD_OUTDIR ${CMAKE_CURRENT_BINARY_DIR}/pyd)
set(SWIG_OUTFILE_DIR ${CMAKE_CURRENT_BINARY_DIR}/cpp)

add_subdirectory(src)