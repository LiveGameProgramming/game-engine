#pragma once

#include "core/vertex/sprite.hpp"

namespace engine::tools
{
    using geometry = core::base::geometry<core::vertex::sprite, core::primitive::triangle>;

    class SpriteGenerator
    {
    public:
        static geometry create(const math::rect& rect);
    };
}