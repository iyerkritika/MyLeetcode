/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.

Example:
Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3
Output: [1,2,2,3,5,6]

Constraints:
-10^9 <= nums1[i], nums2[i] <= 10^9
nums1.length == m + n
nums2.length == n

*/

#include <vector>
#include <iostream>
#include <sstream>
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
  int i=0,j=0;
  while (i<m+j && j<n)
  {
      if(nums1[i]<=nums2[j])
          i++;
      else
      {
          for(int k=m+n-1;k>=i+1;k--)
          {
              nums1[k]=nums1[k-1];
          }
          nums1[i++]=nums2[j++];
      }
  }
  while(j<n && i<m+n)
  {
      nums1[i++]=nums2[j++];
  }
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers1,numbers2;
  int input,m,n;
  std::string line;
  std::cout << "Enter a vector of sorted numbers between -10^9 and 10^9 if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers1.size()<=10000)
      if(input <=-10^9 && input>=10^9)
        numbers1.push_back(input);
  m = numbers1.size();
  std::cout << "Enter a vector of sorted numbers between -10^9 and 10^9 if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream2(line);
    while (stream2 >> input && numbers2.size()<=10000)
      if(input <=-10^9 && input>=10^9)
        numbers2.push_back(input);
  n = numbers2.size();
  numbers1.resize(m+n);
  std::cout << "the array after merge sort is" << '\n';
  merge(numbers1,m,numbers2,n);
  for (int i=0;i<numbers1.size();i++)
  {
    std::cout << numbers1[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 4ms */
