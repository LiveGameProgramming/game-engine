add_library(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PRIVATE PUBLIC ..)
target_precompile_headers(${PROJECT_NAME}  PRIVATE private.hpp)