#pragma once

namespace engine::core
{
    class Graphics
    {
    public:
        static void init();

    private:
        static void init_opengl_state();
    };
}