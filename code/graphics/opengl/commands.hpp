#pragma once

namespace engine::gl
{
    class Commands
    {
    public:
        static void clear(float r, float g, float b, float a = 1.0f);
        static void clear(uint32_t flag);
    };
}