#include "functions_loader.hpp"
#include "functions.hpp"

namespace engine::gl
{
    void FunctionsLoader::init_core()
    {
        const auto     instance = LoadLibrary("opengl32.dll");
        glClear      = reinterpret_cast<PFNGLCLEARPROC>(GetProcAddress(instance,      "glClear"));
        glClearColor = reinterpret_cast<PFNGLCLEARCOLORPROC>(GetProcAddress(instance, "glClearColor"));
        glEnable     = reinterpret_cast<PFNGLENABLEPROC>(GetProcAddress(instance,     "glEnable"));
        glDisable    = reinterpret_cast<PFNGLDISABLEPROC>(GetProcAddress(instance,    "glDisable"));
        glDrawArrays = reinterpret_cast<PFNGLDRAWARRAYSPROC>(GetProcAddress(instance, "glDrawArrays"));

        FreeLibrary(instance);
    }

    void FunctionsLoader::init_extensions()
    {
        glCreateBuffers   = reinterpret_cast<PFNGLCREATEBUFFERSPROC>(wglGetProcAddress("glCreateBuffers"));
        glDeleteBuffers   = reinterpret_cast<PFNGLDELETEBUFFERSPROC>(wglGetProcAddress("glDeleteBuffers"));
        glNamedBufferData = reinterpret_cast<PFNGLNAMEDBUFFERDATAPROC>(wglGetProcAddress("glNamedBufferData"));

        glCreateVertexArrays       = reinterpret_cast<PFNGLCREATEVERTEXARRAYSPROC>(wglGetProcAddress("glCreateVertexArrays"));
        glDeleteVertexArrays       = reinterpret_cast<PFNGLDELETEVERTEXARRAYSPROC>(wglGetProcAddress("glDeleteVertexArrays"));
        glBindVertexArray          = reinterpret_cast<PFNGLBINDVERTEXARRAYPROC>(wglGetProcAddress("glBindVertexArray"));
        glVertexArrayVertexBuffer  = reinterpret_cast<PFNGLVERTEXARRAYVERTEXBUFFERPROC>(wglGetProcAddress("glVertexArrayVertexBuffer"));
        glVertexArrayAttribFormat  = reinterpret_cast<PFNGLVERTEXARRAYATTRIBFORMATPROC>(wglGetProcAddress("glVertexArrayAttribFormat"));
        glVertexArrayAttribBinding = reinterpret_cast<PFNGLVERTEXARRATATTRIBBINDINGPROC>(wglGetProcAddress("glVertexArrayAttribBinding"));
        glEnableVertexArrayAttrib  = reinterpret_cast<PFNGLENABLEVERTEXARRAYATTRIPROC>(wglGetProcAddress("glEnableVertexArrayAttrib"));
    }
}