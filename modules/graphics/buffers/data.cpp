#include "data.hpp"

namespace engine::buffers
{
    data::data(const void* data, const uint32_t size)
        :  ptr_ { data }
        , size_ { size }
    {
    }

    const void* data::ptr() const
    {
        assert(ptr_);
        return ptr_;
    }

    uint32_t data::size() const
    {
        return size_;
    }
}