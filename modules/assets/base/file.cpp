#include "file.hpp"

namespace engine::base
{
    std::vector<char> File::read(const std::string& path, const int32_t mode)
    {
        std::ifstream stream(path, std::ios::ate | mode);
        assert(stream.is_open());

        const auto size = stream.tellg();
        assert(size > 0);

        std::vector<char> content(size);

        stream.seekg(0, std::ios::beg);
        stream.read(content.data(), size);

        return content;
    }
}