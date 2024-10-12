#include "window.hpp"
#include "window_events.hpp"

namespace engine::win32
{
    void Window::create()
    {
        register_window_class();

        constexpr int32_t x = CW_USEDEFAULT;
        constexpr int32_t y = CW_USEDEFAULT;

        constexpr uint32_t extra = WS_EX_APPWINDOW;
        constexpr uint32_t style = WS_CLIPSIBLINGS | WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;

        _handle = CreateWindowEx(extra, MAKEINTATOM(_classex), _title.c_str(),
                                 style, x, y, _size.width, _size.height, nullptr, nullptr, GetModuleHandle(nullptr), nullptr);
    }

    void Window::destroy() const
    {
        DestroyWindow(_handle);

        unregister_window_class();
    }

    void Window::display() const
    {
        ShowWindow(_handle, SW_SHOW);
    }

    void Window::register_window_class()
    {
        const WNDCLASSEX classex
        {
            .cbSize        = sizeof(WNDCLASSEX),
            .style         = CS_VREDRAW | CS_HREDRAW | CS_OWNDC,
            .lpfnWndProc   = WindowEvents::process,
            .hInstance     = GetModuleHandle(nullptr),
            .hCursor       = LoadCursor(nullptr, IDC_ARROW),
            .lpszClassName = _title.c_str(),
        };

        _classex = RegisterClassEx(&classex);
    }

    void Window::unregister_window_class() const
    {
        UnregisterClass(MAKEINTATOM(_classex), GetModuleHandle(nullptr));
    }
}