cmake_minimum_required(VERSION 3.16)
project(T-BAG)

# Find required Qt packages
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(${PROJECT_NAME} main.cpp)
