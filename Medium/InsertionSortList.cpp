/*

Sort a linked list using insertion sort.
A graphical example of insertion sort. The partial sorted list (black) initially contains only the first element in the list.
With each iteration one element (red) is removed from the input data and inserted in-place into the sorted list

Algorithm of Insertion Sort:

Insertion sort iterates, consuming one input element each repetition, and growing a sorted output list.
At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there.
It repeats until no input elements remain.

Example 1:
Input: 4->2->1->3
Output: 1->2->3->4

Example 2:
Input: -1->5->3->4->0
Output: -1->0->3->4->5

*/

#include <iostream>
#include <sstream>
#include "ListNode.h"

ListNode* insertionSortList(ListNode* head)
{
    ListNode *newHead = head;
    ListNode *ptr = newHead;
    while(head!=NULL)
    {
        if(ptr->val>head->val)
        {
            if(head->val<newHead->val)
            {
                ptr->next = head->next;
                head->next = newHead;
                newHead = head;
                head = ptr->next;
            }
            else
            {
               ListNode *tempPtr = newHead;
                while(tempPtr->next->val<head->val)
                {
                    tempPtr = tempPtr->next;
                }
                ptr->next = head->next;
                head->next = tempPtr->next;
                tempPtr->next = head;
                head = ptr->next;
            }
        }
        else
        {
            ptr = head;
            head= head->next;
        }
    }
    return newHead;
}

int main(int argc, char const *argv[])
{
  ListNode *number1 = new ListNode();
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers. if there are invalid numbers they will be discarded. \n";
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input)
    if(input <=10^5 && input>=-10^5)
      insert(&number1, input);
  std::cout << "the loop has a loop : \n";
  display(insertionSortList(number1->next));
  return 0;
}

/* this solution was 12ms */
