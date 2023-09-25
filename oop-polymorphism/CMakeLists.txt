cmake_minimum_required(VERSION 3.7.0)

set (PROJECT_NAME Template)
set (BINARY_NAME template)

project(${PROJECT_NAME})

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_BUILD_TYPE Debug)

add_executable(${BINARY_NAME} "")
target_link_libraries (${BINARY_NAME} pthread)
target_sources(${BINARY_NAME}
  PUBLIC 
  ${CMAKE_CURRENT_LIST_DIR}/main.c
  ${CMAKE_CURRENT_LIST_DIR}/report.c
  ${CMAKE_CURRENT_LIST_DIR}/csv_report.c
  ${CMAKE_CURRENT_LIST_DIR}/pdf_report.c
)

target_include_directories(${BINARY_NAME}
  PUBLIC 
  ${CMAKE_CURRENT_LIST_DIR}
)