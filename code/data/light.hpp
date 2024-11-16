#pragma once

namespace engine::core::data
{
    struct light
    {
        vec3  extra;  // position | direction
        float ambient { };
        rgb   color   { };
    };
}