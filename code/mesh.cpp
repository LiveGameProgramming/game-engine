#include "mesh.hpp"

namespace engine
{
    Mesh::Mesh(const uint32_t primitive)
        : primitive { primitive }
    {
    }

    void Mesh::create(const int32_t stride)
    {
         vertex_array = std::make_unique<opengl::VertexArray>();
        vertex_buffer = std::make_unique<opengl::Buffer>();
         index_buffer = std::make_unique<opengl::Buffer>();

         vertex_array->create();
        vertex_buffer->create();
         index_buffer->create();

        vertex_array->attach_vertices(vertex_buffer.get(), stride);
        vertex_array->attach_indices(index_buffer.get());
    }

    void Mesh::destroy() const
    {
         vertex_array->destroy();
        vertex_buffer->destroy();
         index_buffer->destroy();
    }

    void Mesh::attributes(const std::vector<vertex::attribute>& attributes) const
    {
        for (const auto& attribute : attributes)
        {
            vertex_array->attribute(attribute);
        }
    }

    void Mesh::bind() const
    {
        vertex_array->bind();
    }

    int32_t Mesh::faces() const
    {
        return faces_;
    }
}