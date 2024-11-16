#pragma once

namespace engine::core::primitive
{
    struct triangle
    {
        static constexpr int32_t elements { 3 };

        uint32_t a;
        uint32_t b;
        uint32_t c;
    };
}