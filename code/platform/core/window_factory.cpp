#include "window_factory.hpp"

#ifdef _WIN32
#include "win32/factory.hpp"
#endif

namespace engine::core
{
    std::unique_ptr<Factory> WindowFactory::create()
    {
        #ifdef _WIN32
        return std::make_unique<win32::Factory>();
        #endif
    }
}