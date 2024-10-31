#pragma once

namespace engine::base
{
    class GraphicsModule
    {
    public:
        static void init();

    private:
        static void init_opengl_state();
    };
}