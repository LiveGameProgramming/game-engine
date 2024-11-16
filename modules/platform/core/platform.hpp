#pragma once

#include "base/factory.hpp"

namespace engine::core
{
    class Platform
    {
    public:
        static void init();

        static std::unique_ptr<base::Factory> create_factory();

    private:
        static void  init_context_functions();
    };
}