#include "context.hpp"
#include "window.hpp"

namespace engine::win32
{
    void Context::create(const std::any& hwnd)
    {
        _hdc = GetDC(std::any_cast<HWND>(hwnd));

        create_core_context();
    }

    void Context::destroy() const
    {
    }

    void Context::update() const
    {
        SwapBuffers(_hdc);
    }

    void Context::create_core_context()
    {
        Window window;
        window.title("CoreContext").size({ 0, 0 }).create();

        constexpr PIXELFORMATDESCRIPTOR pfd
        {
            .nSize      = sizeof(PIXELFORMATDESCRIPTOR),
            .nVersion   = 1,
            .dwFlags    = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
            .iPixelType = PFD_TYPE_RGBA,
            .cColorBits = 24
        };

        const auto hdc = GetDC(std::any_cast<HWND>(window.handle()));

        if (!SetPixelFormat(hdc, ChoosePixelFormat(hdc, &pfd), &pfd))
        {
            std::exit(EXIT_FAILURE);
        }

        const auto hrc = wglCreateContext(hdc); wglMakeCurrent(hdc, hrc);

        wglMakeCurrent(hdc, nullptr);
        wglDeleteContext(hrc);

        window.destroy();
    }
}