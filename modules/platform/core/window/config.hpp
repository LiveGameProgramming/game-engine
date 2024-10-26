#pragma once

#include "size.hpp"

namespace engine::core::window
{
    struct config
    {
        std::string title { "Game Template" };
               size size  { };
    };
}