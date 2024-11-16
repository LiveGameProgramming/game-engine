#include "tga.hpp"
#include "tga_header.hpp"

namespace image
{
    base::image Tga::load(const std::string& path)
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

        #pragma region Swap R and B

        for (auto i = 0; i < size; i+= channels)
        {
            std::swap(content[i], content[i + 2]);
        }

        #pragma endregion

        return { header.width, header.height, content };
    }
}