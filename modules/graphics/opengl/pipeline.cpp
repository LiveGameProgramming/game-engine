#include "pipeline.hpp"

namespace opengl
{
    void Pipeline::enable_solid_mode()
    {
        glPolygonMode(pipeline::front_and_back, pipeline::solid);

        enable(pipeline::cull_face);
    }

    void Pipeline::enable_lines_mode()
    {
        glPolygonMode(pipeline::front_and_back, pipeline::lines);

        disable(pipeline::cull_face);
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
        enable(pipeline::srgb);
        enable(pipeline::multisample);

        enable(pipeline::depth_test);
        enable(pipeline::cull_face);
    }
}