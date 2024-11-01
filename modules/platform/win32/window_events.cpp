#include "window_events.hpp"
#include "window_manager.hpp"

namespace engine::win32
{
    void WindowEvents::update() const
    {
        MSG msg;

        while (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
            {
                WindowManager::instance().close();
                break;
            }

            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    LRESULT WindowEvents::process(HWND hwnd, const UINT msg, const WPARAM wparam, const LPARAM lparam)
    {
        switch (msg)
        {
            case WM_CLOSE:
            {
                PostQuitMessage(0);
                return 0;
            }
            case WM_SIZE:
            {
                return 0;
            }
            case WM_ERASEBKGND:
            {
                return 1;
            }
            case WM_SYSCOMMAND:
            {
                switch (wparam)
                {
                    case SC_SCREENSAVE:
                    case SC_MONITORPOWER:
                    {
                        return 0;
                    }
                    default:
                        break;
                }
            }
            default:
                return DefWindowProc(hwnd, msg, wparam, lparam);
        }

        return 0;
    }
}