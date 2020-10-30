/*

Write a program to find the node at which the intersection of two singly linked lists begins.
For example, the following two linked lists:
begin to intersect at node c1.

Example 1:
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Reference of the node with value = 8
Input Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.

Example 2:
Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Reference of the node with value = 2
Input Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.

Example 3:
Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
Output: null
Input Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
Explanation: The two lists do not intersect, so return null.

Notes:
If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Each value on each linked list is in the range [1, 10^9].
Your code should preferably run in O(n) time and use only O(1) memory.

*/
#include <iostream>
#include <sstream>
#include <string>
#include "ListNode.h"

int get_length(ListNode* a)
{
    int len=0;
    for(;a!=NULL;a=a->next)
        len++;
    return len;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
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

int main(int argc, char const *argv[])
{
  ListNode *number1 = new ListNode();
  ListNode *number2 = new ListNode();
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers. If there are invalid numbers they will be discarded. " << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input)
    if(input <=10^9 && input>=1)
        insert(&number1, input);
  std::cout << "Enter a vector of numbers. If there are invalid numbers they will be discarded. " << '\n';
  std::getline(std::cin, line);
  std::istringstream stream2(line);
  while (stream2 >> input)
    if(input <=10^9 && input>=1)
        insert(&number2, input);
  ListNode *answer = getIntersectionNode(number1, number2);
  std::string result = answer == NULL?"NULL": std::to_string(answer->val);
  std::cout << "the value of the intesecting mode is "<< result << '\n';
}

/* this solution was 40ms */
