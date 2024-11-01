#pragma once

namespace engine
{
    struct vec3
    {
        constexpr vec3() = default;

        constexpr vec3(float value);
        constexpr vec3(float x, float y, float z);

                      void   normalize();
                const vec3&  normalized();
        [[nodiscard]] vec3   normalized()             const;
        [[nodiscard]] vec3   cross(const vec3& other) const;
        [[nodiscard]] float    dot(const vec3& other) const;
        [[nodiscard]] float length()     const;

              vec3  operator-(const  vec3&  other)    const;
        const vec3& operator*=(float value);

        #pragma region Constants

        static constexpr vec3 front() { return {  0.0f,  0.0f,  1.0f }; }
        static constexpr vec3 back()  { return {  0.0f,  0.0f, -1.0f }; }

        static constexpr vec3 right() { return {  1.0f,  0.0f,  0.0f }; }
        static constexpr vec3 left()  { return { -1.0f,  0.0f,  0.0f }; }

        static constexpr vec3 up()    { return {  0.0f,  1.0f,  0.0f }; }
        static constexpr vec3 down()  { return {  0.0f, -1.0f,  0.0f }; }

        #pragma endregion

        float x { };
        float y { };
        float z { };
    };
}