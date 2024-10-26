#pragma once

namespace engine::core
{
    class WindowEvents
    {
    public:
        virtual void update() const = 0;
    };
}