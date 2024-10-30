#pragma once

#include "base/context_functions.hpp"

namespace engine::win32
{
    class ContextFunctions final : public base::ContextFunctions
    {
    public:
        void init() override;
    };
}