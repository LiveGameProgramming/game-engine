#pragma once

#include "base/factory.hpp"

namespace engine
{
    class WindowManager
    {
    public:
        void create(const window::config& window_config, const context::config& context_config);
        void destroy()    const;
        void update()     const;

        void open()       const;
        void close()      const;

        [[nodiscard]] bool is_active()  const;

        [[nodiscard]] int32_t  width()  const;
        [[nodiscard]] int32_t height()  const;

        static WindowManager& instance();

        #pragma region Callbacks

        void resize(const window::size& size) const;

        #pragma endregion

    private:
        std::unique_ptr<base::Window>       window  { };
        std::unique_ptr<base::WindowEvents> events  { };
        std::unique_ptr<base::Context>      context { };

        WindowManager() = default;
    };
}