#ifndef ListNode_H
#define ListNode_H
//Definition for singly-linked list.

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x, ListNode *next= NULL) : val(x), next(next) {}
    ListNode() : val(0), next(NULL) {}
};

void insert(ListNode** root, int item);
void display(ListNode* root);
#endif
