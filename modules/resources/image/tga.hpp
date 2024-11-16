#pragma once

#include "base/image.hpp"

namespace image
{
    class Tga
    {
    public:
        static base::image load(const std::string& path);
    };
}