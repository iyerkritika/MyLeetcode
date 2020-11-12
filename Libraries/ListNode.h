#ifndef ListNode_H
#define ListNode_H
//Definition for singly-linked list.
#include <iostream>
#include <sstream>
#include <string>
#include <bits/stdc++.h>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x, ListNode *next= nullptr) : val(x), next(next) {}
    ListNode() : val(0), next(nullptr) {}
};

void insert(ListNode** root, int item);
void display(ListNode* root);
ListNode* InputList(std::string inputMsg, int min = INT_MIN,int max = INT_MAX,int len = INT_MAX);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
ListNode *detectCycle(ListNode *head);
bool hasCycle(ListNode *head);
int get_length(ListNode* a);
ListNode* getIntersectionNode(ListNode *headA, ListNode *headB);
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
ListNode* removeNthFromEnd(ListNode* head, int n);
bool ListNodeMains(int ProgNumber);
#endif
