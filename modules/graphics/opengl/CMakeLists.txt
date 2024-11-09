#=======================================================================================================================
target_precompile_headers(module_graphics PRIVATE headers.hpp)
    target_link_libraries(module_graphics PRIVATE opengl32)
           target_sources(module_graphics PRIVATE functions_loader.cpp commands.cpp pipeline.cpp object.cpp buffer.cpp
                          vertex_array.cpp shader_stage.cpp renderer.cpp shader.cpp)
#=======================================================================================================================