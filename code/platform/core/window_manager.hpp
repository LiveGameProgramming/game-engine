#pragma once

#include "core/factory.hpp"
#include "core/singleton.hpp"
#include "core/window_config.hpp"

namespace engine::core
{
    class WindowManager final : public Singleton<WindowManager>  {
                                                 WindowManager() = default;
    friend class Singleton;
    public:
        void create(const window_config& config);
        void destroy()    const;
        void update()     const;

        void display() const;
        void close()   const;

        [[nodiscard]]  bool is_active() const;

    private:
        std::unique_ptr<Window>       _window;
        std::unique_ptr<WindowEvents> _events;
        std::unique_ptr<Context>      _context;
    };
}