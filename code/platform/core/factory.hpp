#pragma once

#include "window.hpp"
#include "window_events.hpp"

namespace engine::core
{
    class Factory
    {
    public:
        [[nodiscard]] virtual std::unique_ptr<Window>       create_window() = 0;
        [[nodiscard]] virtual std::unique_ptr<WindowEvents> create_events() = 0;
    };
}