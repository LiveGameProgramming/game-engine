#pragma once

#include "buffer.hpp"
#include "shader.hpp"

namespace engine::opengl
{
    class Renderer
    {
    public:
        void bind() const;

        void attach(Shader* shader);
        void attach(Buffer* buffer);

    protected:
        Buffer* _buffer { };
        Shader* _shader { };
    };
}