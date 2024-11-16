#=======================================================================================================================
target_include_directories(core PUBLIC ..)
 target_precompile_headers(core PUBLIC headers.hpp)
            target_sources(core PUBLIC PRIVATE time.cpp file.cpp)
#=======================================================================================================================