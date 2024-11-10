#pragma once

#include "image.hpp"

namespace engine::image
{
    class Tga
    {
    public:
        static image load(const std::string& path);
    };
}