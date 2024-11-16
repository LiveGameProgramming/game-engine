#pragma once

namespace engine::core::data
{
    struct light
    {
        math::vec3 extra; // position | direction
        float     ambient { };
        math::rgb   color { };
    };
}