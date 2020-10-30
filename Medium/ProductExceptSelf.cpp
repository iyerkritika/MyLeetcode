/*
Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:
Input:  [1,2,3,4]
Output: [24,12,8,6]
Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).
Follow up:
Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)
*/

#include <vector>
#include <iostream>
#include <sstream>
std::vector<int> productExceptSelf(std::vector<int>& nums)
{
  std::vector<int> ans(nums.size(),1);
   for(int i=1;i<nums.size();i++)
   {
       ans[i]=ans[i-1]*nums[i-1];
   }

   int right=nums[nums.size()-1];
   for(int i=nums.size()-2;i>=0;i--)
   {
       ans[i]=ans[i]*right;
       right=right*nums[i];
   }

   return ans;
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers greater than 0. if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input>0)
        numbers.push_back(input);
  std::cout << "the array after multiplying all elements except nth " << '\n';
  numbers = productExceptSelf(numbers);
  for (int i=0;i<numbers.size();i++)
  {
    std::cout << numbers[i]<<' ';
  }
  std::cout << '\n';
  return 0;
}
