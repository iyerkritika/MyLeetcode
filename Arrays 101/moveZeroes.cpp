/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

#include <vector>
#include <iostream>
#include <sstream>
void moveZeroes(vector<int>& nums)
{
    int j=0;
    for (int i=0;i<nums.size();i++)
    {
       if(nums[i]!=0)
           nums[j++] = nums[i];
    }
    for(int i=nums.size()-1;i>=j;i--)
    {
        nums[i]=0;
    }
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers. If there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input >=INT_MIN && input<=INT_MAX)
        numbers.push_back(input);
  std::cout << "the array after moving Zeroes and keeping the same size is " << '\n';
  numbers = moveZeroes(numbers);
  for (int i=0;i<numbers.size();i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
/* this solution was 8ms */
