#pragma once

namespace engine::base
{
    class WindowEvents
    {
    public:
        virtual void update() const = 0;
    };
}