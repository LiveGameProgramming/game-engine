#include "window_events.hpp"

namespace engine
{
    void WindowEvents::set_resize_callback(const std::function<void()>& callback)
    {
        resize_callback = callback;
    }
}