#include "texture.hpp"

namespace opengl
{
    Texture::Texture(const uint32_t target, const uint32_t format, const int32_t width, const int32_t height)
        : target  { target }
        , format_ { format }
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

    void Texture::storage(const int32_t levels) const
    {
        glTextureStorage2D(handle_, levels, format_, width_, height_);
    }

    void Texture::update(const uint32_t format, const core::buffer::data& data, const int32_t level) const
    {
        glTextureSubImage2D(handle_, level, 0, 0, width_, height_, format, type_ubyte, data.first);
    }

    void Texture::bind(const uint32_t location) const
    {
        glBindTextureUnit(location, handle_);
    }

    uint32_t Texture::format() const
    {
        return format_;
    }

    int32_t Texture::width() const
    {
        return width_;
    }

    int32_t Texture::height() const
    {
        return height_;
    }
}