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

    void Buffer::data(const core::BufferData& buffer, const uint32_t usage) const
    {
        glNamedBufferData(handle_, buffer.size(), buffer.data(), usage);
    }

    void Buffer::bind(const uint32_t location) const
    {
        glBindBufferBase(uniform_buffer, location, handle_);
    }
}