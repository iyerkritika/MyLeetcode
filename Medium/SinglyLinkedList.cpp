/*

Design your implementation of the linked list. You can choose to use a singly or doubly linked list.
A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node.
If you want to use the doubly linked list, you will need one more attribute prev to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement the MyLinkedList class:

MyLinkedList() Initializes the MyLinkedList object.
int get(int index) Get the value of the indexth node in the linked list. If the index is invalid, return -1.
void addAtHead(int val) Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
void addAtTail(int val) Append a node of value val as the last element of the linked list.
void addAtIndex(int index, int val) Add a node of value val before the indexth node in the linked list. If index equals the length of the linked list, the node will be appended to the end of the linked list. If index is greater than the length, the node will not be inserted.
void deleteAtIndex(int index) Delete the indexth node in the linked list, if the index is valid.


Example 1:
Input
["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
[[], [1], [3], [1, 2], [1], [1], [1]]
Output
[null, null, null, null, 2, null, 3]

Explanation
MyLinkedList myLinkedList = new MyLinkedList();
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
myLinkedList.get(1);              // return 2
myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
myLinkedList.get(1);              // return 3


Constraints:
0 <= index, val <= 1000
Please do not use the built-in LinkedList library.
At most 2000 calls will be made to get, addAtHead, addAtTail,  addAtIndex and deleteAtIndex.

*/

#include <iostream>

class MyLinkedList
{
    private:
        int val;
        MyLinkedList *next;
        MyLinkedList *Head = NULL;
    public:
    /** Initialize your data structure here. */
    MyLinkedList()
    {
        next = NULL;
    }

    MyLinkedList(int value,MyLinkedList* nextNode=NULL)
    {
        val = value;
        next = nextNode;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        MyLinkedList *iterator= Head;
        int i=0;
        while(i<index && iterator!=NULL)
        {
            iterator= iterator->next;
            i++;
        }
        if(i==index && iterator!=NULL)
        {
            return iterator->val;
        }
        return -1;

    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        MyLinkedList* Node = new MyLinkedList(val,Head);
        Head = Node;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        MyLinkedList *iterator= Head;
        MyLinkedList *Node = new MyLinkedList(val);
        if(Head == NULL)
        {
            addAtHead(val);
            return;
        }
        while(iterator->next!=NULL)
            iterator = iterator->next;
        iterator->next = Node;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    bool addAtIndex(int index, int val)
    {
        if(index == 0)
        {
            addAtHead(val);
            return true;
        }
        MyLinkedList *iterator= Head;
        int i=0;
        while(i<index-1 && iterator->next!=NULL)
        {
            iterator= iterator->next;
            i++;
        }
        if(iterator->next==NULL && i==index-1)
        {
            MyLinkedList *Node= new MyLinkedList(val);
            iterator->next = Node;
            return true;
        }
        else if(i==index-1 && iterator->next!=NULL)
        {
            MyLinkedList *Node= new MyLinkedList(val,iterator->next);
            iterator->next = Node;
            return true;
        }
        return false;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    bool deleteAtIndex(int index)
    {
        if(index == 0)
        {
            Head = Head->next;
            return true;
        }
        MyLinkedList *iterator= Head;
        int i=0;
        while(i<index-1 && iterator->next!=NULL)
        {
            iterator= iterator->next;
            i++;
        }
        if(i==index-1 && iterator->next!=NULL)
        {
            iterator->next = iterator->next->next;
            return true;
        }
        return false;

    }

    void display()
    {
        MyLinkedList *root = Head;
        while (root != NULL)
          {
            std::cout << root->val << " ";
            root = root->next;
          }
        std::cout<<"\n";
    }
};

void Menu()
{
  std::cout << "Select any from the menu" << '\n';
  std::cout << "1.Add at Head of List" << '\n';
  std::cout << "2. Add at Tail of List" << '\n';
  std::cout << "3. Add value at Index" << '\n';
  std::cout << "4. Get value at Index" << '\n';
  std::cout << "5. Delete value at Index" << '\n';
  std::cout << "6. Display List" << '\n';
}

int main(int argc, char const *argv[])
{
  int number=7,calls=0,length=0,index,value;
  MyLinkedList* obj = new MyLinkedList();
  Menu();
  while(number>=0 && number<=7)
  {
    std::cout<<"Enter a number between 1-6 for actions on the List. Enter 7 for the menu again.\n";
    std::cin >> number;
    switch(number)
    {
      case 1:
        std::cout << "Please enter the value to add" << '\n';
        std::cin >> value;
        if(value>=0 && value<=1000 && length<1000)
        {
              obj->addAtHead(value);
              length ++;
              calls++;
        }
        break;
      case 2:
        std::cout << "Please enter the value to add" << '\n';
        std::cin >> value;
        if(value>=0 && value<=1000 && length<1000)
        {
              obj->addAtTail(value);
              length ++;
              calls++;
        }
        break;
      case 3:
        std::cout << "Please enter the index and value to add" << '\n';
        std::cin >> index >> value;
        if(value>=0 && value<=1000 && length<1000 && index>=0 && index<=1000)
        {
              if(obj->addAtIndex(index,value))
                length ++;
              calls++;
        }
        break;
      case 4:
        std::cout << "Please enter the index to look up" << '\n';
        std::cin >> index;
        if(index>=0 && index<=1000)
        {
              obj->get(index);
              calls++;
        }
        break;
      case 5:
        std::cout << "Please enter the index to delete" << '\n';
        std::cin >> index;
        if(index>=0 && index<=1000 && length>0)
        {
              if(obj->deleteAtIndex(index))
                length--;
              calls++;
        }
        break;
      case 6:
        obj->display();
        break;
      case 7:
        Menu();
        break;
    }
  }
}
