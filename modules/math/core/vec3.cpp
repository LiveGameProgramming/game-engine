#include "vec3.hpp"
#include "math/functions.hpp"

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

    void vec3::normalize()
    {
        if (const float     magnitude = length(); magnitude >= math::epsilon())
        {
            *this *= 1.0f / magnitude;
        }
    }

    vec3 vec3::cross(const vec3& other) const
    {
        return { y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x };
    }

    float vec3::dot(const vec3& other) const
    {
        return x * other.x + y * other.y + z * other.z;
    }

    float vec3::length() const
    {
        return math::sqrt(dot(*this));
    }

    vec3 vec3::operator-(const vec3& other) const
    {
        return { x - other.x, y - other.y, z - other.z };
    }

    const vec3& vec3::operator*=(const float value)
    {
        x *= value;
        y *= value;
        z *= value;

        return *this;
    }
}