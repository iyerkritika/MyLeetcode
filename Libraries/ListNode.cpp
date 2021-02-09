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
  int input,length=0;
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

ListNode* addTwoNumbersRev(ListNode* l1, ListNode* l2)
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

ListNode* addTwoNumbersFor(ListNode* l1, ListNode* l2)
{
  int carry=0;
  ListNode *ptr = new ListNode();
  std::vector<int> first,second;
  while(l1!=nullptr || l2!=nullptr)
  {
    if(l1==nullptr)
    {
      first.insert(first.begin(),0);
      second.push_back(l2->val);
      l2=l2->next;
    }
    else if(l2==nullptr)
    {
      second.insert(second.begin(),0);
      first.push_back(l1->val);
      l1=l1->next;
    }
    else
    {
      first.push_back(l1->val);
      second.push_back(l2->val);
      l1=l1->next;
      l2=l2->next;
    }
  }
  for(int i=first.size()-1;i>=0;i--)
  {
    ptr->val = (first[i] + second[i] + carry)%10;
    carry = (first[i] + second[i] + carry)/10;
    ListNode *temp = new ListNode(0,ptr);
    ptr = temp;
  }
  if(carry!=0)
  {
    ptr->val = carry;
    return ptr;
  }
  return ptr->next;
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
      break;
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

int getDecimalValue(ListNode* head)
{
  ListNode *ptr = head;
  int val=0,length=0;
  while(ptr->next!=NULL)
  {
   length ++;
   ptr = ptr->next;
  }
  ptr = head;
  for(int i=length;i>=0;i--)
  {
   if(ptr->val ==1)
     val+=(1<<(i));
   ptr = ptr->next;
  }
  return val;
}

ListNode* removeElements(ListNode* head, int val)
{
  if(head==nullptr)
    return nullptr;
  while(head!=nullptr && head->val == val)
  {
    head = head->next;
  }
  ListNode *ptr = head;
  while(ptr!= nullptr && ptr->next!=nullptr)
  {
    if(ptr->next->val == val)
      ptr->next = ptr->next->next;
    else
      ptr = ptr->next;
  }
  return head;
}

ListNode* rotateRight(ListNode* head, int k)
{
  if(head == NULL)
    return NULL;
  int len=1;
  ListNode *start = head, *end = head;
  while(end->next!=NULL)
  {
    end= end->next;
    len++;
  }
  k = k%len;
  if(k>0)
  {
    end->next = start;
    for(int i=1;i<len-k;i++)
    {
      start = start->next;
    }
    end = start;
    start = start->next;
    end->next = nullptr;
  }
  return start;
}

ListNode* oddEvenList(ListNode* head)
{
  if(head == NULL)
      return NULL;
  if(head->next == NULL)
      return head;
  ListNode *ptrO = head;
  ListNode *ptrE = head->next;
  ListNode *Ohead = ptrO;
  ListNode *Ehead = ptrE;
  while (ptrO != NULL && ptrE != NULL)
  {
    ptrO->next = ptrE->next;
    if(ptrO->next != NULL)
    {
      ptrO = ptrO->next;
      ptrE->next = ptrO->next;
      ptrE = ptrE->next;
    }
    else
    {
      ptrO->next = Ehead;
      break;
    }
  }
  if(ptrE == NULL)
      ptrO->next = Ehead;
  return Ohead;
}

ListNode* reverseList(ListNode* head)
{
    if (head == NULL) 
        return head;
    ListNode* currentHead = head;
    while (head->next) {
        ListNode* p = head->next;
        head->next = p->next;
        p->next = currentHead;
        currentHead = p;
    }
    return currentHead;
}

bool isPalindrome(ListNode* head)
{
    if(head == NULL)
        return true;
    if(head->next == NULL)
        return true;
    ListNode *slow = head;
    ListNode *fast = head->next->next;
    while(fast !=NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if(fast!=NULL)
            fast = fast->next;
    }
    slow->next = reverseList(slow->next);
    fast = head;
    slow = slow->next;
    ListNode *slowHead = slow;
    while(slow != NULL)
    {
        if(slow->val !=fast->val)
        {
            slowHead = reverseList(slowHead);
            return false;
        }
        slow = slow->next;
        fast = fast->next;
    }
    slowHead = reverseList(slowHead);
    return true;
}

ListNode* insertCircList(ListNode* head, int insertVal) 
{
  if(head == NULL)
  {
    ListNode *newHead = new ListNode(insertVal);
    newHead->next = newHead;
    return newHead;
  }
  ListNode *ptr = head;
  while(ptr)
  {
    if((insertVal>=ptr->val && insertVal<=ptr->next->val)||(ptr->val> ptr->next->val && insertVal>=ptr->val) || (ptr->val> ptr->next->val && insertVal<=ptr->next->val) || ptr->next == head)
    {
      ListNode *newNode = new ListNode(insertVal);
      newNode->next = ptr->next;
      ptr->next = newNode;
      return head;
    }
    ptr = ptr->next;
  }
  return head;
}

ListNode* plusOne(ListNode* head) 
{
  int carry=0;
  ListNode *ptr = new ListNode();
  std::vector<int> first;
  while(head!=nullptr)
  {
    first.push_back(head->val);
    head=head->next;
  }
  int i = first.size()-1;
  ptr->val = (first[i] + 1 + carry)%10;
  carry = (first[i] + 1 + carry)/10;
  ListNode *temp = new ListNode(0,ptr);
  ptr = temp;
  for(i=first.size()-2;i>=0;i--)
  {
    ptr->val = (first[i] + carry)%10;
    carry = (first[i] + carry)/10;
    ListNode *temp = new ListNode(0,ptr);
    ptr = temp;
  }
  if(carry!=0)
  {
    ptr->val = carry;
    return ptr;
  }
  return ptr->next;
}

bool ListNodeMains(int ProgNumber)
{
  ListNode *number1 = new ListNode();
  switch (ProgNumber)
  {
    case 1:
    case 2:
    {
      number1 = InputList("Enter a vector of numbers between 0 and 9 that together form an integer without leading Zeroes. if there are invalid numbers they will be discarded \n",0,9,100);
      ListNode *number2 = InputList("Enter another vector of numbers between 0 and 9 that together form an integer without leading Zeroes. if there are invalid numbers they will be discarded \n",0,9,100);
      std::cout << "after Adding the value is " << '\n';
      if(ProgNumber ==1)
        number1 = addTwoNumbersRev(number1,number2);
        /* this solution was 20ms */
      else
        number1 = addTwoNumbersFor(number1,number2);
      break;
    }
    case 3:
    case 4:
    {
      number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n",-1* pow(10,5),pow(10,5),pow(10,4));
      int n1LoopNode;
      ListNode *number1loop= number1;
      std::cout << "Enter a Node that the last node points to to loop ( 0 indexed) enter -1 for no loops." << '\n';
      getIP(n1LoopNode);
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
        std::cout << "the list has a loop : " << std::to_string( hasCycle(number1))<< '\n';
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
    case 5:
    {
      number1 = InputList("Enter a vector of numbers. If there are invalid numbers they will be discarded. \n",1,pow(10,9));
      ListNode *number2 = InputList("Enter another vector of numbers. If there are invalid numbers they will be discarded. \n",1,pow(10,9));
      ListNode *answer = getIntersectionNode(number1, number2);
      std::string result = answer == nullptr?"nullptr": std::to_string(answer->val);
      std::cout << "the value of the intesecting mode is "<< result << '\n';
      return true;
      /* this solution was 40ms */
    }
    case 6:
    {
      number1 = InputList("Enter a list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded. \n",-100,100,50);
      ListNode *number2 = InputList("Enter another list of numbers in non decreasing order between -100 and 100. If there are invalid numbers they will be discarded. \n",-100,100,50);
      std::cout << "after Merging both the value is " << '\n';
      mergeTwoLists(number1,number2);
      break;
      /* this solution was 0ms */
    }
    case 7:
    {
      number1 = InputList("Enter a list of numbers between 0 and 100. If there are invalid numbers they will be discarded. \n",0,100,30);
      int input;
      std::cout << "Enter the index from the end you want to delete between 1 and the total number of elements" << '\n';
      getIP(input,1,get_length(number1));
      std::cout << "the list after deleting is: \n";
      removeNthFromEnd(number1,input);
      break;
      /* this solution was 4ms */
    }
    case 8:
    {
      number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n",-1*pow(10,5),pow(10,5));
      insertionSortList(number1);
      std::cout << "the sorted list is: \n";
      /* this solution was 12ms */
      break;
    }
    case 9:
    {
      number1 = InputList("Enter a vector of numbers of 0s and 1s to convert to integer \n",0,1,30);
      std::cout << "The integer value is " <<getDecimalValue(number1) << '\n';
      return true;
    }
    case 10:
    {
      number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n");
      std::cout << "Enter an element to remove from the list " << '\n';
      int input;
      getIP(input);
      number1 = removeElements(number1,input);
      std::cout << "the sorted list is: \n";
      /* this solution was 28ms */
      break;
    }
    case 11:
    {
      number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n",-100,100,500);
      int input;
      std::cout << "Enter the number of rotations of the list you would like to do" << '\n';
      getIP(input,0,2*pow(10,9));
      number1 = rotateRight(number1,input);
      std::cout << "The array after the rotations is: " << '\n';
      break;
    }
    case 12:
    {
      number1 = InputList("Enter a vector of numbers. if there are invalid numbers they will be discarded. \n",INT_MIN,INT_MAX,10000);
      std::cout<<"The list after rearranging odd indexing and even indexing is: \n";
      number1 = oddEvenList(number1);
      break;
    }
    case 13:
    {
      number1 = InputList("Enter a vector of numbers. If there are invalid numbers they will be discareded.\n");
      std::string result = std::to_string(isPalindrome(number1));
      std::cout << "the list is a palindrome: "<< result << '\n';
      return true;
    }
    case 14:
    {
      number1 = InputList("Enter a vector of numbers sorted but not necessarily from the head. the last element with cylce back to the head. Any invalid inputs will be dicarded.\n,-1*pow(10,6),pow(10,6),50000");
      std::cout<<"Enter a value to add to this sorted list.\n";
      int input;
      getIP(input,-1*pow(10,6),pow(10,6));
      number1 = insertCircList(number1,input);
      std::cout<<"The List after adding the element is: \n";
      break;
    }
    case 15:
    {
      number1 = InputList("Enter a vector of numbers to form a full number without leading zeroes. Invalid numbers will be discarded. \n",0,9,100);
      std::cout<<"The number + 1 is : \n";
      number1 = plusOne(number1);
      break;
    }
    case 16:
    {
      FlattenMain();
      return true;
    }
    case 17:
    {
       RandomListNode *list = InputRandomList();
       RandomListNode *copyList = copyRandomList(list);
       std::cout<<"After copying the list made, the following is the list\n ";
       displayRandom(copyList);
       return true;
    }
    default:
      return false;
  }
  display(number1);
  return true;
}
