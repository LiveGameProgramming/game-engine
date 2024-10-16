#pragma once

namespace engine::core
{
    template <typename T> class Singleton
    {
    public:
        static T& instance()
        {
            static T instance; return instance;
        }

        Singleton& operator=(const Singleton&) = delete;
        Singleton           (const Singleton&) = delete;

    protected:
        Singleton() = default;
    };
}