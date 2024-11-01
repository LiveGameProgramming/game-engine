#include "column.hpp"

<<<<<<<< HEAD:modules/core/math/column.cpp
namespace math
========
namespace engine
>>>>>>>> 10b8969 (Remove unused base modules and reorganize code structure):modules/math/column.cpp
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