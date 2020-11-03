/*

Given the root of a binary tree, return the inorder traversal of its nodes' values.

Example 1:
Input: root = [1,null,2,3]
Output: [1,3,2]

Example 2:
Input: root = []
Output: []

Example 3:
Input: root = [1]
Output: [1]

Example 4:
Input: root = [1,2]
Output: [2,1]

Example 5:
Input: root = [1,null,2]
Output: [1,2]

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100

Follow up:
Recursive solution is trivial, could you do it iteratively?

*/

#include "TreeNode.h"
#include <sstream>
#include <iostream>
#include <vector>

vector<int> inorderTraversal(TreeNode* root)
{
    if(root == NULL)
        return {};
    TreeNode *node = root;
    vector<int> traverse;
    vector<TreeNode*> toVisit = {node};
    bool added=false;
    while(toVisit.size())
    {
        node = toVisit.back();
        if(node->left!=NULL && !added )
        {
            toVisit.push_back(node->left);
            added = false;
        }
        else if(node->right!=NULL)
        {
            traverse.push_back(node->val);
            node = toVisit.back();
            toVisit.pop_back();
            toVisit.push_back(node->right);
            added = false;
        }
        else
        {
            traverse.push_back(node->val);
            toVisit.pop_back();
            if(toVisit.size())
            {
                node = toVisit.back();
                traverse.push_back(node->val);
                toVisit.pop_back();
                added = true;
                if(node->right!=NULL)
                {
                    toVisit.push_back(node->right);
                    added = false;
                }
            }
        }
    }
    return traverse;
}

/* This Solution is 0ms */
