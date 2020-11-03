#ifndef ListTree_H
#define ListTree_H

struct ListTree
{
    int val;
    ListTree* prev;
    ListTree* next;
    ListTree* child;
    ListTree(int x=0, ListTree *next= NULL,ListTree *prev = NULL, ListTree *child = NULL) : val(x), next(next), prev(prev), child(child) {}
};

void insert(ListTree** root, int item);
void display(ListTree* root);
ListTree* flatten(ListTree* head);
void FlattenMain();
