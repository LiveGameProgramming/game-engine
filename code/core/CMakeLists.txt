#=======================================================================================================================
target_include_directories(engine PUBLIC ..)
     target_link_libraries(engine PUBLIC core math graphics)
            target_sources(engine PUBLIC mesh.cpp)
#=======================================================================================================================