#pragma once

namespace engine::opengl
{
    class Pipeline
    {
    public:
        static void  enable(uint32_t  flag);
        static void  disable(uint32_t flag);

        static void  default_state();

        Pipeline() = delete;
    };
}