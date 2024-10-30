#include "platform_factory.hpp"

#include "win32/factory.hpp"

namespace engine::base
{
    std::unique_ptr<Factory> PlatformFactory::create()
    {
        #ifdef _WINDOWS
        return std::make_unique<win32::Factory>();
        #endif
    }
}