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

    void VertexArray::bind() const
    {
        glBindVertexArray(handle_);
    }
}