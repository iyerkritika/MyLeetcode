cmake_minimum_required(VERSION 3.5)
# set the project name
project(BinaryTree)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CPP_SOURCE TreeNode.cpp)
set(HEADERS TreeNode.h)

add_library(TreeNode  ${CPP_SOURCE} )

# target_include_directories(TreeNode PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>" "$<INSTALL_INTERFACE:include>")

# add the executable
add_executable(PreOrderTraversal PreOrderTraversal.cpp)

target_link_libraries(PreOrderTraversal TreeNode)
