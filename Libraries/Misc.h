#ifndef MISC_H
#define MISC_H

#include "Common.h"

std::string get_num(int num_h,int num_t,int num_ones);
std::string numberToWords(int num);
int compareVersion(std::string version1, std::string version2);
int maxPower(std::string s);
int kthFactor(int n, int k);
std::string decodeAtIndex(std::string S, int K);
bool MiscMains(int ProgNumber);
#endif
