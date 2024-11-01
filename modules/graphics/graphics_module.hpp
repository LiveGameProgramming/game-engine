#pragma once

namespace engine
{
    class GraphicsModule
    {
    public:
        static void init();

    private:
        static void init_opengl_state();
    };
}