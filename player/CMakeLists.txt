file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(player STATIC ${SRC_FILES})

target_include_directories(player PUBLIC ${CMAKE_SOURCE_DIR}/player)

target_compile_options(console PRIVATE -Wall -Werror)
target_compile_features(console PRIVATE cxx_std_17)
