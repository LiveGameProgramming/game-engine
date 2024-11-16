#pragma once

#include "core/geometry.hpp"

namespace engine::tools
{
    class SpriteGenerator
    {
    public:
        static core::sprite_geometry create(const math::rect& rect);
    };
}