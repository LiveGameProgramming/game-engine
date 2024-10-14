#pragma once

#include "core/context.hpp"

namespace engine::win32
{
    class Context final : public core::Context
    {
    public:
        void create(const std::any& hwnd) override;
        void destroy()              const override;
        void update()               const override;
    };
}