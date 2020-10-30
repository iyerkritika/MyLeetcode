/*

Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

Example 1:
Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: l1 = [], l2 = []
Output: []

Example 3:
Input: l1 = [], l2 = [0]
Output: [0]

Constraints:
The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both l1 and l2 are sorted in non-decreasing order.

*/

#include <iostream>
#include <sstream>
#include "ListNode.h"

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

int main(int argc, char const *argv[])
{
  ListNode *number1 = new ListNode();
  ListNode *number2 = new ListNode();
  int input,len=0;
  std::string line;
  std::cout << "Enter a list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded. " << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input && len <=50)
    {
      if(input <=100 && input>=-100)
      {
        insert(&number1, input);
        len++;
      }
    }
  std::cout << "Enter a list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded." << '\n';
  len = 0;
  std::getline(std::cin, line);
  std::istringstream stream2(line);
  while (stream2 >> input && len <=50)
  {
    if(input <=100 && input>=-100)
    {
      insert(&number2, input);
      len++;
    }
  }
  ListNode* answerHead = mergeTwoLists(number1->next,number2->next);
  std::cout << "after Merging both the value is " << '\n';
  display(answerHead);
  std::cout << '\n';
  return 0;
}
/* this solution was 0ms */
