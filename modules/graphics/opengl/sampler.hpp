#pragma once

#include "object.hpp"

namespace engine::opengl
{
    class Sampler final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void parameter(uint32_t parameter, int32_t value) const;
        void      bind(uint32_t location = 0)      const;
    };
}