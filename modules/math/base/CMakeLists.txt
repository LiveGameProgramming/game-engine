#=======================================================================================================================
target_include_directories(${PROJECT_NAME} PRIVATE PUBLIC ..)
target_precompile_headers(${PROJECT_NAME}  PRIVATE PUBLIC headers.hpp)
target_sources(${PROJECT_NAME}             PRIVATE column.cpp mat4.cpp vec3.cpp)
#=======================================================================================================================
add_subdirectory(math)
#=======================================================================================================================