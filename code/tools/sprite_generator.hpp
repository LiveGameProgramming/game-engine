#pragma once

#include "core/geometry.hpp"

namespace tools
{
    class SpriteGenerator
    {
    public:
        static core::sprite_geometry create(const math::rect& rect);
    };
}