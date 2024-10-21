#include "vertex_array.hpp"
#include "functions.hpp"

namespace engine::gl
{
    void VertexArray::create()
    {
        glCreateVertexArrays(1, &handle_);
    }

    void VertexArray::destroy()
    {
        glDeleteVertexArrays(1, &handle_);
    }

    void VertexArray::attach_vertices(const Buffer& buffer, const int32_t stride) const
    {
        glVertexArrayVertexBuffer(handle_, 0, buffer.handle(), 0, stride);
    }

    void VertexArray::attribute(const core::vertex_attribute& attribute) const
    {
    }

    void VertexArray::bind() const
    {
        glBindVertexArray(handle_);
    }
}