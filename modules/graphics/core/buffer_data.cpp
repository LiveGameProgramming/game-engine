#include "buffer_data.hpp"

namespace engine::core
{
    BufferData::BufferData(const void* data, const uint32_t size)
        : data_ { data }
        , size_ { size }
    {
    }

    const void* BufferData::data() const
    {
        assert(data_);
        return data_;
    }

    uint32_t BufferData::size() const
    {
        return size_;
    }
}