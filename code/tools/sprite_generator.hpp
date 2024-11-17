#pragma once

#include "core/vertex/sprite.hpp"

namespace tools
{
    class SpriteGenerator
    {
    public:
        static core::base::geometry<core::vertex::sprite, core::primitive::triangle> create(const math::rect& rect);
    };
}