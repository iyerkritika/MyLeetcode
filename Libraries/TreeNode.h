#ifndef TreeNode_H
#define TreeNode_H

#include "Common.h"

struct TreeNode
{
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x=0, TreeNode *left = nullptr, TreeNode *right = nullptr) : val(x), left(left), right(right) {}
};

TreeNode* CreateTree(std::vector<int> nodes,int nullval,int maxNodes=100);
std::vector<int> inorderTraversal(TreeNode* root);
std::vector<int> preorderTraversal(TreeNode* root);
std::vector<std::vector<int>> levelOrder(TreeNode* root);
int maxDepth(TreeNode* root);
bool hasPathSum(TreeNode* root, int sum);
bool BinaryTreeMains(int ProgNumber);
 #endif
