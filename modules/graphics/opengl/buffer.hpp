#pragma once

#include "object.hpp"
#include "macros.hpp"

#include "core/buffer.hpp"
#include "core/buffer_location.hpp"

namespace engine::opengl
{
    class Buffer final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void   data(const core::data::buffer& buffer, uint32_t usage  = static_draw) const;
        void update(const core::data::buffer& buffer,  int32_t offset = 0)           const;

        void bind(uint32_t location) const;
        void bind(core::data::buffer_location location) const;
    };
}