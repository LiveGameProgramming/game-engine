#pragma once

#include "object.hpp"

namespace engine::opengl
{
    class ShaderStage final : public Object
    {
    public:
    explicit ShaderStage(uint32_t type);

        void create()  override;
        void destroy() override;

        void source(const std::vector<char>& source) const;

    private:
        uint32_t type { };
    };
}