#include "window_callbacks.hpp"

namespace engine::core
{
    void WindowCallbacks::on_size(const std::function<void()>& callback)
    {
        size_callback = callback;
    }
}