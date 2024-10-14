#pragma once

namespace engine::core
{
    class Context
    {
    public:
        static constexpr int32_t major_version { 4 };
        static constexpr int32_t minor_version { 6 };

        virtual void create(const std::any& hwnd) = 0;
        virtual void destroy()              const = 0;
        virtual void update()               const = 0;
    };
}