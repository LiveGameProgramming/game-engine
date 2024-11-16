#=======================================================================================================================
add_library(platform)
#=======================================================================================================================
add_subdirectory(window)
add_subdirectory(win32)
#=======================================================================================================================
target_include_directories(platform PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
 target_precompile_headers(platform PUBLIC headers.hpp)
            target_sources(platform PUBLIC platform.cpp window_manager.cpp window_callbacks.cpp)
#=======================================================================================================================