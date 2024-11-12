#pragma once

#include "opengl/vertex_array.hpp"
#include "opengl/renderer.hpp"
#include "opengl/texture.hpp"

#include "mat4.hpp"

namespace engine::renderer
{
    class Model final : public opengl::Renderer
    {
    public:
        void draw(const opengl::VertexArray* vertex_array, const opengl::Texture* texture, const mat4& model, int32_t faces) const;
    };
}