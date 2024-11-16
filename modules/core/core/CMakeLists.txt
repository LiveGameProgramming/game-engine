target_sources(core PUBLIC time.cpp file.cpp)
target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_precompile_headers(core PUBLIC headers.hpp)