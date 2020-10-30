cmake_minimum_required(VERSION 3.5)
# set the project name
project(Medium)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(CheckVersionNumber CheckVersionNumber.cpp)
add_executable(ProductExceptSelf ProductExceptSelf.cpp)
