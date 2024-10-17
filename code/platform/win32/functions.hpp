#pragma once

namespace engine::win32
{
    using PFNWGLCREATECONTEXTATTRIBSARBPROC = HGLRC(WINAPI*)(HDC, HGLRC, const int32_t*);
    using PFNWGLCHOOSEPIXELFORMATARBPROC    =  BOOL(WINAPI*)(HDC,        const int32_t*, const float*, uint32_t, int32_t*, uint32_t*);

    inline PFNWGLCREATECONTEXTATTRIBSARBPROC  wglCreateContextAttribs;
    inline PFNWGLCHOOSEPIXELFORMATARBPROC     wglChoosePixelFormat;
}