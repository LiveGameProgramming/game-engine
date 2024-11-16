#pragma once

namespace engine::core::context
{
    struct config
    {
        static constexpr int32_t default_major_version { 4 };
        static constexpr int32_t default_minor_version { 6 };

        int32_t major_version { default_major_version };
        int32_t minor_version { default_minor_version };

        int32_t samples { };
    };
}