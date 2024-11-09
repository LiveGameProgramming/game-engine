#=======================================================================================================================
target_compile_definitions(module_platform PRIVATE WIN32_LEAN_AND_MEAN VC_EXTRALEAN)
 target_precompile_headers(module_platform PRIVATE headers.hpp)
     target_link_libraries(module_platform PRIVATE user32 gdi32)
            target_sources(module_platform PRIVATE window.cpp window_events.cpp context.cpp context_functions.cpp
                           factory.cpp)
#=======================================================================================================================