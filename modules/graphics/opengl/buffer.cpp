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

    void Buffer::data(const core::data::buffer& buffer, const uint32_t usage) const
    {
        glNamedBufferData(handle_, buffer.size(), buffer.ptr(), usage);
    }

    void Buffer::update(const core::data::buffer& buffer, const int32_t offset) const
    {
        glNamedBufferSubData(handle_, offset, buffer.size(), buffer.ptr());
    }

    void Buffer::bind(const uint32_t location) const
    {
        glBindBufferBase(uniform_buffer, location, handle_);
    }

    void Buffer::bind(core::data::buffer_location location) const
    {
        bind(static_cast<uint32_t>(location));
    }
}