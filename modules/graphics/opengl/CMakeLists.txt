#=======================================================================================================================
target_precompile_headers(${PROJECT_NAME} PRIVATE headers.hpp)
target_link_libraries(${PROJECT_NAME}     PRIVATE opengl32)
target_sources(${PROJECT_NAME}            PRIVATE functions_loader.cpp commands.cpp pipeline.cpp object.cpp buffer.cpp
                                          vertex_array.cpp shader_stage.cpp shader.cpp)
#=======================================================================================================================