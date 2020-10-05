/* Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
Note:

The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000*/
#include <vector>
#include <iostream>
#include <sstream>

int findMaxConsecutiveOnes(std::vector<int>& nums)
{
    int result =0;
    int current = 0;
    for (int i=0; i<nums.size();i++)
    {
        if(nums[i]== 1)
        {
            current ++;
        }
        else
        {
            if(current>result)
            {
                result = current;
            }
            current =0;
        }
    }
    if(current>=0 && current>result)
    {
        return current;
    }
    return result;

}
// the code below does not change
int main(int argc, char const *argv[])
{
  std::vector<int> numbers;
  int input;
  std::string line;
  std::cout << "Enter a vector made of only ones and zeroes. if there are invalid numbers they will be discarded" << '\n';
  std::getline(std::cin, line);
  std::istringstream stream(line);
    while (stream >> input && numbers.size()<=10000)
      if(input == 0 || input == 1)
        numbers.push_back(input);
  std::cout << "the maximum number of 1s in a row is " << findMaxConsecutiveOnes(numbers)<< '\n';
  return 0;
}

/* this solution was 72ms run time */
