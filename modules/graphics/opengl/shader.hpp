#pragma once

#include "shader_stage.hpp"

namespace engine::opengl
{
    class Shader final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void attach(const ShaderStage& stage) const;

        void link() const;
        void bind() const;

        [[maybe_unused]]  void push(int32_t location, const float* data) const;
    };
}