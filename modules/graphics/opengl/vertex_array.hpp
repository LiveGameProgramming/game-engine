#pragma once

#include "buffer.hpp"

#include "base/vertex/attribute.hpp"

namespace engine::opengl
{
    class VertexArray final : public Object
    {
    public:
        void create()     override;
        void destroy()    override;

        void attach_vertices(const Buffer& buffer, int32_t stride) const;
        void attach_indices(const  Buffer& buffer)                 const;

        void attribute(const base::vertex::attribute& attribute)   const;
        void bind()    const;
    };
}