/* Given an array nums of integers, return how many of them contain an even number of digits.


Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.
Example 2:

Input: nums = [555,901,482,1771]
Output: 1
Explanation:
Only 1771 contains an even number of digits.


Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 10^5
*/
#include <vector>
#include <iostream>
#include <sstream>

int findNumbers(std::vector<int>& nums)
{
  int result =0;
  for(int i=0;i<nums.size();i++)
  {
      if(nums[i]<=9)
      {
          continue;
      }
      if(nums[i]<=99)
      {
         result ++;
          continue;
      }
      if(nums[i]<=999)
      {
          continue;
      }
      if(nums[i]<=9999)
      {
          result++;
          continue;
      }
      if(nums[i]<=99999)
      {
          continue;
      }
      result++;
  }
  return result;
}

// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector of numbers between 1 and 10^5 if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=500)
      if(input <=100000 && input>=1)
        numbers.push_back(input);
  std::cout << "the number of numbers with even number of digits are " << findNumbers(numbers)<< '\n';
  return 0;
}
/* this solution was 8ms */
