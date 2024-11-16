#pragma once

#include "window.hpp"
#include "window_events.hpp"
#include "context.hpp"
#include "context_functions.hpp"

namespace engine::core::base
{
    class Factory
    {
    public:
        [[nodiscard]] virtual std::unique_ptr<Window>           create_window()    = 0;
        [[nodiscard]] virtual std::unique_ptr<WindowEvents>     create_events()    = 0;
        [[nodiscard]] virtual std::unique_ptr<Context>          create_context()   = 0;
        [[nodiscard]] virtual std::unique_ptr<ContextFunctions> create_functions() = 0;
    };
}