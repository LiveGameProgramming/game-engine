#include "window.hpp"
#include "window_events.hpp"

namespace win32
{
    void Window::create(const window::config& config)
    {
        constexpr int32_t x = CW_USEDEFAULT;
        constexpr int32_t y = CW_USEDEFAULT;

        register_window_class(config.title);

        RECT frame
        {
            .right  = config.size.width(),
            .bottom = config.size.height()
        };

        AdjustWindowRectEx(&frame, style, 0, extra);

        const int32_t frame_width  = frame.right  - frame.left;
        const int32_t frame_height = frame.bottom - frame.top;

        hwnd = CreateWindowEx(extra, MAKEINTATOM(atom), config.title.c_str(),
                              style, x, y, frame_width, frame_height, nullptr, nullptr, GetModuleHandle(nullptr), nullptr);
        size = config.size;
    }

    void Window::destroy() const
    {
        DestroyWindow(hwnd);

        unregister_window_class();
    }

    void Window::show()  const
    {
        ShowWindow(hwnd, SW_SHOW);
    }

    std::any Window::handle() const
    {
        return hwnd;
    }

    void Window::register_window_class(const std::string& title)
    {
        const WNDCLASSEX classex
        {
            .cbSize        = sizeof(WNDCLASSEX),
            .style         = CS_VREDRAW | CS_HREDRAW | CS_OWNDC,
            .lpfnWndProc   = WindowEvents::process,
            .hInstance     = GetModuleHandle(nullptr),
            .hCursor       = LoadCursor(nullptr, IDC_ARROW),
            .lpszClassName = title.c_str(),
        };

        atom = RegisterClassEx(&classex);
    }

    void Window::unregister_window_class() const
    {
        UnregisterClass(MAKEINTATOM(atom), GetModuleHandle(nullptr));
    }
}