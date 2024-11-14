#include "window_callbacks.hpp"

namespace engine
{
    void WindowCallbacks::resize_callback(const std::function<void()>& callback)
    {
        _resize_callback = callback;
    }
}