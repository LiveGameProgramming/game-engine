#pragma once

#include "base/factory.hpp"

#include "window_events.hpp"

namespace engine
{
    class WindowManager final : public WindowEvents
    {
    public:
        void create(const window::config& window_config, const context::config& context_config);
        void destroy()    const;
        void update()     const;

        void open()       const;
        void close()      const;

        void resize(const window::size& size) const;

        [[nodiscard]] bool is_active() const;

        [[nodiscard]] int32_t  width() const;
        [[nodiscard]] int32_t height() const;
        [[nodiscard]] float    ratio() const;

        static WindowManager& instance();

    private:
        std::unique_ptr<base::Window>       window  { };
        std::unique_ptr<base::WindowEvents> events  { };
        std::unique_ptr<base::Context>      context { };

        WindowManager() = default;
    };
}