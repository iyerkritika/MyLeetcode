#ifndef VectorOperations_H
#define VectorOperations_H

#include <vector>
#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#include <cstddef>

std::vector<int> InputVector(std::string inputMsg, int min = INT_MIN,int max = INT_MAX,int len = INT_MAX);
void displayVector(std::vector<int> result,int len = -1);
std::vector<int> findDisappearedNumbers(std::vector<int>& nums);
void duplicateZeros(std::vector<int>& arr);
int findNumbers(std::vector<int>& nums);
int heightChecker(std::vector<int>& heights);
int findMaxConsecutiveOnes(std::vector<int>& nums);
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
bool validMountainArray(std::vector<int>& A);
void moveZeroes(std::vector<int>& nums);
int removeDuplicates(std::vector<int>& nums);
int removeElement(std::vector<int>& nums, int val);
std::vector<int> replaceElements(std::vector<int>& arr);
std::vector<int> sortedSquares(std::vector<int>& A);
std::vector<int> sortArrayByParity(std::vector<int>& A);
int thirdMax(std::vector<int>& nums);
std::vector<int> productExceptSelf(std::vector<int>& nums);
bool VectorMains(int ProgNumber);
#endif
