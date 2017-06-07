
include_directories(${PROJECT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

message("link dir: " ${PROJECT_BINARY_DIR}/lib)

set(SRC_LIST main.cpp) 

link_directories(${PROJECT_BINARY_DIR}/lib)

#set(LINK_LIB libadd.a)
set(LINK_LIB add1 add2)

add_executable(main ${SRC_LIST})
target_link_libraries(main ${LINK_LIB})
