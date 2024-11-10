#pragma once

#include "object.hpp"
#include "macros.hpp"

#include "buffers/data.hpp"
#include "buffers/location.hpp"

namespace engine::opengl
{
    class Buffer final : public Object
    {
    public:
        void create()  override;
        void destroy() override;

        void   data(const buffers::data& data, uint32_t usage  = static_draw) const;
        void update(const buffers::data& data,  int32_t offset = 0)           const;

        void bind(uint32_t location = buffers::location::camera) const;
    };
}