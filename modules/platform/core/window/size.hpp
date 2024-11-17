#pragma once

namespace core::window
{
    struct size
    {
        size() = default;
        size(int32_t width, int32_t height);

        [[nodiscard]] int32_t width()  const;
        [[nodiscard]] int32_t height() const;

        [[nodiscard]] float   ratio()  const;

        static constexpr int32_t default_width  { 1024 };
        static constexpr int32_t default_height {  768 };

    private:
        int32_t width_  { default_width  };
        int32_t height_ { default_height };
        float   ratio_  { };
    };
}