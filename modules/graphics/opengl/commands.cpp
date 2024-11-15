#include "commands.hpp"

namespace engine::opengl
{
    void Commands::viewport(const int32_t x, const int32_t y, const int32_t width, const int32_t height)
    {
        glViewport(x, y, width, height);
    }

    void Commands::clear(const float r, const float g, const float b, const float a)
    {
        glClearColor(r, g, b, a);
    }

    void Commands::clear(const uint32_t flags)
    {
        glClear(flags);
    }

    void Commands::draw_arrays(const uint32_t primitive, const int32_t count)
    {
        glDrawArrays(primitive, 0, count);
    }

    void Commands::draw_indexed(const uint32_t primitive, const int32_t count)
    {
        glDrawElements(primitive, count, type_uint, nullptr);
    }
}