#pragma once

namespace engine::opengl
{
    class FunctionsLoader
    {
    public:
        static void init_core();
        static void init_extensions();
    };
}