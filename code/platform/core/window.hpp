#pragma once

#include "window_state.hpp"
#include "window_config.hpp"

namespace engine::core
{
    class Window
    {
    public:
        virtual void create(const window_config& config) = 0;
        virtual void destroy()                     const = 0;
        virtual void display()                     const = 0;

        [[nodiscard]] virtual std::any handle()    const = 0;

    protected:
        friend class WindowManager;

        window_state state { };
        window_size  size  { };
    };
}