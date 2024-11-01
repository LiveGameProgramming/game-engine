#pragma once

#include "vec3.hpp"
#include "column.hpp"

namespace engine
{
    struct mat4
    {
        void identity();

        void scale(const     vec3& scale);
        void translate(const vec3& translation);

        void perspective(float fov, float aspect, float near, float far);

        void look_at(const vec3& eye, const vec3& target, const vec3& up = vec3::up());

        constexpr const column& operator[](int32_t index) const;
        constexpr       column& operator[](int32_t index);

        [[maybe_unused]] operator  const float*()     const;
                    mat4 operator*(const mat4& other) const;
    private:
        column columns[4] { };
    };
}