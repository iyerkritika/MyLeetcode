/*

Given an array nums and a value val, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example 1:
Given nums = [3,2,2,3], val = 3,
Your function should return length = 2, with the first two elements of nums being 2.
It doesn't matter what you leave beyond the returned length.

Example 2:
Given nums = [0,1,2,2,3,0,4,2], val = 2,
Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4.
Note that the order of those five elements can be arbitrary.
It doesn't matter what values are set beyond the returned length.

Clarification:
Confused why the returned value is an integer but your answer is an array?
Note that the input array is passed in by reference, which means modification to the input array will be known to the caller as well.
Internally you can think of this:
// nums is passed in by reference. (i.e., without making a copy)
int len = removeElement(nums, val);
// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
l+0
*/

#include <vector>
#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
int removeElement(std::vector<int>& nums, int val)
{
    int size = nums.size();
    for (int i=0;i<size;i++)
    {
        if(nums[i] == val)
        {
            for(int k=i;k<size-1;k++)
            {
                nums[k] = nums[k+1];
            }
            size--;
            i--;
        }
    }
    return size;
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input,val;
  std::string line;
  std::cout << "Enter a vector of numbers. If there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input >=INT_MIN && input<=INT_MAX)
        numbers.push_back(input);
  std::cout << "please enter the value to remove from this" << '\n';
  std::cin>> val;
  std::cout << "the array after removing duplicates is " << '\n';
  int len = removeElement(numbers,val);
  for (int i=0;i<len;i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 0ms */
