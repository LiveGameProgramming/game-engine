#include "functions.hpp"

namespace math
{
    void mat4::identity()
    {
        memset(data, 0, sizeof(data));

        data[0].x = 1.0f;
        data[1].y = 1.0f;
        data[2].z = 1.0f;
        data[3].w = 1.0f;
    }

    void mat4::scale(const vec3& scale)
    {
        data[0] *= scale.x;
        data[1] *= scale.y;
        data[2] *= scale.z;
    }

    void mat4::translate(const vec3& translation)
    {
        data[3] += data[0] * translation.x +
                   data[1] * translation.y +
                   data[2] * translation.z;
    }

    void mat4::perspective(const float fov, const float aspect, const float near, const float far)
    {
        const float angle = radians(fov);
        const float value = tan(angle / 2.0f);
        const float range = far - near;

        data[0].x =    1.0f / (value * aspect);
        data[1].y =    1.0f /  value;
        data[2].z = - (near + far)        / range;
        data[2].w = -  1.0f;
        data[3].z = - (2.0f * far * near) / range;
    }

    void mat4::orthographic(const float left, const float right, const float bottom, const float top, const float near, const float far)
    {
        data[0].x =   2.0f / (right - left);
        data[1].y =   2.0f / (top   - bottom);
        data[2].z = - 2.0f / (far   - near);

        data[3].x = - (right + left)   / (right - left);
        data[3].y = - (top   + bottom) / (top   - bottom);
        data[3].z = - (far   + near)   / (far   - near);
        data[3].w = 1.0;
    }

    void mat4::look(const vec3& eye, const vec3& target, const vec3& up)
    {
        const vec3 f = (target - eye).normalized();
        const vec3 s =    f.cross(up).normalized();
        const vec3 u =    s.cross(f);

        data[0].x = s.x;
        data[1].x = s.y;
        data[2].x = s.z;

        data[0].y = u.x;
        data[1].y = u.y;
        data[2].y = u.z;

        data[0].z = -f.x;
        data[1].z = -f.y;
        data[2].z = -f.z;

        data[3].x = -s.dot(eye);
        data[3].y = -u.dot(eye);
        data[3].z =  f.dot(eye);
        data[3].w =  1.0f;
    }

    constexpr const column& mat4::operator[](const int32_t index) const
    {
        return data[index];
    }

    constexpr column& mat4::operator[](const int32_t index)
    {
        return data[index];
    }

    const mat4& mat4::operator*=(const mat4& other)
    {
        *this = *this * other;
        return  *this;
    }

    mat4 mat4::operator*(const mat4& other) const
    {
        mat4 result;

        for (int32_t i  = 0;  i < 4; ++i)
        {
            result[i] = data[0] * other[i].x +
                        data[1] * other[i].y +
                        data[2] * other[i].z +
                        data[3] * other[i].w;
        }

        return result;
    }

    mat4::operator const float*() const
    {
        return &data[0].x;
    }
}