#pragma once

#include "core/context/config.hpp"

namespace engine::core::base
{
    class Context
    {
    public:
        virtual void create(const std::any& hwnd, const context::config& config) = 0;
        virtual void create(const std::any& hwnd)                                = 0;

        virtual void destroy()    const = 0;
        virtual void update()     const = 0;
    };
}