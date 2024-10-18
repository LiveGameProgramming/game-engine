#pragma once

namespace engine::core
{
    template <typename Manager> class Singleton
    {
    public:
        static Manager& instance()
        {
            static Manager instance; return instance;
        }

        Singleton& operator=(const Singleton&) = delete;
        Singleton           (const Singleton&) = delete;

    protected:
        Singleton() = default;
    };
}