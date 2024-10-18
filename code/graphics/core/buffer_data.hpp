#pragma once

namespace engine::core
{
    class BufferData
    {
    public:
        [[nodiscard]] const void* data() const;
        [[nodiscard]] uint32_t    size() const;

        template <typename Type> static  BufferData create(const std::vector<Type>& buffer)
        {
            return { buffer.data(), static_cast<uint32_t>(buffer.size() * sizeof(Type)) };
        }

    private:
        BufferData(const void* data, uint32_t size);

        const void* data_ { };
        uint32_t    size_ { };
    };
}