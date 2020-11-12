#include "TreeNode.h"

TreeNode* CreateTree(std::vector<int> nodes,int nullval)
{
  std::vector<TreeNode*> ToVisit;
  TreeNode *head = new TreeNode();
  TreeNode *ptr;
  if(nodes.size()>0)
  {
    head->val = nodes[0];
    ToVisit.push_back(head);
    ptr = head;
  }
  else
  {
    return nullptr;
  }
  for(int i=1;i<nodes.size();i+=2)
  {
    if(nodes[i] != nullval)
    {
      TreeNode *temp = new TreeNode(nodes[i]);
      ToVisit[0]->left = temp;
      ToVisit.push_back(temp);
    }
    if(i+1 != nodes.size())
    {
      if(nodes[i+1] != nullval)
      {
        TreeNode *temp = new TreeNode(nodes[i+1]);
        ToVisit[0]->right = temp;
        ToVisit.push_back(temp);
      }
    }
    ToVisit.erase(ToVisit.begin());
  }
  return ptr;
}

std::vector<int> inorderTraversal(TreeNode* root)
{
  if(root == nullptr)
      return {};
  TreeNode *node = root;
  std::vector<int> traverse;
  std::vector<TreeNode*> toVisit = {node};
  bool added=false;
  while(toVisit.size())
  {
      node = toVisit.back();
      if(node->left!=nullptr && !added )
      {
          toVisit.push_back(node->left);
          added = false;
      }
      else if(node->right!=nullptr)
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
              if(node->right!=nullptr)
              {
                  toVisit.push_back(node->right);
                  added = false;
              }
          }
      }
  }
  return traverse;
}



std::vector<int> preorderTraversal(TreeNode* root)
{
  if(root == nullptr)
          return {};
  TreeNode *Node;
  std::vector<int> traverse ={root->val};
  std::vector<TreeNode*> right;
 if(root->right != nullptr)
    right.push_back(root->right);
  std::vector<TreeNode*> left;
  if(root->left != nullptr)
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
      if(Node->right !=nullptr)
          right.insert(right.begin(),Node->right);
      if(Node->left!=nullptr)
         left.push_back(Node->left);
  }
  return traverse;
  /* This Solution is 0ms */
}

bool BinaryTreeMains(int ProgNumber)
{
  std::vector<int> numbers;
  TreeNode *root;
  switch (ProgNumber)
  {
    case 1:
    {
      numbers = InputVector("Enter a vector of numbers from -100 to 100. If there are invalid numbers they will be discarded please use 101 for nullptr \n",-100,101,100);
      root = CreateTree(numbers,101);
      std::cout << "the order of traversal for pre order traversal" << '\n';
      numbers=preorderTraversal(root);
      break;
      /* This Solution is 0ms */
    }
    case 2:
    {
      numbers = InputVector("Enter a vector of numbers from -100 to 100. If there are invalid numbers they will be discarded please use 101 for nullptr \n",-100,101,100);
      root = CreateTree(numbers,101);
      std::cout << "the order of traversal for inorder traversal is" << '\n';
      numbers=inorderTraversal(root);
      break;
      /* This Solution is 0ms */
    }
    default:
      return false;
  }
  displayVector(numbers);
  return true;
}
