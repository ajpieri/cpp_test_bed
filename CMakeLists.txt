cmake_minimum_required(VERSION 3.10)

# set the project name
project(CppTestBed)

include_directories(
    ${PROJECT_SOURCE_DIR}/inc
    ${PROJECT_SOURCE_DIR}/src
)

file(GLOB SourceFiles
    "${PROJECT_SOURCE_DIR}/inc/*.h"
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
    main.cpp
)

# add the executable
add_executable("${PROJECT_NAME}" "${SourceFiles}")

install (TARGETS "${PROJECT_NAME}" DESTINATION ${PROJECT_SOURCE_DIR}/install)
# install (FILES "main.cpp" DESTINATION src)