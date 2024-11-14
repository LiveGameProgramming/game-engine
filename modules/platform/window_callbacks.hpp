#pragma once

namespace engine
{
    class WindowCallbacks
    {
    public:
        void resize_callback(const std::function<void()>& callback);

    protected:
        std::function<void()> _resize_callback;
    };
}