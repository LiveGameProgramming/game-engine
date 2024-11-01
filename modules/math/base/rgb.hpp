#pragma once

namespace engine::base
{
    struct rgb
    {
        #pragma region Constants

        static constexpr rgb white() { return { 1.0f, 1.0f, 1.0f }; }

        #pragma endregion

        float r;
        float g;
        float b;
    };
}