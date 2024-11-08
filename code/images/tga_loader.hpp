#pragma once

#include "image.hpp"

namespace engine::images
{
    class TgaLoader
    {
    public:
        static image load(const std::string& path);
    };
}