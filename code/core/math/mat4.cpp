#include "mat4.hpp"

namespace engine::math
{
    void mat4::identity()
    {
        columns[0].x = 1.0f;
        columns[1].y = 1.0f;
        columns[2].z = 1.0f;
        columns[3].w = 1.0f;
    }

    mat4::operator const float*() const
    {
        return &columns[0].x;
    }
}