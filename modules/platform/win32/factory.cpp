#include "factory.hpp"
#include "window.hpp"
#include "window_events.hpp"
#include "context.hpp"
#include "context_functions.hpp"

namespace engine::win32
{
    std::unique_ptr<core::base::Window> Factory::create_window()
    {
        return std::make_unique<Window>();
    }

    std::unique_ptr<core::base::WindowEvents> Factory::create_events()
    {
        return std::make_unique<WindowEvents>();
    }

    std::unique_ptr<core::base::Context> Factory::create_context()
    {
        return std::make_unique<Context>();
    }

    std::unique_ptr<core::base::ContextFunctions> Factory::create_functions()
    {
        return std::make_unique<ContextFunctions>();
    }
}