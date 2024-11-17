#pragma once

#include "object.hpp"

namespace opengl
{
    class Texture final : public Object
    {
    public:
        Texture(uint32_t target, uint32_t format, int32_t width, int32_t height);

        void create()  override;
        void destroy() override;

        void storage(int32_t levels = 1) const;
        void update(uint32_t format,     const void* pixels, int32_t level = 0) const;

        void bind(uint32_t location = 0) const;

        [[nodiscard]] uint32_t format()  const;
        [[nodiscard]]  int32_t  width()  const;
        [[nodiscard]]  int32_t height()  const;

    private:
        uint32_t target  { };
        uint32_t format_ { };

        int32_t  width_  { };
        int32_t height_  { };
    };
}