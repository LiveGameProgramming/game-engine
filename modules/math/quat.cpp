#include "functions.hpp"
#include "constants.hpp"

namespace engine
{
    void quat::rotate(const vec3& axis, const float angle)
    {
        const vec3   na = axis.normalized();
        const float  ha = radians(angle) / 2.0f;
        const float sha = sin(ha);

        x = na.x * sha;
        y = na.y * sha;
        z = na.z * sha;
        w = cos(ha);

        normalize();
    }

    quat::operator mat4() const
    {
        mat4 result;

        const float xx = x * x;
        const float yy = y * y;
        const float zz = z * z;

        const float xy = x * y;
        const float xz = x * z;

        const float yz = y * z;

        const float wx = w * x;
        const float wy = w * y;
        const float wz = w * z;

        result[0].x = 1.0f - 2.0f * (yy + zz);
        result[0].y =        2.0f * (xy - wz);
        result[0].z =        2.0f * (xz + wy);

        result[1].x =        2.0f * (xy + wz);
        result[1].y = 1.0f - 2.0f * (xx + zz);
        result[1].z =        2.0f * (yz - wx);

        result[2].x =        2.0f * (xz - wy);
        result[2].y =        2.0f * (yz + wx);
        result[2].z = 1.0f - 2.0f * (xx + yy);

        result[3].w = 1.0f;

        return result;
    }

    float quat::length() const
    {
        return sqrt(w * w + x * x + y * y + z * z);
    }

    void quat::normalize()
    {
        if (const float magnitude = length(); magnitude >= epsilon)
        {
            w /= magnitude;
            x /= magnitude;
            y /= magnitude;
            z /= magnitude;
        }
    }
}