#include "platform_factory.hpp"

#ifdef _WINDOWS
#include "win32/factory.hpp"
#endif

namespace engine::core
{
    std::unique_ptr<Factory> PlatformFactory::create()
    {
        #ifdef _WINDOWS
        return std::make_unique<win32::Factory>();
        #endif
    }
}