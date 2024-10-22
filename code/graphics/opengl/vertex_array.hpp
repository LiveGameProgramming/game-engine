#pragma once

#include "buffer.hpp"

#include "core/vertex_attribute.hpp"

namespace engine::gl
{
    class VertexArray final : public Object
    {
    public:
        void create()     override;
        void destroy()    override;

        void attach_vertices(const Buffer& buffer, int32_t stride) const;
        void attach_indices(const  Buffer& buffer)                 const;

        void attribute(const core::vertex_attribute& attribute)    const;
        void bind()    const;
    };
}