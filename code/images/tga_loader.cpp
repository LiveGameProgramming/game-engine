#include "tga_loader.hpp"
#include "tga_header.hpp"

namespace engine::images
{
    image TgaLoader::load(const std::string& path)
    {
        tga_header header { };

        std::ifstream file(path, std::ios::binary);
        assert(file.is_open());

        file.read(reinterpret_cast<char*>(&header), sizeof(tga_header));
        assert(file.gcount() == sizeof(tga_header));

        const auto channels = header.bits_per_pixel / 8;
        const auto size     = header.width * header.height * channels;

        std::vector<char> content(size);
        file.read(content.data(), size);
        assert(file.gcount()  ==  size);

        return { header.width, header.height, content };
    }
}