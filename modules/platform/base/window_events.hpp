#pragma once

namespace base
{
    class WindowEvents
    {
    public:
        virtual void update() const = 0;

        std::function<void()> on_resize_callback;
    };
}