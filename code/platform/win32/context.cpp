#include "context.hpp"
#include "window.hpp"

#include "functions.hpp"
#include "macros.hpp"

namespace engine::win32
{
    void Context::destroy() const
    {
        wglMakeCurrent(_hdc, nullptr);
        wglDeleteContext(_hrc);
    }

    void Context::swap_buffers() const
    {
        SwapBuffers(_hdc);
    }

    void Context::create_core(const std::any& hwnd)
    {
        constexpr PIXELFORMATDESCRIPTOR pfd
        {
            .nSize      = sizeof(PIXELFORMATDESCRIPTOR),
            .dwFlags    = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
            .iPixelType = PFD_TYPE_RGBA
        };
                            _hdc = GetDC(std::any_cast<HWND>(hwnd));
        if (!SetPixelFormat(_hdc,  ChoosePixelFormat(_hdc, &pfd), &pfd))
        {
            std::exit(EXIT_FAILURE);
        }

        _hrc = wglCreateContext(_hdc); wglMakeCurrent(_hdc, _hrc);
    }

    void Context::init_functions() const
    {
        wglCreateContextAttribs =  reinterpret_cast<PFNWGLCREATECONTEXTATTRIBSARBPROC>(wglGetProcAddress("wglCreateContextAttribsARB"));
        wglChoosePixelFormat    =  reinterpret_cast<PFNWGLCHOOSEPIXELFORMATARBPROC>(wglGetProcAddress("wglChoosePixelFormatARB"));
    }

    void Context::create(const std::any& hwnd)
    {
        constexpr int32_t pixel_attributes[]
        {
            draw_to_window, 1,
            support_opengl, 1,
            double_buffer,  1,
            acceleration,   full_acceleration,
            pixel_type,     type_rgba,
            color_bits,     24,
            depth_bits,     24,
            stencil_bits,   8,
            0
        };
             int32_t format;                        _hdc = GetDC(std::any_cast<HWND>(hwnd));
        if (uint32_t formats; !wglChoosePixelFormat(_hdc,  pixel_attributes, nullptr, 1, &format, &formats) || !formats)
        {
            std::exit(EXIT_FAILURE);
        }
                                                      PIXELFORMATDESCRIPTOR pfd;
        if (!DescribePixelFormat(_hdc, format, sizeof(PIXELFORMATDESCRIPTOR), &pfd))
        {
            std::exit(EXIT_FAILURE);
        }

        if (!SetPixelFormat(_hdc, format, &pfd))
        {
            std::exit(EXIT_FAILURE);
        }

        constexpr int32_t context_attributes[]
        {
            context_major_version, core::Context::major_version,
            context_minor_version, core::Context::minor_version,
            context_profile,       context_core_profile,
            0
        };

        _hrc = wglCreateContextAttribs(_hdc, nullptr, context_attributes); wglMakeCurrent(_hdc, _hrc);
    }
}