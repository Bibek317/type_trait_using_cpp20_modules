# Build & run:
# cmake -B build
# cmake --build build
# ./build/app

cmake_minimum_required(VERSION 3.28)

project(
    traits
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create the meta library first
add_library(meta)

# Add C++ modules
target_sources(meta
    PUBLIC
        FILE_SET cxx_modules
        TYPE CXX_MODULES
        FILES

        modules/core/integral_constant.cppm
        modules/core/bool_constant.cppm
        modules/core/type_identity.cppm
        modules/core/type_list.cpp

        modules/comparison/is_same.cppm
        
        modules/categories/is_int.cpp
        modules/categories/is_short.cpp
        modules/categories/is_char.cpp
        modules/categories/is_float.cpp
        modules/categories/is_double.cpp
        modules/categories/is_array.cpp
        modules/categories/is_pointer.cpp
        modules/categories/is_const.cpp
        modules/categories/is_void.cpp
        modules/categories/is_floating_point.cpp
        
        modules/transformations/remove_pointer.cpp
        modules/transformations/remove_all_pointer.cpp
        modules/transformations/remove_const.cpp
        modules/transformations/remove_ref.cpp
        modules/transformations/remove_cv.cpp
        modules/transformations/remove_cvref.cpp
        
        

        modules/meta.cppm
)

# Application / test executable
add_executable(app
    main.cpp
)

# Allow app to use meta modules
target_link_libraries(app
    PRIVATE meta
)