#pragma once

#include "opengl/vertex_array.hpp"

namespace engine::core
{
    class Mesh
    {
    public:
        void create(int32_t stride);
        void destroy()      const;

        template <typename vertex, typename face>
        void update(const  base::geometry<vertex, face>& geometry)
        {
            vertex_buffer->data(buffer_data::create(geometry.vertices));
             index_buffer->data(buffer_data::create(geometry.faces));
                  _faces = geometry.faces.size();
        }

        void attributes(const std::vector<vertex::attribute>& attributes) const;
        void bind()     const;

        [[nodiscard]] int32_t faces() const;

    private:
        std::unique_ptr<opengl::VertexArray> vertex_array  { };
        std::unique_ptr<opengl::Buffer>      vertex_buffer { };
        std::unique_ptr<opengl::Buffer>       index_buffer { };

        int32_t _faces { };
    };
}