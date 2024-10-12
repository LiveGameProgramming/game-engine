#pragma once

#include "window_size.hpp"
#include "window_state.hpp"

namespace engine::core
{
    class Window
    {
    public:
        virtual void create()        = 0;
        virtual void destroy() const = 0;
        virtual void display() const = 0;

        Window* size(const  window_size& size)
        {
            _size = size; return this;
        }
        Window* title(const std::string& title)
        {
            _title = title; return this;
        }

    protected:
        window_state _state { };
        window_size  _size  { };

        std::string _title;
    };
}