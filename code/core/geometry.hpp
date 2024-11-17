#pragma once

#include "vertex/sprite.hpp"
#include "vertex/model.hpp"

namespace core
{
    using sprite_geometry = geometry<vertex::sprite, primitive::triangle>;
    using  model_geometry = geometry<vertex::model,  primitive::triangle>;
}