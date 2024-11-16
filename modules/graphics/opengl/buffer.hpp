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
        void create()  override;
        void destroy() override;

        void   data(const core::buffer::data& data, uint32_t usage  = buffer::static_draw) const;
        void update(const core::buffer::data& data,  int32_t offset = 0)                   const;

        void bind(uint32_t location = core::buffer::location::camera) const;
    };
}