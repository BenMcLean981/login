add_library(RedBlack RedBlack.cpp)

target_include_directories(RedBlack
    PUBLIC
    "${PROJECT_SOURCE_DIR}/src/include"
)

target_compile_definitions(RedBlack
    PUBLIC
    PUBLIC_RedBlack
    PRIVATE
    PRIVATE_RedBlack
)