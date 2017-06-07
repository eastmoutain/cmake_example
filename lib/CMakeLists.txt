
include_directories(${PROJECT_SOUREC_DIR}/lib)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set(ADD_LIB_SRC add1.cpp
                add2.cpp)


add_library(add_a add1.cpp)
add_library(add_so SHARED  add2.cpp)


set_target_properties(add_a PROPERTIES OUTPUT_NAME "add1")
set_target_properties(add_so PROPERTIES OUTPUT_NAME "add2")

#set_target_properties(add_so PROPERTIES OUTPUT_NAME "add")
