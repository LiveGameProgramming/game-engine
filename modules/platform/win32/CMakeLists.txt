#=======================================================================================================================
target_compile_definitions(platform PRIVATE WIN32_LEAN_AND_MEAN VC_EXTRALEAN)
 target_precompile_headers(platform PRIVATE headers.hpp)
     target_link_libraries(platform PRIVATE user32 gdi32)
            target_sources(platform PRIVATE window.cpp window_events.cpp context.cpp context_functions.cpp factory.cpp)
#=======================================================================================================================