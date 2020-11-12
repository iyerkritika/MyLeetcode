#ifndef TreeNode_H
#define TreeNode_H

#include "VectorOperations.h"

struct TreeNode
{
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x=0, TreeNode *left = nullptr, TreeNode *right = nullptr) : val(x), left(left), right(right) {}
};

TreeNode* CreateTree(std::vector<int> nodes,int nullval);
std::vector<int> inorderTraversal(TreeNode* root);
std::vector<int> preorderTraversal(TreeNode* root);
bool BinaryTreeMains(int ProgNumber);
 #endif
