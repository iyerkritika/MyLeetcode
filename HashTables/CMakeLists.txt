cmake_minimum_required(VERSION 3.5)
# set the project name
project(HashTable)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(ContainsDuplicate ContainsDuplicate.cpp)
add_executable(FirstUniqueChar FirstUniqueChar.cpp)
add_executable(HappyNumber HappyNumber.cpp)
add_executable(HashSet HashSet.cpp)
add_executable(HashMap HashMap.cpp)
add_executable(IntersectionOfArrays IntersectionOfArrays.cpp)
add_executable(SingleNumber SingleNumber.cpp)
add_executable(TwoSum TwoSum.cpp)
