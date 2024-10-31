#pragma once

namespace engine::buffers
{
    struct data
    {
        [[nodiscard]] const void* ptr() const;
        [[nodiscard]] uint32_t   size() const;

        template <typename type> static data create(const std::vector<type>& buffer)
        {
            return { buffer.data(), static_cast<uint32_t>(buffer.size() * sizeof(type)) };
        }
        template <typename type> static data create(const type* data)
        {
            return { data, static_cast<uint32_t>(sizeof(type)) };
        }

    private:
        data(const void* data, uint32_t size);

        const void* ptr_ { };
        uint32_t   size_ { };
    };
}