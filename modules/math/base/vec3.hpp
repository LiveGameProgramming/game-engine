#pragma once

namespace engine::core
{
    struct vec3
    {
        vec3() = default;

        vec3(float value);
        vec3(float x, float y, float z);

        void normalize();

        [[nodiscard]] vec3   cross(const vec3& other) const;
        [[nodiscard]] float    dot(const vec3& other) const;
        [[nodiscard]] float length()     const;

              vec3  operator-(const  vec3&  other) const;
        const vec3& operator*=(float value);

        float x { };
        float y { };
        float z { };
    };
}