#include "column.hpp"

namespace engine::math
{
    column column::operator+(const column& other) const
    {
        return { .data = _mm_add_ps(data, other.data) };
    }

    column column::operator*(const float value) const
    {
        return { .data = _mm_mul_ps(data, _mm_set1_ps(value)) };
    }

    const column& column::operator+=(const column& other)
    {
        data = _mm_add_ps(data, other.data);
        return *this;
    }

    const column& column::operator*=(const float value)
    {
        data = _mm_mul_ps(data, _mm_set1_ps(value));
        return *this;
    }
}