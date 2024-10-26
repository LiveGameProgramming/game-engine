#pragma once

#include "vec3.hpp"
#include "column.hpp"

namespace engine::core
{
    struct mat4
    {
        void identity();

        void scale(const     vec3& scale);
        void translate(const vec3& translation);

        void perspective(float fov, float aspect, float near, float far);

        constexpr const column& operator[](int32_t index) const;
        constexpr       column& operator[](int32_t index);

        mat4 operator*(const mat4& other) const;
             operator  const float*()     const;

    private:
        column columns[4] { };
    };
}