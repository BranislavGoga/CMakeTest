add_library( Library
    Function.cpp
)

target_include_directories( Library
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)