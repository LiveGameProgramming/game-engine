#pragma once

#include "opengl/vertex_array.hpp"

namespace core
{
    class Mesh
    {
    public:
        void create(int32_t stride);
        void destroy()      const;

        template <typename vertex, typename face>
        void update(const  geometry<vertex, face>& geometry)
        {
            _vertices_buffer->data(buffer::data::create(geometry.vertices));
            _elements_buffer->data(buffer::data::create(geometry.faces));

            _elements = geometry.faces.size();
        }

        void attributes(const std::vector<vertex::attribute>& attributes) const;
        void bind()     const;

        [[nodiscard]] int32_t elements() const;

    private:
        std::unique_ptr<opengl::VertexArray> _vertex_array { };
        std::unique_ptr<opengl::Buffer>   _vertices_buffer { };
        std::unique_ptr<opengl::Buffer>   _elements_buffer { };

        int32_t _elements { };
    };
}