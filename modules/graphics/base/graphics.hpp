#pragma once

namespace core
{
    class Graphics
    {
    public:
        static void init();

    private:
        static void init_opengl_state();
    };
}