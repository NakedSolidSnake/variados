cmake_minimum_required(VERSION 3.7.0)

project(Client_Server)

set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)

# This one is important
SET(CMAKE_SYSTEM_NAME Linux)

# Specify the cross compiler

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(communication)

add_executable(server "")
target_link_libraries(server PUBLIC communication_static)
target_sources(server 
  PUBLIC 
  ${CMAKE_CURRENT_LIST_DIR}/server/server.c
  )

add_executable(client "")
target_link_libraries(client PUBLIC communication_static)
target_sources(client 
PUBLIC 
${CMAKE_CURRENT_LIST_DIR}/client/client.c
)