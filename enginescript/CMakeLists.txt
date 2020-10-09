file(GLOB ENGINESCRIPT_SRC "*.cpp" "*.hpp")
file(GLOB ENGINESCRIPT_HEADERS "*.hpp")

# enginescript only depends on enginebase api
if(WIN32)
    add_library(enginescript STATIC ${ENGINESCRIPT_SRC})
    target_link_libraries(enginescript enginebase)
 else(WIN32)
    add_library(enginescript STATIC ${ENGINESCRIPT_SRC})
    target_link_libraries(enginescript enginebase)
endif(WIN32)