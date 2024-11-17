#pragma once

#include "core/base/context.hpp"

namespace win32
{
    class Context final : public core::base::Context
    {
    public:
        void create(const std::any& hwnd, const core::context::config& config) override;
        void create(const std::any& hwnd)                                      override;

        void destroy()   const override;
        void update()    const override;

    private:
        HGLRC hrc { };
        HDC   hdc { };
    };
}