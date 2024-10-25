#pragma once

#include "vec3.hpp"
#include "column.hpp"

namespace engine::math
{
    struct mat4
    {
        void identity();

        void scale(const     vec3& scale);
        void translate(const vec3& translation);

        operator const float*() const;

    private:
        column columns[4] { };
    };
}