#include "window_manager.hpp"
#include "window_factory.hpp"

namespace engine::core
{
    void WindowManager::create(const window_config& config)
    {
        const auto factory = WindowFactory::create();

        _events = factory->create_events();
        _window = factory->create_window();

        _window->title(config.title).size(config.size).create();

        _context = factory->create_context();
        _context->create(_window->handle());
    }

    void WindowManager::destroy() const
    {
        _context->destroy();
        _window->destroy();
    }

    void WindowManager::update() const
    {
        _context->swap_buffers();
        _events->update();
    }

    void WindowManager::display() const
    {
        _window->_state = window_state::active;
        _window->display();
    }

    void WindowManager::close() const
    {
        _window->_state = window_state::closed;
    }

    bool WindowManager::is_active() const
    {
        return _window->_state == window_state::active;
    }
}