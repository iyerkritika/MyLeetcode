cmake_minimum_required(VERSION 3.5)
# set the project name
project(Modules)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(RunModules callsToMains.cpp)
add_executable(SinglyLinkedList SinglyLinkedList.cpp)
# add_executable(HashMap HashMap.cpp)
# add_executable(HashSet HashSet.cpp)


target_include_directories(RunModules PUBLIC ../Libraries)
target_link_libraries(RunModules TreeNode ListNode ListTree VectorOperations Misc HashTables)
