cmake_minimum_required(VERSION 3.10)
project(CCompiler VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wpedantic")

set(EXE "ccomp")

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

set(SOURCES
    "${SRC_DIR}/main.cpp"
    "${SRC_DIR}/io.cpp"
    "${SRC_DIR}/args.cpp"
    "${SRC_DIR}/common.cpp"
)

set(HEADER
    "${SRC_DIR}/io.hpp"
    "${SRC_DIR}/args.hpp"
    "${SRC_DIR}/common.hpp"
    "${SRC_DIR}/preprocessor.hpp"
    "extern/jlibc/jc_log.h"
)

add_executable(${EXE} ${SOURCES} ${HEADER})
target_include_directories(${EXE} PRIVATE "${SRC_DIR}" "extern/jlibc")
