#pragma once

#include "object.hpp"
#include "macros.hpp"

#include "buffer/data.hpp"
#include "buffer/location.hpp"

namespace engine::opengl
{
    class Buffer final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void   data(const buffer::data& data, uint32_t usage  = static_draw) const;
        void update(const buffer::data& data,  int32_t offset = 0)           const;

        void bind(uint32_t location = buffer::location::camera) const;
    };
}