#include "pipeline.hpp"
#include "functions.hpp"

namespace engine::gl
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