#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#include "ListNode.h"

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
  std::cout << '\n';
}

ListNode* InputList(std::string inputMsg, int min = INT_MIN,int max = INT_MAX,int len = INT_MAX)
{
  ListNode *head = new ListNode();
  int input,length;
  std::string line;
  std::cout<< inputMsg;
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input && length<len)
  {
    if(input <=max && input>=min)
    {
      insert(&head, input);
      length ++;
    }
  }
  return head->next;
}

// Add two numbers

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
  int carry=0;
  ListNode* ptr= new ListNode(0);
  ListNode* start=ptr;
  while(l1!=NULL || l2!=NULL)
  {
      if(l1==NULL)
      {
          ptr->next = new ListNode((l2->val+carry)%10);
          carry=(l2->val+carry)/10;
          l2=l2->next;
          ptr=ptr->next;
      }
      else if(l2==NULL)
      {
          ptr->next = new ListNode((l1->val+carry)%10);
          carry=(l1->val+carry)/10;
          l1=l1->next;
          ptr=ptr->next;
      }
      else
      {
          ptr->next = new ListNode((l1->val+l2->val+carry)%10);
          carry=(l1->val+l2->val+carry)/10;
          l1=l1->next;
          l2=l2->next;
          ptr=ptr->next;
      }
  }
  if (carry>0)
  {
      ptr->next = new ListNode(carry);
      ptr=ptr->next;
  }
  return start->next;
}

ListNode* detectCycle(ListNode *head)
{
    if(head == NULL || head->next == NULL)
    return NULL;
    ListNode *slow = head,*fast=head;
    while(fast !=NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            break;
        }
    }
    if(slow != fast)
        return NULL;
    fast = head;
    while(slow!=fast)
    {
        fast= fast->next;
        slow= slow->next;
    }
    return slow;
}

bool hasCycle(ListNode *head)
{
    if(head == NULL || head->next == NULL)
        return false;
    ListNode *slow = head,*fast=head;
    while(fast !=NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}

int get_length(ListNode* a)
{
    int len=0;
    while (a!=NULL)
    {
      a = a->next;
      len++;
    }
    return len;
}

ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if(headA==NULL || headB==NULL)
        return NULL;
    int lenA=get_length(headA);
    int lenB=get_length(headB);
    if(lenA>lenB)
    {
        for(int i=0;i<lenA-lenB;i++)
            headA=headA->next;
    }

    else if(lenB>lenA)
    {
        for(int i=0;i<lenB-lenA;i++)
            headB=headB->next;
    }
     while(headA!=headB)
     {
        headA=headA->next;
        headB=headB->next;
         if(headA==NULL && headB== NULL)
             return NULL;
     }
    return headA;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode *ListPtr = new ListNode(0);
    ListNode *Head = ListPtr;
    while(l1 != NULL && l2 !=NULL)
    {
        if(l1->val<=l2->val)
        {
            ListPtr->next = new ListNode(l1->val);
            ListPtr = ListPtr->next;
            l1 = l1->next;
        }
        else
        {
            ListPtr->next = new ListNode(l2->val);
            ListPtr = ListPtr->next;
            l2 = l2->next;
        }
    }
    while(l1!=NULL)
    {
        ListPtr->next = new ListNode(l1->val);
        ListPtr = ListPtr->next;
        l1 = l1->next;
    }
    while(l2!=NULL)
    {
        ListPtr->next = new ListNode(l2->val);
        ListPtr = ListPtr->next;
        l2 = l2->next;
    }
    return Head->next;
}

ListNode* removeNthFromEnd(ListNode* head, int n)
{
    if(head == NULL || head->next == NULL)
        return NULL;
    ListNode *beg = head, *end = head;
    while(end!=NULL)
    {
        if(n>0)
        {
            n--;
            end = end->next;
        }
        else
        {
            if(end->next == NULL)
            {
                beg->next = beg->next->next;
                break;
            }
            else
            {
                beg = beg->next;
                end = end->next;
            }
        }
    }
    if(end == NULL && beg == head)
    {
        return head->next;
    }
    return head;
}

void MainAddTwoNumbers()
{
  ListNode *number1 = InputList("Enter a vector of numbers between 0 and 9 that together form an integer in reverse order without leading Zeroes. for Ex : 807 will be entered as 7 0 8. if there are invalid numbers they will be discarded \n",0,9,100);
  ListNode *number2 = InputList("Enter another vector of numbers between 0 and 9 that together form an integer in reverse order without leading Zeroes. for Ex : 807 will be entered as 7 0 8. if there are invalid numbers they will be discarded \n",0,9,100);
  std::cout << "after Adding the value is " << '\n';
  display(addTwoNumbers(number1,number2));
  /* this solution was 20ms */
}

void getCyclicList(bool returnBool)
{
  int input,n1LoopNode,len=0;
  ListNode *number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n",-10^5,10^5,10^4);
  ListNode *number1loop= number1;
  std::cout << "Enter a Node that the last node points to to loop ( 0 indexed) enter -1 for no loops." << '\n';
  std::cin >> n1LoopNode;
  if(n1LoopNode !=-1)
  {
    for ( int i=0;i<n1LoopNode;i++)
    {
      number1loop = number1loop->next;
    }
    ListNode *number1end = number1;
    while(number1end -> !=NULL)
      number1end = number1end->next;
    number1end->next = number1loop;
  }
  if(returnBool)
  {
    bool answer = hasCycle(number1);
    std::cout << "the list has a loop : " << std::to_string(answer)<< '\n';
    /* this solution was 8ms */
  }
  else
  {
    ListNode *answer = detectCycle(number1);
    std::cout << "the tail connects at value : " << answer->val << '\n';
    /* this solution was 8ms */
  }
}

void intersectionNodesMain()
{
  ListNode *number1 = InputList("Enter a vector of numbers. If there are invalid numbers they will be discarded. \n",1,10^9);
  ListNode *number2 = InputList("Enter another vector of numbers. If there are invalid numbers they will be discarded. \n",1,10^9);
  ListNode *answer = getIntersectionNode(number1, number2);
  std::string result = answer == NULL?"NULL": std::to_string(answer->val);
  std::cout << "the value of the intesecting mode is "<< result << '\n';
  /* this solution was 40ms */
}

void mergeSortMain()
{
  ListNode *number1 = InputList("Enter a list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded. \n",-100,100,50);
  ListNode *number2 = InputList("Enter another list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded. \n",-100,100,50);
  std::cout << "after Merging both the value is " << '\n';
  display(mergeTwoLists(number1->next,number2->next));
  /* this solution was 0ms */
}

void removeNthMain()
{
  int input;
  ListNode *number1 = InputList("Enter a list of numbers between 0 and 100. If there are invalid numbers they will be discarded. \n",0,100,30);
  std::cout << "Enter the index from the end you want to delete between 1 and the total number of elements" << '\n';
  std::cin >> input;
  std::cout << "the list after deleting is: \n";
  display(removeNthFromEnd(number1,input));
}
