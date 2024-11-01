#pragma once

<<<<<<<< HEAD:modules/core/math/column.hpp
namespace math
========
namespace engine
>>>>>>>> 10b8969 (Remove unused base modules and reorganize code structure):modules/math/column.hpp
{
    struct column
    {
        column operator+(const column& other) const;
        column operator*(float value)         const;

        const column& operator+=(const column& other);
        const column& operator*=(float value);

        union
        {
            struct
            {
                float x, y, z, w;
            };

            __m128 data;
        };
    };
}