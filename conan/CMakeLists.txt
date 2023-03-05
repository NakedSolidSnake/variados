cmake_minimum_required(VERSION 3.16)
project(UDPServer)

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_BUILD_TYPE Debug)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(server "")
target_link_libraries(server ${CONAN_LIBS})
target_sources(server 
    PUBLIC 
    ${CMAKE_CURRENT_LIST_DIR}/src/main.c
    )

add_custom_command(TARGET server POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_SOURCE_DIR}/assets 
    ${CMAKE_BINARY_DIR}/bin/assets) 