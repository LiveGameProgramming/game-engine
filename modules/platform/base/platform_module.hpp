#pragma once

#include "factory.hpp"

namespace engine::base
{
    class PlatformModule
    {
    public:
        static std::unique_ptr<Factory> create_factory();

        static void init();

    private:
        static void init_context_extensions();
    };
}