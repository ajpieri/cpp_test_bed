cmake_minimum_required(VERSION 3.10)

# set the project name
project(CppTestBed)

# add the executable
add_executable("${PROJECT_NAME}" "main.cpp")

install (TARGETS "${PROJECT_NAME}" DESTINATION bin)
install (FILES "src/main.cpp" DESTINATION src)