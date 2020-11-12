#include "ListNode.h"

void insert(ListNode** root, int item)
{
    ListNode* temp = new ListNode;
    ListNode* ptr;
    temp->val = item;
    temp->next = nullptr;

    if (*root == nullptr)
        *root = temp;
    else
    {
        ptr = *root;
        while (ptr->next != nullptr)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

void display(ListNode* root)
{
  while (root != nullptr)
  {
    std::cout << root->val << " ";
    root = root->next;
  }
  std::cout << '\n';
}

ListNode* InputList(std::string inputMsg, int min,int max,int len)
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
  while(l1!=nullptr || l2!=nullptr)
  {
      if(l1==nullptr)
      {
          ptr->next = new ListNode((l2->val+carry)%10);
          carry=(l2->val+carry)/10;
          l2=l2->next;
          ptr=ptr->next;
      }
      else if(l2==nullptr)
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
    if(head == nullptr || head->next == nullptr)
    return nullptr;
    ListNode *slow = head,*fast=head;
    while(fast !=nullptr && fast->next !=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            break;
        }
    }
    if(slow != fast)
        return nullptr;
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
    if(head == nullptr || head->next == nullptr)
        return false;
    ListNode *slow = head,*fast=head;
    while(fast !=nullptr && fast->next !=nullptr)
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
    while (a!=nullptr)
    {
      a = a->next;
      len++;
    }
    return len;
}

ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if(headA==nullptr || headB==nullptr)
        return nullptr;
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
         if(headA==nullptr && headB== nullptr)
             return nullptr;
     }
    return headA;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode *ListPtr = new ListNode(0);
    ListNode *Head = ListPtr;
    while(l1 != nullptr && l2 !=nullptr)
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
    while(l1!=nullptr)
    {
        ListPtr->next = new ListNode(l1->val);
        ListPtr = ListPtr->next;
        l1 = l1->next;
    }
    while(l2!=nullptr)
    {
        ListPtr->next = new ListNode(l2->val);
        ListPtr = ListPtr->next;
        l2 = l2->next;
    }
    return Head->next;
}

ListNode* removeNthFromEnd(ListNode* head, int n)
{
    if(head == nullptr || head->next == nullptr)
        return nullptr;
    ListNode *beg = head, *end = head;
    while(end!=nullptr)
    {
        if(n>0)
        {
            n--;
            end = end->next;
        }
        else
        {
            if(end->next == nullptr)
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
    if(end == nullptr && beg == head)
    {
        return head->next;
    }
    return head;
}

ListNode* insertionSortList(ListNode* head)
{
    ListNode *newHead = head;
    ListNode *ptr = newHead;
    while(head!=nullptr)
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

bool ListNodeMains(int ProgNumber)
{
    ListNode *number1 = new ListNode();
    switch (ProgNumber)
    {
      case 1:
        {
          number1 = InputList("Enter a vector of numbers between 0 and 9 that together form an integer in reverse order without leading Zeroes. for Ex : 807 will be entered as 7 0 8. if there are invalid numbers they will be discarded \n",0,9,100);
          ListNode *number2 = InputList("Enter another vector of numbers between 0 and 9 that together form an integer in reverse order without leading Zeroes. for Ex : 807 will be entered as 7 0 8. if there are invalid numbers they will be discarded \n",0,9,100);
          std::cout << "after Adding the value is " << '\n';
          number1 = addTwoNumbers(number1,number2);
          break;
          /* this solution was 20ms */
        }
      case 2:
      case 3:
        {
          number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n",-10^5,10^5,10^4);
          int input,n1LoopNode;
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
            while(number1end->next !=nullptr)
              number1end = number1end->next;
            number1end->next = number1loop;
          }
          if(ProgNumber == 2)
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
          return true;
        }
      case 4:
        {
          number1 = InputList("Enter a vector of numbers. If there are invalid numbers they will be discarded. \n",1,10^9);
          ListNode *number2 = InputList("Enter another vector of numbers. If there are invalid numbers they will be discarded. \n",1,10^9);
          ListNode *answer = getIntersectionNode(number1, number2);
          std::string result = answer == nullptr?"nullptr": std::to_string(answer->val);
          std::cout << "the value of the intesecting mode is "<< result << '\n';
          return true;
          /* this solution was 40ms */
        }
      case 5:
      {
        number1 = InputList("Enter a list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded. \n",-100,100,50);
        ListNode *number2 = InputList("Enter another list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded. \n",-100,100,50);
        std::cout << "after Merging both the value is " << '\n';
        mergeTwoLists(number1,number2);
        break;
        /* this solution was 0ms */
      }
      case 6:
        {
          number1 = InputList("Enter a list of numbers between 0 and 100. If there are invalid numbers they will be discarded. \n",0,100,30);
          int input;
          std::cout << "Enter the index from the end you want to delete between 1 and the total number of elements" << '\n';
          std::cin >> input;
          std::cout << "the list after deleting is: \n";
          removeNthFromEnd(number1,input);
          break;
          /* this solution was 4ms */
        }
      case 7:
      {
        number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n",-10^5,10^5);
        insertionSortList(number1);
        std::cout << "the loop has a loop : \n";
        /* this solution was 12ms */
        break;
      }
      default:
        return false;
    }
    display(number1);
    return true;
}
