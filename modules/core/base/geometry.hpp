#pragma once

namespace engine::base
{
    template <typename vertex, typename face> struct geometry
    {
        std::vector<vertex> vertices;
        std::vector<face>   faces;
    };
}