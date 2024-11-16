#include "buffer_data.hpp"

namespace engine::core
{
    buffer_data::buffer_data(const void* data, const uint32_t size)
        :  ptr_ { data }
        , size_ { size }
    {
    }

    const void* buffer_data::ptr() const
    {
        return ptr_;
    }

    uint32_t buffer_data::size() const
    {
        return size_;
    }
}