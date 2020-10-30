/*

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Notice that you should not modify the linked list.
Follow up:
Can you solve it using O(1) (i.e. constant) memory?

Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.

Example 2:
Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.

Example 3:
Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.

Constraints:
The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.

*/

#include <iostream>
#include <sstream>
#include "ListNode.h"

ListNode *detectCycle(ListNode *head)
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
  ListNode *answer = detectCycle(number1head->next);
  std::cout << "the tail connects at value : " << answer->val << '\n';
  return 0;
}
/* this solution was 8ms */
