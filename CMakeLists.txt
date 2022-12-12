cmake_minimum_required(VERSION 3.10)

# set the project name
project(CppTestBed)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/_deps)

find_package(rabbitmq REQUIRED)

include_directories(
    ${PROJECT_SOURCE_DIR}/inc
    ${PROJECT_SOURCE_DIR}/src
    ${rabbitmq_INCLUDE_DIRS}
)

link_directories(${rabbitmq_LIB_DIRS})

set(SourceFiles
    inc/Test.h
    src/Test.cpp
    src/main.cpp
)

source_group(Test 
   FILES
      src/Test.cpp
      inc/Test.h
)

# add the executable
add_executable("${PROJECT_NAME}" "${SourceFiles}")

target_link_libraries("${PROJECT_NAME}" ${rabbitmq_LIBRARIES})

install (TARGETS "${PROJECT_NAME}" DESTINATION ${PROJECT_SOURCE_DIR}/install)
# install (FILES "main.cpp" DESTINATION src)