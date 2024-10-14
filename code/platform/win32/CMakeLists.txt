target_precompile_headers(${PROJECT_NAME} PRIVATE private.hpp)
target_link_libraries(${PROJECT_NAME}     PRIVATE user32)
target_sources(${PROJECT_NAME}            PRIVATE window.cpp window_events.cpp context.cpp factory.cpp)