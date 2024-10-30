#include "buffer.hpp"
#include "functions.hpp"
#include "macros.hpp"

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

    void Buffer::data(const base::buffer::data& data, const uint32_t usage) const
    {
        glNamedBufferData(handle_, data.size(), data.ptr(), usage);
    }

    void Buffer::sub_data(const base::buffer::data& data, const int32_t offset) const
    {
        glNamedBufferSubData(handle_, offset, data.size(), data.ptr());
    }

    void Buffer::bind(const uint32_t location) const
    {
        glBindBufferBase(uniform_buffer, location, handle_);
    }
}