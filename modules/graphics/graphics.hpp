#pragma once

namespace engine
{
    class Graphics
    {
    public:
        static void init();

    private:
        static void init_opengl_state();
    };
}