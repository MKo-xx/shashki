set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_custom_target(
    generated
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/fast_game_generate.py > ${CMAKE_CURRENT_SOURCE_DIR}/FastGame.generated.inc
    )

file(GLOB SRC_FILES *.cpp)

add_library(shashki OBJECT ${SRC_FILES})
add_dependencies(shashki generated)

add_subdirectory(tests)

