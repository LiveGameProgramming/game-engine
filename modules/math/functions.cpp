#include "functions.hpp"

namespace engine
{
    float radians(const float degrees)
    {
        return degrees * 0.017453292519943295f;
    }

    float sqrt(const float value)
    {
        return std::sqrt(value);
    }

    float tan(const float value)
    {
        return std::tan(value);
    }

    float sin(const float value)
    {
        return std::sin(value);
    }

    float cos(const float value)
    {
        return std::cos(value);
    }
}