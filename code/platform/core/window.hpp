#pragma once

#include "window_size.hpp"
#include "window_state.hpp"

namespace engine::core
{
    class Window
    {
    friend class WindowManager;
    public:
        virtual void create()        = 0;
        virtual void destroy() const = 0;
        virtual void display() const = 0;

        Window& size(const    window_size& size);
        Window& title(const   std::string& title);

        [[nodiscard]] virtual std::any handle() const = 0;

    protected:
        window_state  state { };
        window_size  _size  { };

        std::string  _title;
    };
}