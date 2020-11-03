cmake_minimum_required(VERSION 3.5)
# set the project name
project(Medium)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set(HEADERS ../Linked_List/ListNode.h)


# add the executable
add_executable(CheckVersionNumber CheckVersionNumber.cpp)
add_executable(ProductExceptSelf ProductExceptSelf.cpp)
add_executable(InsertionSortList InsertionSortList.cpp)
add_executable(SinglyLinkedList SinglyLinkedList.cpp)

target_include_directories(InsertionSortList PUBLIC ../Linked_List)
target_link_libraries(InsertionSortList ListNode)
