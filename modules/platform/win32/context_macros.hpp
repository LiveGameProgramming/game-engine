#pragma once

namespace win32
{
    #pragma region Pixel

    constexpr uint32_t draw_to_window        = 0x2001;
    constexpr uint32_t support_opengl        = 0x2010;
    constexpr uint32_t double_buffer         = 0x2011;
    constexpr uint32_t acceleration          = 0x2003;
    constexpr uint32_t full_acceleration     = 0x2027;
    constexpr uint32_t pixel_type            = 0x2013;
    constexpr uint32_t type_rgba             = 0x202b;
    constexpr uint32_t color_bits            = 0x2014;
    constexpr uint32_t depth_bits            = 0x2022;
    constexpr uint32_t stencil_bits          = 0x2023;
    constexpr uint32_t samples_buffer        = 0x2041;
    constexpr uint32_t samples_per_pixel     = 0x2042;
    constexpr uint32_t framebuffer_srgb      = 0x20a9;

    #pragma endregion
    #pragma region Context

    constexpr uint32_t context_major_version = 0x2091;
    constexpr uint32_t context_minor_version = 0x2092;
    constexpr uint32_t context_profile       = 0x9126;
    constexpr uint32_t context_flags         = 0x2094;
    constexpr uint32_t context_core_profile  = 0x00000001;
    constexpr uint32_t context_no_error      = 0x00000008;

    #pragma endregion
}