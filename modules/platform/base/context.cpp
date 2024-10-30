#include "platform_factory.hpp"

namespace engine::base
{
    void Context::init_extensions()
    {
        const auto factory = PlatformFactory::create();

        const auto window    = factory->create_window();
        const auto context   = factory->create_context();
        const auto functions = factory->create_functions();

         window->create({ "CoreContext" });
        context->create_core(window->handle());

        functions->init();

        context->destroy();
         window->destroy();
    }
}