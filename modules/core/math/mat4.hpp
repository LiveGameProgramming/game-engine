#pragma once

#include "column.hpp"

namespace math
{
    struct mat4
    {
        void identity();

        void translate(const vec3& translation);
        void     scale(const vec3& scale);

        void  perspective(float fov,  float aspect, float near = 0.1f, float far = 100.0f);
        void orthographic(float left, float right,  float bottom,      float top, float near = -1.0f, float far = 1.0f);

        void look(const vec3& eye, const vec3& target, const vec3& up = vec3::up());

        #pragma region Operators

        constexpr const column& operator[](int32_t index) const;
        constexpr       column& operator[](int32_t index);

        const mat4& operator*=(const mat4& other);
              mat4  operator* (const  mat4& other) const;

        [[maybe_unused]]   operator const float*() const;

        #pragma endregion

    private:
        column data[4] { };
    };
}