#include "tga_loader.hpp"
#include "tga_header.hpp"

namespace engine::images
{
    image TgaLoader::load(const std::string& path)
    {
        tga_header header { };

        std::ifstream stream(path, std::ios::binary);
        assert(stream.is_open());

        stream.read(reinterpret_cast<char*>(&header), sizeof(tga_header));
        assert(stream.gcount() == sizeof(tga_header));

        const auto channels = header.bits_per_pixel / 8;
        const auto size     = header.width * header.height * channels;

        std::vector<char> content(size);

        stream.read(content.data(), size);
        assert(stream.gcount()  ==  size);

        return { header.width, header.height, content };
    }
}