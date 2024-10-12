#pragma once

#include "factory.hpp"

namespace engine::core
{
    class WindowFactory
    {
    public:
        static std::unique_ptr<Factory> create();
    };
}