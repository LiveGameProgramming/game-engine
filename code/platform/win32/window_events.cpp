#include "window_events.hpp"

namespace engine::win32
{
    void WindowEvents::update() const
    {
    }

    LRESULT WindowEvents::process(const HWND hwnd, const UINT msg, const WPARAM wParam, const LPARAM lParam)
    {
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
}