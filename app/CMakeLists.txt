file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)
# set(THREADS_PREFER_PTHREAD_FLAG ON)

# find_package(Threads REQUIRED)

add_executable(cepeve ${SRC_FILES})
target_link_libraries(cepeve console)
# target_link_libraries(program PRIVATE Threads::Threads)
