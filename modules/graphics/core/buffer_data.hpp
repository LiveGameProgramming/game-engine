#pragma once

namespace engine::core
{
    class BufferData
    {
    public:
        [[nodiscard]] const void* data() const;
        [[nodiscard]] uint32_t    size() const;

        template <typename type>  static BufferData create(const std::vector<type>& buffer)
        {
            return { buffer.data(), static_cast<uint32_t>(buffer.size() * sizeof(type)) };
        }
        template <typename type>  static BufferData create(const type* data)
        {
            return { data, static_cast<uint32_t>(sizeof(type)) };
        }

    private:
        BufferData(const void* data, uint32_t size);

        const void* data_ { };
        uint32_t    size_ { };
    };
}