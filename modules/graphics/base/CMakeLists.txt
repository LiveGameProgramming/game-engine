#=======================================================================================================================
target_include_directories(${PROJECT_NAME} PRIVATE PUBLIC ..)
target_precompile_headers(${PROJECT_NAME}  PRIVATE PUBLIC headers.hpp)
target_sources(${PROJECT_NAME}             PRIVATE graphics_module.cpp)
#=======================================================================================================================