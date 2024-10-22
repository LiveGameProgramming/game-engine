#pragma once

#include "context_config.hpp"

namespace engine::core
{
    class Context
    {
    public:
        virtual void create(const      std::any& hwnd, const context_config& config) = 0;
        virtual void create_core(const std::any& hwnd)                               = 0;
        virtual void destroy()         const = 0;

        virtual void init_functions()  const = 0;
        virtual void swap_buffers()    const = 0;

        static void init_extensions();
    };
}