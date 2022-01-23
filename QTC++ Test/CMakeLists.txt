cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(QTC++ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets 3.1 REQUIRED)
target_link_libraries(discord_client PRIVATE ${wxWidgets_LIBRARY})


# ExternalProject base
set_property(DIRECTORY PROPERTY EP_BASE ${CMAKE_BINARY_DIR}/subprojects)

set(STAGED_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/stage)

add_subdirectory(code)
add_subdirectory(resource)
add_subdirectory(thirdparty)

include(ExternalProject)
ExternalProject_Add(${PROJECT_NAME}_core
  DEPENDS
    wxWidgets_external
  SOURCE_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/code
  CMAKE_ARGS
    -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
    -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
    -DCMAKE_CXX_STANDARD=${CMAKE_CXX_STANDARD}
    -DCMAKE_CXX_EXTENSIONS=${CMAKE_CXX_EXTENSIONS}
    -DCMAKE_CXX_STANDARD_REQUIRED=${CMAKE_CXX_STANDARD_REQUIRED}
    -DwxWidgets_ROOT_DIR=${wxWidgets_ROOT_DIR}
    -DENV_WX_CONFIG=${ENV_WX_CONFIG}
  CMAKE_CACHE_ARGS
    -DCMAKE_CXX_FLAGS:STRING=${CMAKE_CXX_FLAGS}
    -DCMAKE_PREFIX_PATH:PATH=${CMAKE_PREFIX_PATH}
  BUILD_ALWAYS
    1
  INSTALL_COMMAND
    ""
  )