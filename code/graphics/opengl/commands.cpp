#include "commands.hpp"
#include "functions.hpp"

namespace engine::gl
{
    void Commands::clear(const float r, const float g, const float b, const float a)
    {
        glClearColor(r, g, b, a);
    }

    void Commands::clear(const uint32_t flag)
    {
        glClear(flag);
    }
}