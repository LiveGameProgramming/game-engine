#include "context.hpp"
#include "window.hpp"

#include "functions.hpp"
#include "macros.hpp"

namespace engine::win32
{
    void Context::destroy() const
    {
        wglMakeCurrent(hdc, nullptr);
        wglDeleteContext(hrc);
    }

    void Context::swap_buffers() const
    {
        SwapBuffers(hdc);
    }

    void Context::create_core(const std::any& hwnd)
    {
        constexpr PIXELFORMATDESCRIPTOR pfd
        {
            .nSize      = sizeof(PIXELFORMATDESCRIPTOR),
            .dwFlags    = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
            .iPixelType = PFD_TYPE_RGBA
        };
                            hdc = GetDC(std::any_cast<HWND>(hwnd));
        if (!SetPixelFormat(hdc,  ChoosePixelFormat(hdc, &pfd), &pfd))
        {
            std::exit(EXIT_FAILURE);
        }

        hrc = wglCreateContext(hdc); wglMakeCurrent(hdc, hrc);
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
            draw_to_window,   1,
            support_opengl,   1,
            double_buffer,    1,
            acceleration,     full_acceleration,
            pixel_type,       type_rgba,
            color_bits,       24,
            depth_bits,       24,
            stencil_bits,     8,
            framebuffer_srgb, 1,
            0
        };
             int32_t format;                        hdc = GetDC(std::any_cast<HWND>(hwnd));
        if (uint32_t formats; !wglChoosePixelFormat(hdc,  pixel_attributes, nullptr, 1, &format, &formats) || !formats)
        {
            std::exit(EXIT_FAILURE);
        }
                                                     PIXELFORMATDESCRIPTOR pfd;
        if (!DescribePixelFormat(hdc, format, sizeof(PIXELFORMATDESCRIPTOR), &pfd))
        {
            std::exit(EXIT_FAILURE);
        }

        if (!SetPixelFormat(hdc, format, &pfd))
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

        hrc = wglCreateContextAttribs(hdc, nullptr, context_attributes); wglMakeCurrent(hdc, hrc);
    }
}