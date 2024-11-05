#include "renderer.hpp"

namespace engine::opengl
{
    void Renderer::bind() const
    {
        _shader->bind();
    }

    void Renderer::attach(Shader* shader)
    {
        assert( shader);
        assert(_shader == nullptr);
               _shader =  shader;
    }

    void Renderer::attach(Buffer* buffer)
    {
        assert( buffer);
        assert(_buffer == nullptr);
               _buffer =  buffer;
    }
}