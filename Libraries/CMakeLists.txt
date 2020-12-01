cmake_minimum_required(VERSION 3.5)
# set the project name
project(Libraries)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CPP_SOURCE ListNode.cpp ListTree.cpp TreeNode.cpp VectorOperations.cpp Misc.cpp HashTables.cpp Common.cpp)
set(HEADERS ListNode.h ListTree.h TreeNode.h VectorOperations.h Misc.h HashTables.h Common.h)

add_library(ListNode ${CPP_SOURCE})
add_library(ListTree ${CPP_SOURCE})
add_library(TreeNode ${CPP_SOURCE})
add_library(VectorOperations ${CPP_SOURCE})
add_library(Misc ${CPP_SOURCE})
add_library(HashTables ${CPP_SOURCE})
add_library(Common ${CPP_SOURCE})
