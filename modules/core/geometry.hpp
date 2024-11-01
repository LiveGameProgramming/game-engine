#pragma once

namespace engine
{
    template <typename vertex, typename face> struct geometry
    {
        std::vector<vertex> vertices;
        std::vector<face>   faces;
    };
}