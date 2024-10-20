#pragma once

#include "object.hpp"
#include "macros.hpp"

#include "core/buffer_data.hpp"

namespace engine::gl
{
    class Buffer final : public Object
    {
    public:
        void create()   override;
        void destroy()  override;

        void data(const core::BufferData& buffer, uint32_t usage = static_draw) const;
    };
}