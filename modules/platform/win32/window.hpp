#pragma once

#include "base/window.hpp"

namespace engine::win32
{
    class Window final : public base::Window
    {
    public:
        void create(const base::window::config& config) override;
        void destroy()                            const override;
        void show()                               const override;

        [[nodiscard]] std::any handle()           const override;

    private:
        void   register_window_class(const std::string& title);
        void unregister_window_class()     const;

        uint32_t style { WS_CLIPSIBLINGS | WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW };
        uint32_t extra { WS_EX_APPWINDOW };

        ATOM atom { };
        HWND hwnd { };
    };
}