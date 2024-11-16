#pragma once

namespace opengl
{
    class Object
    {
    public:
        virtual void create()  = 0;
        virtual void destroy() = 0;

        [[nodiscard, maybe_unused]] uint32_t handle() const;

    protected:
        uint32_t handle_ { };
    };
}