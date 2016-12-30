set(SHARED_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)

set(SHARED_LIB_INCLUDE_DIR ${SHARED_LIB_INCLUDE_DIR} PARENT_SCOPE)

if(TARGET foo)  # Guard for multiple targets

    message("foo is already defined")

else()

    include_directories(${SHARED_LIB_INCLUDE_DIR})

    set(LIB_SRCS ./src/Foo.cpp)

    add_library(foo STATIC ${LIB_SRCS})

endif()

