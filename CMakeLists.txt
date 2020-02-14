cmake_minimum_required(VERSION 3.5)

project(CMakeTest VERSION 1.0.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#
# Library
#
add_subdirectory(Library)

#
# Executable project
#
add_executable(CMakeTest main.cpp)

# Write version header file to build directory
configure_file(version.h.in version.h)

# Add te build directory to include paths, so that generated version.h can be found
target_include_directories(
    CMakeTest PUBLIC
    "${PROJECT_BINARY_DIR}"
)

target_link_libraries(
    CMakeTest PUBLIC 
    Library
    )

install(
    TARGETS CMakeTest 
    DESTINATION bin
    )

install(
    FILES "${PROJECT_BINARY_DIR}/version.h" 
    DESTINATION include
    )