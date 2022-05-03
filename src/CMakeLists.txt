set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SRC_FILES *.cpp)

add_library(shashki OBJECT ${SRC_FILES})

add_subdirectory(tests)

