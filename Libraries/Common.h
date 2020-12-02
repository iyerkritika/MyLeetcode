#ifndef Common_H
#define Common_H

#include <vector>
#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#include <cstddef>
#include <math.h>
#include <algorithm>
#include <string>

std::vector<int> InputVector(std::string inputMsg, int min = INT_MIN,int max = INT_MAX,int len = INT_MAX);
std::vector<std::string> InputVectorString(std::string inputMsg);
template <class V>
void displayVector(std::vector<V> result,int len = -1);
template<class R>
void getIPStream(R &ip);
void getIP(int &inp,int mini = INT_MIN, int maxi =INT_MAX);
void getIP(std::string &inp);
#endif
