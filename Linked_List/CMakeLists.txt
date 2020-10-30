cmake_minimum_required(VERSION 3.5)
# set the project name
project(Linked_List)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CPP_SOURCE ListNode.cpp)
set(HEADERS ListNode.h)

add_library(ListNode  ${CPP_SOURCE} )

# target_include_directories(ListNode PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>" "$<INSTALL_INTERFACE:include>")


# add the executable
add_executable(SinglyLinkedList SinglyLinkedList.cpp)
add_executable(IntersectionLinkedList IntersectionLinkedList.cpp)
add_executable(AddTwoNumbers AddTwoNumbers.cpp)
add_executable(CyclicList1 CyclicList1.cpp)
add_executable(CyclicList2 CyclicList2.cpp)
add_executable(mergeSort mergeSort.cpp)
add_executable(RemoveNthElement RemoveNthElement.cpp)
add_executable(flatten FlattenTree.cpp)

target_link_libraries(IntersectionLinkedList ListNode)
target_link_libraries(AddTwoNumbers ListNode)
target_link_libraries(CyclicList1 ListNode)
target_link_libraries(CyclicList2 ListNode)
target_link_libraries(mergeSort ListNode)
target_link_libraries(RemoveNthElement ListNode)
