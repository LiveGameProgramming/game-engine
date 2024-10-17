#pragma once

#include "window_size.hpp"

namespace engine::core
{
    struct window_config
    {
        std::string title { "Game Template" };
        window_size size  { };
    };
}