#pragma once

#include "object.hpp"

namespace engine::opengl
{
    class ShaderStage final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void source(const std::vector<char>& source) const;

    explicit ShaderStage(uint32_t type);

    private:
        uint32_t type { };
    };
}