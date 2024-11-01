#pragma once

namespace engine
{
    class File
    {
    public:
        static std::vector<char> read(const std::string& path, int32_t mode = 0);
    };
}