#include "mesh.hpp"

namespace core
{
    void Mesh::create(const int32_t stride)
    {
        _vertices_buffer = std::make_unique<opengl::Buffer>();
        _vertices_buffer->create();

        _elements_buffer = std::make_unique<opengl::Buffer>();
        _elements_buffer->create();

        _vertex_array = std::make_unique<opengl::VertexArray>();
        _vertex_array->create();

        _vertex_array->attach_vertices(_vertices_buffer.get(), stride);
        _vertex_array->attach_elements(_elements_buffer.get());
    }

    void Mesh::destroy() const
    {
         _vertices_buffer->destroy();
         _elements_buffer->destroy();

            _vertex_array->destroy();
    }

    void Mesh::attributes(const std::vector<vertex::attribute>& attributes) const
    {
        for (const auto& attribute : attributes)
        {
            _vertex_array->attribute(attribute);
        }
    }

    void Mesh::bind() const
    {
        _vertex_array->bind();
    }

    int32_t Mesh::elements() const
    {
        return _elements;
    }
}