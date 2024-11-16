#include "functions.hpp"

namespace math
{
    float radians(const float degrees)
    {
        return degrees * 0.017453292519943295f;
    }

    float sqrt(const float value)
    {
        return std::sqrtf(value);
    }

    float tan(const float value)
    {
        return std::tanf(value);
    }

    float sin(const float value)
    {
        return std::sinf(value);
    }

    float cos(const float value)
    {
        return std::cosf(value);
    }
}