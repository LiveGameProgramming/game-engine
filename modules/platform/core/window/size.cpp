#include "size.hpp"

namespace core::window
{
    size::size(const int32_t width, const int32_t height)
        : width_  { width  }
        , height_ { height }
        , ratio_  { static_cast<float>(width_) / static_cast<float>(height_) }
    {
    }

    int32_t size::width() const
    {
        return width_;
    }

    int32_t size::height() const
    {
        return height_;
    }

    float size::ratio() const
    {
        return ratio_;
    }
}