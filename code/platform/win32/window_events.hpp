#pragma once

#include "core/window_events.hpp"

namespace engine::win32
{
    class WindowEvents final : public core::WindowEvents
    {
    public:
        void update()  const override;

    private:
        static LRESULT process(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);

        friend class Window;
    };
}