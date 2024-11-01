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
        using namespace opengl;

        FunctionsLoader::init_core();
        FunctionsLoader::init_extensions();

        Pipeline::default_state();
    }
}