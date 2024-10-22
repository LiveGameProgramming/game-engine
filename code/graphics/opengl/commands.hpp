#pragma once

namespace engine::gl
{
    class Commands
    {
    public:
        static void  clear(float r, float g, float b, float a = 1.0f);
        static void  clear(uint32_t flags);

        static void  draw_arrays(uint32_t  primitive, int32_t count);
        static void  draw_indexed(uint32_t primitive, int32_t count);

        Commands() = delete;
    };
}