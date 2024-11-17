#pragma once

namespace core
{
    template <typename vertex, typename face> struct geometry
    {
        std::vector<vertex> vertices;
        std::vector<face>   faces;
    };
}