#pragma once

#include "vertex/sprite.hpp"

namespace engine::tools
{
    using geometry = base::geometry<vertex::sprite, primitive::triangle>;

    class SpriteGenerator
    {
    public:
        static geometry create(const rect& rect);
    };
}