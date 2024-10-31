#pragma once

namespace engine::opengl
{
    #pragma region OpenGL Core

    using  PFNGLCLEARPROC        = void(APIENTRY*)(uint32_t);
    using  PFNGLCLEARCOLORPROC   = void(APIENTRY*)(float, float, float, float);
    using  PFNGLENABLEPROC       = void(APIENTRY*)(uint32_t);
    using  PFNGLDISABLEPROC      = void(APIENTRY*)(uint32_t);
    using  PFNGLDRAWARRAYSPROC   = void(APIENTRY*)(uint32_t, int32_t,  int32_t);
    using  PFNGLDRAWELEMENTSPROC = void(APIENTRY*)(uint32_t, int32_t, uint32_t, const void*);
    using  PFNGLPOLYGONMODEPROC  = void(APIENTRY*)(uint32_t,          uint32_t);

    inline PFNGLCLEARPROC        glClear;
    inline PFNGLCLEARCOLORPROC   glClearColor;
    inline PFNGLENABLEPROC       glEnable;
    inline PFNGLDISABLEPROC      glDisable;
    inline PFNGLDRAWARRAYSPROC   glDrawArrays;
    inline PFNGLDRAWELEMENTSPROC glDrawElements;
    inline PFNGLPOLYGONMODEPROC  glPolygonMode;

    #pragma endregion
    #pragma region OpenGL Extensions
    #pragma region Buffers

    using  PFNGLCREATEBUFFERSPROC      = void(APIENTRY*)(int32_t,       uint32_t*);
    using  PFNGLDELETEBUFFERSPROC      = void(APIENTRY*)(int32_t, const uint32_t*);
    using  PFNGLBINDBUFFERBASEPROC     = void(APIENTRY*)(uint32_t,      uint32_t,                 uint32_t);
    using  PFNGLNAMEDBUFFERDATAPROC    = void(APIENTRY*)(uint32_t,          int64_t, const void*, uint32_t);
    using  PFNGLNAMEDBUFFERSUBDATAPROC = void(APIENTRY*)(uint32_t, int64_t, int64_t, const void*);

    inline PFNGLCREATEBUFFERSPROC      glCreateBuffers;
    inline PFNGLDELETEBUFFERSPROC      glDeleteBuffers;
    inline PFNGLBINDBUFFERBASEPROC     glBindBufferBase;
    inline PFNGLNAMEDBUFFERDATAPROC    glNamedBufferData;
    inline PFNGLNAMEDBUFFERSUBDATAPROC glNamedBufferSubData;

    #pragma endregion
    #pragma region VertexArray

    using  PFNGLCREATEVERTEXARRAYSPROC       = void(APIENTRY*)(int32_t,       uint32_t*);
    using  PFNGLDELETEVERTEXARRAYSPROC       = void(APIENTRY*)(int32_t, const uint32_t*);
    using  PFNGLBINDVERTEXARRAYPROC          = void(APIENTRY*)(uint32_t);
    using  PFNGLVERTEXARRAYVERTEXBUFFERPROC  = void(APIENTRY*)(uint32_t, uint32_t, uint32_t, uint64_t,           int32_t);
    using  PFNGLVERTEXARRAYELEMENTBUFFERPROC = void(APIENTRY*)(uint32_t, uint32_t);
    using  PFNGLVERTEXARRAYATTRIBFORMATPROC  = void(APIENTRY*)(uint32_t, uint32_t,  int32_t, uint32_t, uint8_t, uint32_t);
    using  PFNGLVERTEXARRATATTRIBBINDINGPROC = void(APIENTRY*)(uint32_t, uint32_t, uint32_t);
    using  PFNGLENABLEVERTEXARRAYATTRIPROC   = void(APIENTRY*)(uint32_t, uint32_t);

    inline PFNGLCREATEVERTEXARRAYSPROC       glCreateVertexArrays;
    inline PFNGLDELETEVERTEXARRAYSPROC       glDeleteVertexArrays;
    inline PFNGLBINDVERTEXARRAYPROC          glBindVertexArray;
    inline PFNGLVERTEXARRAYVERTEXBUFFERPROC  glVertexArrayVertexBuffer;
    inline PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer;
    inline PFNGLVERTEXARRAYATTRIBFORMATPROC  glVertexArrayAttribFormat;
    inline PFNGLVERTEXARRATATTRIBBINDINGPROC glVertexArrayAttribBinding;
    inline PFNGLENABLEVERTEXARRAYATTRIPROC   glEnableVertexArrayAttrib;

    #pragma endregion
    #pragma region ShaderStage

    using  PFNGLCREATESHADERPROC     = uint32_t(APIENTRY*)(uint32_t);
    using  PFNGLDELETESHADERPROC     =     void(APIENTRY*)(uint32_t);
    using  PFNGLSHADERBINARYPROC     =     void(APIENTRY*)( int32_t, const uint32_t*, uint32_t, const void*,            int32_t);
    using  PFNGLSPECIALIZESHADERPROC =     void(APIENTRY*)(uint32_t, const char*,     uint32_t, const uint32_t*, const uint32_t*);

    inline PFNGLCREATESHADERPROC     glCreateShader;
    inline PFNGLDELETESHADERPROC     glDeleteShader;
    inline PFNGLSHADERBINARYPROC     glShaderBinary;
    inline PFNGLSPECIALIZESHADERPROC glSpecializeShader;

    #pragma endregion
    #pragma region ShaderProgram

    using  PFNGLCREATEPROGRAMPROC = uint32_t(APIENTRY*)();
    using  PFNGLATTACHSHADERPROC  =     void(APIENTRY*)(uint32_t, uint32_t);
    using  PFNGLLINKPROGRAMPROC   =     void(APIENTRY*)(uint32_t);
    using  PFNGLUSEPROGRAMPROC    =     void(APIENTRY*)(uint32_t);
    using  PFNGLDELETEPROGRAMPROC =     void(APIENTRY*)(uint32_t);

    inline PFNGLCREATEPROGRAMPROC glCreateProgram;
    inline PFNGLATTACHSHADERPROC  glAttachShader;
    inline PFNGLLINKPROGRAMPROC   glLinkProgram;
    inline PFNGLUSEPROGRAMPROC    glUseProgram;
    inline PFNGLDELETEPROGRAMPROC glDeleteProgram;

    using  PFNGLPROGRAMUNIFORMMATRIX4FVPROC = void(APIENTRY*)(uint32_t, int32_t, int32_t, uint8_t, const float*);

    inline PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;

    #pragma endregion
    #pragma endregion
}