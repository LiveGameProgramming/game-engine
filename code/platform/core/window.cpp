#include "window.hpp"

namespace engine::core
{
    Window& Window::size(const window_size& size)
    {
        size_ = size; return *this;
    }

    Window& Window::title(const std::string& title)
    {
        title_ = title; return *this;
    }
}