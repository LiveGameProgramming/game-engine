#pragma once

namespace engine::core
{
    class File
    {
    public:
        static std::vector<char> read(const std::string& path, int32_t mode = 0);
    };
}