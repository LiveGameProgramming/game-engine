#include "window.hpp"
#include "window_events.hpp"

namespace engine::win32
{
    void Window::create(const core::window::config& config)
    {
        register_window_class(config.title);

        constexpr int32_t x = CW_USEDEFAULT;
        constexpr int32_t y = CW_USEDEFAULT;

        constexpr uint32_t extra = WS_EX_APPWINDOW;
        constexpr uint32_t style = WS_CLIPSIBLINGS | WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;

        hwnd = CreateWindowEx(extra, MAKEINTATOM(atom),       config.title.c_str(),
                              style, x, y, config.size.width, config.size.height, nullptr, nullptr, GetModuleHandle(nullptr), nullptr);
    }

    void Window::destroy() const
    {
        DestroyWindow(hwnd);

        unregister_window_class();
    }

    void Window::display() const
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