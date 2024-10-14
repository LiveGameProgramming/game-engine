#pragma once

#include "core/factory.hpp"

namespace engine::win32
{
    class Factory final : public core::Factory
    {
    public:
        [[nodiscard]] std::unique_ptr<core::Window>       create_window()  override;
        [[nodiscard]] std::unique_ptr<core::WindowEvents> create_events()  override;
        [[nodiscard]] std::unique_ptr<core::Context>      create_context() override;
    };
}