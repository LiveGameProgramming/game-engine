#include "model.hpp"
#include "opengl/commands.hpp"

#include "primitive/triangle.hpp"

namespace engine::renderer
{
    void Model::draw(const opengl::VertexArray* vertex_array, const opengl::Texture* texture, const mat4& model, const int32_t faces) const
    {
        _shader->push(model);

        assert(texture);
        texture->bind();

        assert(vertex_array);
        vertex_array->bind();

        opengl::Commands::draw_indexed(opengl::triangles, primitive::triangle::elements * faces);
    }
}