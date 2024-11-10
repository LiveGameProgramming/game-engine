#pragma once

#include "base/image.hpp"

namespace engine::image
{
    class Tga
    {
    public:
        static base::image load(const std::string& path);
    };
}