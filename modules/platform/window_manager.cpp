#include "window_manager.hpp"
#include "platform_module.hpp"

namespace engine
{
    void WindowManager::create(const window::config& window_config, const context::config& context_config)
    {
        const auto factory = PlatformModule::create_factory();

        window  =  factory->create_window();
        events  =  factory->create_events();
        context =  factory->create_context();

         window->create(window_config);
        context->create(window->handle(), context_config);
    }

    void WindowManager::destroy() const
    {
        context->destroy();
         window->destroy();
    }

    void WindowManager::update() const
    {
        context->update();
         events->update();
    }

    void WindowManager::open() const
    {
        window->show();
    }

    void WindowManager::close() const
    {
        window->state = window::state::closed;
    }

    int32_t WindowManager::width() const
    {
        return window->size.width;
    }

    int32_t WindowManager::height() const
    {
        return window->size.height;
    }

    bool WindowManager::is_active() const
    {
        return window->state != window::state::closed;
    }

    WindowManager& WindowManager::instance()
    {
        static WindowManager instance; return instance;
    }

    void WindowManager::resize(const window::size& size) const
    {
        window->size = size;
    }
}