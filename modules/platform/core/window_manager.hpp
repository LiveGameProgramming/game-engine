#pragma once

#include "core/factory.hpp"

namespace engine::core
{
    class WindowManager
    {
    public:
        void create(const window::config& window_config, const context::config& context_config);
        void destroy()    const;
        void update()     const;

        void display()    const;
        void close()      const;

        [[nodiscard]] bool is_active()  const;

        [[nodiscard]] int32_t  width()  const;
        [[nodiscard]] int32_t height()  const;

        static WindowManager& instance();

    private:
        std::unique_ptr<Window>       window  { };
        std::unique_ptr<WindowEvents> events  { };
        std::unique_ptr<Context>      context { };

        WindowManager() = default;
    };
}