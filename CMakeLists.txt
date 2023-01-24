cmake_minimum_required(VERSION 3.11)
project(
  cepeve
  VERSION 0.0.1
  DESCRIPTION "Eve-inspired cpp mud game"
  LANGUAGES CXX
)

SET(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(app)
add_subdirectory(console)
add_subdirectory(player)
