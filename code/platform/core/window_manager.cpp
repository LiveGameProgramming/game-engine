#include "window_manager.hpp"
#include "platform_factory.hpp"

namespace engine::core
{
    void WindowManager::create(const window_config& config)
    {
        const auto factory = PlatformFactory::create();

        events = factory->create_events();
        window = factory->create_window();

        window->title(config.title).size(config.size).create();

        context = factory->create_context();
        context->create(window->handle());
    }

    void WindowManager::destroy() const
    {
        context->destroy();
        window->destroy();
    }

    void WindowManager::update() const
    {
        context->swap_buffers();
        events->update();
    }

    void WindowManager::display() const
    {
        window->state = window_state::active;
        window->display();
    }

    void WindowManager::close() const
    {
        window->state = window_state::closed;
    }

    int32_t WindowManager::width() const
    {
        return window->size_.width;
    }

    int32_t WindowManager::height() const
    {
        return window->size_.height;
    }

    bool WindowManager::is_active() const
    {
        return window->state == window_state::active;
    }
}