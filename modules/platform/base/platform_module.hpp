#pragma once

#include "factory.hpp"

namespace engine::base
{
    class PlatformModule
    {
    public:
        static void init();

        static std::unique_ptr<Factory> create_factory();

    private:
        static void init_context_functions();
    };
}