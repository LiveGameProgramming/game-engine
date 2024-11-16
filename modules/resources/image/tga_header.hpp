#pragma once

namespace engine::image
{
    #pragma pack(push, 1)

    struct tga_header
    {
        uint8_t   identsize;
        uint8_t    map_type;
        uint8_t  image_type;

        uint16_t map_origin;
        uint16_t map_length;
        uint8_t  map_depth;

        uint16_t x_origin;
        uint16_t y_origin;
        uint16_t width;
        uint16_t height;
        uint8_t  bits_per_pixel;
        uint8_t  descriptor;
    };

    #pragma pack(pop)
}