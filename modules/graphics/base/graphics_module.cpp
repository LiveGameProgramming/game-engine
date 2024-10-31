#include "graphics_module.hpp"

#include "opengl/functions_loader.hpp"
#include "opengl/pipeline.hpp"

namespace engine::base
{
    void GraphicsModule::init()
    {
        init_opengl_state();
    }

    void GraphicsModule::init_opengl_state()
    {
        using namespace opengl;

        FunctionsLoader::init_core();
        FunctionsLoader::init_extensions();

        Pipeline::default_state();
    }
}