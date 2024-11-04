#pragma once

#include "rgb.hpp"
#include "vec3.hpp"

namespace engine::data
{
    struct light
    {
        vec3  extra;  // position | direction;
        float ambient { };
        rgb   color   { };
    };
}