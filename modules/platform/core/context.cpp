#include "context.hpp"
#include "window.hpp"

#include "platform_factory.hpp"

namespace engine::core
{
    void Context::init_extensions()
    {
        const auto factory = PlatformFactory::create();

        const auto window  = factory->create_window();
        const auto context = factory->create_context();

        window->create({ "CoreContext" });

        context->create_core(window->handle());
        context->init_functions();

        context->destroy();
        window->destroy();
    }
}