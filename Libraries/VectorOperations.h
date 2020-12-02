#ifndef VectorOperations_H
#define VectorOperations_H

#include "Common.h"

std::vector<int> findDisappearedNumbers(std::vector<int>& nums);
void duplicateZeros(std::vector<int>& arr);
int findNumbers(std::vector<int>& nums);
int heightChecker(std::vector<int>& heights);
int findMaxConsecutiveOnes(std::vector<int>& nums);
void flipUpd(int &cur,int &flipped,int i);
int findMaxConsecutiveOnesFlipped(std::vector<int>& nums);
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
int minCostToMoveChips(std::vector<int>& position);
int smallestDivisor(std::vector<int>& nums, int threshold);
int shortestDistance(std::vector<std::string>& words, std::string word1, std::string word2);
bool VectorMains(int ProgNumber);
#endif
