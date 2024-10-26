#include "functions.hpp"

namespace engine::core
{
    float radians(const float degrees)
    {
        return degrees * 0.01745329251994329576923690768489f;
    }

    float tan(const float value)
    {
        return std::tan(value);
    }
}