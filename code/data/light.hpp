#pragma once

namespace engine::data
{
    struct light
    {
        vec3  extra;  // position | direction
        float ambient { };
        rgb   color   { };
    };
}