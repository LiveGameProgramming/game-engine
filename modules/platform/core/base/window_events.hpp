#pragma once

namespace engine::core::base
{
    class WindowEvents
    {
    public:
        virtual void update() const = 0;
    };
}