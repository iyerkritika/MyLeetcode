#include "TreeNode.h"
#include <sstream>
#include <iostream>
#include <vector>

std::vector<int> preorderTraversal(TreeNode* root)
{
  if(root == NULL)
          return {};
      TreeNode *Node;
      std::vector<int> traverse ={root->val};
      std::vector<TreeNode*> right;
     if(root->right != NULL)
        right.push_back(root->right);
      std::vector<TreeNode*> left;
      if(root->left != NULL)
        left.push_back(root->left);
      while(right.size() || left.size())
      {
          if(left.size())
          {
              Node = left.front();
              left.erase(left.begin());

          }
         else if(right.size())
          {
              Node = right.front();
              right.erase(right.begin());
          }

          traverse.push_back(Node->val);
          if(Node->right !=NULL)
              right.insert(right.begin(),Node->right);
          if(Node->left!=NULL)
             left.push_back(Node->left);
      }
      return traverse;
}

// input a TreeNode
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers from -100 to 100. If there are invalid numbers they will be discarded please use 101 for null \n";
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=100)
      if(input >=-100 && input<=101)
        numbers.push_back(input);
  TreeNode *root = CreateTree(numbers,101);
  std::cout << "the order of traversal" << '\n';
  numbers=preorderTraversal(root);
  for (int i=0;i<numbers.size();i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* This Solution is 0ms */
