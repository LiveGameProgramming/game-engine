#include "mat4.hpp"
#include "functions.hpp"

namespace engine::math
{
    void mat4::identity()
    {
        columns[0].x = 1.0f;
        columns[1].y = 1.0f;
        columns[2].z = 1.0f;
        columns[3].w = 1.0f;

        columns[3].x = 0.0f;
        columns[3].y = 0.0f;
        columns[3].z = 0.0f;
    }

    void mat4::scale(const vec3& scale)
    {
        columns[0] *= scale.x;
        columns[1] *= scale.y;
        columns[2] *= scale.z;
    }

    void mat4::translate(const vec3& translation)
    {
        columns[3] += columns[0] * translation.x +
                      columns[1] * translation.y +
                      columns[2] * translation.z;
    }

    void mat4::perspective(const float fov, const float aspect, const float near, const float far)
    {
        const float angle = radians(fov);
        const float value = tan(angle / 2.0f);
        const float range = far - near;

        columns[0].x =    1.0f / (value * aspect);
        columns[1].y =    1.0f /  value;
        columns[2].z = - (near + far)        / range;
        columns[2].w = -  1.0f;
        columns[3].z = - (2.0f * far * near) / range;
    }

    constexpr const column& mat4::operator[](const int32_t index) const
    {
        return columns[index];
    }

    constexpr column& mat4::operator[](const int32_t index)
    {
        return columns[index];
    }

    mat4 mat4::operator*(const mat4& other) const
    {
        mat4 result;

        for (int32_t i  = 0;  i < 4; i++) // ++i?
              result[i] = columns[0] * other[i].x +
                          columns[1] * other[i].y +
                          columns[2] * other[i].z +
                          columns[3] * other[i].w;
        return result;
    }

    mat4::operator const float*() const
    {
        return &columns[0].x;
    }
}