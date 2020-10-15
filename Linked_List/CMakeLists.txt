cmake_minimum_required(VERSION 3.5)
# set the project name
project(Linked_List)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(SinglyLinkedList SinglyLinkedList.cpp)
add_executable(IntersectionLinkedList IntersectionLinkedList.cpp)
add_executable(AddTwoNumbers AddTwoNumbers.cpp)
