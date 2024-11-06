#include "graphics_module.hpp"

#include "opengl/commands.hpp"
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

        opengl::Commands::clear(1.0f, 0.5f, 0.0f);
        opengl::Pipeline::default_state();
    }
}