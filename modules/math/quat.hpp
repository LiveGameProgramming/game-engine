#pragma once

#include "mat4.hpp"

namespace engine
{
    struct quat
    {
        void rotate(const vec3& axis, float angle);

        #pragma region Operators

        [[maybe_unused]] operator mat4() const;

        #pragma endregion

    private:
        [[nodiscard]] float length() const;
                      void  normalize();

        float w { 1.0f };
        float x { };
        float y { };
        float z { };
    };
}