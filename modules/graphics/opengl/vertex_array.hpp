#pragma once

#include "buffer.hpp"

#include "vertex/attribute.hpp"

namespace opengl
{
    class VertexArray final : public Object
    {
    public:
        void create()     override;
        void destroy()    override;

        void attach_vertices(const Buffer* buffer, int32_t stride) const;
        void attach_elements(const Buffer* buffer)                 const;

        void attribute(const vertex::attribute& attribute)         const;
        void bind()    const;
    };
}