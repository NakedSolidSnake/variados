cmake_minimum_required(VERSION 3.7.0)

set (PROJECT_NAME Template)
set (BINARY_NAME template)

project(${PROJECT_NAME})

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_BUILD_TYPE Debug)

function(generate BINARY SOURCE)
  add_executable(${BINARY} ${SOURCE})
  target_include_directories(${BINARY}
    PUBLIC 
    ${CMAKE_CURRENT_LIST_DIR}    
  )

endfunction()

list (APPEND SOURCES_1 encapsulation-1.c main-1.c)
generate (encapsulation-1.out "${SOURCES_1}")

list (APPEND SOURCES_2 encapsulation-2.c main-2.c)
generate (encapsulation-2.out "${SOURCES_2}")