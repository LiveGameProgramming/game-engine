#pragma once

<<<<<<<< HEAD:modules/core/math/rgb.hpp
namespace math
========
namespace engine
>>>>>>>> 10b8969 (Remove unused base modules and reorganize code structure):modules/math/rgb.hpp
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