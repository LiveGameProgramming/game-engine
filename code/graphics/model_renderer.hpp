#pragma once

#include "core/mesh.hpp"

#include "opengl/shader.hpp"
#include "opengl/texture.hpp"

namespace engine::graphics
{
    class ModelRenderer
    {
    public:
        void begin()    const;

        void draw(const core::Mesh* mesh, const mat4& matrix, const opengl::Texture* texture) const;
        void draw(const core::Mesh* mesh, const mat4& matrix, const rgb& color)               const;

        void attach(opengl::Buffer* buffer);
        void attach(opengl::Shader* shader);

    private:
        opengl::Buffer* _buffer { };
        opengl::Shader* _shader { };
    };
}