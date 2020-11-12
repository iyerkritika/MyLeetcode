#ifndef ListTree_H
#define ListTree_H

#include <iostream>
#include <sstream>
#include <cstddef>

struct ListTree
{
    int val;
    ListTree* prev;
    ListTree* next;
    ListTree* child;
    ListTree(int x=0, ListTree *next= nullptr,ListTree *prev = nullptr, ListTree *child = nullptr) : val(x), next(next), prev(prev), child(child) {}
};

void insert(ListTree** root, int item);
void display(ListTree* root);
ListTree* flatten(ListTree* head);
void FlattenMain();
#endif
