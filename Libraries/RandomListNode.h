#ifndef RANDOMLISTNODE_H
#define RANDOMLISTNODE_H
#include "Common.h"

struct RandomListNode
{
    int val;
    RandomListNode* next;
    RandomListNode* random;
    RandomListNode(int x=0, RandomListNode *next= nullptr,RandomListNode *random = nullptr) : val(x), next(next), random(random) {}
};

void insertRandomNode(RandomListNode** root, int item);
RandomListNode* getNumberNode(RandomListNode** root, int iter);
RandomListNode* MakeRandomList(std::vector<int>vals,std::vector<int>rands);
void displayRandom(RandomListNode* root);
RandomListNode* InputRandomList();
RandomListNode* copyRandomList(RandomListNode* head);
#endif // RANDOMLISTNODE_H
