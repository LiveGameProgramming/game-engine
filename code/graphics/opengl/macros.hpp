#pragma once

namespace engine::gl
{
    constexpr uint32_t color_buffer_bit = 0x00004000;

    constexpr uint32_t framebuffer_srgb = 0x8DB9;
    constexpr uint32_t multisample      = 0x809D;

    constexpr uint32_t shader_binary    = 0x9551;
    constexpr uint32_t vertex_stage     = 0x8B31;
    constexpr uint32_t fragment_stage   = 0x8B30;

    constexpr uint32_t uniform_buffer   = 0x8A11;

    constexpr uint32_t static_draw      = 0x88E4;
    constexpr uint32_t dynamic_draw     = 0x88E8;

    constexpr uint32_t triangles        = 0x0004;

    constexpr uint32_t type_float       = 0x1406;
    constexpr uint32_t type_uint        = 0x1405;
}