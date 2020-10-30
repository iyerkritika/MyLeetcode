#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x=0, ListNode *next= NULL) : val(x), next(next) {}
};

void insert(ListNode** root, int item)
{
    ListNode* temp = new ListNode;
    ListNode* ptr;
    temp->val = item;
    temp->next = NULL;

    if (*root == NULL)
        *root = temp;
    else
    {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

void display(ListNode* root)
{
while (root != NULL)
  {
    std::cout << root->val << " ";
    root = root->next;
  }
}
