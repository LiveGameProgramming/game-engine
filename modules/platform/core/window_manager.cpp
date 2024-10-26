#include "window_manager.hpp"
#include "platform_factory.hpp"

namespace engine::core
{
    void WindowManager::create(const window::config& window_config, const context::config& context_config)
    {
        const auto factory = PlatformFactory::create();

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

    void WindowManager::display() const
    {
        window->state = window::state::active;
        window->display();
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
        return window->state == window::state::active;
    }

    WindowManager& WindowManager::instance()
    {
        static WindowManager instance; return instance;
    }
}