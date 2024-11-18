#pragma once

namespace opengl
{
    constexpr uint32_t color_buffer = 0x00004000;
    constexpr uint32_t depth_buffer = 0x00000100;

    constexpr uint32_t triangles    = 0x0004;
    constexpr uint32_t lines        = 0x0001;

    constexpr uint32_t type_float   = 0x1406;
    constexpr uint32_t type_uint    = 0x1405;
    constexpr uint32_t type_ubyte   = 0x1401;

    namespace shader
    {
        constexpr uint32_t binary   = 0x9551;
        constexpr uint32_t vertex   = 0x8B31;
        constexpr uint32_t fragment = 0x8B30;
    }

    namespace buffer
    {
        constexpr uint32_t uniform      = 0x8A11;

        constexpr uint32_t static_draw  = 0x88E4;
        constexpr uint32_t dynamic_draw = 0x88E8; // rename this to dynamic, because 0 is static !!! after glStorage..
    }

    namespace texture
    {
        constexpr uint32_t rgb8       = 0x8051;
        constexpr uint32_t rgb        = 0x1907;

        constexpr uint32_t texture_2d = 0x0DE1;
    }

    namespace sampler
    {
        constexpr uint32_t wrap_s     = 0x2802;
        constexpr uint32_t wrap_t     = 0x2803;
        constexpr uint32_t mag_filter = 0x2800;
        constexpr uint32_t min_filter = 0x2801;

        constexpr uint32_t linear               = 0x2601;
        constexpr uint32_t linear_mipmap_linear = 0x2703;
    }

    namespace pipeline
    {
        constexpr uint32_t srgb           = 0x8DB9;
        constexpr uint32_t multisample    = 0x809D;

        constexpr uint32_t cull_face      = 0x0B44;
        constexpr uint32_t depth_test     = 0x0B71;

        constexpr uint32_t front_and_back = 0x0408;
        constexpr uint32_t lines          = 0x1B01;
        constexpr uint32_t solid          = 0x1B02;
    }
}