#pragma once

namespace core::primitive
{
    struct line
    {
        static constexpr int32_t elements { 2 };

        uint32_t a;
        uint32_t b;
    };
}