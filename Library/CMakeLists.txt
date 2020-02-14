add_library( Library
    Function.cpp
)

target_include_directories( Library
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)

install(
    TARGETS Library 
    DESTINATION lib
    )

install(
    FILES Library.h Function.h 
    DESTINATION include
    )