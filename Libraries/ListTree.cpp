#include "ListTree.h"

void insert(ListTree** root, int item)
{
    ListTree* temp = new ListTree(item);
    ListTree* ptr;
    if (*root == nullptr)
        *root = temp;
    else
    {
        ptr = *root;
        while (ptr->next != nullptr)
            ptr = ptr->next;
        temp->prev = ptr;
        ptr->next = temp;
    }
}

void display(ListTree* root)
{
  while (root != nullptr)
  {
    std::cout << root->val << " ";
    root = root->next;
  }
  std::cout <<'\n';
}

ListTree* flatten(ListTree* head)
{
    if(head == nullptr)
    {
        return nullptr;
    }
    ListTree *beg = head;
    while(beg != nullptr)
    {
        if(beg->child != nullptr)
        {
            ListTree* child = beg->child;
            ListTree* iterChild = child;
            while(iterChild->next != nullptr)
            {
                iterChild = iterChild->next;
            }
            iterChild->next = beg->next;
            if(beg->next != nullptr)
                beg->next->prev = iterChild;
            beg->next = child;
            child->prev = beg;
            beg->child = nullptr;
        }
        beg = beg->next;
    }
    return head;
}

void FlattenMain()
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
            if(ptr->next!=nullptr)
              ptr = ptr->next;
            else
              break;
          }
        }
        if(ptr->child !=nullptr)
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
    TreeHead = nullptr;
  std::cout << "the list after flattening is: \n";
  display(TreeHead);
  /* This Solution is 4ms*/
}
