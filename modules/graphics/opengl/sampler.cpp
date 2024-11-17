#include "sampler.hpp"

namespace opengl
{
    void Sampler::create()
    {
        glCreateSamplers(1, &handle_);
    }

    void Sampler::destroy()
    {
        glDeleteSamplers(1, &handle_);
    }

    void Sampler::parameter(const uint32_t parameter, const int32_t value) const
    {
        glSamplerParameteri(handle_, parameter, value);
    }

    void Sampler::bind(const uint32_t location) const
    {
        glBindSampler(handle_, location);
    }
}