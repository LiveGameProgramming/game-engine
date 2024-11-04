#include "size.hpp"

namespace engine::window
{
    size& size::operator=(const size& other)
    {
        width  = other.width;
        height = other.height;
        ratio  = static_cast<float>(width) / static_cast<float>(height);

        return *this;
    }
}