#include "graphics_module.hpp"

#include "opengl/pipeline.hpp"
#include "opengl/functions_loader.hpp"

namespace engine
{
    void GraphicsModule::init()
    {
        init_opengl_state();
    }

    void GraphicsModule::init_opengl_state()
    {
        opengl::FunctionsLoader::init_core();
        opengl::FunctionsLoader::init_extensions();

        opengl::Pipeline::default_state();
    }
}