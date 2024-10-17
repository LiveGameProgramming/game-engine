#pragma once

#include "factory.hpp"

namespace engine::core
{
    class PlatformFactory
    {
    public:
        static std::unique_ptr<Factory> create();
    };
}