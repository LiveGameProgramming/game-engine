#pragma once

#include "vec2.hpp"
#include "vec3.hpp"

namespace engine::vertex
{
    struct model
    {
        vec3 position;
        vec3 normal;
        vec2 uv;
    };
}