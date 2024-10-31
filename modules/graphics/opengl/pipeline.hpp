#pragma once

namespace engine::opengl
{
    class Pipeline
    {
    public:
        [[maybe_unused]] static void  enable_solid_mode();
        [[maybe_unused]] static void  enable_lines_mode();

        static void  enable(uint32_t  flag);
        static void  disable(uint32_t flag);

        static void  default_state();

        Pipeline() = delete;
    };
}