#include "RandomListNode.h"

void insertRandomNode(RandomListNode** root, int item)
{
  RandomListNode* temp = new RandomListNode;
  RandomListNode* ptr;
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

RandomListNode* getNumberNode(RandomListNode** root, int iter)
{
    RandomListNode* ptr = *root;
    for(int i=1;i<=iter;i++)
        ptr = ptr->next;
    return ptr;
}

RandomListNode* MakeRandomList(std::vector<int>vals,std::vector<int>rands)
{
    RandomListNode *head = new RandomListNode();
    for(int i=0;i<vals.size();i++)
    {
        insertRandomNode(&head,vals[i]);
    }
    RandomListNode *curr = head->next;
    for(int i =0;i<rands.size();i++)
    {
        if(rands[i]>-1)
        {
            curr->random = getNumberNode(&head->next,rands[i]);
            std::cout<<"assigned random pointer for "<<i<<"th Element to "<<rands[i]<<"th element\n";
        }
        curr = curr->next;
    }
    return head->next;
}

void displayRandom(RandomListNode* root)
{
    RandomListNode* ptr = root;
    std::cout<<"Value \t Random pointer Value\n";
    while(ptr)
    {
        std::string result = ptr->random?std::to_string(ptr->random->val):"nullptr";
        std::cout<<ptr->val<<"\t"<<result<<"\n";
        ptr = ptr->next;
    }
}

RandomListNode* InputRandomList()
{
    std::vector<int> values = InputVector("Enter the values of the lists as they appear in next pointer fashion. ",-10000,10000,1000);
    std::vector<int> random = InputVector("Enter the coresponding index for the random pointer. Example: \nif the first element in the list's random pointer is pointing to the 5th element please type 4(0 indexed) in the first spot. use -1 for NULL.\n",-1,values.size()-1,values.size()-1);
    return MakeRandomList(values,random);
}

RandomListNode* copyRandomList(RandomListNode* head)
    {
        if(head == NULL)
            return NULL;
        std::map<RandomListNode*,RandomListNode*> visited;
        RandomListNode *ptr = new RandomListNode(0);
        RandomListNode *newHead = ptr;
        while(head!=NULL)
        {
            // cout<<head->val;
            RandomListNode *temp = NULL;

            if(visited.find(head)!=visited.end())
            {
                temp = visited.find(head)->second;
            }
            else
            {
                temp = new RandomListNode(head->val);
                visited.insert(std::pair<RandomListNode*,RandomListNode*>(head,temp));
            }
            if(visited.find(head->next)!=visited.end())
            {
                temp->next = visited.find(head->next)->second;
            }
            else if(head->next!= NULL)
            {
                RandomListNode *tempNext = new RandomListNode(head->next->val);
                temp->next = tempNext;
                visited.insert(std::pair<RandomListNode*,RandomListNode*>(head->next,tempNext));
            }
            if(head->random != NULL && visited.find(head->random)!=visited.end())
            {
                temp->random = visited.find(head->random)->second;
            }
            else if(head->random != NULL)
            {
                RandomListNode *tempRand = new RandomListNode(head->random->val);
                temp->random = tempRand;
                visited.insert(std::pair<RandomListNode*,RandomListNode*>(head->random,tempRand));
            }
            ptr->next = temp;
            ptr = ptr->next;
            head = head->next;
        }
        return newHead->next;
    }
