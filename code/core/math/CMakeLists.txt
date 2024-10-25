target_precompile_headers(${PROJECT_NAME} PRIVATE private.hpp)
target_sources(${PROJECT_NAME}            PRIVATE column.cpp mat4.cpp vec3.cpp)