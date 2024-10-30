#pragma once

#include "size.hpp"

namespace engine::base::window
{
    struct config
    {
        std::string title { "Game Template" };
               size size  { };
    };
}