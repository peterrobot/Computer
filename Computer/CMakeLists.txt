########## Project Name ##########

project(computer_io)

########## Message some information #############

message(STATUS "CMake version: ${CMAKE_VERSION}")

########## Set some variables ##########

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED Ture)

########## Subdirectories ##########

aux_source_directory(${PROJECT_SOURCE_DIR}/src LIB_DIR_SRC)

add_library(${PROJECT_NAME} ${LIB_DIR_SRC})

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)