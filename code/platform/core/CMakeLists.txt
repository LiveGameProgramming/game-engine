target_include_directories(${PROJECT_NAME} PRIVATE PUBLIC ..)
target_precompile_headers(${PROJECT_NAME}  PRIVATE private.hpp)
target_link_libraries(${PROJECT_NAME}      PRIVATE engine_core)
target_sources(${PROJECT_NAME}             PRIVATE window_manager.cpp context.cpp platform_factory.cpp)