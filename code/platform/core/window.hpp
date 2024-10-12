#pragma once

namespace engine::core
{
    class Window
    {
    public:
        virtual void create()        = 0;
        virtual void destroy() const = 0;
        virtual void display() const = 0;

        Window* title(const std::string& title)
        {
            _title = title; return this;
        }

    protected:
        std::string _title;
    };
}