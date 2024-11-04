#pragma once

#include "mat4.hpp"

namespace engine::data
{
    struct camera
    {
        mat4 view;
        mat4 projection;
    };
}