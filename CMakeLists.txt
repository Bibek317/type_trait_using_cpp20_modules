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
        modules/transformations/add_pointer.cpp
        modules/transformations/add_lvalue_refrence.cpp
        modules/transformations/add_rvalue_refrence.cpp
        modules/transformations/add_cv.cpp
        modules/transformations/add_cvref.cpp
        
        
        

        modules/meta.cppm
)

# Application / test executable
add_executable(app
    main.cpp
)

target_compile_options( app PRIVATE 
	-w
    #-D__ANDROID_API__=30
)

# Allow app to use meta modules
target_link_libraries(app
    PRIVATE meta
)

# Enable CTest
enable_testing()

# Register the executable as a test
add_test(
    NAME meta_traits_test
    COMMAND app
)