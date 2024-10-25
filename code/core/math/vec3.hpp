#pragma once

namespace engine::math
{
    struct vec3
    {
        vec3(float value);
        vec3(float x, float y, float z);

        float x { };
        float y { };
        float z { };
    };
}