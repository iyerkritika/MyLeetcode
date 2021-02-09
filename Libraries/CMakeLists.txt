cmake_minimum_required(VERSION 3.5)
# set the project name
project(Libraries)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(LINKEDLIST ListNode.cpp ListTree.cpp RandomListNode.cpp Common.cpp)
set(TREENODE TreeNode.cpp Common.cpp)
set(HASHTABLE VectorOperations.cpp HashTables.cpp Common.cpp)
set(VECTOR VectorOperations.cpp Common.cpp)
set(MISC Misc.cpp Common.cpp)
set(HEADERS ListNode.h ListTree.h TreeNode.h VectorOperations.h Misc.h HashTables.h Common.h RandomListNode.h)

add_library(ListNode ${LINKEDLIST})
add_library(TreeNode ${TREENODE})
add_library(VectorOperations ${VECTOR})
add_library(Misc ${MISC})
add_library(HashTables ${HASHTABLE})
add_library(Common Common.cpp)
