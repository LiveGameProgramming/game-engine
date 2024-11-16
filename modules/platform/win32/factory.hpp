#pragma once

#include "core/base/factory.hpp"

namespace win32
{
    class Factory final : public core::base::Factory
    {
    public:
        [[nodiscard]] std::unique_ptr<core::base::Window>           create_window()    override;
        [[nodiscard]] std::unique_ptr<core::base::WindowEvents>     create_events()    override;
        [[nodiscard]] std::unique_ptr<core::base::Context>          create_context()   override;
        [[nodiscard]] std::unique_ptr<core::base::ContextFunctions> create_functions() override;
    };
}