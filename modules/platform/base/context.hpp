#pragma once

#include "context/config.hpp"

namespace engine::base
{
    class Context
    {
    public:
        virtual void create(const      std::any& hwnd, const context::config& config) = 0;
        virtual void create_core(const std::any& hwnd)                                = 0;

        virtual void destroy()   const = 0;
        virtual void update()    const = 0;

        static  void init_extensions();
    };
}