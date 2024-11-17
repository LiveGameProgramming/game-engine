#pragma once

#include "base/window_events.hpp"

namespace win32
{
    class WindowEvents final : public base::WindowEvents
    {
    public:
        static LRESULT process(HWND hwnd, uint32_t msg, WPARAM wparam, LPARAM lparam);

        void update() const override;
    };
}