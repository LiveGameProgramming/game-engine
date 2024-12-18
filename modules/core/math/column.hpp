#pragma once

namespace math
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