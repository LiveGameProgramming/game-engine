#pragma once

#include "core/vertex/sprite.hpp"

namespace engine::tools
{
    using geometry = base::geometry<core::vertex::sprite, primitive::triangle>;

    class SpriteGenerator
    {
    public:
        static geometry create(const rect& rect);
    };
}