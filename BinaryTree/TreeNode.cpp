#include <vector>
#include <iostream>

struct TreeNode
{
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x=0, TreeNode *left = nullptr, TreeNode *right = nullptr) : val(x), left(left), right(right) {}
};

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
    return NULL;
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
