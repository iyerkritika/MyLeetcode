#ifndef Common_H
#define Common_H

#include <vector>
#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#include <cstddef>
#include <math.h>
#include <algorithm>

std::vector<int> InputVector(std::string inputMsg, int min = INT_MIN,int max = INT_MAX,int len = INT_MAX);
void displayVector(std::vector<int> result,int len = -1);
void getIntIP(int &inp,int min = INT_MIN, int max =INT_MAX);
#endif
