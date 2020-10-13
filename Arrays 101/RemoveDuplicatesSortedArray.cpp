/*
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Given nums = [1,1,2],
Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
It doesn't matter what you leave beyond the returned length.

Example 2:
Given nums = [0,0,1,1,1,2,2,3,3,4],
Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
It doesn't matter what values are set beyond the returned length.

Clarification:
Confused why the returned value is an integer but your answer is an array?
Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.
Internally you can think of this:

// nums is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}

*/

#include <vector>
#include <iostream>
#include <sstream>
int removeDuplicates(vector<int>& nums)
{
    if(nums.empty())
        return NULL;
    int j=0;
    for (int i=1;i<nums.size();i++)
    {
       if(nums[j]!=nums[i])
           nums[++j] = nums[i];
    }
    return j+1;
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of sorted numbers. If there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input >=INT_MIN && input<=INT_MAX)
        numbers.push_back(input);
  std::cout << "the array after removing duplicates is " << '\n';
  int len = removeDuplicates(numbers);
  for (int i=0;i<len;i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 16ms */
