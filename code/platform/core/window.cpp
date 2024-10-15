#include "window.hpp"

namespace engine::core
{
    Window& Window::size(const window_size& size)
    {
        _size = size; return *this;
    }

    Window& Window::title(const std::string& title)
    {
        _title = title; return *this;
    }
}