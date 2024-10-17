#pragma once

namespace engine::gl
{
    using  PFNGLCLEARPROC      = void(APIENTRY*)(uint32_t flag);
    using  PFNGLCLEARCOLORPROC = void(APIENTRY*)(float r, float g, float b, float a);

    inline PFNGLCLEARPROC        glClear;
    inline PFNGLCLEARCOLORPROC   glClearColor;
}