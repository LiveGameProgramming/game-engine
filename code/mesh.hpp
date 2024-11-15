#pragma once

#include "opengl/vertex_array.hpp"
#include "base/geometry.hpp"
#include "buffer/data.hpp"

namespace engine
{
    class Mesh
    {
    public:
        void create(int32_t stride);
        void destroy()  const;

        void attributes(const std::vector<vertex::attribute>& attributes) const;
        void bind()     const;

        template <typename vertex, typename face>
        void update(const base::geometry<vertex, face>& geometry)
        {
            vertex_buffer->data(buffer::data::create(geometry.vertices));
             index_buffer->data(buffer::data::create(geometry.faces));

             faces_ = geometry.faces.size();
        }

        [[nodiscard]] int32_t faces() const;

    private:
        std::unique_ptr<opengl::VertexArray> vertex_array  { };
        std::unique_ptr<opengl::Buffer>      vertex_buffer { };
        std::unique_ptr<opengl::Buffer>       index_buffer { };

        int32_t faces_ { };
    };
}