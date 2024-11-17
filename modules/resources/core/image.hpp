#pragma once

namespace core
{
    struct image
    {
        int32_t width;
        int32_t height;

        std::vector<char> pixels;
    };
}