#include "pipeline.hpp"
#include "functions.hpp"
#include "macros.hpp"

namespace engine::opengl
{
    void Pipeline::enable_solid_mode()
    {
        glPolygonMode(front_and_back, mode_solid);

        enable(cull_face);
    }

    void Pipeline::enable_lines_mode()
    {
        glPolygonMode(front_and_back, mode_lines);

        disable(cull_face);
    }

    void Pipeline::enable(const uint32_t flag)
    {
        glEnable(flag);
    }

    void Pipeline::disable(const uint32_t flag)
    {
        glDisable(flag);
    }

    void Pipeline::default_state()
    {
        #pragma region Framebuffers

        enable(framebuffer_srgb);
        enable(multisample);

        #pragma endregion

        enable(cull_face);
    }
}