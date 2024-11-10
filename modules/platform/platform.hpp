#pragma once

#include "base/factory.hpp"

namespace engine
{
    class Platform
    {
    public:
        static void init();

    private:
        static std::unique_ptr<base::Factory> create_factory();

        static void  init_context_functions();
        friend class WindowManager;
    };
}