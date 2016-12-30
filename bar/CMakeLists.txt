set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(./../foo foo)

include_directories(${SHARED_LIB_INCLUDE_DIR})

set(SRCS main.cpp)
add_executable(bar ${SRCS})

target_link_libraries(bar foo)
