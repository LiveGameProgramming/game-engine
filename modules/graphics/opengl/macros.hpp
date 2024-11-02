#pragma once

namespace engine::opengl
{
    constexpr uint32_t color_buffer = 0x00004000;
    constexpr uint32_t depth_buffer = 0x00000100;

    #pragma region Pipeline

    constexpr uint32_t framebuffer_srgb = 0x8DB9;
    constexpr uint32_t multisample      = 0x809D;
    constexpr uint32_t cull_face        = 0x0B44;
    constexpr uint32_t depth_test       = 0x0B71;
    constexpr uint32_t front_and_back   = 0x0408;
    constexpr uint32_t mode_lines       = 0x1B01;
    constexpr uint32_t mode_solid       = 0x1B02;

    #pragma endregion

    constexpr uint32_t shader_binary    = 0x9551;
    constexpr uint32_t vertex_stage     = 0x8B31;
    constexpr uint32_t fragment_stage   = 0x8B30;

    constexpr uint32_t uniform_buffer   = 0x8A11;

    constexpr uint32_t static_draw      = 0x88E4;
    constexpr uint32_t dynamic_draw     = 0x88E8;

    constexpr uint32_t triangles        = 0x0004;
    constexpr uint32_t lines            = 0x0001;

    constexpr uint32_t type_float       = 0x1406;
    constexpr uint32_t type_uint        = 0x1405;
}