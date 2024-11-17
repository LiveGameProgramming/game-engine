#pragma once

#include "core/image.hpp"

namespace images
{
    class Tga
    {
    public:
        static core::image load(const std::string& path);
    };
}