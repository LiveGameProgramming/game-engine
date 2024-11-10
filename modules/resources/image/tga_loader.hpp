#pragma once

#include "image.hpp"

namespace engine::image
{
    class TgaLoader
    {
    public:
        static image load(const std::string& path);
    };
}