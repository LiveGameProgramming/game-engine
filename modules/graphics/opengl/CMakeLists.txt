#=======================================================================================================================
target_precompile_headers(graphics PRIVATE headers.hpp)
    target_link_libraries(graphics PRIVATE opengl32)
           target_sources(graphics PRIVATE commands.cpp pipeline.cpp buffer.cpp shader.cpp shader_stage.cpp texture.cpp
                          vertex_array.cpp object.cpp functions_loader.cpp sampler.cpp)
#=======================================================================================================================