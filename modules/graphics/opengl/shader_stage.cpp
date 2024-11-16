#include "shader_stage.hpp"

namespace engine::opengl
{
    ShaderStage::ShaderStage(const uint32_t type)
        : type { type }
    {
    }

    void ShaderStage::create()
    {
        handle_ = glCreateShader(type);
    }

    void ShaderStage::destroy()
    {
        glDeleteShader(handle_);
    }

    void ShaderStage::source(const std::vector<char>& source) const
    {
        glShaderBinary(1, &handle_, shader::binary, source.data(), static_cast<int32_t>(source.size()));
        glSpecializeShader(handle_, "main", 0, nullptr, nullptr);
    }
}