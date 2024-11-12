#include "texture.hpp"
#include "functions.hpp"
#include "macros.hpp"

namespace engine::opengl
{
    Texture::Texture(const uint32_t target, const int32_t width, const int32_t height)
        : target  { target }
        , width_  { width  }
        , height_ { height }
    {
    }

    void Texture::create()
    {
        glCreateTextures(target, 1, &handle_);
    }

    void Texture::destroy()
    {
        glDeleteTextures(1, &handle_);
    }

    void Texture::data(const uint32_t format) const
    {
        glTextureStorage2D(handle_, 1, format, width_, height_);
    }

    void Texture::update(const uint32_t format, const void* pixels) const
    {
        glTextureSubImage2D(handle_, 0, 0, 0, width_, height_, format, type_ubyte, pixels);
    }

    void Texture::bind(const uint32_t location) const
    {
        glBindTextureUnit(location, handle_);
    }
}