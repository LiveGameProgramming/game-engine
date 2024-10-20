#pragma once

namespace engine::core
{
    template <typename manager> class Singleton
    {
    public:
        static manager& instance()
        {
            static manager instance; return instance;
        }

        Singleton& operator=(const Singleton&) = delete;
        Singleton           (const Singleton&) = delete;

    protected:
        Singleton() = default;
    };
}