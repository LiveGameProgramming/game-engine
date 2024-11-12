#=======================================================================================================================
target_precompile_headers(graphics PRIVATE headers.hpp)
    target_link_libraries(graphics PRIVATE opengl32)
           target_sources(graphics PRIVATE commands.cpp pipeline.cpp renderer.cpp buffer.cpp shader.cpp shader_stage.cpp
                                   vertex_array.cpp object.cpp functions_loader.cpp texture.cpp sampler.cpp)
#=======================================================================================================================