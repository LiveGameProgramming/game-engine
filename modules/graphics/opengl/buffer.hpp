#pragma once

#include "object.hpp"
#include "macros.hpp"

#include "base/buffer/data.hpp"
#include "base/buffer/location.hpp"

namespace engine::opengl
{
    class Buffer final : public Object
    {
    public:
        void create()   override;
        void destroy()  override;

        void     data(const base::buffer::data& data, uint32_t usage  = static_draw)                    const;
        void sub_data(const base::buffer::data& data,  int32_t offset = base::buffer::location::camera) const;

        void bind(uint32_t location = 0)  const;
    };
}