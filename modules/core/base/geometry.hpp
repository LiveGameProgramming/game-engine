#pragma once

namespace engine::base
{
    template <typename vertex> struct geometry
    {
        std::vector<vertex>   vertices;
        std::vector<uint32_t> indices;
    };
}