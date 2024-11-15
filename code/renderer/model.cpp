#include "model.hpp"

#include "opengl/commands.hpp"

namespace engine::renderer
{
    void Model::begin() const
    {
        _shader->bind();
    }

    void Model::draw(const Mesh* mesh, const mat4& matrix, const opengl::Texture* texture) const
    {
        _shader->push(matrix);

        texture->bind();
                                                                                          mesh->bind();
        opengl::Commands::draw_indexed(opengl::triangles, primitive::triangle::elements * mesh->faces());
    }

    void Model::draw(const Mesh* mesh, const mat4& matrix, const rgb& color) const
    {
        _shader->push(matrix);
        _buffer->update(buffer::data::create(&color));
                                                                                          mesh->bind();
        opengl::Commands::draw_indexed(opengl::triangles, primitive::triangle::elements * mesh->faces());
    }

    void Model::attach(opengl::Buffer* buffer)
    {
        _buffer = buffer;
    }

    void Model::attach(opengl::Shader* shader)
    {
        _shader = shader;
    }
}