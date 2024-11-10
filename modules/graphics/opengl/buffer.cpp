#include "buffer.hpp"
#include "functions.hpp"

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

    void Buffer::data(const buffer::data& data, const uint32_t usage) const
    {
        glNamedBufferData(handle_, data.size(), data.ptr(), usage);
    }

    void Buffer::update(const buffer::data& data, const int32_t offset) const
    {
        glNamedBufferSubData(handle_, offset, data.size(), data.ptr());
    }

    void Buffer::bind(const uint32_t location) const
    {
        glBindBufferBase(uniform_buffer, location, handle_);
    }
}