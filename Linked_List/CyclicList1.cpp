/*

Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.
Follow up:
Can you solve it using O(1) (i.e. constant) memory?

Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

Example 3:
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.

Constraints:
The number of the nodes in the list is in the range [0, 10^4].
-10^5 <= Node.val <= 10^5
pos is -1 or a valid index in the linked-list.

*/

#include <iostream>
#include <sstream>
#include "ListNode.h"

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

int main(int argc, char const *argv[])
{
  ListNode *number1 = new ListNode();
  ListNode *number1head = number1;
  ListNode *number1loop= number1;
  int input,n1LoopNode,len=0;
  std::string line;
  std::cout << "Enter a vector of numbers. if there are invalid numbers they will be discarded. " << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input && len < 10^4)
  {
    if(input <=10^5 && input>=-10^5)
    {
      insert(&number1, input);
      len++;
    }
  }
  std::cout << "Enter a Node that the last node points to to loop ( 0 indexed) enter -1 for no loops." << '\n';
  std::cin >> n1LoopNode;
  if(n1LoopNode !=-1)
  {
    number1loop = number1loop->next;
    for ( int i=0;i<n1LoopNode;i++)
    {
      number1loop = number1loop->next;
    }
    number1->next = number1loop;
  }
  bool answer = hasCycle(number1head->next);
  std::cout << "the loop has a loop : " << std::to_string(answer)<< '\n';
  return 0;
}
/* this solution was 8ms */
