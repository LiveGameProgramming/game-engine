#pragma once

#include "object.hpp"
#include "macros.hpp"

#include "core/buffer_data.hpp"
#include "core/buffer_location.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void   data(const core::buffer_data& buffer, uint32_t usage  = static_draw) const;
        void update(const core::buffer_data& buffer,  int32_t offset = 0)           const;

        void bind(uint32_t location) const;
        void bind(core::buffer_location location) const;
    };
}