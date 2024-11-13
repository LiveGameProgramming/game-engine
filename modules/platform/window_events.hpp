#pragma once

namespace engine
{
    class WindowEvents
    {
    public:
        void set_resize_callback(const std::function<void()>& callback);

    protected:
        std::function<void()> resize_callback;
    };
}