/*

You are given a doubly linked list which in addition to the next and previous pointers, it could have a child pointer, which may or may not point to a separate doubly linked list. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure, as shown in the example below.

Flatten the list so that all the nodes appear in a single-level, doubly linked list. You are given the head of the first level of the list.

Example 1:
Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
Output: [1,2,3,7,8,11,12,9,10,4,5,6]
Explanation:
The multilevel linked list in the input is as follows:
After flattening the multilevel linked list it becomes:


Example 2:
Input: head = [1,2,null,3]
Output: [1,3,2]
Explanation:
The input multilevel linked list is as follows:

  1---2---NULL
  |
  3---NULL
Example 3:

Input: head = []
Output: []


How multilevel linked list is represented in test case:

We use the multilevel linked list from Example 1 above:

 1---2---3---4---5---6--NULL
         |
         7---8---9---10--NULL
             |
             11--12--NULL
The serialization of each level is as follows:

[1,2,3,4,5,6,null]
[7,8,9,10,null]
[11,12,null]
To serialize all levels together we will add nulls in each level to signify no node connects to the upper node of the previous level. The serialization becomes:

[1,2,3,4,5,6,null]
[null,null,7,8,9,10,null]
[null,11,12,null]
Merging the serialization of each level and removing trailing nulls we obtain:
[1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]

Constraints:
Number of Nodes will not exceed 1000.
1 <= Node.val <= 10^5

*/

#include <iostream>
#include <sstream>

struct ListTree
{
    int val;
    ListTree* prev;
    ListTree* next;
    ListTree* child;
    ListTree(int x=0, ListTree *next= NULL,ListTree *prev = NULL, ListTree *child = NULL) : val(x), next(next), prev(prev), child(child) {}
};

void insert(ListTree** root, int item)
{
    ListTree* temp = new ListTree(item);
    ListTree* ptr;
    if (*root == NULL)
        *root = temp;
    else
    {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        temp->prev = ptr;
        ptr->next = temp;
    }
}

void display(ListTree* root)
{
while (root != NULL)
  {
    std::cout << root->val << " ";
    root = root->next;
  }
}

ListTree* flatten(ListTree* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    ListTree *beg = head;
    while(beg != NULL)
    {
        if(beg->child != NULL)
        {
            ListTree* child = beg->child;
            ListTree* iterChild = child;
            while(iterChild->next != NULL)
            {
                iterChild = iterChild->next;
            }
            iterChild->next = beg->next;
            if(beg->next != NULL)
                beg->next->prev = iterChild;
            beg->next = child;
            child->prev = beg;
            beg->child = NULL;
        }
        beg = beg->next;
    }
    return head;
}

int main(int argc, char const *argv[])
{
  int number,numNode =0,input;
  ListTree *TreeHead = new ListTree();
  std::string line;
  bool started=false;
  while(numNode<=1000)
  {
    std::cout << "Enter 1 to add a list. any other number will break" << '\n';
    std::getline(std::cin, line);
    std::istringstream stream3(line);
    if(stream3 >> input)
      number = input;
    if(number == 1)
    {
      ListTree *ListHead = new ListTree();
      std::cout << "Enter a list of numbers between 1 and 100000. If there are invalid numbers they will be discarded. \n";
      std::getline(std::cin, line);
      std::istringstream stream2(line);
      while (stream2 >> input && numNode<=1000)
      {
        if(input <=100000 && input>=1)
        {
          insert(&ListHead, input);
          numNode++;
        }
      }
      if(started == false)
      {
        TreeHead->next = ListHead->next;
        TreeHead = TreeHead->next;
        started = true;
        continue;
      }
      std::cout << "Please enter the position to add the list, 1 if the child is the child of the first node , or 1 3 if the child is the child of the 3rd node in the child of the first node from head. if Indexing is not corrrect it will be added as a child at the last node in that layer." << '\n';
      ListTree *ptr = TreeHead;
      std::getline(std::cin, line);
      std::istringstream stream(line);
      while (stream >> input)
      {
        if(input != 0)
        {
          for(int i=1;i<input;i++)
          {
            if(ptr->next!=NULL)
              ptr = ptr->next;
            else
              break;
          }
        }
        if(ptr->child !=NULL)
          ptr = ptr->child;
      }
      ptr->child = ListHead->next;
      continue;
    }
    else
      break;
  }

  if(started)
    TreeHead = flatten(TreeHead);
  else
    TreeHead = NULL;
  std::cout << "the list after flattening is: \n";
  display(TreeHead);
  std::cout << "\n";
  return 0;
}
