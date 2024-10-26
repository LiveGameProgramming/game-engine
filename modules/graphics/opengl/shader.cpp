#include "shader.hpp"
#include "functions.hpp"

namespace engine::gl
{
    void Shader::create()
    {
        handle_ = glCreateProgram();
    }

    void Shader::destroy()
    {
        glDeleteProgram(handle_);
    }

    void Shader::attach(const ShaderStage& stage) const
    {
        glAttachShader(handle_, stage.handle());
    }

    void Shader::push_mat4(const  int32_t  location, const float* data) const
    {
        glProgramUniformMatrix4fv(handle_, location, 1, 0, data);
    }

    void Shader::link() const
    {
        glLinkProgram(handle_);
    }

    void Shader::bind() const
    {
        glUseProgram(handle_);
    }
}