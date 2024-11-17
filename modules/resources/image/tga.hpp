#pragma once

#include "core/image.hpp"

namespace engine::image
{
    class Tga
    {
    public:
        static core::image load(const std::string& path);
    };
}