cmake_minimum_required(VERSION 3.16)
project(T-BAG)

# Explicitly set the Qt path - use your actual Qt installation path
set(CMAKE_PREFIX_PATH "C:/Qt/6.8.2/mingw_64")

# Find required Qt packages
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(${PROJECT_NAME} main.cpp)

# Link Qt libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Core
    Qt6::Widgets
)
