#pragma once

<<<<<<<< HEAD:modules/core/core/file.hpp
namespace core
========
namespace engine
>>>>>>>> e522874 (Rename and reorganize asset and core module files):modules/resources/file.hpp
{
    class File
    {
    public:
        static std::vector<char> read(const std::string& path, int32_t mode = 0);
    };
}