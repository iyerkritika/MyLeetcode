#include "TreeNode.h"

TreeNode* CreateTree(std::vector<int> nodes,int nullval,int maxNodes)
{
  int numnodes = 0;
  std::vector<TreeNode*> ToVisit;
  TreeNode *head = new TreeNode();
  TreeNode *ptr;
  if(nodes.size()>0)
  {
    head->val = nodes[0];
    ToVisit.push_back(head);
    ptr = head;
    numnodes++;
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
      numnodes++;
    }
    if(i+1 != nodes.size())
    {
      if(nodes[i+1] != nullval)
      {
        TreeNode *temp = new TreeNode(nodes[i+1]);
        ToVisit[0]->right = temp;
        ToVisit.push_back(temp);
        numnodes++;
      }
    }
    ToVisit.erase(ToVisit.begin());
    if(numnodes> maxNodes)
      break;
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

std::vector<std::vector<int>> levelOrder(TreeNode* root) 
{
  std::vector<std::vector<int>> result;
  if(root == NULL)
    return result;
  int i=0,j=0;
  std::queue<std::tuple<TreeNode*,int>> toVisit;
  toVisit.push(std::make_tuple(root,i));
  TreeNode* current = root;
  std::vector<int> subArr;
  while(toVisit.size()>0)
  {
    current = std::get<0>(toVisit.front());            
    i = std::get<1>(toVisit.front());
    if(i!=j)
    {
      result.push_back(subArr);
      j=i;
      subArr.clear();
    }
    toVisit.pop();
    subArr.push_back(current->val);
    i++;
    if(current->left!=NULL)
      toVisit.push(std::make_tuple(current->left,i));
    if(current->right!=NULL)
      toVisit.push(std::make_tuple(current->right,i));
  }
  if(subArr.size()>0)
  {
    result.push_back(subArr);
  }
  return result;
}

int maxDepth(TreeNode* root) 
{
  if(!(root))
    return 0;
  return(std::max(maxDepth(root->right),maxDepth(root->left))+1);
}

bool hasPathSum(TreeNode* root, int sum) 
{
  if(root == NULL)
    return false;
  if(root->left == NULL && root->right == NULL && root->val == sum)
    return true;
  return hasPathSum(root->left,sum-root->val) || hasPathSum(root->right,sum-root->val);
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
    case 3:
    {
      numbers = InputVector("Enter a vector of numbers from -100 to 100. If there are invalid numbers they will be discarded please use 101 for nullptr \n",-100,101,100);
      root = CreateTree(numbers,101);
      std::cout << "the order of traversal for level traversal is" << '\n';
      displayVectorOfVector(levelOrder(root));
      return true;
      /* This Solution is 0ms */
    }
    case 4:
    {
      numbers = InputVector("Enter a vector of numbers from -100 to 100. If there are invalid numbers they will be discarded please use 101 for nullptr \n",-100,101,100);
      root = CreateTree(numbers,101,104);
      std::cout << "the maximum depth for the tree is" << maxDepth(root) <<'\n';
      return true;
      /* This Solution is 8ms */
    }
    case 5:
    {
      int input;
      numbers = InputVector("Enter a vector of numbers from -100 to 100. If there are invalid numbers they will be discarded please use 101 for nullptr \n",-100,101,100);
      root = CreateTree(numbers,101);
      std::cout<<"Enter the sum you would like to reach. \n";
      getIP(input);
      std::string descision = hasPathSum(root,input)?"does ": "doesn't ";
      std::cout << "the path from root to end leaf" << descision <<" exist. \n";
      return true;
      /* This Solution is 12ms */
    }
    default:
      return false;
  }
  displayVector<int>(numbers);
  return true;
}
