cmake_minimum_required(VERSION 3.10)
# set the project name
project(Arrays101 VERSION1.0)

# specify the C++ standard
set(CMAKE_CPP_STANDARD 11)
set(CMAKE_CPP_STANDARD_REQUIRED True)

# add the executable
add_executable(MaxConsecutiveOnes MaxConsecutiveOnes.cpp)
