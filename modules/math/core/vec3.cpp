#include "vec3.hpp"

namespace engine::core
{
    vec3::vec3(const float value)
        : x { value }
        , y { value }
        , z { value }
    {
    }

    vec3::vec3(const float x, const float y, const float z)
        : x { x }
        , y { y }
        , z { z }
    {
    }
}