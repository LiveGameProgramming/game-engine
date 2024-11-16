#pragma once

namespace math
{
    struct rgb
    {
        #pragma region Constants

        static constexpr rgb white() { return { 1.0f, 1.0f, 1.0f }; }
        static constexpr rgb black() { return { 0.0f, 0.0f, 0.0f }; }

        #pragma endregion

        float r { 1.0f };
        float g { 1.0f };
        float b { 1.0f };
    };
}