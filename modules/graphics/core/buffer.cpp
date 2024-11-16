#include "buffer.hpp"

namespace engine::core::data
{
    buffer::buffer(const void* data, const uint32_t size)
        :  ptr_ { data }
        , size_ { size }
    {
    }

    const void* buffer::ptr() const
    {
        return ptr_;
    }

    uint32_t buffer::size() const
    {
        return size_;
    }
}