#include "pipeline.hpp"
#include "functions.hpp"

namespace engine::opengl
{
    void Pipeline::enable(const uint32_t flag)
    {
        glEnable(flag);
    }

    void Pipeline::disable(const uint32_t flag)
    {
        glDisable(flag);
    }
}