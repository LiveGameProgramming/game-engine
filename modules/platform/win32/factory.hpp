#pragma once

#include "base/factory.hpp"

namespace engine::win32
{
    class Factory final : public base::Factory
    {
    public:
        [[nodiscard]] std::unique_ptr<base::Window>       create_window()  override;
        [[nodiscard]] std::unique_ptr<base::WindowEvents> create_events()  override;
        [[nodiscard]] std::unique_ptr<base::Context>      create_context() override;
    };
}