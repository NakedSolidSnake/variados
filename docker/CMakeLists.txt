cmake_minimum_required(VERSION 3.16)
project(UDPServer)

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_BUILD_TYPE Debug)

add_subdirectory (communication)

add_executable(server "")
target_link_libraries(server communication)
target_sources(server 
    PUBLIC 
    ${CMAKE_CURRENT_LIST_DIR}/src/main.c
    )