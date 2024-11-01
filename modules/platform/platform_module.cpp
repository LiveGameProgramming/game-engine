#include "platform_module.hpp"

#include "win32/factory.hpp"

namespace engine
{
    void PlatformModule::init()
    {
        init_context_functions();
    }

    void PlatformModule::init_context_functions()
    {
        const auto factory   = create_factory();

        const auto window    = factory->create_window();
        const auto context   = factory->create_context();
        const auto functions = factory->create_functions();

         window->create({ "CoreContext" });
        context->create(window->handle());

        functions->init();

        context->destroy();
         window->destroy();
    }

    std::unique_ptr<base::Factory> PlatformModule::create_factory()
    {
        #ifdef _WINDOWS
        return std::make_unique<win32::Factory>();
        #endif
    }
}