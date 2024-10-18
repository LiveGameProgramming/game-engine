#pragma once

#include "object.hpp"

namespace engine::gl
{
    class Buffer final : public Object
    {
    public:
        void create()  override;
        void destroy() override;
    };
}