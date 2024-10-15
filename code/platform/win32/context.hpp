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

    private:
        void create_core(const     std::any& hwnd);
        void create_extended(const std::any& hwnd);

        HGLRC _hrc { };
        HDC   _hdc { };
    };
}