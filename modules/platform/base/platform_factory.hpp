#pragma once

#include "factory.hpp"

namespace engine::base
{
    class PlatformFactory
    {
    public:
        static std::unique_ptr<Factory> create();
    };
}