#pragma once

namespace engine::window
{
    struct size
    {
        size& operator=(const size& other);

        int32_t width  { default_width  };
        int32_t height { default_height };
        float   ratio  { };

    private:
        static constexpr int32_t default_width  { 1024 };
        static constexpr int32_t default_height {  768 };
    };
}