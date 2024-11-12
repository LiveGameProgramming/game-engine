#pragma once

#include "object.hpp"

namespace engine::opengl
{
    class Texture final : public Object
    {
    public:
        Texture(uint32_t target, int32_t width, int32_t height);

        void create()  override;
        void destroy() override;

        void   data(uint32_t format) const; // TODO name this storage?
        void update(uint32_t format, const void* pixels) const;

        void   bind(uint32_t location = 0) const;

    private:
        uint32_t target { };
        int32_t  width_ { };
        int32_t height_ { };
    };
}