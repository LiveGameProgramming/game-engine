#include "window_events.hpp"

namespace engine::win32
{
    void WindowEvents::update() const
    {
        MSG msg;

        while (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
            {
                break;
            }

            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    LRESULT WindowEvents::process(const HWND hwnd, const UINT msg, const WPARAM wparam, const LPARAM lparam)
    {
        switch (msg)
        {
            case WM_CLOSE:
            {
                return 0;
            }
            case WM_SIZE:
            {
                return 0;
            }
        }

        return DefWindowProc(hwnd, msg, wparam, lparam);
    }
}