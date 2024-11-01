#include "time.hpp"

namespace engine
{
    void Time::init()
    {
        previous_time = start_time = time_clock::now();
    }

    void Time::update()
    {
        const auto current_time = time_clock::now();

        total_time_   = calculate_duration(start_time,    current_time);
        delta_time_   = calculate_duration(previous_time, current_time);
        previous_time = current_time;
    }

    float Time::total_time()
    {
        return total_time_;
    }

    float Time::delta_time()
    {
        return delta_time_;
    }

    float Time::calculate_duration(const time_point& start, const time_point& end)
    {
        return std::chrono::duration<float>(end - start).count();
    }
}