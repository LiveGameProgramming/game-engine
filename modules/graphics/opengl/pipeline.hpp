#pragma once

namespace engine::opengl
{
    class Pipeline
    {
    public:
        static void  default_state();

        static void  enable(uint32_t  flag);
        static void  disable(uint32_t flag);

        [[maybe_unused]] static void  enable_lines_mode();
        [[maybe_unused]] static void  enable_solid_mode();

        Pipeline() = delete;
    };
}