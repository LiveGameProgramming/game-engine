#pragma once

namespace core::buffer
{
    using data = std::pair<const void*, uint32_t>;

    template <typename type> static data make_data(const std::vector<type>& buffer)
    {
        return std::make_pair(buffer.data(), static_cast<uint32_t>(buffer.size() * sizeof(type)));
    }
    template <typename type> static data make_data(const type* data)
    {
        return std::make_pair(data, static_cast<uint32_t>(sizeof(type)));
    }
}