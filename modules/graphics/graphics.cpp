#include "graphics.hpp"

#include "opengl/pipeline.hpp"
#include "opengl/functions_loader.hpp"

namespace engine
{
    void Graphics::init()
    {
        init_opengl_state();
    }

    void Graphics::init_opengl_state()
    {
        opengl::FunctionsLoader::init_core();
        opengl::FunctionsLoader::init_extensions();

        opengl::Pipeline::default_state();
    }
}