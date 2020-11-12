#ifndef HASHTABLES_H
#define HASHTABLES_H

#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "VectorOperations.h"

const std::set<int> happy {1,7};

bool containsDuplicate(std::vector<int>& nums);
int firstUniqChar(std::string s);
bool HashTablesMains(int ProgNumber);
bool isHappy(int n);
std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2);
int singleNumber(std::vector<int>& nums);
std::vector<int> twoSum(std::vector<int>& nums, int target);
#endif
