#pragma once

#include "shader_stage.hpp"

namespace opengl
{
    class Shader final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void attach(const ShaderStage& stage) const;

        void link() const;
        void bind() const;

        [[maybe_unused]]  void push(const float* data, int32_t location = 0) const;
    };
}