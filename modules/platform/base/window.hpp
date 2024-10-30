#pragma once

#include "window/state.hpp"
#include "window/config.hpp"

namespace engine::base
{
    class Window
    {
    public:
        virtual void create(const window::config& config) = 0;
        virtual void destroy()                      const = 0;
        virtual void display()                      const = 0;

        [[nodiscard]] virtual std::any handle()     const = 0;

    protected:
        friend class WindowManager;

        window::state state { };
        window::size  size  { };
    };
}