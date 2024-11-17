#include "platform.hpp"

#include "win32/factory.hpp"

namespace core
{
    void Platform::init()
    {
        init_context_functions();
    }

    void Platform::init_context_functions()
    {
        const auto factory = create_factory();

        const auto window    = factory->create_window();
        const auto context   = factory->create_context();
        const auto functions = factory->create_functions();

         window->create({ "CoreContext" });
        context->create(window->handle());

        functions->init();

        context->destroy();
         window->destroy();
    }

    std::unique_ptr<base::Factory> Platform::create_factory()
    {
        #ifdef _WINDOWS
        return std::make_unique<win32::Factory>();
        #endif
    }
}