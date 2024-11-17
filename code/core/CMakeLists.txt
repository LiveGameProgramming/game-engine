#=======================================================================================================================
target_include_directories(engine PUBLIC ..)
     target_link_libraries(engine PUBLIC core graphics platform resources)
            target_sources(engine PUBLIC mesh.cpp)
#=======================================================================================================================