#pragma once

#include "mesh.hpp"

#include "opengl/shader.hpp"
#include "opengl/texture.hpp"

namespace engine::renderer
{
    class Model
    {
    public:
        void begin()    const;

        void draw(const Mesh* mesh, const mat4& matrix, const opengl::Texture* texture) const;
        void draw(const Mesh* mesh, const mat4& matrix, const rgb& color)               const;

        void attach(opengl::Buffer* buffer);
        void attach(opengl::Shader* shader);

    private:
        opengl::Buffer* _buffer { };
        opengl::Shader* _shader { };
    };
}