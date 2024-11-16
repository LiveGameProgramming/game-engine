#include "buffer.hpp"

namespace engine::opengl
{
    void Buffer::create()
    {
        glCreateBuffers(1, &handle_);
    }

    void Buffer::destroy()
    {
        glDeleteBuffers(1, &handle_);
    }

    void Buffer::data(const core::buffer::data& data, const uint32_t usage) const
    {
        glNamedBufferData(handle_, data.second, data.first, usage);
    }

    void Buffer::update(const core::buffer::data& data, const int32_t offset) const
    {
        glNamedBufferSubData(handle_, offset, data.second, data.first);
    }

    void Buffer::sub_data(const core::BufferData& buffer, const int32_t offset) const
    {
        glNamedBufferSubData(handle_, offset, buffer.size(), buffer.data());
    }

    void Buffer::bind(const uint32_t location) const
    {
        glBindBufferBase(buffer::uniform, location, handle_);
    }
}