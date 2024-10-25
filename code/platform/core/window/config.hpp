#pragma once

#include "window/size.hpp"

namespace engine::core::window
{
    struct config
    {
         std::string title { "Game Template" };
        window::size size  { };
    };
}