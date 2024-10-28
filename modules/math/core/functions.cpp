#include "functions.hpp"

namespace engine::core::math
{
    float epsilon()
    {
        return std::numeric_limits<float>::epsilon();
    }

    float radians(const float degrees)
    {
        return degrees * 0.01745329251994329576923690768489f;
    }

    float sqrt(const float value)
    {
        return std::sqrt(value);
    }

    float tan(const float value)
    {
        return std::tan(value);
    }
}