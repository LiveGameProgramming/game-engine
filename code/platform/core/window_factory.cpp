#include "window_factory.hpp"

namespace engine::core
{
    std::unique_ptr<Factory> WindowFactory::create()
    {
        #ifdef _WIN32
        return std::make_unique<win32::Factory>();
        #endif
    }
}