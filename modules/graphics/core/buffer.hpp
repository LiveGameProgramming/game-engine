#pragma once

namespace engine::core::data
{
    struct buffer
    {
        template <typename type> static buffer create(const std::vector<type>& buffer)
        {
            return { buffer.data(), static_cast<uint32_t>(buffer.size() * sizeof(type)) };
        }
        template <typename type> static buffer create(const type* data)
        {
            return { data, static_cast<uint32_t>(sizeof(type)) };
        }

        [[nodiscard]] const void* ptr() const;
        [[nodiscard]] uint32_t   size() const;

    private:
        buffer(const void* data, uint32_t size);

        const void* ptr_ { };
        uint32_t   size_ { };
    };
}