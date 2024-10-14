#pragma once

#include "core/window.hpp"

namespace engine::win32
{
    class Window final : public core::Window
    {
    public:
        void create()        override;
        void destroy() const override;
        void display() const override;

        [[nodiscard]] std::any handle() const override;

    private:
        void   register_window_class();
        void unregister_window_class()  const;

        ATOM _atom { };
        HWND _hwnd { };
    };
}