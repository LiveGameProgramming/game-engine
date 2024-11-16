#pragma once

#include "core/window/state.hpp"
#include "core/window/config.hpp"

namespace base
{
    class Window
    {
    public:
        virtual void create(const core::window::config& config) = 0;
        virtual void destroy()                            const = 0;
        virtual void show()                               const = 0;

        [[nodiscard]] virtual std::any handle()           const = 0;

        core::window::state state { };
        core::window::size  size  { };
    };
}