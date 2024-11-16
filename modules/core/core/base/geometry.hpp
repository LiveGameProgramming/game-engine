#pragma once

namespace core::base
{
    template <typename vertex, typename face> struct geometry
    {
        std::vector<vertex> vertices;
        std::vector<face>   faces;
    };
}