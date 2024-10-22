#pragma once

namespace engine::gl
{
    class Pipeline
    {
    public:
        static void enable(uint32_t  flag);
        static void disable(uint32_t flag);
    };
}