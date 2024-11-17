#pragma once

#include "core/base/context_functions.hpp"

namespace win32
{
    #pragma region Functions

    using  PFNWGLCREATECONTEXTATTRIBSARBPROC = HGLRC(WINAPI*)(HDC, HGLRC, const int32_t*);
    using  PFNWGLCHOOSEPIXELFORMATARBPROC    =  BOOL(WINAPI*)(HDC,        const int32_t*, const float*, uint32_t, int32_t*, uint32_t*);

    inline PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribs;
    inline PFNWGLCHOOSEPIXELFORMATARBPROC    wglChoosePixelFormat;

    #pragma endregion

    class ContextFunctions final : public core::base::ContextFunctions
    {
    public:
        void init() override;
    };
}