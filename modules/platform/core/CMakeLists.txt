target_sources(platform PUBLIC platform.cpp window_manager.cpp window_callbacks.cpp)
target_precompile_headers(platform PUBLIC headers.hpp)

add_subdirectory(window)