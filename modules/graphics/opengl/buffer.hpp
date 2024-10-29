#pragma once

#include "object.hpp"
#include "macros.hpp"

#include "core/buffer/data.hpp"

namespace engine::opengl
{
    class Buffer final : public Object
    {
    public:
        void create()   override;
        void destroy()  override;

        void     data(const core::buffer::data& data, uint32_t usage  = static_draw) const;
        void sub_data(const core::buffer::data& data,  int32_t offset = 0)           const;

        void bind(uint32_t location = 0)  const;
    };
}