cmake_minimum_required(VERSION 3.12)

project(Shashki)

add_subdirectory(src)

#
add_executable(sample main.cpp)
target_link_libraries(sample shashki)
target_compile_options(sample PRIVATE -Wall -Wextra -Wpedantic -Werror)
set_target_properties(sample PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

