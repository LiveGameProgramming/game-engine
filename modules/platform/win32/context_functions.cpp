#include "context_functions.hpp"
#include "functions.hpp"

namespace engine::win32
{
    void ContextFunctions::init()
    {
        wglCreateContextAttribs = reinterpret_cast<PFNWGLCREATECONTEXTATTRIBSARBPROC>(wglGetProcAddress("wglCreateContextAttribsARB"));
        wglChoosePixelFormat    = reinterpret_cast<PFNWGLCHOOSEPIXELFORMATARBPROC>(wglGetProcAddress("wglChoosePixelFormatARB"));
    }
}