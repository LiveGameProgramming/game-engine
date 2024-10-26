#pragma once

namespace engine::core
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