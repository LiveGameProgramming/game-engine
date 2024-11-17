#pragma once

namespace core
{
    class WindowCallbacks
    {
    public:
        void on_size(const std::function<void()>& callback);

    protected:
        std::function<void()> size_callback;
    };
}