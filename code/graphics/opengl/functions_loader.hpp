#pragma once

namespace engine::gl
{
    class FunctionsLoader
    {
    public:
        static void init_core();
        static void init_extensions();
    };
}