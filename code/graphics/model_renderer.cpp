#include "model_renderer.hpp"

#include "opengl/commands.hpp"

namespace graphics
{
    void ModelRenderer::begin() const
    {
        _shader->bind();
    }

    void ModelRenderer::draw(const core::Mesh* mesh, const math::mat4& matrix, const opengl::Texture* texture) const
    {
        _shader->push(matrix);

        texture->bind();
                                                                                          mesh->bind();
        opengl::Commands::draw_indexed(opengl::triangles, primitive::triangle::elements * mesh->elements());
    }

    void ModelRenderer::draw(const core::Mesh* mesh, const math::mat4& matrix, const math::rgb& color) const
    {
        _shader->push(matrix);
        _buffer->update(core::buffer::data::create(&color));
                                                                                          mesh->bind();
        opengl::Commands::draw_indexed(opengl::triangles, primitive::triangle::elements * mesh->elements());
    }

    void ModelRenderer::attach(opengl::Buffer* buffer)
    {
        _buffer = buffer;
    }

    void ModelRenderer::attach(opengl::Shader* shader)
    {
        _shader = shader;
    }
}