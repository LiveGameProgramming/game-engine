#pragma once

#include "column.hpp"

namespace engine::math
{
    struct mat4
    {
        void identity();

        operator const float*() const;

    private:
        column columns[4] { };
    };
}